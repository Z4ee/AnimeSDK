#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_522;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_21E53FA4D42020EF_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x157EF6A0)
#define CLASS_1_21E53FA4D42020EF_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x157EF640)
#define CLASS_1_21E53FA4D42020EF_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x157EF680)
#define CLASS_1_21E53FA4D42020EF_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x157EF690)
#define CLASS_1_21E53FA4D42020EF_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x157EF670)
#define CLASS_1_21E53FA4D42020EF_METHOD_1_13D63D7A35EA7012_OFFSET UNITYSDK_OFFSET(0x157EFA30)
#define CLASS_1_21E53FA4D42020EF_METHOD_1_2439C7815990B9DD_OFFSET UNITYSDK_OFFSET(0x157EF6B0)
#define CLASS_1_21E53FA4D42020EF_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x157EF9E0)
#define CLASS_1_21E53FA4D42020EF_METHOD_1_6B29B840D8B1EB89_OFFSET UNITYSDK_OFFSET(0x157EF930)
#define CLASS_1_21E53FA4D42020EF_METHOD_1_8CEAB4B365735B82_OFFSET UNITYSDK_OFFSET(0x157EF660)
#define CLASS_1_21E53FA4D42020EF_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x157EF710)
#define CLASS_1_21E53FA4D42020EF_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x157EF650)
#define CLASS_1_21E53FA4D42020EF__CTOR_OFFSET UNITYSDK_OFFSET(0x157EFA80)

inline static constexpr unsigned int Class_1_21E53FA4D42020EF_TypeDefinitionIndex = 54281;

class Class_1_21E53FA4D42020EF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_522*>* HNAKNKGOJII; // 0x10
	::System::String* NLCHDCHBCAL; // 0x18
	::System::Object* IBPBJBOKKMF; // 0x20
	::RPG::GameCore::RtCharacterConfig* PPANINAEOFD; // 0x28
	::System::UInt32 ANOPNMFJLMI; // 0x30
	::RPG::Client::TextID _CharacterName_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21E53FA4D42020EF__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21E53FA4D42020EF_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21E53FA4D42020EF_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::RPG::GameCore::RtCharacterConfig* Method_1_8CEAB4B365735B82()
	{
		return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21E53FA4D42020EF_METHOD_1_8CEAB4B365735B82_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21E53FA4D42020EF_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21E53FA4D42020EF_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21E53FA4D42020EF_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21E53FA4D42020EF_GET_CHARACTERNAME_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_522*>* Method_1_2439C7815990B9DD()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_522*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21E53FA4D42020EF_METHOD_1_2439C7815990B9DD_OFFSET))(this);
	}

	::Class_1_21E53FA4D42020EF* Method_1_6B29B840D8B1EB89(::System::UInt32 a1, ::System::String* a2, ::System::Object* a3)
	{
		return ((::Class_1_21E53FA4D42020EF*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21E53FA4D42020EF_METHOD_1_6B29B840D8B1EB89_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_21E53FA4D42020EF_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_13D63D7A35EA7012(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_21E53FA4D42020EF_METHOD_1_13D63D7A35EA7012_OFFSET))(this, a1);
	}

	::System::Void Method_1_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21E53FA4D42020EF_METHOD_1_913947B6596EB50A_OFFSET))(this);
	}
};
