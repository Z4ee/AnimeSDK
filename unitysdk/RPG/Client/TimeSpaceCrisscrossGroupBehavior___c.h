#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class GameObjectAudio; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE298440)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE298480)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTAUDIOS_B__36_0_OFFSET UNITYSDK_OFFSET(0xE2985D0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTAUDIOS_B__36_1_OFFSET UNITYSDK_OFFSET(0xE2985F0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTCOLLIDERTO_B__31_0_OFFSET UNITYSDK_OFFSET(0xE298560)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTCOLLIDERTO_B__31_1_OFFSET UNITYSDK_OFFSET(0xE298580)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTRENDERERSTO_B__28_0_OFFSET UNITYSDK_OFFSET(0xE298490)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex = 70203;

	class TimeSpaceCrisscrossGroupBehavior___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::Renderer*>** StaticGet___9__28_0()
		{
			return (::System::Predicate_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x1BB50);
		}
		static ::RPG::Client::TimeSpaceCrisscrossGroupBehavior___c** StaticGet___9()
		{
			return (::RPG::Client::TimeSpaceCrisscrossGroupBehavior___c**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x1BB58);
		}
		static ::System::Predicate_1<::RPG::Client::GameObjectAudio*>** StaticGet___9__36_0()
		{
			return (::System::Predicate_1<::RPG::Client::GameObjectAudio*>**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x1BB60);
		}
		static ::System::Predicate_1<::RPG::Client::GameObjectAudio*>** StaticGet___9__36_1()
		{
			return (::System::Predicate_1<::RPG::Client::GameObjectAudio*>**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x1BB68);
		}
		static ::System::Predicate_1<::UnityEngine::Collider*>** StaticGet___9__31_0()
		{
			return (::System::Predicate_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x1BB70);
		}
		static ::System::Func_2<::UnityEngine::Collider*, ::UnityEngine::Bounds>** StaticGet___9__31_1()
		{
			return (::System::Func_2<::UnityEngine::Collider*, ::UnityEngine::Bounds>**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex)->GetStaticField(0x1BB78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectRenderersTo_b__28_0(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTRENDERERSTO_B__28_0_OFFSET))(this, a1);
		}

		::System::Boolean __CollectColliderTo_b__31_0(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTCOLLIDERTO_B__31_0_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds __CollectColliderTo_b__31_1(::UnityEngine::Collider* a1)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTCOLLIDERTO_B__31_1_OFFSET))(this, a1);
		}

		::System::Boolean __CollectAudios_b__36_0(::RPG::Client::GameObjectAudio* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GameObjectAudio*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTAUDIOS_B__36_0_OFFSET))(this, a1);
		}

		::System::Boolean __CollectAudios_b__36_1(::RPG::Client::GameObjectAudio* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GameObjectAudio*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTAUDIOS_B__36_1_OFFSET))(this, a1);
		}
	};
}
