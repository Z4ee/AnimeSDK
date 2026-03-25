#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_6F74A854E0DC3019_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8B613A0)
#define CLASS_1_6F74A854E0DC3019_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8B60A30)
#define CLASS_1_6F74A854E0DC3019_METHOD_1_03752E2BF715F912_OFFSET UNITYSDK_OFFSET(0x8B60C30)
#define CLASS_1_6F74A854E0DC3019_METHOD_1_166A2A5D834E4571_OFFSET UNITYSDK_OFFSET(0x8B61B60)
#define CLASS_1_6F74A854E0DC3019_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x8B622D0)
#define CLASS_1_6F74A854E0DC3019_METHOD_1_3BE5DBAE268F9022_OFFSET UNITYSDK_OFFSET(0x8B61660)
#define CLASS_1_6F74A854E0DC3019_METHOD_1_4656AB2F760EF418_OFFSET UNITYSDK_OFFSET(0x8B618D0)
#define CLASS_1_6F74A854E0DC3019_METHOD_1_ABFDCAB2EBE17174_OFFSET UNITYSDK_OFFSET(0x8B613F0)
#define CLASS_1_6F74A854E0DC3019_METHOD_1_CAD72CA6EDE4556D_OFFSET UNITYSDK_OFFSET(0x8B61D60)
#define CLASS_1_6F74A854E0DC3019_METHOD_1_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0x8B61E30)
#define CLASS_1_6F74A854E0DC3019_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x8B616F0)
#define CLASS_1_6F74A854E0DC3019__CTOR_OFFSET UNITYSDK_OFFSET(0x8B60780)

inline static constexpr unsigned int Class_1_6F74A854E0DC3019_TypeDefinitionIndex = 62752;

class Class_1_6F74A854E0DC3019 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_5; // 0x0
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x10
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x18
	::Entitas::ICollector_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_4; // 0x20
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x28
	::System::Boolean Field_1_2; // 0x30

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_ABFDCAB2EBE17174()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019_METHOD_1_ABFDCAB2EBE17174_OFFSET))(this);
	}

	::System::Void Method_1_03752E2BF715F912(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019_METHOD_1_03752E2BF715F912_OFFSET))(this, a1);
	}

	::System::Void Method_1_4656AB2F760EF418(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019_METHOD_1_4656AB2F760EF418_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_166A2A5D834E4571(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019_METHOD_1_166A2A5D834E4571_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CAD72CA6EDE4556D(::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>*, ::Class_2_9DD8A46984F1AFFD*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019_METHOD_1_CAD72CA6EDE4556D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3BE5DBAE268F9022()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019_METHOD_1_3BE5DBAE268F9022_OFFSET))(this);
	}

	::System::Void Method_1_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019_METHOD_1_D545E2F706415F81_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F74A854E0DC3019_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}
};
