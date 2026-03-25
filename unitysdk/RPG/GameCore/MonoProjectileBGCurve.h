#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CurvePreviewInfo.h"
#include "unitysdk/RPG/GameCore/EaseType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class ProjectileBGCurveExportData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_GAMECORE_MONOPROJECTILEBGCURVE_CALCCURVEPOINTBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0xA99D620)
#define RPG_GAMECORE_MONOPROJECTILEBGCURVE_GETOVERRIDECURVESPEED_OFFSET UNITYSDK_OFFSET(0xA99D470)
#define RPG_GAMECORE_MONOPROJECTILEBGCURVE_GET_CURRENTBGCURVELINEDISTANCE_OFFSET UNITYSDK_OFFSET(0xA99D4E0)
#define RPG_GAMECORE_MONOPROJECTILEBGCURVE_GET_OVERRIDEEASETYPE_OFFSET UNITYSDK_OFFSET(0xA99D450)
#define RPG_GAMECORE_MONOPROJECTILEBGCURVE_GET_OVERRIDETIMECURVE_OFFSET UNITYSDK_OFFSET(0xA99D430)
#define RPG_GAMECORE_MONOPROJECTILEBGCURVE_INIT_OFFSET UNITYSDK_OFFSET(0xA99D500)
#define RPG_GAMECORE_MONOPROJECTILEBGCURVE_SET_CURRENTBGCURVELINEDISTANCE_OFFSET UNITYSDK_OFFSET(0xA99D4F0)
#define RPG_GAMECORE_MONOPROJECTILEBGCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xA99D700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonoProjectileBGCurve_TypeDefinitionIndex = 43383;

	class MonoProjectileBGCurve : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ProjectileBGCurveExportData*>* SubProjectileBgCurveExportDatas; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::CurvePreviewInfo>* SubCurvePreviewInfos; // 0x20
		::RPG::Client::ProjectileBGCurveExportData* Field_5_2; // 0x28
		::System::Single _CurrentBgCurveLineDistance_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPROJECTILEBGCURVE__CTOR_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_OverrideTimeCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPROJECTILEBGCURVE_GET_OVERRIDETIMECURVE_OFFSET))(this);
		}

		::RPG::GameCore::EaseType get_OverrideEaseType()
		{
			return ((::RPG::GameCore::EaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPROJECTILEBGCURVE_GET_OVERRIDEEASETYPE_OFFSET))(this);
		}

		::System::Single GetOverrideCurveSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPROJECTILEBGCURVE_GETOVERRIDECURVESPEED_OFFSET))(this);
		}

		::System::Single get_CurrentBgCurveLineDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPROJECTILEBGCURVE_GET_CURRENTBGCURVELINEDISTANCE_OFFSET))(this);
		}

		::System::Void set_CurrentBgCurveLineDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPROJECTILEBGCURVE_SET_CURRENTBGCURVELINEDISTANCE_OFFSET))(this, value);
		}

		::System::Boolean Init(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPROJECTILEBGCURVE_INIT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CalcCurvePointByDistanceRatio(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPROJECTILEBGCURVE_CALCCURVEPOINTBYDISTANCERATIO_OFFSET))(this, a1);
		}
	};
}
