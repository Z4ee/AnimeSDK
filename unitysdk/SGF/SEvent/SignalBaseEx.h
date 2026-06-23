#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/AbstractSignalCommon.h"
#include "unitysdk/SGF/SEvent/DelegateEx.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SGF_SEVENT_SIGNALBASEEX_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1D9068F0)
#define SGF_SEVENT_SIGNALBASEEX_GET__METHODDIC_OFFSET UNITYSDK_OFFSET(0x1D906830)
#define SGF_SEVENT_SIGNALBASEEX_REMOVEALLLISTENERS_OFFSET UNITYSDK_OFFSET(0x1D907A40)
#define SGF_SEVENT_SIGNALBASEEX_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1D907580)
#define SGF_SEVENT_SIGNALBASEEX_TRYCLEAN_OFFSET UNITYSDK_OFFSET(0x1D907BD0)
#define SGF_SEVENT_SIGNALBASEEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D9068E0)
#define SGF_SEVENT_SIGNALBASEEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9068D0)

namespace SGF::SEvent
{
	inline static constexpr unsigned int SignalBaseEx_TypeDefinitionIndex = 7765;

	class SignalBaseEx : public ::SGF::SEvent::AbstractSignalCommon
	{
	public:
		::System::Collections::Generic::Dictionary_2<::SGF::SEvent::DelegateEx, ::System::Int32>* __methodDic; // 0x30
		::System::Boolean _needClean; // 0x38

		::System::Void _ctor(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASEEX__CTOR_OFFSET))(this, capacity);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASEEX__CTOR_1_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::SGF::SEvent::DelegateEx, ::System::Int32>* get__methodDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::SGF::SEvent::DelegateEx, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASEEX_GET__METHODDIC_OFFSET))(this);
		}

		::System::Void AddListener(::SGF::SEvent::DelegateEx del, ::System::Boolean bInsertAtFirst)
		{
			return ((::System::Void(*)(::PVOID, ::SGF::SEvent::DelegateEx, ::System::Boolean))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASEEX_ADDLISTENER_OFFSET))(this, del, bInsertAtFirst);
		}

		::System::Void RemoveListener(::SGF::SEvent::DelegateEx del)
		{
			return ((::System::Void(*)(::PVOID, ::SGF::SEvent::DelegateEx))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASEEX_REMOVELISTENER_OFFSET))(this, del);
		}

		::System::Void RemoveAllListeners()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASEEX_REMOVEALLLISTENERS_OFFSET))(this);
		}

		::System::Void TryClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_SIGNALBASEEX_TRYCLEAN_OFFSET))(this);
		}
	};
}
