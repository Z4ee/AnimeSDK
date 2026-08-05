#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x17274220)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_ISNEARLYEQUAL_OFFSET UNITYSDK_OFFSET(0x17273CD0)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_ISVALID_OFFSET UNITYSDK_OFFSET(0x172734C0)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_LERP_OFFSET UNITYSDK_OFFSET(0x17273530)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x172742E0)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x17273C10)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING__ISNEARLYEQUAL_G__NEARLYEQUAL_7_0_OFFSET UNITYSDK_OFFSET(0x172741F0)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING__LERP_G__LERP_6_0_OFFSET UNITYSDK_OFFSET(0x17273C70)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraTrackSetting_TypeDefinitionIndex = 67134;

	class CameraTrackSetting : public ::System::Object
	{
	public:
		static ::MoleMole::Cameras::CameraTrackSetting** StaticGet_Fallback()
		{
			return (::MoleMole::Cameras::CameraTrackSetting**)Il2CppClass::FromTypeDefinitionIndex(CameraTrackSetting_TypeDefinitionIndex)->GetStaticField(0x3F320);
		}
		::MoleMole::CameraOrbit topOrbit; // 0x10
		::System::Single topCurvature; // 0x18
		::Il2CppArray<::MoleMole::CameraOrbit>* orbits; // 0x20
		::Il2CppArray<::System::Single>* screenY; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING__CCTOR_OFFSET))();
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_ISVALID_OFFSET))(this);
		}

		static ::MoleMole::Cameras::CameraTrackSetting* Lerp(::MoleMole::Cameras::CameraTrackSetting* source, ::MoleMole::Cameras::CameraTrackSetting* target, ::System::Single alpha, ::MoleMole::Cameras::CameraTrackSetting* result)
		{
			return ((::MoleMole::Cameras::CameraTrackSetting*(*)(::MoleMole::Cameras::CameraTrackSetting*, ::MoleMole::Cameras::CameraTrackSetting*, ::System::Single, ::MoleMole::Cameras::CameraTrackSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_LERP_OFFSET))(source, target, alpha, result);
		}

		::System::Boolean IsNearlyEqual(::MoleMole::Cameras::CameraTrackSetting*& other, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraTrackSetting*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_ISNEARLYEQUAL_OFFSET))(this, other, tolerance);
		}

		::MoleMole::Cameras::CameraTrackSetting* CopyAssign(::MoleMole::Cameras::CameraTrackSetting*& other)
		{
			return ((::MoleMole::Cameras::CameraTrackSetting*(*)(::PVOID, ::MoleMole::Cameras::CameraTrackSetting*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_COPYASSIGN_OFFSET))(this, other);
		}

		static ::MoleMole::CameraOrbit _Lerp_g__Lerp_6_0(::MoleMole::CameraOrbit& s, ::MoleMole::CameraOrbit& t, ::System::Single a)
		{
			return ((::MoleMole::CameraOrbit(*)(::MoleMole::CameraOrbit&, ::MoleMole::CameraOrbit&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING__LERP_G__LERP_6_0_OFFSET))(s, t, a);
		}

		static ::System::Boolean _IsNearlyEqual_g__NearlyEqual_7_0(::MoleMole::CameraOrbit& left, ::MoleMole::CameraOrbit& right, ::System::Single t)
		{
			return ((::System::Boolean(*)(::MoleMole::CameraOrbit&, ::MoleMole::CameraOrbit&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING__ISNEARLYEQUAL_G__NEARLYEQUAL_7_0_OFFSET))(left, right, t);
		}
	};
}
