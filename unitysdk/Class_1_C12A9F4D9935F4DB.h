#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

class Class_1_F65DC6656DEF8159;
class Class_2_807051FED253D9BD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class VCameraOverrideShakeV2; }
namespace RPG::GameCore { class VCameraShakeV2; }

#define CLASS_1_C12A9F4D9935F4DB_CLEAR_OFFSET UNITYSDK_OFFSET(0xB744FB0)
#define CLASS_1_C12A9F4D9935F4DB_METHOD_1_0C363E975E016EA9_OFFSET UNITYSDK_OFFSET(0xB744DE0)
#define CLASS_1_C12A9F4D9935F4DB_METHOD_1_86E1B5FD9DDBAE3C_OFFSET UNITYSDK_OFFSET(0xB745070)
#define CLASS_1_C12A9F4D9935F4DB_METHOD_1_8D663435C6E609D2_OFFSET UNITYSDK_OFFSET(0xB745460)
#define CLASS_1_C12A9F4D9935F4DB_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xB7455F0)
#define CLASS_1_C12A9F4D9935F4DB_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0xB745550)
#define CLASS_1_C12A9F4D9935F4DB_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB7454B0)
#define CLASS_1_C12A9F4D9935F4DB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB745640)
#define CLASS_1_C12A9F4D9935F4DB__CTOR_OFFSET UNITYSDK_OFFSET(0xB745680)

inline static constexpr unsigned int Class_1_C12A9F4D9935F4DB_TypeDefinitionIndex = 60896;

class Class_1_C12A9F4D9935F4DB : public ::System::Object
{
public:
	::Class_1_F65DC6656DEF8159* EPMPEFJBAPM; // 0x10
	::Class_2_807051FED253D9BD* ABLGIJMIFBI; // 0x18
	::System::Single CNDJDPHMHNK; // 0x20
	::System::Single KBDPMBDJIOF; // 0x24
	::System::Single HBDJCFFDGDD; // 0x28
	::System::Boolean GNFOLMAJLBH; // 0x2C
	::RPG::GameCore::TimeRewindState PPNPFHEGGCI; // 0x30

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

	::System::Void Method_1_86E1B5FD9DDBAE3C(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_C12A9F4D9935F4DB_METHOD_1_86E1B5FD9DDBAE3C_OFFSET))(this, a1, a2);
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
