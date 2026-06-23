#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/AxisConstraint.h"
#include "unitysdk/DG/Tweening/Color2.h"
#include "unitysdk/DG/Tweening/PathMode.h"
#include "unitysdk/DG/Tweening/PathType.h"
#include "unitysdk/DG/Tweening/Plugins/Options/PathOptions.h"
#include "unitysdk/DG/Tweening/RotateMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace DG::Tweening { class Sequence; }
namespace DG::Tweening { class Tweener; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Plugins::Core::PathCore { class Path; }
namespace System { class String; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class TrailRenderer; }
namespace UnityEngine { class Transform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS_DOASPECT_OFFSET UNITYSDK_OFFSET(0x1E232030)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLECOLOR_1_OFFSET UNITYSDK_OFFSET(0x1E23A590)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLECOLOR_2_OFFSET UNITYSDK_OFFSET(0x1E23A7B0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLECOLOR_OFFSET UNITYSDK_OFFSET(0x1E23A3A0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLELOCALMOVEBY_OFFSET UNITYSDK_OFFSET(0x1E23ABE0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLELOCALROTATEBY_OFFSET UNITYSDK_OFFSET(0x1E23AF80)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLEMOVEBY_OFFSET UNITYSDK_OFFSET(0x1E23AA20)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLEROTATEBY_OFFSET UNITYSDK_OFFSET(0x1E23ADA0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLESCALEBY_OFFSET UNITYSDK_OFFSET(0x1E23B160)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1E233390)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOCOLOR_2_OFFSET UNITYSDK_OFFSET(0x1E233810)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOCOLOR_3_OFFSET UNITYSDK_OFFSET(0x1E2339C0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOCOLOR_4_OFFSET UNITYSDK_OFFSET(0x1E233B40)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOCOLOR_OFFSET UNITYSDK_OFFSET(0x1E2321B0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1E23B400)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E23B320)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOFADE_1_OFFSET UNITYSDK_OFFSET(0x1E233D10)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOFADE_2_OFFSET UNITYSDK_OFFSET(0x1E233EA0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOFADE_OFFSET UNITYSDK_OFFSET(0x1E231D00)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOFARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1E232330)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1E2324B0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOFLIP_1_OFFSET UNITYSDK_OFFSET(0x1E23B670)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOFLIP_OFFSET UNITYSDK_OFFSET(0x1E23B5A0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOFLOAT_OFFSET UNITYSDK_OFFSET(0x1E234080)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOGOTO_1_OFFSET UNITYSDK_OFFSET(0x1E23B810)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOGOTO_OFFSET UNITYSDK_OFFSET(0x1E23B740)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOINTENSITY_OFFSET UNITYSDK_OFFSET(0x1E233510)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOJUMP_1_OFFSET UNITYSDK_OFFSET(0x1E238DC0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOJUMP_OFFSET UNITYSDK_OFFSET(0x1E235560)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOKILL_1_OFFSET UNITYSDK_OFFSET(0x1E23B540)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOKILL_OFFSET UNITYSDK_OFFSET(0x1E23B4E0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALJUMP_OFFSET UNITYSDK_OFFSET(0x1E239440)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALMOVEX_OFFSET UNITYSDK_OFFSET(0x1E2367D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALMOVEY_OFFSET UNITYSDK_OFFSET(0x1E236970)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALMOVEZ_OFFSET UNITYSDK_OFFSET(0x1E236B10)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALMOVE_OFFSET UNITYSDK_OFFSET(0x1E236630)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALPATH_1_OFFSET UNITYSDK_OFFSET(0x1E23A190)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALPATH_OFFSET UNITYSDK_OFFSET(0x1E239D20)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALROTATEQUATERNION_OFFSET UNITYSDK_OFFSET(0x1E237210)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALROTATE_OFFSET UNITYSDK_OFFSET(0x1E237060)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOLOOKAT_1_OFFSET UNITYSDK_OFFSET(0x1E237BF0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOLOOKAT_OFFSET UNITYSDK_OFFSET(0x1E235300)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVEX_1_OFFSET UNITYSDK_OFFSET(0x1E236150)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVEX_OFFSET UNITYSDK_OFFSET(0x1E234C40)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVEY_1_OFFSET UNITYSDK_OFFSET(0x1E2362F0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVEY_OFFSET UNITYSDK_OFFSET(0x1E234E00)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVEZ_1_OFFSET UNITYSDK_OFFSET(0x1E236490)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVEZ_OFFSET UNITYSDK_OFFSET(0x1E234FB0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVE_1_OFFSET UNITYSDK_OFFSET(0x1E235FB0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVE_OFFSET UNITYSDK_OFFSET(0x1E234A70)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DONEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1E232630)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1E2343B0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOOFFSET_OFFSET UNITYSDK_OFFSET(0x1E234240)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOORTHOSIZE_OFFSET UNITYSDK_OFFSET(0x1E2327B0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPATH_1_OFFSET UNITYSDK_OFFSET(0x1E239F90)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPATH_OFFSET UNITYSDK_OFFSET(0x1E239AC0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPAUSE_1_OFFSET UNITYSDK_OFFSET(0x1E23B9B0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPAUSE_OFFSET UNITYSDK_OFFSET(0x1E23B8E0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPITCH_OFFSET UNITYSDK_OFFSET(0x1E231EA0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPIXELRECT_OFFSET UNITYSDK_OFFSET(0x1E232930)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPLAYBACKWARDS_1_OFFSET UNITYSDK_OFFSET(0x1E23BCF0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPLAYBACKWARDS_OFFSET UNITYSDK_OFFSET(0x1E23BC20)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPLAYFORWARD_1_OFFSET UNITYSDK_OFFSET(0x1E23BE90)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x1E23BDC0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPLAY_1_OFFSET UNITYSDK_OFFSET(0x1E23BB50)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPLAY_OFFSET UNITYSDK_OFFSET(0x1E23BA80)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPUNCHPOSITION_OFFSET UNITYSDK_OFFSET(0x1E237E40)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPUNCHROTATION_OFFSET UNITYSDK_OFFSET(0x1E238120)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOPUNCHSCALE_OFFSET UNITYSDK_OFFSET(0x1E237FC0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DORECT_OFFSET UNITYSDK_OFFSET(0x1E232AB0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DORESIZE_OFFSET UNITYSDK_OFFSET(0x1E235C90)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DORESTART_1_OFFSET UNITYSDK_OFFSET(0x1E23C020)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DORESTART_OFFSET UNITYSDK_OFFSET(0x1E23BF60)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOREWIND_1_OFFSET UNITYSDK_OFFSET(0x1E23C1A0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOREWIND_OFFSET UNITYSDK_OFFSET(0x1E23C0E0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOROTATEQUATERNION_OFFSET UNITYSDK_OFFSET(0x1E236E60)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOROTATE_1_OFFSET UNITYSDK_OFFSET(0x1E236CB0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOROTATE_OFFSET UNITYSDK_OFFSET(0x1E235150)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSCALEX_OFFSET UNITYSDK_OFFSET(0x1E237730)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSCALEY_OFFSET UNITYSDK_OFFSET(0x1E2378C0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSCALEZ_OFFSET UNITYSDK_OFFSET(0x1E237A60)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSCALE_1_OFFSET UNITYSDK_OFFSET(0x1E2375A0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSCALE_OFFSET UNITYSDK_OFFSET(0x1E237410)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSHADOWSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1E233690)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1E232E00)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEPOSITION_2_OFFSET UNITYSDK_OFFSET(0x1E238280)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEPOSITION_3_OFFSET UNITYSDK_OFFSET(0x1E238470)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E232C30)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEROTATION_1_OFFSET UNITYSDK_OFFSET(0x1E2331B0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEROTATION_2_OFFSET UNITYSDK_OFFSET(0x1E238660)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEROTATION_3_OFFSET UNITYSDK_OFFSET(0x1E238830)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEROTATION_OFFSET UNITYSDK_OFFSET(0x1E232FE0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKESCALE_1_OFFSET UNITYSDK_OFFSET(0x1E238BE0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKESCALE_OFFSET UNITYSDK_OFFSET(0x1E238A10)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSMOOTHREWIND_1_OFFSET UNITYSDK_OFFSET(0x1E23C330)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOSMOOTHREWIND_OFFSET UNITYSDK_OFFSET(0x1E23C260)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOTILING_1_OFFSET UNITYSDK_OFFSET(0x1E2346E0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOTILING_OFFSET UNITYSDK_OFFSET(0x1E234570)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOTIME_OFFSET UNITYSDK_OFFSET(0x1E235E30)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOTOGGLEPAUSE_1_OFFSET UNITYSDK_OFFSET(0x1E23C4D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOTOGGLEPAUSE_OFFSET UNITYSDK_OFFSET(0x1E23C400)
#define DG_TWEENING_SHORTCUTEXTENSIONS_DOVECTOR_OFFSET UNITYSDK_OFFSET(0x1E2348A0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions_TypeDefinitionIndex = 27850;

	class ShortcutExtensions : public ::System::Object
	{
	public:
		static ::DG::Tweening::Tweener* DOFade(::UnityEngine::AudioSource* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::AudioSource*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOFADE_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOPitch(::UnityEngine::AudioSource* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::AudioSource*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPITCH_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOAspect(::UnityEngine::Camera* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Camera*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOASPECT_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOColor(::UnityEngine::Camera* target, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Camera*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOCOLOR_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOFarClipPlane(::UnityEngine::Camera* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Camera*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOFARCLIPPLANE_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOFieldOfView(::UnityEngine::Camera* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Camera*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOFIELDOFVIEW_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DONearClipPlane(::UnityEngine::Camera* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Camera*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DONEARCLIPPLANE_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOOrthoSize(::UnityEngine::Camera* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Camera*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOORTHOSIZE_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOPixelRect(::UnityEngine::Camera* target, ::UnityEngine::Rect endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPIXELRECT_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DORect(::UnityEngine::Camera* target, ::UnityEngine::Rect endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DORECT_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOShakePosition(::UnityEngine::Camera* target, ::System::Single duration, ::System::Single strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Camera*, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEPOSITION_OFFSET))(target, duration, strength, vibrato, randomness, fadeOut);
		}

		static ::DG::Tweening::Tweener* DOShakePosition_1(::UnityEngine::Camera* target, ::System::Single duration, ::UnityEngine::Vector3 strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Camera*, ::System::Single, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEPOSITION_1_OFFSET))(target, duration, strength, vibrato, randomness, fadeOut);
		}

		static ::DG::Tweening::Tweener* DOShakeRotation(::UnityEngine::Camera* target, ::System::Single duration, ::System::Single strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Camera*, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEROTATION_OFFSET))(target, duration, strength, vibrato, randomness, fadeOut);
		}

		static ::DG::Tweening::Tweener* DOShakeRotation_1(::UnityEngine::Camera* target, ::System::Single duration, ::UnityEngine::Vector3 strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Camera*, ::System::Single, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEROTATION_1_OFFSET))(target, duration, strength, vibrato, randomness, fadeOut);
		}

		static ::DG::Tweening::Tweener* DOColor_1(::UnityEngine::Light* target, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Light*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOCOLOR_1_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOIntensity(::UnityEngine::Light* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Light*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOINTENSITY_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOShadowStrength(::UnityEngine::Light* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Light*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSHADOWSTRENGTH_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOColor_2(::UnityEngine::LineRenderer* target, ::DG::Tweening::Color2 startValue, ::DG::Tweening::Color2 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::LineRenderer*, ::DG::Tweening::Color2, ::DG::Tweening::Color2, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOCOLOR_2_OFFSET))(target, startValue, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOColor_3(::UnityEngine::Material* target, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Material*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOCOLOR_3_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOColor_4(::UnityEngine::Material* target, ::UnityEngine::Color endValue, ::System::String* property, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Material*, ::UnityEngine::Color, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOCOLOR_4_OFFSET))(target, endValue, property, duration);
		}

		static ::DG::Tweening::Tweener* DOFade_1(::UnityEngine::Material* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Material*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOFADE_1_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOFade_2(::UnityEngine::Material* target, ::System::Single endValue, ::System::String* property, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Material*, ::System::Single, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOFADE_2_OFFSET))(target, endValue, property, duration);
		}

		static ::DG::Tweening::Tweener* DOFloat(::UnityEngine::Material* target, ::System::Single endValue, ::System::String* property, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Material*, ::System::Single, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOFLOAT_OFFSET))(target, endValue, property, duration);
		}

		static ::DG::Tweening::Tweener* DOOffset(::UnityEngine::Material* target, ::UnityEngine::Vector2 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Material*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOOFFSET_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOOffset_1(::UnityEngine::Material* target, ::UnityEngine::Vector2 endValue, ::System::String* property, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Material*, ::UnityEngine::Vector2, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOOFFSET_1_OFFSET))(target, endValue, property, duration);
		}

		static ::DG::Tweening::Tweener* DOTiling(::UnityEngine::Material* target, ::UnityEngine::Vector2 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Material*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOTILING_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOTiling_1(::UnityEngine::Material* target, ::UnityEngine::Vector2 endValue, ::System::String* property, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Material*, ::UnityEngine::Vector2, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOTILING_1_OFFSET))(target, endValue, property, duration);
		}

		static ::DG::Tweening::Tweener* DOVector(::UnityEngine::Material* target, ::UnityEngine::Vector4 endValue, ::System::String* property, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Material*, ::UnityEngine::Vector4, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOVECTOR_OFFSET))(target, endValue, property, duration);
		}

		static ::DG::Tweening::Tweener* DOMove(::UnityEngine::Rigidbody* target, ::UnityEngine::Vector3 endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVE_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOMoveX(::UnityEngine::Rigidbody* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Rigidbody*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVEX_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOMoveY(::UnityEngine::Rigidbody* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Rigidbody*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVEY_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOMoveZ(::UnityEngine::Rigidbody* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Rigidbody*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVEZ_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DORotate(::UnityEngine::Rigidbody* target, ::UnityEngine::Vector3 endValue, ::System::Single duration, ::DG::Tweening::RotateMode mode)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, ::System::Single, ::DG::Tweening::RotateMode))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOROTATE_OFFSET))(target, endValue, duration, mode);
		}

		static ::DG::Tweening::Tweener* DOLookAt(::UnityEngine::Rigidbody* target, ::UnityEngine::Vector3 towards, ::System::Single duration, ::DG::Tweening::AxisConstraint axisConstraint, ::System::Nullable_1<::UnityEngine::Vector3> up)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, ::System::Single, ::DG::Tweening::AxisConstraint, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOLOOKAT_OFFSET))(target, towards, duration, axisConstraint, up);
		}

		static ::DG::Tweening::Sequence* DOJump(::UnityEngine::Rigidbody* target, ::UnityEngine::Vector3 endValue, ::System::Single jumpPower, ::System::Int32 numJumps, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Sequence*(*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOJUMP_OFFSET))(target, endValue, jumpPower, numJumps, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOResize(::UnityEngine::TrailRenderer* target, ::System::Single toStartWidth, ::System::Single toEndWidth, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::TrailRenderer*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DORESIZE_OFFSET))(target, toStartWidth, toEndWidth, duration);
		}

		static ::DG::Tweening::Tweener* DOTime(::UnityEngine::TrailRenderer* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::TrailRenderer*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOTIME_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOMove_1(::UnityEngine::Transform* target, ::UnityEngine::Vector3 endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVE_1_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOMoveX_1(::UnityEngine::Transform* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVEX_1_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOMoveY_1(::UnityEngine::Transform* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVEY_1_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOMoveZ_1(::UnityEngine::Transform* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOMOVEZ_1_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOLocalMove(::UnityEngine::Transform* target, ::UnityEngine::Vector3 endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALMOVE_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOLocalMoveX(::UnityEngine::Transform* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALMOVEX_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOLocalMoveY(::UnityEngine::Transform* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALMOVEY_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOLocalMoveZ(::UnityEngine::Transform* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALMOVEZ_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DORotate_1(::UnityEngine::Transform* target, ::UnityEngine::Vector3 endValue, ::System::Single duration, ::DG::Tweening::RotateMode mode)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::DG::Tweening::RotateMode))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOROTATE_1_OFFSET))(target, endValue, duration, mode);
		}

		static ::DG::Tweening::Tweener* DORotateQuaternion(::UnityEngine::Transform* target, ::UnityEngine::Quaternion endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOROTATEQUATERNION_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOLocalRotate(::UnityEngine::Transform* target, ::UnityEngine::Vector3 endValue, ::System::Single duration, ::DG::Tweening::RotateMode mode)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::DG::Tweening::RotateMode))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALROTATE_OFFSET))(target, endValue, duration, mode);
		}

		static ::DG::Tweening::Tweener* DOLocalRotateQuaternion(::UnityEngine::Transform* target, ::UnityEngine::Quaternion endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALROTATEQUATERNION_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOScale(::UnityEngine::Transform* target, ::UnityEngine::Vector3 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSCALE_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOScale_1(::UnityEngine::Transform* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSCALE_1_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOScaleX(::UnityEngine::Transform* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSCALEX_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOScaleY(::UnityEngine::Transform* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSCALEY_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOScaleZ(::UnityEngine::Transform* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSCALEZ_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOLookAt_1(::UnityEngine::Transform* target, ::UnityEngine::Vector3 towards, ::System::Single duration, ::DG::Tweening::AxisConstraint axisConstraint, ::System::Nullable_1<::UnityEngine::Vector3> up)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::DG::Tweening::AxisConstraint, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOLOOKAT_1_OFFSET))(target, towards, duration, axisConstraint, up);
		}

		static ::DG::Tweening::Tweener* DOPunchPosition(::UnityEngine::Transform* target, ::UnityEngine::Vector3 punch, ::System::Single duration, ::System::Int32 vibrato, ::System::Single elasticity, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPUNCHPOSITION_OFFSET))(target, punch, duration, vibrato, elasticity, snapping);
		}

		static ::DG::Tweening::Tweener* DOPunchScale(::UnityEngine::Transform* target, ::UnityEngine::Vector3 punch, ::System::Single duration, ::System::Int32 vibrato, ::System::Single elasticity)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPUNCHSCALE_OFFSET))(target, punch, duration, vibrato, elasticity);
		}

		static ::DG::Tweening::Tweener* DOPunchRotation(::UnityEngine::Transform* target, ::UnityEngine::Vector3 punch, ::System::Single duration, ::System::Int32 vibrato, ::System::Single elasticity)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPUNCHROTATION_OFFSET))(target, punch, duration, vibrato, elasticity);
		}

		static ::DG::Tweening::Tweener* DOShakePosition_2(::UnityEngine::Transform* target, ::System::Single duration, ::System::Single strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean snapping, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEPOSITION_2_OFFSET))(target, duration, strength, vibrato, randomness, snapping, fadeOut);
		}

		static ::DG::Tweening::Tweener* DOShakePosition_3(::UnityEngine::Transform* target, ::System::Single duration, ::UnityEngine::Vector3 strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean snapping, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEPOSITION_3_OFFSET))(target, duration, strength, vibrato, randomness, snapping, fadeOut);
		}

		static ::DG::Tweening::Tweener* DOShakeRotation_2(::UnityEngine::Transform* target, ::System::Single duration, ::System::Single strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEROTATION_2_OFFSET))(target, duration, strength, vibrato, randomness, fadeOut);
		}

		static ::DG::Tweening::Tweener* DOShakeRotation_3(::UnityEngine::Transform* target, ::System::Single duration, ::UnityEngine::Vector3 strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKEROTATION_3_OFFSET))(target, duration, strength, vibrato, randomness, fadeOut);
		}

		static ::DG::Tweening::Tweener* DOShakeScale(::UnityEngine::Transform* target, ::System::Single duration, ::System::Single strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKESCALE_OFFSET))(target, duration, strength, vibrato, randomness, fadeOut);
		}

		static ::DG::Tweening::Tweener* DOShakeScale_1(::UnityEngine::Transform* target, ::System::Single duration, ::UnityEngine::Vector3 strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSHAKESCALE_1_OFFSET))(target, duration, strength, vibrato, randomness, fadeOut);
		}

		static ::DG::Tweening::Sequence* DOJump_1(::UnityEngine::Transform* target, ::UnityEngine::Vector3 endValue, ::System::Single jumpPower, ::System::Int32 numJumps, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Sequence*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOJUMP_1_OFFSET))(target, endValue, jumpPower, numJumps, duration, snapping);
		}

		static ::DG::Tweening::Sequence* DOLocalJump(::UnityEngine::Transform* target, ::UnityEngine::Vector3 endValue, ::System::Single jumpPower, ::System::Int32 numJumps, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Sequence*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALJUMP_OFFSET))(target, endValue, jumpPower, numJumps, duration, snapping);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* DOPath(::UnityEngine::Transform* target, ::Il2CppArray<::UnityEngine::Vector3>* path, ::System::Single duration, ::DG::Tweening::PathType pathType, ::DG::Tweening::PathMode pathMode, ::System::Int32 resolution, ::System::Nullable_1<::UnityEngine::Color> gizmoColor)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*(*)(::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::DG::Tweening::PathType, ::DG::Tweening::PathMode, ::System::Int32, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPATH_OFFSET))(target, path, duration, pathType, pathMode, resolution, gizmoColor);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* DOLocalPath(::UnityEngine::Transform* target, ::Il2CppArray<::UnityEngine::Vector3>* path, ::System::Single duration, ::DG::Tweening::PathType pathType, ::DG::Tweening::PathMode pathMode, ::System::Int32 resolution, ::System::Nullable_1<::UnityEngine::Color> gizmoColor)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*(*)(::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::DG::Tweening::PathType, ::DG::Tweening::PathMode, ::System::Int32, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALPATH_OFFSET))(target, path, duration, pathType, pathMode, resolution, gizmoColor);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* DOPath_1(::UnityEngine::Transform* target, ::DG::Tweening::Plugins::Core::PathCore::Path* path, ::System::Single duration, ::DG::Tweening::PathMode pathMode)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*(*)(::UnityEngine::Transform*, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::System::Single, ::DG::Tweening::PathMode))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPATH_1_OFFSET))(target, path, duration, pathMode);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* DOLocalPath_1(::UnityEngine::Transform* target, ::DG::Tweening::Plugins::Core::PathCore::Path* path, ::System::Single duration, ::DG::Tweening::PathMode pathMode)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*(*)(::UnityEngine::Transform*, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::System::Single, ::DG::Tweening::PathMode))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOLOCALPATH_1_OFFSET))(target, path, duration, pathMode);
		}

		static ::DG::Tweening::Tweener* DOBlendableColor(::UnityEngine::Light* target, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Light*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLECOLOR_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOBlendableColor_1(::UnityEngine::Material* target, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Material*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLECOLOR_1_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOBlendableColor_2(::UnityEngine::Material* target, ::UnityEngine::Color endValue, ::System::String* property, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Material*, ::UnityEngine::Color, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLECOLOR_2_OFFSET))(target, endValue, property, duration);
		}

		static ::DG::Tweening::Tweener* DOBlendableMoveBy(::UnityEngine::Transform* target, ::UnityEngine::Vector3 byValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLEMOVEBY_OFFSET))(target, byValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOBlendableLocalMoveBy(::UnityEngine::Transform* target, ::UnityEngine::Vector3 byValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLELOCALMOVEBY_OFFSET))(target, byValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOBlendableRotateBy(::UnityEngine::Transform* target, ::UnityEngine::Vector3 byValue, ::System::Single duration, ::DG::Tweening::RotateMode mode)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::DG::Tweening::RotateMode))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLEROTATEBY_OFFSET))(target, byValue, duration, mode);
		}

		static ::DG::Tweening::Tweener* DOBlendableLocalRotateBy(::UnityEngine::Transform* target, ::UnityEngine::Vector3 byValue, ::System::Single duration, ::DG::Tweening::RotateMode mode)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::DG::Tweening::RotateMode))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLELOCALROTATEBY_OFFSET))(target, byValue, duration, mode);
		}

		static ::DG::Tweening::Tweener* DOBlendableScaleBy(::UnityEngine::Transform* target, ::UnityEngine::Vector3 byValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOBLENDABLESCALEBY_OFFSET))(target, byValue, duration);
		}

		static ::System::Int32 DOComplete(::UnityEngine::Component* target, ::System::Boolean withCallbacks)
		{
			return ((::System::Int32(*)(::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOCOMPLETE_OFFSET))(target, withCallbacks);
		}

		static ::System::Int32 DOComplete_1(::UnityEngine::Material* target, ::System::Boolean withCallbacks)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOCOMPLETE_1_OFFSET))(target, withCallbacks);
		}

		static ::System::Int32 DOKill(::UnityEngine::Component* target, ::System::Boolean complete)
		{
			return ((::System::Int32(*)(::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOKILL_OFFSET))(target, complete);
		}

		static ::System::Int32 DOKill_1(::UnityEngine::Material* target, ::System::Boolean complete)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOKILL_1_OFFSET))(target, complete);
		}

		static ::System::Int32 DOFlip(::UnityEngine::Component* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOFLIP_OFFSET))(target);
		}

		static ::System::Int32 DOFlip_1(::UnityEngine::Material* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOFLIP_1_OFFSET))(target);
		}

		static ::System::Int32 DOGoto(::UnityEngine::Component* target, ::System::Single to, ::System::Boolean andPlay)
		{
			return ((::System::Int32(*)(::UnityEngine::Component*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOGOTO_OFFSET))(target, to, andPlay);
		}

		static ::System::Int32 DOGoto_1(::UnityEngine::Material* target, ::System::Single to, ::System::Boolean andPlay)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOGOTO_1_OFFSET))(target, to, andPlay);
		}

		static ::System::Int32 DOPause(::UnityEngine::Component* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPAUSE_OFFSET))(target);
		}

		static ::System::Int32 DOPause_1(::UnityEngine::Material* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPAUSE_1_OFFSET))(target);
		}

		static ::System::Int32 DOPlay(::UnityEngine::Component* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPLAY_OFFSET))(target);
		}

		static ::System::Int32 DOPlay_1(::UnityEngine::Material* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPLAY_1_OFFSET))(target);
		}

		static ::System::Int32 DOPlayBackwards(::UnityEngine::Component* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPLAYBACKWARDS_OFFSET))(target);
		}

		static ::System::Int32 DOPlayBackwards_1(::UnityEngine::Material* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPLAYBACKWARDS_1_OFFSET))(target);
		}

		static ::System::Int32 DOPlayForward(::UnityEngine::Component* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPLAYFORWARD_OFFSET))(target);
		}

		static ::System::Int32 DOPlayForward_1(::UnityEngine::Material* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOPLAYFORWARD_1_OFFSET))(target);
		}

		static ::System::Int32 DORestart(::UnityEngine::Component* target, ::System::Boolean includeDelay)
		{
			return ((::System::Int32(*)(::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DORESTART_OFFSET))(target, includeDelay);
		}

		static ::System::Int32 DORestart_1(::UnityEngine::Material* target, ::System::Boolean includeDelay)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DORESTART_1_OFFSET))(target, includeDelay);
		}

		static ::System::Int32 DORewind(::UnityEngine::Component* target, ::System::Boolean includeDelay)
		{
			return ((::System::Int32(*)(::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOREWIND_OFFSET))(target, includeDelay);
		}

		static ::System::Int32 DORewind_1(::UnityEngine::Material* target, ::System::Boolean includeDelay)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOREWIND_1_OFFSET))(target, includeDelay);
		}

		static ::System::Int32 DOSmoothRewind(::UnityEngine::Component* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSMOOTHREWIND_OFFSET))(target);
		}

		static ::System::Int32 DOSmoothRewind_1(::UnityEngine::Material* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOSMOOTHREWIND_1_OFFSET))(target);
		}

		static ::System::Int32 DOTogglePause(::UnityEngine::Component* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOTOGGLEPAUSE_OFFSET))(target);
		}

		static ::System::Int32 DOTogglePause_1(::UnityEngine::Material* target)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS_DOTOGGLEPAUSE_1_OFFSET))(target);
		}
	};
}
