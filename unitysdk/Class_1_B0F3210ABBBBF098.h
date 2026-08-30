#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B0F3210ABBBBF098_COMPARETO_OFFSET UNITYSDK_OFFSET(0x198A7140)
#define CLASS_1_B0F3210ABBBBF098_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x198A70A0)
#define CLASS_1_B0F3210ABBBBF098_EQUALS_OFFSET UNITYSDK_OFFSET(0x198A7010)
#define CLASS_1_B0F3210ABBBBF098_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x198A7100)
#define CLASS_1_B0F3210ABBBBF098_GET_ID_OFFSET UNITYSDK_OFFSET(0x198A6FC0)
#define CLASS_1_B0F3210ABBBBF098_GET_NAME_OFFSET UNITYSDK_OFFSET(0x198A6FD0)
#define CLASS_1_B0F3210ABBBBF098_GET_UISTATE_OFFSET UNITYSDK_OFFSET(0x198A6FF0)
#define CLASS_1_B0F3210ABBBBF098_SET_NAME_OFFSET UNITYSDK_OFFSET(0x198A6FE0)
#define CLASS_1_B0F3210ABBBBF098_SET_UISTATE_OFFSET UNITYSDK_OFFSET(0x198A7000)
#define CLASS_1_B0F3210ABBBBF098__CCTOR_OFFSET UNITYSDK_OFFSET(0x198A71B0)
#define CLASS_1_B0F3210ABBBBF098__CTOR_OFFSET UNITYSDK_OFFSET(0x198A6FB0)

inline static constexpr unsigned int Class_1_B0F3210ABBBBF098_TypeDefinitionIndex = 79761;

class Class_1_B0F3210ABBBBF098 : public ::System::Object
{
public:
	static ::Class_1_B0F3210ABBBBF098** StaticGet_IFDKFOGNOAN()
	{
		return (::Class_1_B0F3210ABBBBF098**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0F3210ABBBBF098_TypeDefinitionIndex)->GetStaticField(0x48EB0);
	}
	::System::String* _UIState_k__BackingField; // 0x10
	::RPG::Client::TextID _Name_k__BackingField; // 0x18
	::System::UInt32 _ID_k__BackingField; // 0x28

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
