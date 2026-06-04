#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1150;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xB0EB580)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_COLLECTCAMERAS_OFFSET UNITYSDK_OFFSET(0xB0EC2A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0EAEA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_FINDANCHOR_OFFSET UNITYSDK_OFFSET(0xB0EB4C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_GETGAMEPROXY_OFFSET UNITYSDK_OFFSET(0xB0EC1D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xB0EAAC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_LOCKSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0xB0EBC60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_MARKWILLDESTROY_OFFSET UNITYSDK_OFFSET(0xB0EC260)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_METHOD_6_482F98D76EE0F67C_OFFSET UNITYSDK_OFFSET(0xB0EBBC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_METHOD_6_4F07C36EBDB60535_OFFSET UNITYSDK_OFFSET(0xB0EB310)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_METHOD_6_6214CDDBF9243482_OFFSET UNITYSDK_OFFSET(0xB0EBA30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_METHOD_6_9C22EA3AE57EEC9B_OFFSET UNITYSDK_OFFSET(0xB0EC4D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_METHOD_6_ABF8E9D26BDA5D86_OFFSET UNITYSDK_OFFSET(0xB0EAD50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_METHOD_6_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xB0EB8A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_SETGAMEPROXY_OFFSET UNITYSDK_OFFSET(0xB0EC0A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_SETONPAUSESTATECHANGED_OFFSET UNITYSDK_OFFSET(0xB0EC210)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xB0EBE20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xB0EBF40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_UNLOCKSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0xB0EB2A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xB0EC6D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0EC700)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xB0EC6F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xB0EC710)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int HipplenGameBoard_TypeDefinitionIndex = 70411;

	class HipplenGameBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* _CameraList; // 0x48
		::Il2CppArray<::System::Single>* Field_6_1; // 0x50
		::RPG::Client::AttachPointMapping* Field_6_2; // 0x58
		::Cinemachine::CinemachineVirtualCameraBase* Field_6_3; // 0x60
		::System::Single Field_6_4; // 0x68
		::System::Single Field_6_5; // 0x6C
		::Class_0_16E4307DCC419505_1150* Field_6_6; // 0x70
		::System::Single Field_6_7; // 0x78
		::System::Boolean Field_6_8; // 0x7C
		::System::Boolean Field_6_9; // 0x7D
		::System::Action_1<::System::Boolean>* Field_6_10; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Transform* FindAnchor(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_FINDANCHOR_OFFSET))(this, a1);
		}

		::System::Void ActiveVirtualCamera(::System::String* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_ACTIVEVIRTUALCAMERA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LockStreamingSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_LOCKSTREAMINGSOURCE_OFFSET))(this);
		}

		::System::Void UnlockStreamingSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_UNLOCKSTREAMINGSOURCE_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void SetGameProxy(::Class_0_16E4307DCC419505_1150* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1150*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_SETGAMEPROXY_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_1150* GetGameProxy()
		{
			return ((::Class_0_16E4307DCC419505_1150*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_GETGAMEPROXY_OFFSET))(this);
		}

		::System::Void SetOnPauseStateChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_SETONPAUSESTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void MarkWillDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_MARKWILLDESTROY_OFFSET))(this);
		}

		::System::Void CollectCameras()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_COLLECTCAMERAS_OFFSET))(this);
		}

		::System::Void Method_6_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_METHOD_6_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::ValueTuple_2<::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single> Method_6_6214CDDBF9243482(::System::String* a1)
		{
			return ((::System::ValueTuple_2<::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_METHOD_6_6214CDDBF9243482_OFFSET))(this, a1);
		}

		::System::Void Method_6_4F07C36EBDB60535(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_METHOD_6_4F07C36EBDB60535_OFFSET))(this, a1);
		}

		::System::Void Method_6_ABF8E9D26BDA5D86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_METHOD_6_ABF8E9D26BDA5D86_OFFSET))(this);
		}

		::System::Void Method_6_9C22EA3AE57EEC9B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_METHOD_6_9C22EA3AE57EEC9B_OFFSET))(this, a1);
		}

		::System::Void Method_6_482F98D76EE0F67C(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_METHOD_6_482F98D76EE0F67C_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, a1);
		}
	};
}
