#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class Effect_KaleidoscopeAnimatorBehavior; }
namespace RPG::Client { class Effect_KaleidoscopeAnimatorBehavior_ParticleData; }
namespace RPG::Client::TAUtils { class Vector3AnimationCurve; }
namespace RPG::Client::TAUtils { class Vector4AnimationCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORMONOPLUGIN_GET_ANGLEMINMAXRADIUS_OFFSET UNITYSDK_OFFSET(0xA1DB3B0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORMONOPLUGIN_GET_TWISTANGLERADIUS_OFFSET UNITYSDK_OFFSET(0xA1DB420)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA1DBFC0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_KaleidoscopeAnimatorMonoPlugin_TypeDefinitionIndex = 64987;

	class Effect_KaleidoscopeAnimatorMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_KaleidoscopeAnimatorBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Effect_KaleidoscopeAnimatorBehavior_ParticleData*>* ParticleDatas; // 0x30
		::System::Single Height; // 0x38
		::System::Single BottomRadius; // 0x3C
		::System::Single BottomThickness; // 0x40
		::System::Single TopRadius; // 0x44
		::System::Single TopThickness; // 0x48
		::UnityEngine::Vector2 AngleMinMax; // 0x4C
		::System::Single TwistAngle; // 0x54
		::System::Boolean FittingSurface; // 0x58
		::System::Boolean FollowTwist; // 0x59
		::RPG::Client::TAUtils::SimpleTransform RelativeTransform; // 0x5C
		::RPG::Client::TAUtils::SimpleTransform DisorderTransformRange; // 0x80
		::System::Single DisorderTransformWeight; // 0xA4
		::RPG::Client::TAUtils::Vector3AnimationCurve* TransitionAlongHeight; // 0xA8
		::RPG::Client::TAUtils::Vector3AnimationCurve* RotationAlongHeight; // 0xB0
		::RPG::Client::TAUtils::Vector4AnimationCurve* ScaleAlongHeight; // 0xB8
		::RPG::Client::TAUtils::Vector3AnimationCurve* TransitionAlongRadius; // 0xC0
		::RPG::Client::TAUtils::Vector3AnimationCurve* RotationAlongRadius; // 0xC8
		::RPG::Client::TAUtils::Vector4AnimationCurve* ScaleAlongRadius; // 0xD0
		::System::Single FallingSpeed; // 0xD8
		::UnityEngine::Color TopColor; // 0xDC
		::UnityEngine::Color BottomColor; // 0xEC
		::UnityEngine::Vector2 HeightColorMinMax; // 0xFC
		::System::Single HeightColorPower; // 0x104
		::System::Single HeightDensity; // 0x108
		::System::Single CircleDensity; // 0x10C
		::System::Single RadiusDensity; // 0x110
		::System::Int32 MaxInstanceCount; // 0x114
		::System::Int32 Field_7_28; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_AngleMinMaxRadius()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORMONOPLUGIN_GET_ANGLEMINMAXRADIUS_OFFSET))(this);
		}

		::System::Single get_TwistAngleRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORMONOPLUGIN_GET_TWISTANGLERADIUS_OFFSET))(this);
		}
	};
}
