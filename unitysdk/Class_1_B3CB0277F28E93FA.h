#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B3CB0277F28E93FA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB554E70)
#define CLASS_1_B3CB0277F28E93FA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB554DD0)
#define CLASS_1_B3CB0277F28E93FA_EQUALS_OFFSET UNITYSDK_OFFSET(0xB554D40)
#define CLASS_1_B3CB0277F28E93FA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB554E30)
#define CLASS_1_B3CB0277F28E93FA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB554D00)
#define CLASS_1_B3CB0277F28E93FA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB554CD0)
#define CLASS_1_B3CB0277F28E93FA_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0xB554D20)
#define CLASS_1_B3CB0277F28E93FA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB554CE0)
#define CLASS_1_B3CB0277F28E93FA_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB554D10)
#define CLASS_1_B3CB0277F28E93FA_SET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0xB554D30)
#define CLASS_1_B3CB0277F28E93FA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB554CF0)
#define CLASS_1_B3CB0277F28E93FA__CCTOR_OFFSET UNITYSDK_OFFSET(0xB554EE0)
#define CLASS_1_B3CB0277F28E93FA__CTOR_OFFSET UNITYSDK_OFFSET(0xB554CC0)

inline static constexpr unsigned int Class_1_B3CB0277F28E93FA_TypeDefinitionIndex = 81082;

class Class_1_B3CB0277F28E93FA : public ::System::Object
{
public:
	static ::Class_1_B3CB0277F28E93FA** StaticGet_IFDKFOGNOAN()
	{
		return (::Class_1_B3CB0277F28E93FA**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3CB0277F28E93FA_TypeDefinitionIndex)->GetStaticField(0x14AB0);
	}
	::System::Boolean _IsDisplayed_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x14
	::RPG::Client::TextID _Name_k__BackingField; // 0x18
	::RPG::Client::TextID _Desc_k__BackingField; // 0x28

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B3CB0277F28E93FA__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3CB0277F28E93FA__CCTOR_OFFSET))();
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3CB0277F28E93FA_GET_ID_OFFSET))(this);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3CB0277F28E93FA_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B3CB0277F28E93FA_SET_NAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3CB0277F28E93FA_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B3CB0277F28E93FA_SET_DESC_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDisplayed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3CB0277F28E93FA_GET_ISDISPLAYED_OFFSET))(this);
	}

	::System::Void set_IsDisplayed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B3CB0277F28E93FA_SET_ISDISPLAYED_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B3CB0277F28E93FA_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3CB0277F28E93FA_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals_1(::Class_1_B3CB0277F28E93FA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B3CB0277F28E93FA*))((::PBYTE)hIl2Cpp + CLASS_1_B3CB0277F28E93FA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 CompareTo(::Class_1_B3CB0277F28E93FA* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_B3CB0277F28E93FA*))((::PBYTE)hIl2Cpp + CLASS_1_B3CB0277F28E93FA_COMPARETO_OFFSET))(this, a1);
	}
};
