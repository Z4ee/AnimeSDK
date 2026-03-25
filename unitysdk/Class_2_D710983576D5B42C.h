#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2A73EE3831056054.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_D710983576D5B42C_METHOD_2_3114DA08F93EBF5A_OFFSET UNITYSDK_OFFSET(0x8D0B270)
#define CLASS_2_D710983576D5B42C_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x8D0B1F0)
#define CLASS_2_D710983576D5B42C_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x8D0B2F0)
#define CLASS_2_D710983576D5B42C_METHOD_2_7B8AC1ECE46767BC_OFFSET UNITYSDK_OFFSET(0x8D0B050)
#define CLASS_2_D710983576D5B42C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8D0B040)
#define CLASS_2_D710983576D5B42C__CTOR_OFFSET UNITYSDK_OFFSET(0x8D0B260)

inline static constexpr unsigned int Class_2_D710983576D5B42C_TypeDefinitionIndex = 45226;

class Class_2_D710983576D5B42C : public ::Class_1_2A73EE3831056054
{
public:
	::System::Int32 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D710983576D5B42C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D710983576D5B42C_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_7B8AC1ECE46767BC(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D710983576D5B42C_METHOD_2_7B8AC1ECE46767BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D710983576D5B42C_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_3114DA08F93EBF5A(::RPG::GameCore::GameEntity* P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D710983576D5B42C_METHOD_2_3114DA08F93EBF5A_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D710983576D5B42C_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
