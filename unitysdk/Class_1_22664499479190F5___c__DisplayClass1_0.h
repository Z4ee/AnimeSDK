#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class IPEndPoint; }

#define CLASS_1_22664499479190F5___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A8A20)
#define CLASS_1_22664499479190F5___C__DISPLAYCLASS1_0__PINGBYUDPASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1D7A9F70)

inline static constexpr unsigned int Class_1_22664499479190F5___c__DisplayClass1_0_TypeDefinitionIndex = 42278;

class Class_1_22664499479190F5___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::IList_1<::System::UInt64>*>* onCompleted; // 0x10
	::System::Collections::Generic::IList_1<::System::Net::IPEndPoint*>* ipEndPoints; // 0x18
	::System::UInt64 timeout; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22664499479190F5___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _PingByUdpAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22664499479190F5___C__DISPLAYCLASS1_0__PINGBYUDPASYNC_B__0_OFFSET))(this);
	}
};
