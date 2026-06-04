#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_398;

#define CLASS_1_1E0D8F050A60B68A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x138E7C80)
#define CLASS_1_1E0D8F050A60B68A_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x138E7CE0)
#define CLASS_1_1E0D8F050A60B68A_EQUALS_OFFSET UNITYSDK_OFFSET(0x138E7BD0)
#define CLASS_1_1E0D8F050A60B68A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x138E7DF0)
#define CLASS_1_1E0D8F050A60B68A_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x138E7BB0)
#define CLASS_1_1E0D8F050A60B68A_METHOD_1_09C3DBB624A973FC_OFFSET UNITYSDK_OFFSET(0x138E7EB0)
#define CLASS_1_1E0D8F050A60B68A_METHOD_1_E85CA50D622B92B5_OFFSET UNITYSDK_OFFSET(0x138E7E30)
#define CLASS_1_1E0D8F050A60B68A__CTOR_OFFSET UNITYSDK_OFFSET(0x138E7BC0)
#define CLASS_1_1E0D8F050A60B68A___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x138E7F30)
#define CLASS_1_1E0D8F050A60B68A___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x138E7F40)

inline static constexpr unsigned int Class_1_1E0D8F050A60B68A_TypeDefinitionIndex = 69993;

class Class_1_1E0D8F050A60B68A : public ::System::Object
{
public:
	::RPG::GameCore::IdleLiveAvatarPropertyType _PropertyType_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_1E0D8F050A60B68A__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::IdleLiveAvatarPropertyType get_PropertyType()
	{
		return ((::RPG::GameCore::IdleLiveAvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E0D8F050A60B68A_GET_PROPERTYTYPE_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_0_16E4307DCC419505_398* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_398*))((::PBYTE)hIl2Cpp + CLASS_1_1E0D8F050A60B68A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1E0D8F050A60B68A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1E0D8F050A60B68A*))((::PBYTE)hIl2Cpp + CLASS_1_1E0D8F050A60B68A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals_2(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1E0D8F050A60B68A_EQUALS_2_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E0D8F050A60B68A_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_E85CA50D622B92B5(::Class_1_1E0D8F050A60B68A* a1, ::Class_1_1E0D8F050A60B68A* a2)
	{
		return ((::System::Boolean(*)(::Class_1_1E0D8F050A60B68A*, ::Class_1_1E0D8F050A60B68A*))((::PBYTE)hIl2Cpp + CLASS_1_1E0D8F050A60B68A_METHOD_1_E85CA50D622B92B5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09C3DBB624A973FC(::Class_1_1E0D8F050A60B68A* a1, ::Class_1_1E0D8F050A60B68A* a2)
	{
		return ((::System::Boolean(*)(::Class_1_1E0D8F050A60B68A*, ::Class_1_1E0D8F050A60B68A*))((::PBYTE)hIl2Cpp + CLASS_1_1E0D8F050A60B68A_METHOD_1_09C3DBB624A973FC_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1E0D8F050A60B68A___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E0D8F050A60B68A___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
