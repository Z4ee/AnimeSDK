#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_640;
class Class_1_F3C45649FE8EF3A3;
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_7D579EA1FC71ADE0_GET_OFFSET UNITYSDK_OFFSET(0xAA3B2F0)
#define CLASS_1_7D579EA1FC71ADE0_METHOD_1_1470AED6F2704975_OFFSET UNITYSDK_OFFSET(0xAA3B3C0)
#define CLASS_1_7D579EA1FC71ADE0_METHOD_1_2F8C1CDF056C52FC_OFFSET UNITYSDK_OFFSET(0xAA3AFC0)
#define CLASS_1_7D579EA1FC71ADE0_METHOD_1_3621DAF3BFFC31D6_OFFSET UNITYSDK_OFFSET(0xAA3B1B0)
#define CLASS_1_7D579EA1FC71ADE0_METHOD_1_3D9BF7E6ED9A94F5_OFFSET UNITYSDK_OFFSET(0xAA3B570)
#define CLASS_1_7D579EA1FC71ADE0_PRELOAD_OFFSET UNITYSDK_OFFSET(0xAA3B220)
#define CLASS_1_7D579EA1FC71ADE0_RETURN_OFFSET UNITYSDK_OFFSET(0xAA3B4D0)
#define CLASS_1_7D579EA1FC71ADE0__CTOR_OFFSET UNITYSDK_OFFSET(0xAA3B100)

inline static constexpr unsigned int Class_1_7D579EA1FC71ADE0_TypeDefinitionIndex = 57490;

class Class_1_7D579EA1FC71ADE0 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::UnityEngine::Transform* Field_1_3; // 0x10
	::Class_0_16E4307DCC419505_640* Field_1_1; // 0x18
	::RPG::Client::UIPrefabLoader* Field_1_2; // 0x20
	::System::Collections::Generic::Stack_1<::Class_1_F3C45649FE8EF3A3*>* Field_1_4; // 0x28
	::System::Int32 Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D579EA1FC71ADE0__CTOR_OFFSET))(this);
	}

	static ::Class_1_7D579EA1FC71ADE0* Method_1_2F8C1CDF056C52FC()
	{
		return ((::Class_1_7D579EA1FC71ADE0*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D579EA1FC71ADE0_METHOD_1_2F8C1CDF056C52FC_OFFSET))();
	}

	::System::Void Method_1_3621DAF3BFFC31D6(::Class_0_16E4307DCC419505_640* a1, ::RPG::Client::UIPrefabLoader* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_640*, ::RPG::Client::UIPrefabLoader*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_7D579EA1FC71ADE0_METHOD_1_3621DAF3BFFC31D6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void PreLoad(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D579EA1FC71ADE0_PRELOAD_OFFSET))(this, a1);
	}

	::Class_1_F3C45649FE8EF3A3* Get()
	{
		return ((::Class_1_F3C45649FE8EF3A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D579EA1FC71ADE0_GET_OFFSET))(this);
	}

	::System::Void Return(::Class_1_F3C45649FE8EF3A3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3C45649FE8EF3A3*))((::PBYTE)hIl2Cpp + CLASS_1_7D579EA1FC71ADE0_RETURN_OFFSET))(this, a1);
	}

	::Class_1_F3C45649FE8EF3A3* Method_1_1470AED6F2704975()
	{
		return ((::Class_1_F3C45649FE8EF3A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D579EA1FC71ADE0_METHOD_1_1470AED6F2704975_OFFSET))(this);
	}

	::System::Void Method_1_3D9BF7E6ED9A94F5(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_7D579EA1FC71ADE0_METHOD_1_3D9BF7E6ED9A94F5_OFFSET))(this, a1);
	}
};
