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

#define RPG_CLIENT_LOOPSCENE_ADDATTACHMOVEOBJECT_OFFSET UNITYSDK_OFFSET(0xA71C390)
#define RPG_CLIENT_LOOPSCENE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA71C8F0)
#define RPG_CLIENT_LOOPSCENE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA71C500)
#define RPG_CLIENT_LOOPSCENE_FINDMOVEOBJECT_OFFSET UNITYSDK_OFFSET(0xA71C420)
#define RPG_CLIENT_LOOPSCENE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA71CA20)
#define RPG_CLIENT_LOOPSCENE_INIT_OFFSET UNITYSDK_OFFSET(0xA71BE00)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA71D100)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_596FD8239C601ED8_OFFSET UNITYSDK_OFFSET(0xA71D1C0)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_9D3B43E6609D6005_OFFSET UNITYSDK_OFFSET(0xA71CD20)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xA71D170)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xA71CB70)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_D9EF75A2D048B8A1_1_OFFSET UNITYSDK_OFFSET(0xA71CB20)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xA71CAD0)
#define RPG_CLIENT_LOOPSCENE_METHOD_5_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xA71C9D0)
#define RPG_CLIENT_LOOPSCENE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA71C960)
#define RPG_CLIENT_LOOPSCENE_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0xA71C220)
#define RPG_CLIENT_LOOPSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0xA71D660)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopScene_TypeDefinitionIndex = 63503;

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

		::System::Void Method_5_D9EF75A2D048B8A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_D9EF75A2D048B8A1_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_5_D9EF75A2D048B8A1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_D9EF75A2D048B8A1_1_OFFSET))(this);
		}

		::System::Void Method_5_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Void Method_5_9D3B43E6609D6005(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_9D3B43E6609D6005_OFFSET))(this, a1);
		}

		::System::Void Method_5_596FD8239C601ED8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_596FD8239C601ED8_OFFSET))(this);
		}

		::System::Single Method_5_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Void Method_5_F79D5EC57FBF426E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPSCENE_METHOD_5_F79D5EC57FBF426E_OFFSET))(this);
		}
	};
}
