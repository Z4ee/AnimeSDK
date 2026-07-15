#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class BGCurveShadowFollowBehavior; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_BGCURVESHADOWFOLLOWMONOPLUGIN_CREATESHADOWS_OFFSET UNITYSDK_OFFSET(0x18683DB0)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x18683E30)
#define RPG_CLIENT_BGCURVESHADOWFOLLOWMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x18683E80)

namespace RPG::Client
{
	inline static constexpr unsigned int BGCurveShadowFollowMonoPlugin_TypeDefinitionIndex = 67202;

	class BGCurveShadowFollowMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::BGCurveShadowFollowBehavior*>
	{
	public:
		::System::Int32 ExampleProperty; // 0x30
		::BansheeGz::BGSpline::Curve::BGCurve* bgcurveTarget; // 0x38
		::System::Single intervals; // 0x40
		::UnityEngine::Vector3 worldBias; // 0x44
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* TargetMeshes; // 0x50
		::UnityEngine::Material* material; // 0x58
		::UnityEngine::Material* materialDepth; // 0x60
		::System::Single currentDistance; // 0x68
		::System::Boolean inverseOrder; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void CreateShadows()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWMONOPLUGIN_CREATESHADOWS_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVESHADOWFOLLOWMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
