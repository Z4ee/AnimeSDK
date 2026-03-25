#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_576;

#define CLASS_1_E555DFFCA4EEA2C0_METHOD_1_273A009027628C24_OFFSET UNITYSDK_OFFSET(0x10AE6E80)
#define CLASS_1_E555DFFCA4EEA2C0_METHOD_1_505594EF44B87658_OFFSET UNITYSDK_OFFSET(0x10AE6A10)
#define CLASS_1_E555DFFCA4EEA2C0__CTOR_OFFSET UNITYSDK_OFFSET(0x10AE69E0)

inline static constexpr unsigned int Class_1_E555DFFCA4EEA2C0_TypeDefinitionIndex = 50820;

class Class_1_E555DFFCA4EEA2C0 : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType Field_1_2; // 0x10
	::RPG::GameCore::AvatarPropertyType Field_1_0; // 0x14
	::RPG::GameCore::AvatarPropertyType Field_1_4; // 0x18
	::RPG::GameCore::AvatarPropertyType Field_1_1; // 0x1C
	::RPG::GameCore::AvatarPropertyType Field_1_5; // 0x20
	::RPG::GameCore::AvatarPropertyType Field_1_6; // 0x24
	::RPG::GameCore::AvatarPropertyType Field_1_3; // 0x28

	::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2, ::RPG::GameCore::AvatarPropertyType a3, ::RPG::GameCore::AvatarPropertyType a4, ::RPG::GameCore::AvatarPropertyType a5, ::RPG::GameCore::AvatarPropertyType a6, ::RPG::GameCore::AvatarPropertyType a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_E555DFFCA4EEA2C0__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::RPG::GameCore::FixPoint Method_1_505594EF44B87658(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_576* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_576*))((::PBYTE)hIl2Cpp + CLASS_1_E555DFFCA4EEA2C0_METHOD_1_505594EF44B87658_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_273A009027628C24(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_576* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_576*))((::PBYTE)hIl2Cpp + CLASS_1_E555DFFCA4EEA2C0_METHOD_1_273A009027628C24_OFFSET))(this, a1, a2);
	}
};
