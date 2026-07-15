#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_422;

#define CLASS_1_588CD27F71E12A8A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16716C10)
#define CLASS_1_588CD27F71E12A8A_EQUALS_OFFSET UNITYSDK_OFFSET(0x16716B80)
#define CLASS_1_588CD27F71E12A8A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16716D10)
#define CLASS_1_588CD27F71E12A8A_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x16716B60)
#define CLASS_1_588CD27F71E12A8A_METHOD_1_148214CEA2F00B70_OFFSET UNITYSDK_OFFSET(0x16716E30)
#define CLASS_1_588CD27F71E12A8A_METHOD_1_6062BB7D9634C869_OFFSET UNITYSDK_OFFSET(0x16716D50)
#define CLASS_1_588CD27F71E12A8A_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x16716B70)
#define CLASS_1_588CD27F71E12A8A__CTOR_OFFSET UNITYSDK_OFFSET(0x16716F10)

inline static constexpr unsigned int Class_1_588CD27F71E12A8A_TypeDefinitionIndex = 49602;

class Class_1_588CD27F71E12A8A : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588CD27F71E12A8A__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AvatarPropertyType get_PropertyType()
	{
		return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588CD27F71E12A8A_GET_PROPERTYTYPE_OFFSET))(this);
	}

	::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_588CD27F71E12A8A_SET_PROPERTYTYPE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Class_0_16E4307DCC419505_422* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_422*))((::PBYTE)hIl2Cpp + CLASS_1_588CD27F71E12A8A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_588CD27F71E12A8A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_588CD27F71E12A8A_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_6062BB7D9634C869(::Class_1_588CD27F71E12A8A* a1, ::Class_1_588CD27F71E12A8A* a2)
	{
		return ((::System::Boolean(*)(::Class_1_588CD27F71E12A8A*, ::Class_1_588CD27F71E12A8A*))((::PBYTE)hIl2Cpp + CLASS_1_588CD27F71E12A8A_METHOD_1_6062BB7D9634C869_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_148214CEA2F00B70(::Class_1_588CD27F71E12A8A* a1, ::Class_1_588CD27F71E12A8A* a2)
	{
		return ((::System::Boolean(*)(::Class_1_588CD27F71E12A8A*, ::Class_1_588CD27F71E12A8A*))((::PBYTE)hIl2Cpp + CLASS_1_588CD27F71E12A8A_METHOD_1_148214CEA2F00B70_OFFSET))(a1, a2);
	}
};
