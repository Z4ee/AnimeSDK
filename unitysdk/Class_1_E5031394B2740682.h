#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_457;

#define CLASS_1_E5031394B2740682_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1571F660)
#define CLASS_1_E5031394B2740682_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1571F6C0)
#define CLASS_1_E5031394B2740682_EQUALS_OFFSET UNITYSDK_OFFSET(0x1571F5B0)
#define CLASS_1_E5031394B2740682_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1571F7D0)
#define CLASS_1_E5031394B2740682_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1571F590)
#define CLASS_1_E5031394B2740682_METHOD_1_148214CEA2F00B70_OFFSET UNITYSDK_OFFSET(0x1571F8F0)
#define CLASS_1_E5031394B2740682_METHOD_1_6062BB7D9634C869_OFFSET UNITYSDK_OFFSET(0x1571F810)
#define CLASS_1_E5031394B2740682__CTOR_OFFSET UNITYSDK_OFFSET(0x1571F5A0)

inline static constexpr unsigned int Class_1_E5031394B2740682_TypeDefinitionIndex = 74823;

class Class_1_E5031394B2740682 : public ::System::Object
{
public:
	::RPG::GameCore::IdleLiveAvatarPropertyType _PropertyType_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_E5031394B2740682__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::IdleLiveAvatarPropertyType get_PropertyType()
	{
		return ((::RPG::GameCore::IdleLiveAvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5031394B2740682_GET_PROPERTYTYPE_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_0_16E4307DCC419505_457* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_457*))((::PBYTE)hIl2Cpp + CLASS_1_E5031394B2740682_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E5031394B2740682* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E5031394B2740682*))((::PBYTE)hIl2Cpp + CLASS_1_E5031394B2740682_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals_2(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E5031394B2740682_EQUALS_2_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5031394B2740682_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_6062BB7D9634C869(::Class_1_E5031394B2740682* a1, ::Class_1_E5031394B2740682* a2)
	{
		return ((::System::Boolean(*)(::Class_1_E5031394B2740682*, ::Class_1_E5031394B2740682*))((::PBYTE)hIl2Cpp + CLASS_1_E5031394B2740682_METHOD_1_6062BB7D9634C869_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_148214CEA2F00B70(::Class_1_E5031394B2740682* a1, ::Class_1_E5031394B2740682* a2)
	{
		return ((::System::Boolean(*)(::Class_1_E5031394B2740682*, ::Class_1_E5031394B2740682*))((::PBYTE)hIl2Cpp + CLASS_1_E5031394B2740682_METHOD_1_148214CEA2F00B70_OFFSET))(a1, a2);
	}
};
