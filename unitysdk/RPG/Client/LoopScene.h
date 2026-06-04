#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopScene_LoginSceneState.h"
#include "unitysdk/RPG/GameCore/LoopSceneMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AttachMoveObject; }
namespace RPG::Client { class LoopSceneMoveObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOPSCENE_ADDATTACHMOVEOBJECT_OFFSET UNITYSDK_OFFSET(0xBE80690)
#define RPG_CLIENT_LOOPSCENE_AWAKE_OFFSET UNITYSDK_OFFSET(0xBE80CC0)
#define RPG_CLIENT_LOOPSCENE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE808C0)
#define RPG_CLIENT_LOOPSCENE_FINDMOVEOBJECT_OFFSET UNITYSDK_OFFSET(0xBE80770)
#define RPG_CLIENT_LOOPSCENE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xBE80DF0)
#define RPG_CLIENT_LOOPSCENE_INIT_OFFSET UNITYSDK_OFFSET(0xBE7FFF0)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xBE81510)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_283DA224BE06DA9F_1_OFFSET UNITYSDK_OFFSET(0xBE80EF0)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0xBE80EA0)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xBE80DA0)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xBE81580)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0xBE80F40)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_CD28994AFE636FFF_OFFSET UNITYSDK_OFFSET(0xBE815D0)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_CFF8C0A3594A8E50_OFFSET UNITYSDK_OFFSET(0xBE81120)
#define RPG_CLIENT_LOOPSCENE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBE80D30)
#define RPG_CLIENT_LOOPSCENE_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0xBE80520)
#define RPG_CLIENT_LOOPSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0xBE81A80)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopScene_TypeDefinitionIndex = 64423;

	class LoopScene : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LoopScene_LoginSceneState CurState; // 0x18
		::UnityEngine::GameObject* SceneObj; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::AttachMoveObject*>* MoveObjs; // 0x28
		::System::Single MoveSpeed; // 0x30
		::System::Single StopMoveSpeed; // 0x34
		::System::Int32 SceneSize; // 0x38
		::System::Single SceneLength; // 0x3C
		::System::Single MaxRollbackLen; // 0x40
		::UnityEngine::Vector3 CameraDir; // 0x44
		::RPG::GameCore::LoopSceneMode LoopMode; // 0x50
		::System::Boolean TestMode; // 0x54
		::System::Single Field_5_11; // 0x58
		::System::Int32 Field_5_12; // 0x5C
		::System::Single Field_5_13; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_5_14; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::LoopSceneMoveObject*>* Field_5_15; // 0x70
		::UnityEngine::Transform* Field_5_16; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::LoopSceneMode a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LoopSceneMode, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ResetCamera(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_RESETCAMERA_OFFSET))(this, a1, a2);
		}

		::System::Void AddAttachMoveObject(::RPG::Client::AttachMoveObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachMoveObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_ADDATTACHMOVEOBJECT_OFFSET))(this, a1);
		}

		::RPG::Client::LoopSceneMoveObject* FindMoveObject(::System::String* a1)
		{
			return ((::RPG::Client::LoopSceneMoveObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_FINDMOVEOBJECT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_DISPOSE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_ONDESTROY_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_283DA224BE06DA9F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_283DA224BE06DA9F_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_5_283DA224BE06DA9F_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_283DA224BE06DA9F_1_OFFSET))(this);
		}

		::System::Void Method_5_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_5_CFF8C0A3594A8E50(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_CFF8C0A3594A8E50_OFFSET))(this, a1);
		}

		::System::Void Method_5_CD28994AFE636FFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_CD28994AFE636FFF_OFFSET))(this);
		}

		::System::Single Method_5_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Void Method_5_601EF3E7226D7DC2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_601EF3E7226D7DC2_OFFSET))(this);
		}
	};
}
