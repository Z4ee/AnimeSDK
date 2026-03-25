#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LookAtIK; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_CLASS_1_F5A99FD3A852F19F_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x8F3FC60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_CLASS_1_F5A99FD3A852F19F_METHOD_1_F230511816A7C6C1_OFFSET UNITYSDK_OFFSET(0x8F40210)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_CLASS_1_F5A99FD3A852F19F__CTOR_OFFSET UNITYSDK_OFFSET(0x8F40B40)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int MonoBabyHipplen_Class_1_F5A99FD3A852F19F_TypeDefinitionIndex = 61749;

	class MonoBabyHipplen_Class_1_F5A99FD3A852F19F : public ::System::Object
	{
	public:
		::RPG::Client::LookAtIK* Field_1_0; // 0x10
		::System::Single Field_1_6; // 0x18
		::System::Single Field_1_3; // 0x1C
		::System::Single Field_1_4; // 0x20
		::System::Single Field_1_2; // 0x24
		::System::Single Field_1_5; // 0x28
		::System::Single Field_1_1; // 0x2C

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
