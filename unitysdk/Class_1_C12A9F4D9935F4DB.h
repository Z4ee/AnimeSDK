#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

class Class_1_F65DC6656DEF8159;
class Class_2_D5331BDCD85B8368;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class VCameraOverrideShakeV2; }
namespace RPG::GameCore { class VCameraShakeV2; }

#define CLASS_1_C12A9F4D9935F4DB_CLEAR_OFFSET UNITYSDK_OFFSET(0x11906200)
#define CLASS_1_C12A9F4D9935F4DB_METHOD_1_0C363E975E016EA9_OFFSET UNITYSDK_OFFSET(0x11906030)
#define CLASS_1_C12A9F4D9935F4DB_METHOD_1_5B0C2896688A2F29_OFFSET UNITYSDK_OFFSET(0x119062C0)
#define CLASS_1_C12A9F4D9935F4DB_METHOD_1_8D663435C6E609D2_OFFSET UNITYSDK_OFFSET(0x11906720)
#define CLASS_1_C12A9F4D9935F4DB_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x119068B0)
#define CLASS_1_C12A9F4D9935F4DB_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x11906810)
#define CLASS_1_C12A9F4D9935F4DB_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11906770)
#define CLASS_1_C12A9F4D9935F4DB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11906900)
#define CLASS_1_C12A9F4D9935F4DB__CTOR_OFFSET UNITYSDK_OFFSET(0x11906940)

inline static constexpr unsigned int Class_1_C12A9F4D9935F4DB_TypeDefinitionIndex = 56060;

class Class_1_C12A9F4D9935F4DB : public ::System::Object
{
public:
	::Class_2_D5331BDCD85B8368* Field_1_2; // 0x10
	::Class_1_F65DC6656DEF8159* Field_1_6; // 0x18
	::System::Single Field_1_0; // 0x20
	::System::Boolean Field_1_5; // 0x24
	::RPG::GameCore::TimeRewindState Field_1_3; // 0x28
	::System::Single Field_1_1; // 0x2C
	::System::Single Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C12A9F4D9935F4DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0C363E975E016EA9(::RPG::GameCore::GameEntity* a1, ::Class_1_F65DC6656DEF8159* a2, ::System::Single a3, ::System::Single a4, ::RPG::GameCore::VCameraShakeV2* a5, ::RPG::GameCore::VCameraOverrideShakeV2* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_F65DC6656DEF8159*, ::System::Single, ::System::Single, ::RPG::GameCore::VCameraShakeV2*, ::RPG::GameCore::VCameraOverrideShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_C12A9F4D9935F4DB_METHOD_1_0C363E975E016EA9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C12A9F4D9935F4DB_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_5B0C2896688A2F29(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_C12A9F4D9935F4DB_METHOD_1_5B0C2896688A2F29_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8D663435C6E609D2(::RPG::GameCore::TimeRewindState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_C12A9F4D9935F4DB_METHOD_1_8D663435C6E609D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C12A9F4D9935F4DB_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C12A9F4D9935F4DB_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C12A9F4D9935F4DB_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C12A9F4D9935F4DB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
