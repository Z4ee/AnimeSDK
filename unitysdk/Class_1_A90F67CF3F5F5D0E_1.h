#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_666;

#define CLASS_1_A90F67CF3F5F5D0E_1_METHOD_1_C8C420CCF5A9F3E8_OFFSET UNITYSDK_OFFSET(0xE654770)
#define CLASS_1_A90F67CF3F5F5D0E_1_METHOD_1_D3998BF85337EF47_OFFSET UNITYSDK_OFFSET(0xE654710)
#define CLASS_1_A90F67CF3F5F5D0E_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE654700)

inline static constexpr unsigned int Class_1_A90F67CF3F5F5D0E_1_TypeDefinitionIndex = 57695;

class Class_1_A90F67CF3F5F5D0E_1 : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType Field_1_0; // 0x10
	::RPG::GameCore::AvatarPropertyType Field_1_1; // 0x14

	::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E_1__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_D3998BF85337EF47(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_666* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_666*))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E_1_METHOD_1_D3998BF85337EF47_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_C8C420CCF5A9F3E8(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_666* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_666*))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E_1_METHOD_1_C8C420CCF5A9F3E8_OFFSET))(this, a1, a2);
	}
};
