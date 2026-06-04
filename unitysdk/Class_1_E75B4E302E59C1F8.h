#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_463;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace RPG::GameCore { class RtDefenceUnitRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E75B4E302E59C1F8_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xA5C8740)
#define CLASS_1_E75B4E302E59C1F8_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0xA5C84A0)
#define CLASS_1_E75B4E302E59C1F8_METHOD_1_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0xA5C84C0)
#define CLASS_1_E75B4E302E59C1F8_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xA5C8480)
#define CLASS_1_E75B4E302E59C1F8_METHOD_1_2439C7815990B9DD_OFFSET UNITYSDK_OFFSET(0xA5C84E0)
#define CLASS_1_E75B4E302E59C1F8_METHOD_1_2683B3EA90202D71_OFFSET UNITYSDK_OFFSET(0xA5C90E0)
#define CLASS_1_E75B4E302E59C1F8_METHOD_1_62EF921E17919FB9_OFFSET UNITYSDK_OFFSET(0xA5C8750)
#define CLASS_1_E75B4E302E59C1F8_METHOD_1_8CEAB4B365735B82_OFFSET UNITYSDK_OFFSET(0xA5C8470)
#define CLASS_1_E75B4E302E59C1F8_METHOD_1_980EEF8DB40ED82B_OFFSET UNITYSDK_OFFSET(0xA5C8820)
#define CLASS_1_E75B4E302E59C1F8_METHOD_1_9DD597417197010B_OFFSET UNITYSDK_OFFSET(0xA5C87C0)
#define CLASS_1_E75B4E302E59C1F8_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xA5C8410)
#define CLASS_1_E75B4E302E59C1F8_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0xA5C8460)
#define CLASS_1_E75B4E302E59C1F8_METHOD_1_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0xA5C8540)
#define CLASS_1_E75B4E302E59C1F8_METHOD_1_D8A7A5265A7DC1FF_OFFSET UNITYSDK_OFFSET(0xA5C8FF0)
#define CLASS_1_E75B4E302E59C1F8__CTOR_OFFSET UNITYSDK_OFFSET(0xA5C9290)

inline static constexpr unsigned int Class_1_E75B4E302E59C1F8_TypeDefinitionIndex = 50747;

class Class_1_E75B4E302E59C1F8 : public ::System::Object
{
public:
	::RPG::GameCore::RtDefenceUnitRow* Field_1_0; // 0x10
	::RPG::GameCore::RtCharacterConfig* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_463*>* Field_1_2; // 0x20
	::RPG::Client::TextID _CharacterName_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::RPG::GameCore::RtCharacterConfig* Method_1_8CEAB4B365735B82()
	{
		return ((::RPG::GameCore::RtCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8_METHOD_1_8CEAB4B365735B82_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8_METHOD_1_128774387667156B_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_463*>* Method_1_2439C7815990B9DD()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_463*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8_METHOD_1_2439C7815990B9DD_OFFSET))(this);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8_GET_CHARACTERNAME_OFFSET))(this);
	}

	::Class_1_E75B4E302E59C1F8* Method_1_62EF921E17919FB9(::RPG::GameCore::RtDefenceUnitRow* a1, ::System::Object* a2)
	{
		return ((::Class_1_E75B4E302E59C1F8*(*)(::PVOID, ::RPG::GameCore::RtDefenceUnitRow*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8_METHOD_1_62EF921E17919FB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9DD597417197010B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8_METHOD_1_9DD597417197010B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D8A7A5265A7DC1FF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8_METHOD_1_D8A7A5265A7DC1FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_980EEF8DB40ED82B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8_METHOD_1_980EEF8DB40ED82B_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_2683B3EA90202D71(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8_METHOD_1_2683B3EA90202D71_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E75B4E302E59C1F8_METHOD_1_CCD88C0D86A5A786_OFFSET))(this);
	}
};
