#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_544;

#define CLASS_1_588CD27F71E12A8A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1663AF40)
#define CLASS_1_588CD27F71E12A8A_EQUALS_OFFSET UNITYSDK_OFFSET(0x1663AEB0)
#define CLASS_1_588CD27F71E12A8A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1663B040)
#define CLASS_1_588CD27F71E12A8A_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1663AE90)
#define CLASS_1_588CD27F71E12A8A_METHOD_1_148214CEA2F00B70_OFFSET UNITYSDK_OFFSET(0x1663B160)
#define CLASS_1_588CD27F71E12A8A_METHOD_1_6062BB7D9634C869_OFFSET UNITYSDK_OFFSET(0x1663B080)
#define CLASS_1_588CD27F71E12A8A_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1663AEA0)
#define CLASS_1_588CD27F71E12A8A__CTOR_OFFSET UNITYSDK_OFFSET(0x1663B240)

inline static constexpr unsigned int Class_1_588CD27F71E12A8A_TypeDefinitionIndex = 51966;

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

	::System::Boolean Equals(::Class_0_16E4307DCC419505_544* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_544*))((::PBYTE)hIl2Cpp + CLASS_1_588CD27F71E12A8A_EQUALS_OFFSET))(this, a1);
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
