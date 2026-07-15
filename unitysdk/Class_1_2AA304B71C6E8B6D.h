#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_2AA304B71C6E8B6D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1604CD20)
#define CLASS_1_2AA304B71C6E8B6D_EQUALS_OFFSET UNITYSDK_OFFSET(0x1604CC40)
#define CLASS_1_2AA304B71C6E8B6D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1604CDB0)
#define CLASS_1_2AA304B71C6E8B6D_METHOD_1_148214CEA2F00B70_OFFSET UNITYSDK_OFFSET(0x1604CF40)
#define CLASS_1_2AA304B71C6E8B6D_METHOD_1_6062BB7D9634C869_OFFSET UNITYSDK_OFFSET(0x1604CE60)
#define CLASS_1_2AA304B71C6E8B6D__CTOR_OFFSET UNITYSDK_OFFSET(0x1604D020)

inline static constexpr unsigned int Class_1_2AA304B71C6E8B6D_TypeDefinitionIndex = 68312;

class Class_1_2AA304B71C6E8B6D : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19
	::System::Boolean Field_1_3; // 0x1A
	::UnityEngine::Vector2 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AA304B71C6E8B6D__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_2AA304B71C6E8B6D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2AA304B71C6E8B6D*))((::PBYTE)hIl2Cpp + CLASS_1_2AA304B71C6E8B6D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2AA304B71C6E8B6D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AA304B71C6E8B6D_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_6062BB7D9634C869(::Class_1_2AA304B71C6E8B6D* a1, ::Class_1_2AA304B71C6E8B6D* a2)
	{
		return ((::System::Boolean(*)(::Class_1_2AA304B71C6E8B6D*, ::Class_1_2AA304B71C6E8B6D*))((::PBYTE)hIl2Cpp + CLASS_1_2AA304B71C6E8B6D_METHOD_1_6062BB7D9634C869_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_148214CEA2F00B70(::Class_1_2AA304B71C6E8B6D* a1, ::Class_1_2AA304B71C6E8B6D* a2)
	{
		return ((::System::Boolean(*)(::Class_1_2AA304B71C6E8B6D*, ::Class_1_2AA304B71C6E8B6D*))((::PBYTE)hIl2Cpp + CLASS_1_2AA304B71C6E8B6D_METHOD_1_148214CEA2F00B70_OFFSET))(a1, a2);
	}
};
