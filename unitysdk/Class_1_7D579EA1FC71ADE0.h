#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_834;
class Class_1_F3C45649FE8EF3A3;
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_7D579EA1FC71ADE0_GET_OFFSET UNITYSDK_OFFSET(0xDA14AB0)
#define CLASS_1_7D579EA1FC71ADE0_METHOD_1_1470AED6F2704975_OFFSET UNITYSDK_OFFSET(0xDA14B80)
#define CLASS_1_7D579EA1FC71ADE0_METHOD_1_3621DAF3BFFC31D6_OFFSET UNITYSDK_OFFSET(0xD78CB30)
#define CLASS_1_7D579EA1FC71ADE0_METHOD_1_3D9BF7E6ED9A94F5_OFFSET UNITYSDK_OFFSET(0xDA14D30)
#define CLASS_1_7D579EA1FC71ADE0_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xD78CAB0)
#define CLASS_1_7D579EA1FC71ADE0_PRELOAD_OFFSET UNITYSDK_OFFSET(0xDA149D0)
#define CLASS_1_7D579EA1FC71ADE0_RETURN_OFFSET UNITYSDK_OFFSET(0xDA14C90)
#define CLASS_1_7D579EA1FC71ADE0__CTOR_OFFSET UNITYSDK_OFFSET(0xDA14E30)

inline static constexpr unsigned int Class_1_7D579EA1FC71ADE0_TypeDefinitionIndex = 62320;

class Class_1_7D579EA1FC71ADE0 : public ::System::Object
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::System::Collections::Generic::Stack_1<::Class_1_F3C45649FE8EF3A3*>* GCIKKMGIPIO; // 0x10
	::UnityEngine::Transform* GICBFAEGNJG; // 0x18
	::Class_0_16E4307DCC419505_834* IPBJJAJCCKD; // 0x20
	::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x28
	::System::Int32 NJFKHPIHDEF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D579EA1FC71ADE0__CTOR_OFFSET))(this);
	}

	static ::Class_1_7D579EA1FC71ADE0* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_7D579EA1FC71ADE0*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D579EA1FC71ADE0_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Void Method_1_3621DAF3BFFC31D6(::Class_0_16E4307DCC419505_834* a1, ::RPG::Client::UIPrefabLoader* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_834*, ::RPG::Client::UIPrefabLoader*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_7D579EA1FC71ADE0_METHOD_1_3621DAF3BFFC31D6_OFFSET))(this, a1, a2, a3);
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
