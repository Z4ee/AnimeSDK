#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"

class Class_1_D1403D5EBDB678B3;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_FC01B36792F4338A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19989900)
#define CLASS_2_FC01B36792F4338A_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x19989940)
#define CLASS_2_FC01B36792F4338A_METHOD_2_E41C285FFB11B76F_OFFSET UNITYSDK_OFFSET(0x19989990)
#define CLASS_2_FC01B36792F4338A__CTOR_OFFSET UNITYSDK_OFFSET(0x19989AA0)

inline static constexpr unsigned int Class_2_FC01B36792F4338A_TypeDefinitionIndex = 53966;

class Class_2_FC01B36792F4338A : public ::Class_1_8A0BE42C657CE107
{
public:
	::Class_1_D1403D5EBDB678B3* KICICOHCPIP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC01B36792F4338A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC01B36792F4338A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC01B36792F4338A_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_2_E41C285FFB11B76F(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FC01B36792F4338A_METHOD_2_E41C285FFB11B76F_OFFSET))(this, a1, a2);
	}
};
