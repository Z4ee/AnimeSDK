#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B0F3210ABBBBF098_COMPARETO_OFFSET UNITYSDK_OFFSET(0x185A0940)
#define CLASS_1_B0F3210ABBBBF098_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x185A08A0)
#define CLASS_1_B0F3210ABBBBF098_EQUALS_OFFSET UNITYSDK_OFFSET(0x185A0810)
#define CLASS_1_B0F3210ABBBBF098_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x185A0900)
#define CLASS_1_B0F3210ABBBBF098_GET_ID_OFFSET UNITYSDK_OFFSET(0x185A07C0)
#define CLASS_1_B0F3210ABBBBF098_GET_NAME_OFFSET UNITYSDK_OFFSET(0x185A07D0)
#define CLASS_1_B0F3210ABBBBF098_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0x185A07F0)
#define CLASS_1_B0F3210ABBBBF098_SET_NAME_OFFSET UNITYSDK_OFFSET(0x185A07E0)
#define CLASS_1_B0F3210ABBBBF098_SET_UISTATE_OFFSET UNITYSDK_OFFSET(0x185A0800)
#define CLASS_1_B0F3210ABBBBF098__CCTOR_OFFSET UNITYSDK_OFFSET(0x185A09B0)
#define CLASS_1_B0F3210ABBBBF098__CTOR_OFFSET UNITYSDK_OFFSET(0x185A07B0)

inline static constexpr unsigned int Class_1_B0F3210ABBBBF098_TypeDefinitionIndex = 76128;

class Class_1_B0F3210ABBBBF098 : public ::System::Object
{
public:
	static ::Class_1_B0F3210ABBBBF098** StaticGet_Field_1_0()
	{
		return (::Class_1_B0F3210ABBBBF098**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0F3210ABBBBF098_TypeDefinitionIndex)->GetStaticField(0x40410);
	}
	::System::String* _UIState_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18
	::RPG::Client::TextID _Name_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B0F3210ABBBBF098__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0F3210ABBBBF098__CCTOR_OFFSET))();
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0F3210ABBBBF098_GET_ID_OFFSET))(this);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0F3210ABBBBF098_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B0F3210ABBBBF098_SET_NAME_OFFSET))(this, a1);
	}

	::System::String* get_UIState()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0F3210ABBBBF098_GET_UISTATE_OFFSET))(this);
	}

	::System::Void set_UIState(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0F3210ABBBBF098_SET_UISTATE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B0F3210ABBBBF098_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0F3210ABBBBF098_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals_1(::Class_1_B0F3210ABBBBF098* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B0F3210ABBBBF098*))((::PBYTE)hIl2Cpp + CLASS_1_B0F3210ABBBBF098_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 CompareTo(::Class_1_B0F3210ABBBBF098* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_B0F3210ABBBBF098*))((::PBYTE)hIl2Cpp + CLASS_1_B0F3210ABBBBF098_COMPARETO_OFFSET))(this, a1);
	}
};
