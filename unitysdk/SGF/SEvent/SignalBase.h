#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/AbstractSignalCommon.h"

namespace System { class Delegate; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SGF_SEVENT_SIGNALBASE_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1AA135F0)
#define SGF_SEVENT_SIGNALBASE_GET__METHODDIC_OFFSET UNITYSDK_OFFSET(0x1AA134F0)
#define SGF_SEVENT_SIGNALBASE_REMOVEALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x1AA14A50)
#define SGF_SEVENT_SIGNALBASE_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1AA14470)
#define SGF_SEVENT_SIGNALBASE_TRYCLEAN_OFFSET UNITYSDK_OFFSET(0x1AA14CA0)
#define SGF_SEVENT_SIGNALBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA135E0)
#define SGF_SEVENT_SIGNALBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA135D0)

namespace SGF::SEvent
{
	inline static constexpr unsigned int SignalBase_TypeDefinitionIndex = 8143;

	class SignalBase : public ::SGF::SEvent::AbstractSignalCommon
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Delegate*, ::System::Int32>* __methodDic; // 0x30
		::System::Boolean _needClean; // 0x38

		::System::Void _ctor(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE__CTOR_OFFSET))(this, capacity);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE__CTOR_1_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Delegate*, ::System::Int32>* get__methodDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Delegate*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_GET__METHODDIC_OFFSET))(this);
		}

		::System::Void AddListener(::System::Delegate* del, ::System::Boolean bInsertAtFirst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_ADDLISTENER_OFFSET))(this, del, bInsertAtFirst);
		}

		::System::Void RemoveListener(::System::Delegate* del)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_REMOVELISTENER_OFFSET))(this, del);
		}

		::System::Void RemoveAllListeners()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_REMOVEALLLISTENERS_OFFSET))(this);
		}

		::System::Void TryClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASE_TRYCLEAN_OFFSET))(this);
		}
	};
}
