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

#define CLASS_1_2A03998185AC98EE_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x123B6A00)
#define CLASS_1_2A03998185AC98EE_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x123B6800)
#define CLASS_1_2A03998185AC98EE_METHOD_1_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x123B6820)
#define CLASS_1_2A03998185AC98EE_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x123B67E0)
#define CLASS_1_2A03998185AC98EE_METHOD_1_12B3B9ABE1081C79_OFFSET UNITYSDK_OFFSET(0x123B6A90)
#define CLASS_1_2A03998185AC98EE_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x123B68A0)
#define CLASS_1_2A03998185AC98EE_METHOD_1_2439C7815990B9DD_OFFSET UNITYSDK_OFFSET(0x123B6840)
#define CLASS_1_2A03998185AC98EE_METHOD_1_64EEE3FEF87A70D8_OFFSET UNITYSDK_OFFSET(0x123B7240)
#define CLASS_1_2A03998185AC98EE_METHOD_1_7D809A18C24A8D5B_OFFSET UNITYSDK_OFFSET(0x123B7510)
#define CLASS_1_2A03998185AC98EE_METHOD_1_8CEAB4B365735B82_OFFSET UNITYSDK_OFFSET(0x123B67D0)
#define CLASS_1_2A03998185AC98EE_METHOD_1_9C2D72E4B2B30D66_OFFSET UNITYSDK_OFFSET(0x123B7330)
#define CLASS_1_2A03998185AC98EE_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x123B6770)
#define CLASS_1_2A03998185AC98EE_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x123B67C0)
#define CLASS_1_2A03998185AC98EE_METHOD_1_E15219EDCC97026A_OFFSET UNITYSDK_OFFSET(0x123B6A10)
#define CLASS_1_2A03998185AC98EE_METHOD_1_EE62FC150A9578E2_OFFSET UNITYSDK_OFFSET(0x123B6AF0)
#define CLASS_1_2A03998185AC98EE__CTOR_OFFSET UNITYSDK_OFFSET(0x123B7750)

inline static constexpr unsigned int Class_1_2A03998185AC98EE_TypeDefinitionIndex = 50076;

class Class_1_2A03998185AC98EE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_444*>* Field_1_4; // 0x10
	::RPG::GameCore::RtCharacterConfig* Field_1_3; // 0x18
	::RPG::Client::AvatarData* Field_1_5; // 0x20
	::RPG::GameCore::RtDefenceUnitRow* Field_1_1; // 0x28
	::System::UInt32 Field_1_2; // 0x30
	::RPG::Client::TextID _CharacterName_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::RPG::GameCore::RtCharacterConfig* Method_1_8CEAB4B365735B82()
	{
		return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_METHOD_1_8CEAB4B365735B82_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_METHOD_1_128774387667156B_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_444*>* Method_1_2439C7815990B9DD()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_444*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_METHOD_1_2439C7815990B9DD_OFFSET))(this);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_GET_CHARACTERNAME_OFFSET))(this);
	}

	::Class_1_2A03998185AC98EE* Method_1_E15219EDCC97026A(::RPG::GameCore::RtDefenceUnitRow* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_2A03998185AC98EE*(*)(::PVOID, ::RPG::GameCore::RtDefenceUnitRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_METHOD_1_E15219EDCC97026A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_12B3B9ABE1081C79(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_METHOD_1_12B3B9ABE1081C79_OFFSET))(this, a1);
	}

	::System::Void Method_1_64EEE3FEF87A70D8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_METHOD_1_64EEE3FEF87A70D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_EE62FC150A9578E2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_METHOD_1_EE62FC150A9578E2_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_9C2D72E4B2B30D66(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_METHOD_1_9C2D72E4B2B30D66_OFFSET))(this, a1);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::RPG::Client::AvatarData* Method_1_7D809A18C24A8D5B()
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A03998185AC98EE_METHOD_1_7D809A18C24A8D5B_OFFSET))(this);
	}
};
