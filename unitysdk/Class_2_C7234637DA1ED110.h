#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterAdventureSomatoType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_5C05B865B0E3235A_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventurePositionCheckConfig; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_C7234637DA1ED110_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A41770)
#define CLASS_2_C7234637DA1ED110_GET_POSAPDATIONTARGET_OFFSET UNITYSDK_OFFSET(0x9A42EC0)
#define CLASS_2_C7234637DA1ED110_METHOD_2_14E83132A0D8CA04_OFFSET UNITYSDK_OFFSET(0x9A428D0)
#define CLASS_2_C7234637DA1ED110_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9A41E30)
#define CLASS_2_C7234637DA1ED110_METHOD_2_329D75B50DCBA9D5_OFFSET UNITYSDK_OFFSET(0x9A42A60)
#define CLASS_2_C7234637DA1ED110_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x9A42E10)
#define CLASS_2_C7234637DA1ED110_METHOD_2_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x9A41900)
#define CLASS_2_C7234637DA1ED110_METHOD_2_79F82AA229668E10_OFFSET UNITYSDK_OFFSET(0x9A41EB0)
#define CLASS_2_C7234637DA1ED110_METHOD_2_AE0258B108DEC531_OFFSET UNITYSDK_OFFSET(0x9A42E30)
#define CLASS_2_C7234637DA1ED110_METHOD_2_B40F084418F05DE4_OFFSET UNITYSDK_OFFSET(0x9A42080)
#define CLASS_2_C7234637DA1ED110_METHOD_2_B6F8CAF32E7C337D_OFFSET UNITYSDK_OFFSET(0x9A41640)
#define CLASS_2_C7234637DA1ED110_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x9A41DE0)
#define CLASS_2_C7234637DA1ED110_METHOD_2_FA92B3E07A6BA5A6_OFFSET UNITYSDK_OFFSET(0x9A42E40)
#define CLASS_2_C7234637DA1ED110_SET_POSAPDATIONTARGET_OFFSET UNITYSDK_OFFSET(0x9A42ED0)
#define CLASS_2_C7234637DA1ED110_TICK_OFFSET UNITYSDK_OFFSET(0x9A417C0)
#define CLASS_2_C7234637DA1ED110__CTOR_OFFSET UNITYSDK_OFFSET(0x9A42EE0)
#define CLASS_2_C7234637DA1ED110___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9A42F30)

inline static constexpr unsigned int Class_2_C7234637DA1ED110_TypeDefinitionIndex = 52870;

class Class_2_C7234637DA1ED110 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_2_13()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C7234637DA1ED110_TypeDefinitionIndex)->GetStaticField(0x1B000);
	}
	::RPG::GameCore::AdventurePositionCheckConfig* Field_2_3; // 0x18
	::RPG::GameCore::CharacterVisibleComponent* Field_2_7; // 0x20
	::System::Action_1<::Class_2_C7234637DA1ED110*>* Field_2_1; // 0x28
	::RPG::GameCore::TransformComponent* Field_2_6; // 0x30
	::RPG::GameCore::AdventureCharacterController* Field_2_8; // 0x38
	::RPG::GameCore::GameEntity* _PosApdationTarget_k__BackingField; // 0x40
	::System::Action_1<::Class_2_C7234637DA1ED110*>* Field_2_2; // 0x48
	::System::Boolean Field_2_11; // 0x50
	::Struct_2_5C05B865B0E3235A_1 Field_2_12; // 0x54
	::System::Int32 Field_2_5; // 0x70
	::UnityEngine::Vector3 Field_2_9; // 0x74
	::RPG::GameCore::CharacterAdventureSomatoType Field_2_4; // 0x80
	::System::Single Field_2_10; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6F8CAF32E7C337D(::RPG::GameCore::AdventurePositionCheckConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventurePositionCheckConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_METHOD_2_B6F8CAF32E7C337D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_METHOD_2_DD784213055292FB_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_79F82AA229668E10(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_METHOD_2_79F82AA229668E10_OFFSET))(this, a1);
	}

	::System::Void Method_2_14E83132A0D8CA04(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_METHOD_2_14E83132A0D8CA04_OFFSET))(this, a1);
	}

	::System::Void Method_2_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_METHOD_2_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Boolean Method_2_B40F084418F05DE4(::UnityEngine::Vector3& a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_METHOD_2_B40F084418F05DE4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_329D75B50DCBA9D5(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_METHOD_2_329D75B50DCBA9D5_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_5C05B865B0E3235A_1 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_5C05B865B0E3235A_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_METHOD_2_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::RPG::GameCore::CharacterAdventureSomatoType Method_2_AE0258B108DEC531()
	{
		return ((::RPG::GameCore::CharacterAdventureSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_METHOD_2_AE0258B108DEC531_OFFSET))(this);
	}

	::System::Void Method_2_FA92B3E07A6BA5A6(::RPG::GameCore::CharacterAdventureSomatoType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterAdventureSomatoType))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_METHOD_2_FA92B3E07A6BA5A6_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_PosApdationTarget()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_GET_POSAPDATIONTARGET_OFFSET))(this);
	}

	::System::Void set_PosApdationTarget(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110_SET_POSAPDATIONTARGET_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C7234637DA1ED110___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
