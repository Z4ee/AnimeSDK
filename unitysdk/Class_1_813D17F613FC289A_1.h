#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_522;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace RPG::GameCore { class RtDefenceUnitRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_813D17F613FC289A_1_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x163DEE40)
#define CLASS_1_813D17F613FC289A_1_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x163DEBE0)
#define CLASS_1_813D17F613FC289A_1_METHOD_1_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x163DEC00)
#define CLASS_1_813D17F613FC289A_1_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x163DEBC0)
#define CLASS_1_813D17F613FC289A_1_METHOD_1_2439C7815990B9DD_OFFSET UNITYSDK_OFFSET(0x163DEC20)
#define CLASS_1_813D17F613FC289A_1_METHOD_1_2683B3EA90202D71_OFFSET UNITYSDK_OFFSET(0x163DF6E0)
#define CLASS_1_813D17F613FC289A_1_METHOD_1_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x163DEC80)
#define CLASS_1_813D17F613FC289A_1_METHOD_1_8CEAB4B365735B82_OFFSET UNITYSDK_OFFSET(0x163DEBB0)
#define CLASS_1_813D17F613FC289A_1_METHOD_1_980EEF8DB40ED82B_OFFSET UNITYSDK_OFFSET(0x163DEF30)
#define CLASS_1_813D17F613FC289A_1_METHOD_1_9DD597417197010B_OFFSET UNITYSDK_OFFSET(0x163DEED0)
#define CLASS_1_813D17F613FC289A_1_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x163DEB50)
#define CLASS_1_813D17F613FC289A_1_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x163DEBA0)
#define CLASS_1_813D17F613FC289A_1_METHOD_1_D8A7A5265A7DC1FF_OFFSET UNITYSDK_OFFSET(0x163DF5F0)
#define CLASS_1_813D17F613FC289A_1_METHOD_1_E15219EDCC97026A_OFFSET UNITYSDK_OFFSET(0x163DEE50)
#define CLASS_1_813D17F613FC289A_1_METHOD_1_EC48DF3597FAAB18_OFFSET UNITYSDK_OFFSET(0x163DF880)
#define CLASS_1_813D17F613FC289A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x163DF960)

inline static constexpr unsigned int Class_1_813D17F613FC289A_1_TypeDefinitionIndex = 54511;

class Class_1_813D17F613FC289A_1 : public ::System::Object
{
public:
	::RPG::GameCore::RtCharacterConfig* PPANINAEOFD; // 0x10
	::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_522*>* HNAKNKGOJII; // 0x20
	::RPG::GameCore::RtDefenceUnitRow* IBPBJBOKKMF; // 0x28
	::RPG::Client::TextID _CharacterName_k__BackingField; // 0x30
	::System::UInt32 IACHHFMCKMC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::RPG::GameCore::RtCharacterConfig* Method_1_8CEAB4B365735B82()
	{
		return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_METHOD_1_8CEAB4B365735B82_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_METHOD_1_128774387667156B_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_522*>* Method_1_2439C7815990B9DD()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_522*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_METHOD_1_2439C7815990B9DD_OFFSET))(this);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_GET_CHARACTERNAME_OFFSET))(this);
	}

	::Class_1_813D17F613FC289A_1* Method_1_E15219EDCC97026A(::RPG::GameCore::RtDefenceUnitRow* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_813D17F613FC289A_1*(*)(::PVOID, ::RPG::GameCore::RtDefenceUnitRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_METHOD_1_E15219EDCC97026A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9DD597417197010B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_METHOD_1_9DD597417197010B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D8A7A5265A7DC1FF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_METHOD_1_D8A7A5265A7DC1FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_980EEF8DB40ED82B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_METHOD_1_980EEF8DB40ED82B_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_2683B3EA90202D71(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_METHOD_1_2683B3EA90202D71_OFFSET))(this, a1);
	}

	::System::Void Method_1_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_METHOD_1_68805403250CC013_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_EC48DF3597FAAB18()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813D17F613FC289A_1_METHOD_1_EC48DF3597FAAB18_OFFSET))(this);
	}
};
