#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class IPEndPoint; }

#define CLASS_1_22664499479190F5_METHOD_1_0F049301FCDCB47C_OFFSET UNITYSDK_OFFSET(0x1D7A9930)
#define CLASS_1_22664499479190F5_METHOD_1_75E3C1C4323DBA83_OFFSET UNITYSDK_OFFSET(0x1D7A8940)
#define CLASS_1_22664499479190F5_METHOD_1_7DC52A92E0B30AD1_OFFSET UNITYSDK_OFFSET(0x1D7A8A30)

inline static constexpr unsigned int Class_1_22664499479190F5_TypeDefinitionIndex = 42275;

class Class_1_22664499479190F5 : public ::System::Object
{
public:
	static ::System::Void Method_1_75E3C1C4323DBA83(::System::Collections::Generic::IList_1<::System::Net::IPEndPoint*>* a1, ::System::UInt64 a2, ::System::Action_1<::System::Collections::Generic::IList_1<::System::UInt64>*>* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IList_1<::System::Net::IPEndPoint*>*, ::System::UInt64, ::System::Action_1<::System::Collections::Generic::IList_1<::System::UInt64>*>*))((::PBYTE)hIl2Cpp + CLASS_1_22664499479190F5_METHOD_1_75E3C1C4323DBA83_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7DC52A92E0B30AD1(::System::Collections::Generic::IList_1<::System::Net::IPEndPoint*>* a1, ::System::UInt64 a2, ::System::Action_1<::System::Collections::Generic::IList_1<::System::UInt64>*>* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IList_1<::System::Net::IPEndPoint*>*, ::System::UInt64, ::System::Action_1<::System::Collections::Generic::IList_1<::System::UInt64>*>*))((::PBYTE)hIl2Cpp + CLASS_1_22664499479190F5_METHOD_1_7DC52A92E0B30AD1_OFFSET))(a1, a2, a3);
	}

	static ::System::UInt64 Method_1_0F049301FCDCB47C()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + CLASS_1_22664499479190F5_METHOD_1_0F049301FCDCB47C_OFFSET))();
	}
};
