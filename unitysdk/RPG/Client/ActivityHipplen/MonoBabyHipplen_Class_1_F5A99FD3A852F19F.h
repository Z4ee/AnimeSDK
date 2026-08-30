#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LookAtIK; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_CLASS_1_F5A99FD3A852F19F_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x1B7CD9A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_CLASS_1_F5A99FD3A852F19F_METHOD_1_F230511816A7C6C1_OFFSET UNITYSDK_OFFSET(0x1B7CDE10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_CLASS_1_F5A99FD3A852F19F__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7CE5A0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int MonoBabyHipplen_Class_1_F5A99FD3A852F19F_TypeDefinitionIndex = 75300;

	class MonoBabyHipplen_Class_1_F5A99FD3A852F19F : public ::System::Object
	{
	public:
		::RPG::Client::LookAtIK* LHEEDHAPKOA; // 0x10
		::System::Single OHHLGJCJLPH; // 0x18
		::System::Single IPMECJCKIGM; // 0x1C
		::System::Single PKCKMONNBLM; // 0x20
		::System::Single LLNIGIGFCEA; // 0x24
		::System::Single LFKMOIDKOEL; // 0x28
		::System::Single KCLBCNGCLHJ; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_CLASS_1_F5A99FD3A852F19F__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_CLASS_1_F5A99FD3A852F19F_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
		}

		::System::Void Method_1_F230511816A7C6C1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_CLASS_1_F5A99FD3A852F19F_METHOD_1_F230511816A7C6C1_OFFSET))(this, a1, a2, a3);
		}
	};
}
