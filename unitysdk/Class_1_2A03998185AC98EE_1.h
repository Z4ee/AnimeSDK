#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_444;
namespace RPG::Client { class AvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace RPG::GameCore { class RtDefenceUnitRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2A03998185AC98EE_1_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x12A4AC30)
#define CLASS_1_2A03998185AC98EE_1_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x12A4AA30)
#define CLASS_1_2A03998185AC98EE_1_METHOD_1_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x12A4AA50)
#define CLASS_1_2A03998185AC98EE_1_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12A4AA10)
#define CLASS_1_2A03998185AC98EE_1_METHOD_1_12B3B9ABE1081C79_OFFSET UNITYSDK_OFFSET(0x12A4ACC0)
#define CLASS_1_2A03998185AC98EE_1_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x12A4AAD0)
#define CLASS_1_2A03998185AC98EE_1_METHOD_1_2439C7815990B9DD_OFFSET UNITYSDK_OFFSET(0x12A4AA70)
#define CLASS_1_2A03998185AC98EE_1_METHOD_1_2683B3EA90202D71_OFFSET UNITYSDK_OFFSET(0x12A4B4D0)
#define CLASS_1_2A03998185AC98EE_1_METHOD_1_64EEE3FEF87A70D8_OFFSET UNITYSDK_OFFSET(0x12A4B3E0)
#define CLASS_1_2A03998185AC98EE_1_METHOD_1_7D809A18C24A8D5B_OFFSET UNITYSDK_OFFSET(0x12A4B670)
#define CLASS_1_2A03998185AC98EE_1_METHOD_1_8CEAB4B365735B82_OFFSET UNITYSDK_OFFSET(0x12A4AA00)
#define CLASS_1_2A03998185AC98EE_1_METHOD_1_980EEF8DB40ED82B_OFFSET UNITYSDK_OFFSET(0x12A4AD20)
#define CLASS_1_2A03998185AC98EE_1_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x12A4A9A0)
#define CLASS_1_2A03998185AC98EE_1_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x12A4A9F0)
#define CLASS_1_2A03998185AC98EE_1_METHOD_1_E15219EDCC97026A_OFFSET UNITYSDK_OFFSET(0x12A4AC40)
#define CLASS_1_2A03998185AC98EE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12A4B8B0)

inline static constexpr unsigned int Class_1_2A03998185AC98EE_1_TypeDefinitionIndex = 50078;

class Class_1_2A03998185AC98EE_1 : public ::System::Object
{
public:
	::RPG::Client::AvatarData* Field_1_5; // 0x10
	::RPG::GameCore::RtCharacterConfig* Field_1_3; // 0x18
	::RPG::GameCore::RtDefenceUnitRow* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_444*>* Field_1_4; // 0x28
	::RPG::Client::TextID _CharacterName_k__BackingField; // 0x30
	::System::UInt32 Field_1_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::RPG::GameCore::RtCharacterConfig* Method_1_8CEAB4B365735B82()
	{
		return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_METHOD_1_8CEAB4B365735B82_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_METHOD_1_128774387667156B_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_444*>* Method_1_2439C7815990B9DD()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_444*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_METHOD_1_2439C7815990B9DD_OFFSET))(this);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_GET_CHARACTERNAME_OFFSET))(this);
	}

	::Class_1_2A03998185AC98EE_1* Method_1_E15219EDCC97026A(::RPG::GameCore::RtDefenceUnitRow* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_2A03998185AC98EE_1*(*)(::PVOID, ::RPG::GameCore::RtDefenceUnitRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_METHOD_1_E15219EDCC97026A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_12B3B9ABE1081C79(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_METHOD_1_12B3B9ABE1081C79_OFFSET))(this, a1);
	}

	::System::Void Method_1_64EEE3FEF87A70D8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_METHOD_1_64EEE3FEF87A70D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_980EEF8DB40ED82B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_METHOD_1_980EEF8DB40ED82B_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_2683B3EA90202D71(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_METHOD_1_2683B3EA90202D71_OFFSET))(this, a1);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::RPG::Client::AvatarData* Method_1_7D809A18C24A8D5B()
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_1_METHOD_1_7D809A18C24A8D5B_OFFSET))(this);
	}
};
