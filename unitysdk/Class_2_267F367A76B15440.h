#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ShowGuideFollow3D; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_267F367A76B15440_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181A7780)
#define CLASS_2_267F367A76B15440_METHOD_2_22DB9B174D77490F_OFFSET UNITYSDK_OFFSET(0x181A7F40)
#define CLASS_2_267F367A76B15440_METHOD_2_B1DB22DD9CFD65C2_OFFSET UNITYSDK_OFFSET(0x181A7930)
#define CLASS_2_267F367A76B15440_METHOD_2_BE94C4288791E2D3_OFFSET UNITYSDK_OFFSET(0x181A7A50)
#define CLASS_2_267F367A76B15440_METHOD_2_C998BD122A05946B_OFFSET UNITYSDK_OFFSET(0x181A7DB0)
#define CLASS_2_267F367A76B15440_METHOD_2_CE8A99C3F0F8B77D_OFFSET UNITYSDK_OFFSET(0x181A7AE0)
#define CLASS_2_267F367A76B15440_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x181A77C0)
#define CLASS_2_267F367A76B15440_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x181A79A0)
#define CLASS_2_267F367A76B15440_TICK_OFFSET UNITYSDK_OFFSET(0x181A79F0)
#define CLASS_2_267F367A76B15440__CTOR_OFFSET UNITYSDK_OFFSET(0x181A7770)

inline static constexpr unsigned int Class_2_267F367A76B15440_TypeDefinitionIndex = 56029;

class Class_2_267F367A76B15440 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ShowGuideFollow3D* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideFollow3D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideFollow3D*))((::PBYTE)hIl2Cpp + CLASS_2_267F367A76B15440__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_267F367A76B15440_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_267F367A76B15440_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_267F367A76B15440_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_267F367A76B15440_TICK_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_B1DB22DD9CFD65C2()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_267F367A76B15440_METHOD_2_B1DB22DD9CFD65C2_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_BE94C4288791E2D3()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_267F367A76B15440_METHOD_2_BE94C4288791E2D3_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_CE8A99C3F0F8B77D()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_267F367A76B15440_METHOD_2_CE8A99C3F0F8B77D_OFFSET))(this);
	}

	::System::Boolean Method_2_22DB9B174D77490F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_267F367A76B15440_METHOD_2_22DB9B174D77490F_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_C998BD122A05946B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_267F367A76B15440_METHOD_2_C998BD122A05946B_OFFSET))(this, a1);
	}
};
