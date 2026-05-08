#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class FCCallInfo; }
namespace NodeCanvas::Framework { class FCCallKey; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODECANVAS_FRAMEWORK_FCSTATISTIC_GETFCCALLDICT_OFFSET UNITYSDK_OFFSET(0x1B4A2480)
#define NODECANVAS_FRAMEWORK_FCSTATISTIC_GET_ISUSEDDIFFERDATA_OFFSET UNITYSDK_OFFSET(0x1B4A2460)
#define NODECANVAS_FRAMEWORK_FCSTATISTIC_ISRECORD_OFFSET UNITYSDK_OFFSET(0x1B4A2490)
#define NODECANVAS_FRAMEWORK_FCSTATISTIC_RECORDFCCALLINFO_OFFSET UNITYSDK_OFFSET(0x1B4A2540)
#define NODECANVAS_FRAMEWORK_FCSTATISTIC_SET_ISUSEDDIFFERDATA_OFFSET UNITYSDK_OFFSET(0x1B4A2470)
#define NODECANVAS_FRAMEWORK_FCSTATISTIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A2770)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int FCStatistic_TypeDefinitionIndex = 26619;

	class FCStatistic : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::NodeCanvas::Framework::FCCallKey*, ::NodeCanvas::Framework::FCCallInfo*>* _fCCallDict; // 0x10
		::System::Boolean _IsUsedDifferData_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCSTATISTIC__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsUsedDifferData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCSTATISTIC_GET_ISUSEDDIFFERDATA_OFFSET))(this);
		}

		::System::Void set_IsUsedDifferData(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCSTATISTIC_SET_ISUSEDDIFFERDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::NodeCanvas::Framework::FCCallKey*, ::NodeCanvas::Framework::FCCallInfo*>* GetFCCallDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::NodeCanvas::Framework::FCCallKey*, ::NodeCanvas::Framework::FCCallInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCSTATISTIC_GETFCCALLDICT_OFFSET))(this);
		}

		::System::Boolean IsRecord(::System::String* nodeName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCSTATISTIC_ISRECORD_OFFSET))(this, nodeName);
		}

		::System::Void RecordFCCallInfo(::System::UInt64 nodeId, ::System::String* nodeName, ::System::String* portName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCSTATISTIC_RECORDFCCALLINFO_OFFSET))(this, nodeId, nodeName, portName);
		}
	};
}
