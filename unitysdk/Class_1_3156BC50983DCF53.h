#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FiveDimDashOrbConfig; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_3156BC50983DCF53_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12801200)
#define CLASS_1_3156BC50983DCF53_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12801760)
#define CLASS_1_3156BC50983DCF53_METHOD_1_1E293D9A74FE7D66_OFFSET UNITYSDK_OFFSET(0x12801520)
#define CLASS_1_3156BC50983DCF53_METHOD_1_1F47CAD86E555F5A_OFFSET UNITYSDK_OFFSET(0x128017B0)
#define CLASS_1_3156BC50983DCF53_METHOD_1_32098C84BF982501_OFFSET UNITYSDK_OFFSET(0x128026E0)
#define CLASS_1_3156BC50983DCF53_METHOD_1_7E9C4D81D04C3024_OFFSET UNITYSDK_OFFSET(0x12801360)
#define CLASS_1_3156BC50983DCF53_METHOD_1_A4A982D612C90D94_OFFSET UNITYSDK_OFFSET(0x12801AA0)
#define CLASS_1_3156BC50983DCF53_METHOD_1_A65660919EFBB6D6_OFFSET UNITYSDK_OFFSET(0x12801C30)
#define CLASS_1_3156BC50983DCF53_METHOD_1_A7E8818FE63D2EFA_OFFSET UNITYSDK_OFFSET(0x12802620)
#define CLASS_1_3156BC50983DCF53_METHOD_1_CB6C167125F4E2EC_OFFSET UNITYSDK_OFFSET(0x12802370)
#define CLASS_1_3156BC50983DCF53_METHOD_1_EE78074FBCC8514A_OFFSET UNITYSDK_OFFSET(0x12802B10)
#define CLASS_1_3156BC50983DCF53_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x128019B0)
#define CLASS_1_3156BC50983DCF53__CTOR_OFFSET UNITYSDK_OFFSET(0x12800F80)

inline static constexpr unsigned int Class_1_3156BC50983DCF53_TypeDefinitionIndex = 70786;

class Class_1_3156BC50983DCF53 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::Single Field_1_5; // 0x0
	::Entitas::ICollector_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x10
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x18
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x20
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x28

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53_EXECUTE_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_1F47CAD86E555F5A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53_METHOD_1_1F47CAD86E555F5A_OFFSET))(this);
	}

	::System::Void Method_1_7E9C4D81D04C3024()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53_METHOD_1_7E9C4D81D04C3024_OFFSET))(this);
	}

	::System::Void Method_1_A4A982D612C90D94(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53_METHOD_1_A4A982D612C90D94_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E293D9A74FE7D66(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53_METHOD_1_1E293D9A74FE7D66_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB6C167125F4E2EC(::Class_2_9DD8A46984F1AFFD* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53_METHOD_1_CB6C167125F4E2EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A65660919EFBB6D6(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53_METHOD_1_A65660919EFBB6D6_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelTriggerInfo* Method_1_A7E8818FE63D2EFA(::RPG::GameCore::FiveDimDashOrbConfig* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::RPG::GameCore::FiveDimDashOrbConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53_METHOD_1_A7E8818FE63D2EFA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_32098C84BF982501(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53_METHOD_1_32098C84BF982501_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EE78074FBCC8514A(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_3156BC50983DCF53_METHOD_1_EE78074FBCC8514A_OFFSET))(this, a1, a2);
	}
};
