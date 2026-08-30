#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2299A0FE2E8FD63C;
class Class_1_7013DD6F890E582A;
namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineFreeLook; }
namespace RPG::Client::RoadRash { class MonoRoadRashCameraSettings; }
namespace RPG::Client::RoadRash { class MonoRoadRashCameraShake; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1C2050595DE2732C_GET_AIMCOMPOSER_OFFSET UNITYSDK_OFFSET(0x1594D890)
#define CLASS_1_1C2050595DE2732C_GET_BLENDDEFAULTHALFTIME_OFFSET UNITYSDK_OFFSET(0x1594DAD0)
#define CLASS_1_1C2050595DE2732C_GET_BLENDRIGHEIGHTDEFAULTHALFTIME_OFFSET UNITYSDK_OFFSET(0x1594DC70)
#define CLASS_1_1C2050595DE2732C_GET_BLENDRIGRADIUSDEFAULTHALFTIME_OFFSET UNITYSDK_OFFSET(0x1594DC90)
#define CLASS_1_1C2050595DE2732C_GET_BLURBLENDELAPSED_OFFSET UNITYSDK_OFFSET(0x1594DE40)
#define CLASS_1_1C2050595DE2732C_GET_BLURCHANNELS_OFFSET UNITYSDK_OFFSET(0x1594DD50)
#define CLASS_1_1C2050595DE2732C_GET_BLURCOMMITTED_OFFSET UNITYSDK_OFFSET(0x1594DD30)
#define CLASS_1_1C2050595DE2732C_GET_BLURCURRENT_OFFSET UNITYSDK_OFFSET(0x1594DD70)
#define CLASS_1_1C2050595DE2732C_GET_BLURFROM_OFFSET UNITYSDK_OFFSET(0x1594DDA0)
#define CLASS_1_1C2050595DE2732C_GET_BLURTARGETCHANNEL_OFFSET UNITYSDK_OFFSET(0x1594DE20)
#define CLASS_1_1C2050595DE2732C_GET_BLURTARGET_OFFSET UNITYSDK_OFFSET(0x1594DDE0)
#define CLASS_1_1C2050595DE2732C_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1594D830)
#define CLASS_1_1C2050595DE2732C_GET_CURRENTDUTCH_OFFSET UNITYSDK_OFFSET(0x1594DB30)
#define CLASS_1_1C2050595DE2732C_GET_CURRENTFOV_OFFSET UNITYSDK_OFFSET(0x1594DAB0)
#define CLASS_1_1C2050595DE2732C_GET_CURRENTRIGHEIGHT_OFFSET UNITYSDK_OFFSET(0x1594DCF0)
#define CLASS_1_1C2050595DE2732C_GET_CURRENTRIGRADIUS_OFFSET UNITYSDK_OFFSET(0x1594DD10)
#define CLASS_1_1C2050595DE2732C_GET_CURRENTTRACKEDOBJECTOFFSET_OFFSET UNITYSDK_OFFSET(0x1594D8F0)
#define CLASS_1_1C2050595DE2732C_GET_DEFAULTDUTCH_OFFSET UNITYSDK_OFFSET(0x1594DB10)
#define CLASS_1_1C2050595DE2732C_GET_DEFAULTTRACKEDOBJECTOFFSET_OFFSET UNITYSDK_OFFSET(0x1594D8B0)
#define CLASS_1_1C2050595DE2732C_GET_DUTCHBLENDDURATION_OFFSET UNITYSDK_OFFSET(0x1594DB90)
#define CLASS_1_1C2050595DE2732C_GET_DUTCHBLENDELAPSED_OFFSET UNITYSDK_OFFSET(0x1594DBB0)
#define CLASS_1_1C2050595DE2732C_GET_DUTCHBLENDFROM_OFFSET UNITYSDK_OFFSET(0x1594DB50)
#define CLASS_1_1C2050595DE2732C_GET_DUTCHBLENDTARGET_OFFSET UNITYSDK_OFFSET(0x1594DB70)
#define CLASS_1_1C2050595DE2732C_GET_FOVSTACK_OFFSET UNITYSDK_OFFSET(0x1594DAF0)
#define CLASS_1_1C2050595DE2732C_GET_OVERRIDEXDAMPING_OFFSET UNITYSDK_OFFSET(0x1594DBF0)
#define CLASS_1_1C2050595DE2732C_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1594D870)
#define CLASS_1_1C2050595DE2732C_GET_SHAKE_OFFSET UNITYSDK_OFFSET(0x1594D850)
#define CLASS_1_1C2050595DE2732C_GET_SOURCEXDAMPING_OFFSET UNITYSDK_OFFSET(0x1594DBD0)
#define CLASS_1_1C2050595DE2732C_GET_TARGETFOV_OFFSET UNITYSDK_OFFSET(0x1594DA90)
#define CLASS_1_1C2050595DE2732C_GET_TARGETRIGHEIGHT_OFFSET UNITYSDK_OFFSET(0x1594DCB0)
#define CLASS_1_1C2050595DE2732C_GET_TARGETRIGRADIUS_OFFSET UNITYSDK_OFFSET(0x1594DCD0)
#define CLASS_1_1C2050595DE2732C_GET_TRACKEDOBJECTOFFSETBLENDDURATION_OFFSET UNITYSDK_OFFSET(0x1594D9B0)
#define CLASS_1_1C2050595DE2732C_GET_TRACKEDOBJECTOFFSETBLENDELAPSED_OFFSET UNITYSDK_OFFSET(0x1594D9D0)
#define CLASS_1_1C2050595DE2732C_GET_TRACKEDOBJECTOFFSETBLENDFROM_OFFSET UNITYSDK_OFFSET(0x1594D930)
#define CLASS_1_1C2050595DE2732C_GET_TRACKEDOBJECTOFFSETBLENDTARGET_OFFSET UNITYSDK_OFFSET(0x1594D970)
#define CLASS_1_1C2050595DE2732C_GET_ULTIMATERIGBLENDDURATION_OFFSET UNITYSDK_OFFSET(0x1594DA50)
#define CLASS_1_1C2050595DE2732C_GET_ULTIMATERIGBLENDELAPSED_OFFSET UNITYSDK_OFFSET(0x1594DA70)
#define CLASS_1_1C2050595DE2732C_GET_ULTIMATERIGBLENDFROM_OFFSET UNITYSDK_OFFSET(0x1594DA10)
#define CLASS_1_1C2050595DE2732C_GET_ULTIMATERIGBLENDTARGET_OFFSET UNITYSDK_OFFSET(0x1594DA30)
#define CLASS_1_1C2050595DE2732C_GET_ULTIMATERIGBLENDWEIGHT_OFFSET UNITYSDK_OFFSET(0x1594D9F0)
#define CLASS_1_1C2050595DE2732C_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1594DC10)
#define CLASS_1_1C2050595DE2732C_SET_AIMCOMPOSER_OFFSET UNITYSDK_OFFSET(0x1594D8A0)
#define CLASS_1_1C2050595DE2732C_SET_BLENDDEFAULTHALFTIME_OFFSET UNITYSDK_OFFSET(0x1594DAE0)
#define CLASS_1_1C2050595DE2732C_SET_BLENDRIGHEIGHTDEFAULTHALFTIME_OFFSET UNITYSDK_OFFSET(0x1594DC80)
#define CLASS_1_1C2050595DE2732C_SET_BLENDRIGRADIUSDEFAULTHALFTIME_OFFSET UNITYSDK_OFFSET(0x1594DCA0)
#define CLASS_1_1C2050595DE2732C_SET_BLURBLENDELAPSED_OFFSET UNITYSDK_OFFSET(0x1594DE50)
#define CLASS_1_1C2050595DE2732C_SET_BLURCHANNELS_OFFSET UNITYSDK_OFFSET(0x1594DD60)
#define CLASS_1_1C2050595DE2732C_SET_BLURCOMMITTED_OFFSET UNITYSDK_OFFSET(0x1594DD40)
#define CLASS_1_1C2050595DE2732C_SET_BLURCURRENT_OFFSET UNITYSDK_OFFSET(0x1594DD90)
#define CLASS_1_1C2050595DE2732C_SET_BLURFROM_OFFSET UNITYSDK_OFFSET(0x1594DDC0)
#define CLASS_1_1C2050595DE2732C_SET_BLURTARGETCHANNEL_OFFSET UNITYSDK_OFFSET(0x1594DE30)
#define CLASS_1_1C2050595DE2732C_SET_BLURTARGET_OFFSET UNITYSDK_OFFSET(0x1594DE00)
#define CLASS_1_1C2050595DE2732C_SET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1594D840)
#define CLASS_1_1C2050595DE2732C_SET_CURRENTDUTCH_OFFSET UNITYSDK_OFFSET(0x1594DB40)
#define CLASS_1_1C2050595DE2732C_SET_CURRENTFOV_OFFSET UNITYSDK_OFFSET(0x1594DAC0)
#define CLASS_1_1C2050595DE2732C_SET_CURRENTRIGHEIGHT_OFFSET UNITYSDK_OFFSET(0x1594DD00)
#define CLASS_1_1C2050595DE2732C_SET_CURRENTRIGRADIUS_OFFSET UNITYSDK_OFFSET(0x1594DD20)
#define CLASS_1_1C2050595DE2732C_SET_CURRENTTRACKEDOBJECTOFFSET_OFFSET UNITYSDK_OFFSET(0x1594D910)
#define CLASS_1_1C2050595DE2732C_SET_DEFAULTDUTCH_OFFSET UNITYSDK_OFFSET(0x1594DB20)
#define CLASS_1_1C2050595DE2732C_SET_DEFAULTTRACKEDOBJECTOFFSET_OFFSET UNITYSDK_OFFSET(0x1594D8D0)
#define CLASS_1_1C2050595DE2732C_SET_DUTCHBLENDDURATION_OFFSET UNITYSDK_OFFSET(0x1594DBA0)
#define CLASS_1_1C2050595DE2732C_SET_DUTCHBLENDELAPSED_OFFSET UNITYSDK_OFFSET(0x1594DBC0)
#define CLASS_1_1C2050595DE2732C_SET_DUTCHBLENDFROM_OFFSET UNITYSDK_OFFSET(0x1594DB60)
#define CLASS_1_1C2050595DE2732C_SET_DUTCHBLENDTARGET_OFFSET UNITYSDK_OFFSET(0x1594DB80)
#define CLASS_1_1C2050595DE2732C_SET_FOVSTACK_OFFSET UNITYSDK_OFFSET(0x1594DB00)
#define CLASS_1_1C2050595DE2732C_SET_OVERRIDEXDAMPING_OFFSET UNITYSDK_OFFSET(0x1594DC00)
#define CLASS_1_1C2050595DE2732C_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1594D880)
#define CLASS_1_1C2050595DE2732C_SET_SHAKE_OFFSET UNITYSDK_OFFSET(0x1594D860)
#define CLASS_1_1C2050595DE2732C_SET_SOURCEXDAMPING_OFFSET UNITYSDK_OFFSET(0x1594DBE0)
#define CLASS_1_1C2050595DE2732C_SET_TARGETFOV_OFFSET UNITYSDK_OFFSET(0x1594DAA0)
#define CLASS_1_1C2050595DE2732C_SET_TARGETRIGHEIGHT_OFFSET UNITYSDK_OFFSET(0x1594DCC0)
#define CLASS_1_1C2050595DE2732C_SET_TARGETRIGRADIUS_OFFSET UNITYSDK_OFFSET(0x1594DCE0)
#define CLASS_1_1C2050595DE2732C_SET_TRACKEDOBJECTOFFSETBLENDDURATION_OFFSET UNITYSDK_OFFSET(0x1594D9C0)
#define CLASS_1_1C2050595DE2732C_SET_TRACKEDOBJECTOFFSETBLENDELAPSED_OFFSET UNITYSDK_OFFSET(0x1594D9E0)
#define CLASS_1_1C2050595DE2732C_SET_TRACKEDOBJECTOFFSETBLENDFROM_OFFSET UNITYSDK_OFFSET(0x1594D950)
#define CLASS_1_1C2050595DE2732C_SET_TRACKEDOBJECTOFFSETBLENDTARGET_OFFSET UNITYSDK_OFFSET(0x1594D990)
#define CLASS_1_1C2050595DE2732C_SET_ULTIMATERIGBLENDDURATION_OFFSET UNITYSDK_OFFSET(0x1594DA60)
#define CLASS_1_1C2050595DE2732C_SET_ULTIMATERIGBLENDELAPSED_OFFSET UNITYSDK_OFFSET(0x1594DA80)
#define CLASS_1_1C2050595DE2732C_SET_ULTIMATERIGBLENDFROM_OFFSET UNITYSDK_OFFSET(0x1594DA20)
#define CLASS_1_1C2050595DE2732C_SET_ULTIMATERIGBLENDTARGET_OFFSET UNITYSDK_OFFSET(0x1594DA40)
#define CLASS_1_1C2050595DE2732C_SET_ULTIMATERIGBLENDWEIGHT_OFFSET UNITYSDK_OFFSET(0x1594DA00)
#define CLASS_1_1C2050595DE2732C__CTOR_OFFSET UNITYSDK_OFFSET(0x1594DE60)

inline static constexpr unsigned int Class_1_1C2050595DE2732C_TypeDefinitionIndex = 75518;

class Class_1_1C2050595DE2732C : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_2299A0FE2E8FD63C*>* _BlurChannels_k__BackingField; // 0x10
	::Cinemachine::CinemachineComposer* _AimComposer_k__BackingField; // 0x18
	::RPG::Client::RoadRash::MonoRoadRashCameraSettings* _Settings_k__BackingField; // 0x20
	::Cinemachine::CinemachineFreeLook* _Camera_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::Class_1_7013DD6F890E582A*>* _FOVStack_k__BackingField; // 0x30
	::RPG::Client::RoadRash::MonoRoadRashCameraShake* _Shake_k__BackingField; // 0x38
	::System::Single _BlurBlendElapsed_k__BackingField; // 0x40
	::System::Single _TargetRigHeight_k__BackingField; // 0x44
	::System::Single _SourceXDamping_k__BackingField; // 0x48
	::System::Single _TargetRigRadius_k__BackingField; // 0x4C
	::System::Single _BlendRigHeightDefaultHalfTime_k__BackingField; // 0x50
	::Struct_2_F780BA94AF5E7E37_2 _BlurCurrent_k__BackingField; // 0x54
	::System::Single _DutchBlendFrom_k__BackingField; // 0x6C
	::System::Single _DutchBlendTarget_k__BackingField; // 0x70
	::System::Single _DefaultDutch_k__BackingField; // 0x74
	::System::Single _BlendDefaultHalfTime_k__BackingField; // 0x78
	::System::Single _UltimateRigBlendTarget_k__BackingField; // 0x7C
	::System::Boolean _BlurCommitted_k__BackingField; // 0x80
	::System::Single _CurrentFOV_k__BackingField; // 0x84
	::System::Single _CurrentRigHeight_k__BackingField; // 0x88
	::System::Single _TrackedObjectOffsetBlendElapsed_k__BackingField; // 0x8C
	::Struct_2_F780BA94AF5E7E37_2 _BlurFrom_k__BackingField; // 0x90
	::System::Single _BlendRigRadiusDefaultHalfTime_k__BackingField; // 0xA8
	::UnityEngine::Vector3 _TrackedObjectOffsetBlendFrom_k__BackingField; // 0xAC
	::System::Single _DutchBlendElapsed_k__BackingField; // 0xB8
	::System::Single _UltimateRigBlendElapsed_k__BackingField; // 0xBC
	::System::Single _UltimateRigBlendDuration_k__BackingField; // 0xC0
	::UnityEngine::Vector3 _CurrentTrackedObjectOffset_k__BackingField; // 0xC4
	::System::Single _CurrentDutch_k__BackingField; // 0xD0
	::UnityEngine::Vector3 _DefaultTrackedObjectOffset_k__BackingField; // 0xD4
	::System::Int32 _BlurTargetChannel_k__BackingField; // 0xE0
	::System::Single _UltimateRigBlendFrom_k__BackingField; // 0xE4
	::Struct_2_F780BA94AF5E7E37_2 _BlurTarget_k__BackingField; // 0xE8
	::System::Single _DutchBlendDuration_k__BackingField; // 0x100
	::UnityEngine::Vector3 _TrackedObjectOffsetBlendTarget_k__BackingField; // 0x104
	::System::Single _UltimateRigBlendWeight_k__BackingField; // 0x110
	::System::Nullable_1<::System::Single> _OverrideXDamping_k__BackingField; // 0x114
	::System::Single _TrackedObjectOffsetBlendDuration_k__BackingField; // 0x11C
	::System::Single _CurrentRigRadius_k__BackingField; // 0x120
	::System::Single _TargetFOV_k__BackingField; // 0x124

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C__CTOR_OFFSET))(this);
	}

	::Cinemachine::CinemachineFreeLook* get_Camera()
	{
		return ((::Cinemachine::CinemachineFreeLook*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_CAMERA_OFFSET))(this);
	}

	::System::Void set_Camera(::Cinemachine::CinemachineFreeLook* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineFreeLook*))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_CAMERA_OFFSET))(this, a1);
	}

	::RPG::Client::RoadRash::MonoRoadRashCameraShake* get_Shake()
	{
		return ((::RPG::Client::RoadRash::MonoRoadRashCameraShake*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_SHAKE_OFFSET))(this);
	}

	::System::Void set_Shake(::RPG::Client::RoadRash::MonoRoadRashCameraShake* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashCameraShake*))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_SHAKE_OFFSET))(this, a1);
	}

	::RPG::Client::RoadRash::MonoRoadRashCameraSettings* get_Settings()
	{
		return ((::RPG::Client::RoadRash::MonoRoadRashCameraSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_SETTINGS_OFFSET))(this);
	}

	::System::Void set_Settings(::RPG::Client::RoadRash::MonoRoadRashCameraSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashCameraSettings*))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_SETTINGS_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineComposer* get_AimComposer()
	{
		return ((::Cinemachine::CinemachineComposer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_AIMCOMPOSER_OFFSET))(this);
	}

	::System::Void set_AimComposer(::Cinemachine::CinemachineComposer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineComposer*))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_AIMCOMPOSER_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_DefaultTrackedObjectOffset()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_DEFAULTTRACKEDOBJECTOFFSET_OFFSET))(this);
	}

	::System::Void set_DefaultTrackedObjectOffset(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_DEFAULTTRACKEDOBJECTOFFSET_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_CurrentTrackedObjectOffset()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_CURRENTTRACKEDOBJECTOFFSET_OFFSET))(this);
	}

	::System::Void set_CurrentTrackedObjectOffset(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_CURRENTTRACKEDOBJECTOFFSET_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_TrackedObjectOffsetBlendFrom()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_TRACKEDOBJECTOFFSETBLENDFROM_OFFSET))(this);
	}

	::System::Void set_TrackedObjectOffsetBlendFrom(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_TRACKEDOBJECTOFFSETBLENDFROM_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_TrackedObjectOffsetBlendTarget()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_TRACKEDOBJECTOFFSETBLENDTARGET_OFFSET))(this);
	}

	::System::Void set_TrackedObjectOffsetBlendTarget(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_TRACKEDOBJECTOFFSETBLENDTARGET_OFFSET))(this, a1);
	}

	::System::Single get_TrackedObjectOffsetBlendDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_TRACKEDOBJECTOFFSETBLENDDURATION_OFFSET))(this);
	}

	::System::Void set_TrackedObjectOffsetBlendDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_TRACKEDOBJECTOFFSETBLENDDURATION_OFFSET))(this, a1);
	}

	::System::Single get_TrackedObjectOffsetBlendElapsed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_TRACKEDOBJECTOFFSETBLENDELAPSED_OFFSET))(this);
	}

	::System::Void set_TrackedObjectOffsetBlendElapsed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_TRACKEDOBJECTOFFSETBLENDELAPSED_OFFSET))(this, a1);
	}

	::System::Single get_UltimateRigBlendWeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_ULTIMATERIGBLENDWEIGHT_OFFSET))(this);
	}

	::System::Void set_UltimateRigBlendWeight(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_ULTIMATERIGBLENDWEIGHT_OFFSET))(this, a1);
	}

	::System::Single get_UltimateRigBlendFrom()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_ULTIMATERIGBLENDFROM_OFFSET))(this);
	}

	::System::Void set_UltimateRigBlendFrom(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_ULTIMATERIGBLENDFROM_OFFSET))(this, a1);
	}

	::System::Single get_UltimateRigBlendTarget()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_ULTIMATERIGBLENDTARGET_OFFSET))(this);
	}

	::System::Void set_UltimateRigBlendTarget(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_ULTIMATERIGBLENDTARGET_OFFSET))(this, a1);
	}

	::System::Single get_UltimateRigBlendDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_ULTIMATERIGBLENDDURATION_OFFSET))(this);
	}

	::System::Void set_UltimateRigBlendDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_ULTIMATERIGBLENDDURATION_OFFSET))(this, a1);
	}

	::System::Single get_UltimateRigBlendElapsed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_ULTIMATERIGBLENDELAPSED_OFFSET))(this);
	}

	::System::Void set_UltimateRigBlendElapsed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_ULTIMATERIGBLENDELAPSED_OFFSET))(this, a1);
	}

	::System::Single get_TargetFOV()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_TARGETFOV_OFFSET))(this);
	}

	::System::Void set_TargetFOV(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_TARGETFOV_OFFSET))(this, a1);
	}

	::System::Single get_CurrentFOV()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_CURRENTFOV_OFFSET))(this);
	}

	::System::Void set_CurrentFOV(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_CURRENTFOV_OFFSET))(this, a1);
	}

	::System::Single get_BlendDefaultHalfTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_BLENDDEFAULTHALFTIME_OFFSET))(this);
	}

	::System::Void set_BlendDefaultHalfTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_BLENDDEFAULTHALFTIME_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_7013DD6F890E582A*>* get_FOVStack()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7013DD6F890E582A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_FOVSTACK_OFFSET))(this);
	}

	::System::Void set_FOVStack(::System::Collections::Generic::List_1<::Class_1_7013DD6F890E582A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7013DD6F890E582A*>*))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_FOVSTACK_OFFSET))(this, a1);
	}

	::System::Single get_DefaultDutch()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_DEFAULTDUTCH_OFFSET))(this);
	}

	::System::Void set_DefaultDutch(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_DEFAULTDUTCH_OFFSET))(this, a1);
	}

	::System::Single get_CurrentDutch()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_CURRENTDUTCH_OFFSET))(this);
	}

	::System::Void set_CurrentDutch(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_CURRENTDUTCH_OFFSET))(this, a1);
	}

	::System::Single get_DutchBlendFrom()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_DUTCHBLENDFROM_OFFSET))(this);
	}

	::System::Void set_DutchBlendFrom(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_DUTCHBLENDFROM_OFFSET))(this, a1);
	}

	::System::Single get_DutchBlendTarget()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_DUTCHBLENDTARGET_OFFSET))(this);
	}

	::System::Void set_DutchBlendTarget(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_DUTCHBLENDTARGET_OFFSET))(this, a1);
	}

	::System::Single get_DutchBlendDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_DUTCHBLENDDURATION_OFFSET))(this);
	}

	::System::Void set_DutchBlendDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_DUTCHBLENDDURATION_OFFSET))(this, a1);
	}

	::System::Single get_DutchBlendElapsed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_DUTCHBLENDELAPSED_OFFSET))(this);
	}

	::System::Void set_DutchBlendElapsed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_DUTCHBLENDELAPSED_OFFSET))(this, a1);
	}

	::System::Single get_SourceXDamping()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_SOURCEXDAMPING_OFFSET))(this);
	}

	::System::Void set_SourceXDamping(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_SOURCEXDAMPING_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Single> get_OverrideXDamping()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_OVERRIDEXDAMPING_OFFSET))(this);
	}

	::System::Void set_OverrideXDamping(::System::Nullable_1<::System::Single> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_OVERRIDEXDAMPING_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single get_BlendRigHeightDefaultHalfTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_BLENDRIGHEIGHTDEFAULTHALFTIME_OFFSET))(this);
	}

	::System::Void set_BlendRigHeightDefaultHalfTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_BLENDRIGHEIGHTDEFAULTHALFTIME_OFFSET))(this, a1);
	}

	::System::Single get_BlendRigRadiusDefaultHalfTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_BLENDRIGRADIUSDEFAULTHALFTIME_OFFSET))(this);
	}

	::System::Void set_BlendRigRadiusDefaultHalfTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_BLENDRIGRADIUSDEFAULTHALFTIME_OFFSET))(this, a1);
	}

	::System::Single get_TargetRigHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_TARGETRIGHEIGHT_OFFSET))(this);
	}

	::System::Void set_TargetRigHeight(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_TARGETRIGHEIGHT_OFFSET))(this, a1);
	}

	::System::Single get_TargetRigRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_TARGETRIGRADIUS_OFFSET))(this);
	}

	::System::Void set_TargetRigRadius(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_TARGETRIGRADIUS_OFFSET))(this, a1);
	}

	::System::Single get_CurrentRigHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_CURRENTRIGHEIGHT_OFFSET))(this);
	}

	::System::Void set_CurrentRigHeight(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_CURRENTRIGHEIGHT_OFFSET))(this, a1);
	}

	::System::Single get_CurrentRigRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_CURRENTRIGRADIUS_OFFSET))(this);
	}

	::System::Void set_CurrentRigRadius(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_CURRENTRIGRADIUS_OFFSET))(this, a1);
	}

	::System::Boolean get_BlurCommitted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_BLURCOMMITTED_OFFSET))(this);
	}

	::System::Void set_BlurCommitted(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_BLURCOMMITTED_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_2299A0FE2E8FD63C*>* get_BlurChannels()
	{
		return ((::Il2CppArray<::Class_1_2299A0FE2E8FD63C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_BLURCHANNELS_OFFSET))(this);
	}

	::System::Void set_BlurChannels(::Il2CppArray<::Class_1_2299A0FE2E8FD63C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_2299A0FE2E8FD63C*>*))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_BLURCHANNELS_OFFSET))(this, a1);
	}

	::Struct_2_F780BA94AF5E7E37_2 get_BlurCurrent()
	{
		return ((::Struct_2_F780BA94AF5E7E37_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_BLURCURRENT_OFFSET))(this);
	}

	::System::Void set_BlurCurrent(::Struct_2_F780BA94AF5E7E37_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F780BA94AF5E7E37_2))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_BLURCURRENT_OFFSET))(this, a1);
	}

	::Struct_2_F780BA94AF5E7E37_2 get_BlurFrom()
	{
		return ((::Struct_2_F780BA94AF5E7E37_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_BLURFROM_OFFSET))(this);
	}

	::System::Void set_BlurFrom(::Struct_2_F780BA94AF5E7E37_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F780BA94AF5E7E37_2))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_BLURFROM_OFFSET))(this, a1);
	}

	::Struct_2_F780BA94AF5E7E37_2 get_BlurTarget()
	{
		return ((::Struct_2_F780BA94AF5E7E37_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_BLURTARGET_OFFSET))(this);
	}

	::System::Void set_BlurTarget(::Struct_2_F780BA94AF5E7E37_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F780BA94AF5E7E37_2))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_BLURTARGET_OFFSET))(this, a1);
	}

	::System::Int32 get_BlurTargetChannel()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_BLURTARGETCHANNEL_OFFSET))(this);
	}

	::System::Void set_BlurTargetChannel(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_BLURTARGETCHANNEL_OFFSET))(this, a1);
	}

	::System::Single get_BlurBlendElapsed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_GET_BLURBLENDELAPSED_OFFSET))(this);
	}

	::System::Void set_BlurBlendElapsed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C2050595DE2732C_SET_BLURBLENDELAPSED_OFFSET))(this, a1);
	}
};
