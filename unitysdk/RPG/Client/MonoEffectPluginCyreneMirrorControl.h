#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_964;
class Class_1_4720963B3ED3BDD4;
class Class_1_62BCB4ACE7657825;
class TransformVersionTracker;
namespace RPG::Client { class MonoEffectPluginCyreneMirrorControl_Class_1_4A4D9596B619BC04; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class VCameraConfigChange; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0D4100)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0D4350)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_GET_MIRRORFOLLOWTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC0D6160)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_MANUALLYUPDATECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xC0D4D90)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_METHOD_6_27266CF5C6A3D539_OFFSET UNITYSDK_OFFSET(0xC0D5F70)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_METHOD_6_743CCE653F5EA979_OFFSET UNITYSDK_OFFSET(0xC0D4F60)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_METHOD_6_ACAF19E8DD89168C_OFFSET UNITYSDK_OFFSET(0xC0D58D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_METHOD_6_C20670991DA7E1D3_OFFSET UNITYSDK_OFFSET(0xC0D5690)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_METHOD_6_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xC0D49E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0D41C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_SETUPFORMODELCAPTURE_OFFSET UNITYSDK_OFFSET(0xC0D54B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_SETUP_OFFSET UNITYSDK_OFFSET(0xC0D4DE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_TICK_OFFSET UNITYSDK_OFFSET(0xC0D44E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC0D61C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL___GETAIMTARGET_G___GETPOS_8_0_OFFSET UNITYSDK_OFFSET(0xC0D5BF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0D6210)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC0D6250)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCyreneMirrorControl_TypeDefinitionIndex = 65438;

	class MonoEffectPluginCyreneMirrorControl : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::Transform* MirrorRootTrans; // 0x28
		::UnityEngine::Transform* CameraTrans; // 0x30
		::TransformVersionTracker* Field_6_2; // 0x38
		::System::UInt32 Field_6_3; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginCyreneMirrorControl_Class_1_4A4D9596B619BC04*>* Field_6_4; // 0x48
		::UnityEngine::Camera* Field_6_5; // 0x50
		::RPG::GameCore::EntityType Field_6_6; // 0x58
		::UnityEngine::Vector3 Field_6_7; // 0x5C
		::UnityEngine::Vector3 Field_6_8; // 0x68
		::System::Boolean Field_6_9; // 0x74
		::System::Single Field_6_10; // 0x78
		::System::Single Field_6_11; // 0x7C
		::Class_0_16E4307DCC419505_964* Field_6_12; // 0x80
		::Class_1_4720963B3ED3BDD4* Field_6_13; // 0x88
		::Class_1_62BCB4ACE7657825* Field_6_14; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_TICK_OFFSET))(this, a1);
		}

		::System::Void ManuallyUpdateCameraPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_MANUALLYUPDATECAMERAPOSITION_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_SETUP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetupForModelCapture(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::MVector3 a4, ::RPG::MVector3 a5, ::System::Single a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_SETUPFORMODELCAPTURE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Method_6_743CCE653F5EA979(::UnityEngine::Transform* a1, ::Class_0_16E4307DCC419505_964* a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_964*, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_METHOD_6_743CCE653F5EA979_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> Method_6_ACAF19E8DD89168C()
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_METHOD_6_ACAF19E8DD89168C_OFFSET))(this);
		}

		::System::Void Method_6_C561FF611C07A44C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_METHOD_6_C561FF611C07A44C_OFFSET))(this);
		}

		::RPG::GameCore::VCameraConfigChange* Method_6_C20670991DA7E1D3(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::VCameraConfigChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_METHOD_6_C20670991DA7E1D3_OFFSET))(this, a1);
		}

		::RPG::GameCore::VCameraConfigChange* Method_6_27266CF5C6A3D539(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
		{
			return ((::RPG::GameCore::VCameraConfigChange*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_METHOD_6_27266CF5C6A3D539_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_MirrorFollowTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_GET_MIRRORFOLLOWTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Vector3 __GetAimTarget_g___GetPos_8_0(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL___GETAIMTARGET_G___GETPOS_8_0_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
