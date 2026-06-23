#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraControlDataBase.h"
#include "unitysdk/Cinemachine/NapVirtualCameraCore_AnimTagGroup.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CINEMACHINE_NAPVIRTUALCAMERACORE_CHECHCAMERAMOVEMODESTACKEMPTY_OFFSET UNITYSDK_OFFSET(0x1E553E30)
#define CINEMACHINE_NAPVIRTUALCAMERACORE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E553CC0)
#define CINEMACHINE_NAPVIRTUALCAMERACORE_GET_M_ETARGETANIMSTATE_OFFSET UNITYSDK_OFFSET(0x1E553CA0)
#define CINEMACHINE_NAPVIRTUALCAMERACORE_GET_M_ETARGETDIRSTATE_OFFSET UNITYSDK_OFFSET(0x1E553C80)
#define CINEMACHINE_NAPVIRTUALCAMERACORE_ISCAMERAMOVEMODESTACKEMPTY_OFFSET UNITYSDK_OFFSET(0x1E553FE0)
#define CINEMACHINE_NAPVIRTUALCAMERACORE_PEEKCAMERAMOVEMODESTACK_OFFSET UNITYSDK_OFFSET(0x1E554270)
#define CINEMACHINE_NAPVIRTUALCAMERACORE_PICKCAMERAMOVEMODESTACK_OFFSET UNITYSDK_OFFSET(0x1E554000)
#define CINEMACHINE_NAPVIRTUALCAMERACORE_POPCAMERAMOVEMODESTACK_1_OFFSET UNITYSDK_OFFSET(0x1E5541D0)
#define CINEMACHINE_NAPVIRTUALCAMERACORE_POPCAMERAMOVEMODESTACK_OFFSET UNITYSDK_OFFSET(0x1E5540A0)
#define CINEMACHINE_NAPVIRTUALCAMERACORE_POPLASTANDPUSHCAMERAMOVEMODESTACK_OFFSET UNITYSDK_OFFSET(0x1E553F80)
#define CINEMACHINE_NAPVIRTUALCAMERACORE_PUSHCAMERAMOVEMODESTACK_OFFSET UNITYSDK_OFFSET(0x1E553E90)
#define CINEMACHINE_NAPVIRTUALCAMERACORE_SET_M_ETARGETANIMSTATE_OFFSET UNITYSDK_OFFSET(0x1E553CB0)
#define CINEMACHINE_NAPVIRTUALCAMERACORE_SET_M_ETARGETDIRSTATE_OFFSET UNITYSDK_OFFSET(0x1E553C90)
#define CINEMACHINE_NAPVIRTUALCAMERACORE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E554310)
#define CINEMACHINE_NAPVIRTUALCAMERACORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E553DB0)

namespace Cinemachine
{
	inline static constexpr unsigned int NapVirtualCameraCore_TypeDefinitionIndex = 34147;

	class NapVirtualCameraCore : public ::System::Object
	{
	public:
		static ::Cinemachine::NapVirtualCameraCore** StaticGet_sInstance()
		{
			return (::Cinemachine::NapVirtualCameraCore**)Il2CppClass::FromTypeDefinitionIndex(NapVirtualCameraCore_TypeDefinitionIndex)->GetStaticField(0x277E0);
		}
		// static const ::System::String* DefaultCameraMoveMode; // 0x0
		// static const ::System::String* OrbitDefaultCameraMoveMode; // 0x0
		// static const ::System::String* DragRotateDirectCameraMoveMode; // 0x0
		::System::Collections::Generic::Stack_1<::System::String*>* CameraMoveModeStack; // 0x10
		::Cinemachine::CameraControlDataBase Control; // 0x18
		::System::Int32 _m_eTargetDirState_k__BackingField; // 0x24
		::Cinemachine::NapVirtualCameraCore_AnimTagGroup _m_eTargetAnimState_k__BackingField; // 0x28
		::Cinemachine::CameraControlDataBase LastControl; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE__CCTOR_OFFSET))();
		}

		::System::Int32 get_m_eTargetDirState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE_GET_M_ETARGETDIRSTATE_OFFSET))(this);
		}

		::System::Void set_m_eTargetDirState(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE_SET_M_ETARGETDIRSTATE_OFFSET))(this, value);
		}

		::Cinemachine::NapVirtualCameraCore_AnimTagGroup get_m_eTargetAnimState()
		{
			return ((::Cinemachine::NapVirtualCameraCore_AnimTagGroup(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE_GET_M_ETARGETANIMSTATE_OFFSET))(this);
		}

		::System::Void set_m_eTargetAnimState(::Cinemachine::NapVirtualCameraCore_AnimTagGroup value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::NapVirtualCameraCore_AnimTagGroup))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE_SET_M_ETARGETANIMSTATE_OFFSET))(this, value);
		}

		static ::Cinemachine::NapVirtualCameraCore* get_Instance()
		{
			return ((::Cinemachine::NapVirtualCameraCore*(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE_GET_INSTANCE_OFFSET))();
		}

		::System::Void ChechCameraMoveModeStackEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE_CHECHCAMERAMOVEMODESTACKEMPTY_OFFSET))(this);
		}

		::System::Void PushCameraMoveModeStack(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE_PUSHCAMERAMOVEMODESTACK_OFFSET))(this, name);
		}

		::System::Void PopLastAndPushCameraMoveModeStack(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE_POPLASTANDPUSHCAMERAMOVEMODESTACK_OFFSET))(this, name);
		}

		::System::Boolean IsCameraMoveModeStackEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE_ISCAMERAMOVEMODESTACKEMPTY_OFFSET))(this);
		}

		::System::String* PickCameraMoveModeStack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE_PICKCAMERAMOVEMODESTACK_OFFSET))(this);
		}

		::System::Void PopCameraMoveModeStack(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE_POPCAMERAMOVEMODESTACK_OFFSET))(this, name);
		}

		::System::Void PopCameraMoveModeStack_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE_POPCAMERAMOVEMODESTACK_1_OFFSET))(this);
		}

		::System::String* PeekCameraMoveModeStack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALCAMERACORE_PEEKCAMERAMOVEMODESTACK_OFFSET))(this);
		}
	};
}
