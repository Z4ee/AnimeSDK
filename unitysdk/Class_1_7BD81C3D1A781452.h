#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_398;

#define CLASS_1_7BD81C3D1A781452_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x142FC6F0)
#define CLASS_1_7BD81C3D1A781452_EQUALS_OFFSET UNITYSDK_OFFSET(0x142FC660)
#define CLASS_1_7BD81C3D1A781452_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x142FC7F0)
#define CLASS_1_7BD81C3D1A781452_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x142FC640)
#define CLASS_1_7BD81C3D1A781452_METHOD_1_09C3DBB624A973FC_OFFSET UNITYSDK_OFFSET(0x142FC8B0)
#define CLASS_1_7BD81C3D1A781452_METHOD_1_E85CA50D622B92B5_OFFSET UNITYSDK_OFFSET(0x142FC830)
#define CLASS_1_7BD81C3D1A781452_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x142FC650)
#define CLASS_1_7BD81C3D1A781452__CTOR_OFFSET UNITYSDK_OFFSET(0x142FC930)
#define CLASS_1_7BD81C3D1A781452___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x142FC940)
#define CLASS_1_7BD81C3D1A781452___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x142FC950)

inline static constexpr unsigned int Class_1_7BD81C3D1A781452_TypeDefinitionIndex = 48589;

class Class_1_7BD81C3D1A781452 : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BD81C3D1A781452__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AvatarPropertyType get_PropertyType()
	{
		return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BD81C3D1A781452_GET_PROPERTYTYPE_OFFSET))(this);
	}

	::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_7BD81C3D1A781452_SET_PROPERTYTYPE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Class_0_16E4307DCC419505_398* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_398*))((::PBYTE)hIl2Cpp + CLASS_1_7BD81C3D1A781452_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7BD81C3D1A781452_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BD81C3D1A781452_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_E85CA50D622B92B5(::Class_1_7BD81C3D1A781452* a1, ::Class_1_7BD81C3D1A781452* a2)
	{
		return ((::System::Boolean(*)(::Class_1_7BD81C3D1A781452*, ::Class_1_7BD81C3D1A781452*))((::PBYTE)hIl2Cpp + CLASS_1_7BD81C3D1A781452_METHOD_1_E85CA50D622B92B5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09C3DBB624A973FC(::Class_1_7BD81C3D1A781452* a1, ::Class_1_7BD81C3D1A781452* a2)
	{
		return ((::System::Boolean(*)(::Class_1_7BD81C3D1A781452*, ::Class_1_7BD81C3D1A781452*))((::PBYTE)hIl2Cpp + CLASS_1_7BD81C3D1A781452_METHOD_1_09C3DBB624A973FC_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7BD81C3D1A781452___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BD81C3D1A781452___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
