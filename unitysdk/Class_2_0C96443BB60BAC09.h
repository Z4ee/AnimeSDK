#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayerRemoteControlOtherEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define CLASS_2_0C96443BB60BAC09_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1196F8A0)
#define CLASS_2_0C96443BB60BAC09_METHOD_2_88F160FF9C4F5A26_OFFSET UNITYSDK_OFFSET(0x1196F250)
#define CLASS_2_0C96443BB60BAC09_METHOD_2_986744C7C7BF5250_OFFSET UNITYSDK_OFFSET(0x1196F1C0)
#define CLASS_2_0C96443BB60BAC09_METHOD_2_A0BB69D975663BF3_OFFSET UNITYSDK_OFFSET(0x1196F670)
#define CLASS_2_0C96443BB60BAC09_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1196E500)
#define CLASS_2_0C96443BB60BAC09_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1196F610)
#define CLASS_2_0C96443BB60BAC09_TICK_OFFSET UNITYSDK_OFFSET(0x1196F8E0)
#define CLASS_2_0C96443BB60BAC09__CTOR_OFFSET UNITYSDK_OFFSET(0x1196E4F0)

inline static constexpr unsigned int Class_2_0C96443BB60BAC09_TypeDefinitionIndex = 47029;

class Class_2_0C96443BB60BAC09 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayerRemoteControlOtherEntity* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayerRemoteControlOtherEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayerRemoteControlOtherEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0C96443BB60BAC09__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C96443BB60BAC09_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C96443BB60BAC09_ONTASKRESET_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_986744C7C7BF5250(::System::Nullable_1<::UnityEngine::Vector3> a1, ::System::Nullable_1<::UnityEngine::Quaternion> a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + CLASS_2_0C96443BB60BAC09_METHOD_2_986744C7C7BF5250_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_88F160FF9C4F5A26(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Nullable_1<::UnityEngine::Vector3> a5, ::System::Nullable_1<::UnityEngine::Quaternion> a6, ::System::String* a7, ::System::Nullable_1<::UnityEngine::Vector3> a8, ::System::Nullable_1<::UnityEngine::Quaternion> a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::String*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C96443BB60BAC09_METHOD_2_88F160FF9C4F5A26_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::System::Void Method_2_A0BB69D975663BF3(::System::Boolean a1, ::System::Nullable_1<::UnityEngine::Vector3> a2, ::System::Nullable_1<::UnityEngine::Quaternion> a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + CLASS_2_0C96443BB60BAC09_METHOD_2_A0BB69D975663BF3_OFFSET))(a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C96443BB60BAC09_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0C96443BB60BAC09_TICK_OFFSET))(this, a1);
	}
};
