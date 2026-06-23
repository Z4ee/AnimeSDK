#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineImpulseManager_ImpulseEvent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ADDIMPULSEEVENT_OFFSET UNITYSDK_OFFSET(0x1E40EE20)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E40E730)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_GETIMPULSEAT_OFFSET UNITYSDK_OFFSET(0x1E40E820)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1E40ECA0)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_GET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x1E40EC80)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E40E6A0)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x1E40E710)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_NEWIMPULSEEVENT_OFFSET UNITYSDK_OFFSET(0x1E40ED90)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_SET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x1E40EC90)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E40F000)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E40E690)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseManager_TypeDefinitionIndex = 34181;

	class CinemachineImpulseManager : public ::System::Object
	{
	public:
		static ::Cinemachine::CinemachineImpulseManager** StaticGet_sInstance()
		{
			return (::Cinemachine::CinemachineImpulseManager**)Il2CppClass::FromTypeDefinitionIndex(CinemachineImpulseManager_TypeDefinitionIndex)->GetStaticField(0x277B0);
		}
		// static const ::System::Single Epsilon; // 0x0
		::System::Collections::Generic::List_1<::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>* m_ExpiredEvents; // 0x10
		::System::Collections::Generic::List_1<::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>* m_ActiveEvents; // 0x18
		::System::Boolean _IgnoreTimeScale_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER__CCTOR_OFFSET))();
		}

		static ::Cinemachine::CinemachineImpulseManager* get_Instance()
		{
			return ((::Cinemachine::CinemachineImpulseManager*(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void InitializeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_INITIALIZEMODULE_OFFSET))();
		}

		::System::Boolean GetImpulseAt(::UnityEngine::Vector3 listenerLocation, ::System::Boolean distance2D, ::System::Int32 channelMask, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_GETIMPULSEAT_OFFSET))(this, listenerLocation, distance2D, channelMask, pos, rot);
		}

		::System::Boolean get_IgnoreTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_GET_IGNORETIMESCALE_OFFSET))(this);
		}

		::System::Void set_IgnoreTimeScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_SET_IGNORETIMESCALE_OFFSET))(this, value);
		}

		::System::Single get_CurrentTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_GET_CURRENTTIME_OFFSET))(this);
		}

		::Cinemachine::CinemachineImpulseManager_ImpulseEvent* NewImpulseEvent()
		{
			return ((::Cinemachine::CinemachineImpulseManager_ImpulseEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_NEWIMPULSEEVENT_OFFSET))(this);
		}

		::System::Void AddImpulseEvent(::Cinemachine::CinemachineImpulseManager_ImpulseEvent* e)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineImpulseManager_ImpulseEvent*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ADDIMPULSEEVENT_OFFSET))(this, e);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_CLEAR_OFFSET))(this);
		}
	};
}
