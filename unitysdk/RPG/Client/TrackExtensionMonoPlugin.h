#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/Client/TrackExtensionMonoPlugin_Struct_2_D104590D54A78986.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class TrackExtensionBehavior; }

#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GETANCHOR_OFFSET UNITYSDK_OFFSET(0x197BDFB0)
#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x197BF860)
#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GET_CURVEMATH_OFFSET UNITYSDK_OFFSET(0x197BDD40)
#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x197BDC90)
#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_METHOD_7_50BB38F000C1EB2B_OFFSET UNITYSDK_OFFSET(0x197BF980)
#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_METHOD_7_F4C24BF45AD4ED37_OFFSET UNITYSDK_OFFSET(0x197BF280)
#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x197BFE00)

namespace RPG::Client
{
	inline static constexpr unsigned int TrackExtensionMonoPlugin_TypeDefinitionIndex = 70997;

	class TrackExtensionMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::TrackExtensionBehavior*>
	{
	public:
		::System::Boolean IfUseRotation; // 0x30
		::System::Boolean IfUseAuxiliaryNormal; // 0x31
		::System::Boolean IfPreviewPosition; // 0x32
		::System::Single PreviewDistance; // 0x34
		::System::Single PreviewSideOffset; // 0x38
		::System::Single PreviewNormOffset; // 0x3C
		::System::Single PreviewSize; // 0x40
		::BansheeGz::BGSpline::Curve::BGCurve* PNOHBBMHGLB; // 0x48
		::BansheeGz::BGSpline::Components::BGCcMath* JPEGGCCPIEG; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GET_CURVE_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* get_CurveMath()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GET_CURVEMATH_OFFSET))(this);
		}

		::RPG::Client::TrackExtensionMonoPlugin_Struct_2_D104590D54A78986 GetAnchor(::System::Single a1)
		{
			return ((::RPG::Client::TrackExtensionMonoPlugin_Struct_2_D104590D54A78986(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GETANCHOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPosition(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GETPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TrackExtensionMonoPlugin_Struct_2_D104590D54A78986 Method_7_50BB38F000C1EB2B(::BansheeGz::BGSpline::Components::BGCcMath* a1, ::System::Single a2)
		{
			return ((::RPG::Client::TrackExtensionMonoPlugin_Struct_2_D104590D54A78986(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_METHOD_7_50BB38F000C1EB2B_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TrackExtensionMonoPlugin_Struct_2_D104590D54A78986 Method_7_F4C24BF45AD4ED37(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::RPG::Client::TrackExtensionMonoPlugin_Struct_2_D104590D54A78986(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_METHOD_7_F4C24BF45AD4ED37_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
