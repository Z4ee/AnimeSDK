#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6CC2897B74C41026_1.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D14CF0)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x18D14D30)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_567EC27AC5C589E5_OFFSET UNITYSDK_OFFSET(0x18D14D40)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_AC0F8B3B35DDB97D_OFFSET UNITYSDK_OFFSET(0x18D14A30)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x18D14B30)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_EC61203F1514A6AF_OFFSET UNITYSDK_OFFSET(0x18D14C30)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x18D14CA0)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D14DD0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int PerformNotifyMarker_TypeDefinitionIndex = 48170;

	class PerformNotifyMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* Params; // 0x28
		::System::Boolean forceTriggerOnExit; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* AllowBranchGroupTagList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_AC0F8B3B35DDB97D(::Struct_2_6CC2897B74C41026_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_1))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_AC0F8B3B35DDB97D_OFFSET))(this, a1);
		}

		::System::Void Method_4_EC61203F1514A6AF(::Struct_2_6CC2897B74C41026_1 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_1, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_EC61203F1514A6AF_OFFSET))(this, a1, a2);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_567EC27AC5C589E5(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_567EC27AC5C589E5_OFFSET))(this, a1);
		}

		::System::Void Method_4_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_METHOD_4_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}
