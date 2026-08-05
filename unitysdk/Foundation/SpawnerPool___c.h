#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define FOUNDATION_SPAWNERPOOL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED903F0)
#define FOUNDATION_SPAWNERPOOL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED90430)
#define FOUNDATION_SPAWNERPOOL___C__GETACTIVESPAWNS_B__12_0_OFFSET UNITYSDK_OFFSET(0x1ED90440)

namespace Foundation
{
	inline static constexpr unsigned int SpawnerPool___c_TypeDefinitionIndex = 8401;

	class SpawnerPool___c : public ::System::Object
	{
	public:
		static ::Foundation::SpawnerPool___c** StaticGet___9()
		{
			return (::Foundation::SpawnerPool___c**)Il2CppClass::FromTypeDefinitionIndex(SpawnerPool___c_TypeDefinitionIndex)->GetStaticField(0x6BA0);
		}
		static ::System::Func_2<::UnityEngine::GameObject*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::UnityEngine::GameObject*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SpawnerPool___c_TypeDefinitionIndex)->GetStaticField(0x6BA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERPOOL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERPOOL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetActiveSpawns_b__12_0(::UnityEngine::GameObject* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERPOOL___C__GETACTIVESPAWNS_B__12_0_OFFSET))(this, x);
		}
	};
}
