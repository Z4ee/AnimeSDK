#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define CLASS_1_59CD320668F6142D_METHOD_1_84929BA449B7D1DD_OFFSET UNITYSDK_OFFSET(0x15FF5640)
#define CLASS_1_59CD320668F6142D_METHOD_1_93ADF943142C442C_OFFSET UNITYSDK_OFFSET(0x15FF56E0)
#define CLASS_1_59CD320668F6142D__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FF57D0)
#define CLASS_1_59CD320668F6142D__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF57C0)

inline static constexpr unsigned int Class_1_59CD320668F6142D_TypeDefinitionIndex = 57287;

class Class_1_59CD320668F6142D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::UnityEngine::AI::NavMeshPath*>** StaticGet_CEHKIFGGMGI()
	{
		return (::System::Collections::Generic::Queue_1<::UnityEngine::AI::NavMeshPath*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_59CD320668F6142D_TypeDefinitionIndex)->GetStaticField(0x45F10);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59CD320668F6142D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_59CD320668F6142D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_84929BA449B7D1DD(::UnityEngine::AI::NavMeshPath* a1)
	{
		return ((::System::Void(*)(::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + CLASS_1_59CD320668F6142D_METHOD_1_84929BA449B7D1DD_OFFSET))(a1);
	}

	static ::UnityEngine::AI::NavMeshPath* Method_1_93ADF943142C442C()
	{
		return ((::UnityEngine::AI::NavMeshPath*(*)())((::PBYTE)hIl2Cpp + CLASS_1_59CD320668F6142D_METHOD_1_93ADF943142C442C_OFFSET))();
	}
};
