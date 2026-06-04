#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_80CC415842DAA758_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA3A7F50)
#define CLASS_1_80CC415842DAA758_METHOD_1_4498ADEA214FD5BB_OFFSET UNITYSDK_OFFSET(0xA3A9DF0)
#define CLASS_1_80CC415842DAA758_METHOD_1_AFA4A39E3557F648_OFFSET UNITYSDK_OFFSET(0xA3AA130)
#define CLASS_1_80CC415842DAA758_METHOD_1_CC4B28A9916017EA_OFFSET UNITYSDK_OFFSET(0xA3A8C40)
#define CLASS_1_80CC415842DAA758_METHOD_1_E6C66778C7234160_1_OFFSET UNITYSDK_OFFSET(0xA3AA2D0)
#define CLASS_1_80CC415842DAA758_METHOD_1_E6C66778C7234160_OFFSET UNITYSDK_OFFSET(0xA3A9F70)
#define CLASS_1_80CC415842DAA758__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3AA470)
#define CLASS_1_80CC415842DAA758__CTOR_OFFSET UNITYSDK_OFFSET(0xA3A7F20)

inline static constexpr unsigned int Class_1_80CC415842DAA758_TypeDefinitionIndex = 71793;

class Class_1_80CC415842DAA758 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_80CC415842DAA758_TypeDefinitionIndex)->GetStaticField(0x8610);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_80CC415842DAA758_TypeDefinitionIndex)->GetStaticField(0x8614);
	}
	::Class_3_F4528A5C0F861AF2* Field_1_2; // 0x10
	::Class_2_80F8710F847F1248* Field_1_3; // 0x18

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_80CC415842DAA758__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_80CC415842DAA758__CCTOR_OFFSET))();
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80CC415842DAA758_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_CC4B28A9916017EA(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_80CC415842DAA758_METHOD_1_CC4B28A9916017EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_4498ADEA214FD5BB(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_80CC415842DAA758_METHOD_1_4498ADEA214FD5BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6C66778C7234160(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_80CC415842DAA758_METHOD_1_E6C66778C7234160_OFFSET))(this, a1);
	}

	::System::Void Method_1_AFA4A39E3557F648(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_80CC415842DAA758_METHOD_1_AFA4A39E3557F648_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E6C66778C7234160_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_80CC415842DAA758_METHOD_1_E6C66778C7234160_1_OFFSET))(this, a1);
	}
};
