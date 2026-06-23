#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/AutoPlay.h"
#include "unitysdk/DG/Tweening/AxisConstraint.h"
#include "unitysdk/DG/Tweening/Color2.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/DG/Tweening/LogBehaviour.h"
#include "unitysdk/DG/Tweening/LoopType.h"
#include "unitysdk/DG/Tweening/Plugins/Options/ColorOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/FloatOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/NoOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/QuaternionOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/RectOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/StringOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/Vector3ArrayOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/VectorOptions.h"
#include "unitysdk/DG/Tweening/UpdateType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace DG::Tweening { class IDOTweenInit; }
namespace DG::Tweening { class Sequence; }
namespace DG::Tweening { class Tween; }
namespace DG::Tweening { class TweenCallback; }
namespace DG::Tweening { class Tweener; }
namespace DG::Tweening::Core { class DOTweenComponent; }
namespace DG::Tweening::Core { class DOTweenSettings; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace DG::Tweening::Plugins::Core { template <typename T1, typename T2, typename T3> class ABSTweenPlugin_3; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectOffset; }

#define DG_TWEENING_DOTWEEN_AUTOINIT_OFFSET UNITYSDK_OFFSET(0x1E6170D0)
#define DG_TWEENING_DOTWEEN_CLEARCACHEDTWEENS_OFFSET UNITYSDK_OFFSET(0x1E6174D0)
#define DG_TWEENING_DOTWEEN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E6171F0)
#define DG_TWEENING_DOTWEEN_COMPLETEALL_OFFSET UNITYSDK_OFFSET(0x1E619670)
#define DG_TWEENING_DOTWEEN_COMPLETEANDRETURNKILLEDTOTEXCEPTFOR_OFFSET UNITYSDK_OFFSET(0x1E619870)
#define DG_TWEENING_DOTWEEN_COMPLETEANDRETURNKILLEDTOT_1_OFFSET UNITYSDK_OFFSET(0x1E6197F0)
#define DG_TWEENING_DOTWEEN_COMPLETEANDRETURNKILLEDTOT_OFFSET UNITYSDK_OFFSET(0x1E619780)
#define DG_TWEENING_DOTWEEN_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1E6196F0)
#define DG_TWEENING_DOTWEEN_FLIPALL_OFFSET UNITYSDK_OFFSET(0x1E6198F0)
#define DG_TWEENING_DOTWEEN_FLIP_OFFSET UNITYSDK_OFFSET(0x1E619960)
#define DG_TWEENING_DOTWEEN_GET_LOGBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1E6162D0)
#define DG_TWEENING_DOTWEEN_GOTOALL_OFFSET UNITYSDK_OFFSET(0x1E6199E0)
#define DG_TWEENING_DOTWEEN_GOTO_OFFSET UNITYSDK_OFFSET(0x1E619A60)
#define DG_TWEENING_DOTWEEN_INITCHECK_OFFSET UNITYSDK_OFFSET(0x1E619500)
#define DG_TWEENING_DOTWEEN_INIT_1_OFFSET UNITYSDK_OFFSET(0x1E616610)
#define DG_TWEENING_DOTWEEN_INIT_OFFSET UNITYSDK_OFFSET(0x1E6164A0)
#define DG_TWEENING_DOTWEEN_ISTWEENING_OFFSET UNITYSDK_OFFSET(0x1E61A8F0)
#define DG_TWEENING_DOTWEEN_KILLALL_1_OFFSET UNITYSDK_OFFSET(0x1E619BE0)
#define DG_TWEENING_DOTWEEN_KILLALL_OFFSET UNITYSDK_OFFSET(0x1E619AF0)
#define DG_TWEENING_DOTWEEN_KILL_OFFSET UNITYSDK_OFFSET(0x1E619DE0)
#define DG_TWEENING_DOTWEEN_PAUSEALL_OFFSET UNITYSDK_OFFSET(0x1E619F10)
#define DG_TWEENING_DOTWEEN_PAUSEDTWEENS_OFFSET UNITYSDK_OFFSET(0x1E61AA30)
#define DG_TWEENING_DOTWEEN_PAUSE_OFFSET UNITYSDK_OFFSET(0x1E619F80)
#define DG_TWEENING_DOTWEEN_PLAYALL_OFFSET UNITYSDK_OFFSET(0x1E61A000)
#define DG_TWEENING_DOTWEEN_PLAYBACKWARDSALL_OFFSET UNITYSDK_OFFSET(0x1E61A180)
#define DG_TWEENING_DOTWEEN_PLAYBACKWARDS_1_OFFSET UNITYSDK_OFFSET(0x1E61A270)
#define DG_TWEENING_DOTWEEN_PLAYBACKWARDS_OFFSET UNITYSDK_OFFSET(0x1E61A1F0)
#define DG_TWEENING_DOTWEEN_PLAYFORWARDALL_OFFSET UNITYSDK_OFFSET(0x1E61A300)
#define DG_TWEENING_DOTWEEN_PLAYFORWARD_1_OFFSET UNITYSDK_OFFSET(0x1E61A3F0)
#define DG_TWEENING_DOTWEEN_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x1E61A370)
#define DG_TWEENING_DOTWEEN_PLAYINGTWEENS_OFFSET UNITYSDK_OFFSET(0x1E61A9D0)
#define DG_TWEENING_DOTWEEN_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1E61A0F0)
#define DG_TWEENING_DOTWEEN_PLAY_OFFSET UNITYSDK_OFFSET(0x1E61A070)
#define DG_TWEENING_DOTWEEN_PUNCH_OFFSET UNITYSDK_OFFSET(0x1E618050)
#define DG_TWEENING_DOTWEEN_RESTARTALL_OFFSET UNITYSDK_OFFSET(0x1E61A480)
#define DG_TWEENING_DOTWEEN_RESTART_1_OFFSET UNITYSDK_OFFSET(0x1E61A580)
#define DG_TWEENING_DOTWEEN_RESTART_OFFSET UNITYSDK_OFFSET(0x1E61A500)
#define DG_TWEENING_DOTWEEN_REWINDALL_OFFSET UNITYSDK_OFFSET(0x1E61A610)
#define DG_TWEENING_DOTWEEN_REWIND_OFFSET UNITYSDK_OFFSET(0x1E61A690)
#define DG_TWEENING_DOTWEEN_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x1E619470)
#define DG_TWEENING_DOTWEEN_SETTWEENSCAPACITY_OFFSET UNITYSDK_OFFSET(0x1E617190)
#define DG_TWEENING_DOTWEEN_SET_LOGBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1E616330)
#define DG_TWEENING_DOTWEEN_SHAKE_1_OFFSET UNITYSDK_OFFSET(0x1E6192E0)
#define DG_TWEENING_DOTWEEN_SHAKE_2_OFFSET UNITYSDK_OFFSET(0x1E618980)
#define DG_TWEENING_DOTWEEN_SHAKE_OFFSET UNITYSDK_OFFSET(0x1E618890)
#define DG_TWEENING_DOTWEEN_SMOOTHREWINDALL_OFFSET UNITYSDK_OFFSET(0x1E61A710)
#define DG_TWEENING_DOTWEEN_SMOOTHREWIND_OFFSET UNITYSDK_OFFSET(0x1E61A780)
#define DG_TWEENING_DOTWEEN_TOALPHA_OFFSET UNITYSDK_OFFSET(0x1E617E00)
#define DG_TWEENING_DOTWEEN_TOARRAY_OFFSET UNITYSDK_OFFSET(0x1E618570)
#define DG_TWEENING_DOTWEEN_TOAXIS_OFFSET UNITYSDK_OFFSET(0x1E617D40)
#define DG_TWEENING_DOTWEEN_TOGGLEPAUSEALL_OFFSET UNITYSDK_OFFSET(0x1E61A800)
#define DG_TWEENING_DOTWEEN_TOGGLEPAUSE_OFFSET UNITYSDK_OFFSET(0x1E61A870)
#define DG_TWEENING_DOTWEEN_TOTALPLAYINGTWEENS_OFFSET UNITYSDK_OFFSET(0x1E61A970)
#define DG_TWEENING_DOTWEEN_TO_10_OFFSET UNITYSDK_OFFSET(0x1E617AF0)
#define DG_TWEENING_DOTWEEN_TO_11_OFFSET UNITYSDK_OFFSET(0x1E617B90)
#define DG_TWEENING_DOTWEEN_TO_12_OFFSET UNITYSDK_OFFSET(0x1E617C20)
#define DG_TWEENING_DOTWEEN_TO_13_OFFSET UNITYSDK_OFFSET(0x1E617CB0)
#define DG_TWEENING_DOTWEEN_TO_14_OFFSET UNITYSDK_OFFSET(0x1E617EC0)
#define DG_TWEENING_DOTWEEN_TO_15_OFFSET UNITYSDK_OFFSET(0x1E6193D0)
#define DG_TWEENING_DOTWEEN_TO_1_OFFSET UNITYSDK_OFFSET(0x1E617620)
#define DG_TWEENING_DOTWEEN_TO_2_OFFSET UNITYSDK_OFFSET(0x1E6176B0)
#define DG_TWEENING_DOTWEEN_TO_3_OFFSET UNITYSDK_OFFSET(0x1E617730)
#define DG_TWEENING_DOTWEEN_TO_4_OFFSET UNITYSDK_OFFSET(0x1E6177B0)
#define DG_TWEENING_DOTWEEN_TO_5_OFFSET UNITYSDK_OFFSET(0x1E617830)
#define DG_TWEENING_DOTWEEN_TO_6_OFFSET UNITYSDK_OFFSET(0x1E6178B0)
#define DG_TWEENING_DOTWEEN_TO_7_OFFSET UNITYSDK_OFFSET(0x1E617940)
#define DG_TWEENING_DOTWEEN_TO_8_OFFSET UNITYSDK_OFFSET(0x1E6179C0)
#define DG_TWEENING_DOTWEEN_TO_9_OFFSET UNITYSDK_OFFSET(0x1E617A60)
#define DG_TWEENING_DOTWEEN_TO_OFFSET UNITYSDK_OFFSET(0x1E617590)
#define DG_TWEENING_DOTWEEN_TWEENSBYID_OFFSET UNITYSDK_OFFSET(0x1E61AA90)
#define DG_TWEENING_DOTWEEN_TWEENSBYTARGET_OFFSET UNITYSDK_OFFSET(0x1E61AAF0)
#define DG_TWEENING_DOTWEEN_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1E617530)
#define DG_TWEENING_DOTWEEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6163A0)
#define DG_TWEENING_DOTWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E61AB50)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOTween_TypeDefinitionIndex = 27835;

	class DOTween : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::DG::Tweening::TweenCallback*>** StaticGet_GizmosDelegates()
		{
			return (::System::Collections::Generic::List_1<::DG::Tweening::TweenCallback*>**)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x22A90);
		}
		static ::DG::Tweening::Core::DOTweenComponent** StaticGet_instance()
		{
			return (::DG::Tweening::Core::DOTweenComponent**)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x22A98);
		}
		static ::System::String** StaticGet_Version()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x22AA0);
		}
		static ::System::Boolean* StaticGet_drawGizmos()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7890);
		}
		static ::System::Boolean* StaticGet_isUnityEditor()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7891);
		}
		static ::System::Boolean* StaticGet_defaultTimeScaleIndependent()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7892);
		}
		static ::DG::Tweening::UpdateType* StaticGet_defaultUpdateType()
		{
			return (::DG::Tweening::UpdateType*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7894);
		}
		static ::DG::Tweening::LoopType* StaticGet_defaultLoopType()
		{
			return (::DG::Tweening::LoopType*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7898);
		}
		static ::System::Single* StaticGet_timeScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x789C);
		}
		static ::System::Boolean* StaticGet_useSmoothDeltaTime()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78A0);
		}
		static ::System::Boolean* StaticGet_showUnityEditorReport()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78A1);
		}
		static ::System::Boolean* StaticGet_useSafeMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78A2);
		}
		static ::System::Boolean* StaticGet_initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78A3);
		}
		static ::System::Single* StaticGet_defaultEaseOvershootOrAmplitude()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78A4);
		}
		static ::DG::Tweening::LogBehaviour* StaticGet__logBehaviour()
		{
			return (::DG::Tweening::LogBehaviour*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78A8);
		}
		static ::System::Boolean* StaticGet_isQuitting()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78AC);
		}
		static ::System::Boolean* StaticGet_defaultAutoKill()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78AD);
		}
		static ::System::Boolean* StaticGet_isDebugBuild()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78AE);
		}
		static ::System::Boolean* StaticGet_defaultRecyclable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78AF);
		}
		static ::DG::Tweening::AutoPlay* StaticGet_defaultAutoPlay()
		{
			return (::DG::Tweening::AutoPlay*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78B0);
		}
		static ::DG::Tweening::Ease* StaticGet_defaultEaseType()
		{
			return (::DG::Tweening::Ease*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78B4);
		}
		static ::System::Int32* StaticGet_maxActiveTweenersReached()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78B8);
		}
		static ::System::Int32* StaticGet_maxActiveSequencesReached()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78BC);
		}
		static ::System::Single* StaticGet_defaultEasePeriod()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x78C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN__CTOR_OFFSET))(this);
		}

		static ::DG::Tweening::LogBehaviour get_logBehaviour()
		{
			return ((::DG::Tweening::LogBehaviour(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_GET_LOGBEHAVIOUR_OFFSET))();
		}

		static ::System::Void set_logBehaviour(::DG::Tweening::LogBehaviour value)
		{
			return ((::System::Void(*)(::DG::Tweening::LogBehaviour))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_SET_LOGBEHAVIOUR_OFFSET))(value);
		}

		static ::DG::Tweening::IDOTweenInit* Init(::System::Nullable_1<::System::Boolean> recycleAllByDefault, ::System::Nullable_1<::System::Boolean> useSafeMode, ::System::Nullable_1<::DG::Tweening::LogBehaviour> logBehaviour)
		{
			return ((::DG::Tweening::IDOTweenInit*(*)(::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::DG::Tweening::LogBehaviour>))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_INIT_OFFSET))(recycleAllByDefault, useSafeMode, logBehaviour);
		}

		static ::System::Void AutoInit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_AUTOINIT_OFFSET))();
		}

		static ::DG::Tweening::IDOTweenInit* Init_1(::DG::Tweening::Core::DOTweenSettings* settings, ::System::Nullable_1<::System::Boolean> recycleAllByDefault, ::System::Nullable_1<::System::Boolean> useSafeMode, ::System::Nullable_1<::DG::Tweening::LogBehaviour> logBehaviour)
		{
			return ((::DG::Tweening::IDOTweenInit*(*)(::DG::Tweening::Core::DOTweenSettings*, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::System::Boolean>, ::System::Nullable_1<::DG::Tweening::LogBehaviour>))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_INIT_1_OFFSET))(settings, recycleAllByDefault, useSafeMode, logBehaviour);
		}

		static ::System::Void SetTweensCapacity(::System::Int32 tweenersCapacity, ::System::Int32 sequencesCapacity)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_SETTWEENSCAPACITY_OFFSET))(tweenersCapacity, sequencesCapacity);
		}

		static ::System::Void Clear(::System::Boolean destroy)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_CLEAR_OFFSET))(destroy);
		}

		static ::System::Void ClearCachedTweens()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_CLEARCACHEDTWEENS_OFFSET))();
		}

		static ::System::Int32 Validate()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_VALIDATE_OFFSET))();
		}

		static ::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>* To(::DG::Tweening::Core::DOGetter_1<::System::Single>* getter, ::DG::Tweening::Core::DOSetter_1<::System::Single>* setter, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::System::Single>*, ::DG::Tweening::Core::DOSetter_1<::System::Single>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::System::Double, ::System::Double, ::DG::Tweening::Plugins::Options::NoOptions>* To_1(::DG::Tweening::Core::DOGetter_1<::System::Double>* getter, ::DG::Tweening::Core::DOSetter_1<::System::Double>* setter, ::System::Double endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::System::Double, ::System::Double, ::DG::Tweening::Plugins::Options::NoOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::System::Double>*, ::DG::Tweening::Core::DOSetter_1<::System::Double>*, ::System::Double, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_1_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Tweener* To_2(::DG::Tweening::Core::DOGetter_1<::System::Int32>* getter, ::DG::Tweening::Core::DOSetter_1<::System::Int32>* setter, ::System::Int32 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::DOGetter_1<::System::Int32>*, ::DG::Tweening::Core::DOSetter_1<::System::Int32>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_2_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Tweener* To_3(::DG::Tweening::Core::DOGetter_1<::System::UInt32>* getter, ::DG::Tweening::Core::DOSetter_1<::System::UInt32>* setter, ::System::UInt32 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::DOGetter_1<::System::UInt32>*, ::DG::Tweening::Core::DOSetter_1<::System::UInt32>*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_3_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Tweener* To_4(::DG::Tweening::Core::DOGetter_1<::System::Int64>* getter, ::DG::Tweening::Core::DOSetter_1<::System::Int64>* setter, ::System::Int64 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::DOGetter_1<::System::Int64>*, ::DG::Tweening::Core::DOSetter_1<::System::Int64>*, ::System::Int64, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_4_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Tweener* To_5(::DG::Tweening::Core::DOGetter_1<::System::UInt64>* getter, ::DG::Tweening::Core::DOSetter_1<::System::UInt64>* setter, ::System::UInt64 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::DOGetter_1<::System::UInt64>*, ::DG::Tweening::Core::DOSetter_1<::System::UInt64>*, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_5_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>* To_6(::DG::Tweening::Core::DOGetter_1<::System::String*>* getter, ::DG::Tweening::Core::DOSetter_1<::System::String*>* setter, ::System::String* endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::System::String*>*, ::DG::Tweening::Core::DOSetter_1<::System::String*>*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_6_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* To_7(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector2>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector2>* setter, ::UnityEngine::Vector2 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector2>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_7_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* To_8(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>* setter, ::UnityEngine::Vector3 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_8_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>* To_9(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector4>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector4>* setter, ::UnityEngine::Vector4 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector4>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector4>*, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_9_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>* To_10(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Quaternion>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Quaternion>* setter, ::UnityEngine::Vector3 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Quaternion>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Quaternion>*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_10_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>* To_11(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Color>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Color>* setter, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Color>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_11_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>* To_12(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Rect>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Rect>* setter, ::UnityEngine::Rect endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Rect>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Rect>*, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_12_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Tweener* To_13(::DG::Tweening::Core::DOGetter_1<::UnityEngine::RectOffset*>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::RectOffset*>* setter, ::UnityEngine::RectOffset* endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::DOGetter_1<::UnityEngine::RectOffset*>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::RectOffset*>*, ::UnityEngine::RectOffset*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_13_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* ToAxis(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>* setter, ::System::Single endValue, ::System::Single duration, ::DG::Tweening::AxisConstraint axisConstraint)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single, ::DG::Tweening::AxisConstraint))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TOAXIS_OFFSET))(getter, setter, endValue, duration, axisConstraint);
		}

		static ::DG::Tweening::Tweener* ToAlpha(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Color>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Color>* setter, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Color>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Color>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TOALPHA_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Tweener* To_14(::DG::Tweening::Core::DOSetter_1<::System::Single>* setter, ::System::Single startValue, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::DOSetter_1<::System::Single>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_14_OFFSET))(setter, startValue, endValue, duration);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* Punch(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>* setter, ::UnityEngine::Vector3 direction, ::System::Single duration, ::System::Int32 vibrato, ::System::Single elasticity)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_PUNCH_OFFSET))(getter, setter, direction, duration, vibrato, elasticity);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* Shake(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>* setter, ::System::Single duration, ::System::Single strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean ignoreZAxis, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_SHAKE_OFFSET))(getter, setter, duration, strength, vibrato, randomness, ignoreZAxis, fadeOut);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* Shake_1(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>* setter, ::System::Single duration, ::UnityEngine::Vector3 strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*, ::System::Single, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_SHAKE_1_OFFSET))(getter, setter, duration, strength, vibrato, randomness, fadeOut);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* Shake_2(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>* setter, ::System::Single duration, ::UnityEngine::Vector3 strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean ignoreZAxis, ::System::Boolean vectorBased, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*, ::System::Single, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_SHAKE_2_OFFSET))(getter, setter, duration, strength, vibrato, randomness, ignoreZAxis, vectorBased, fadeOut);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* ToArray(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>* setter, ::Il2CppArray<::UnityEngine::Vector3>* endValues, ::Il2CppArray<::System::Single>* durations)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TOARRAY_OFFSET))(getter, setter, endValues, durations);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>* To_15(::DG::Tweening::Core::DOGetter_1<::DG::Tweening::Color2>* getter, ::DG::Tweening::Core::DOSetter_1<::DG::Tweening::Color2>* setter, ::DG::Tweening::Color2 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>*(*)(::DG::Tweening::Core::DOGetter_1<::DG::Tweening::Color2>*, ::DG::Tweening::Core::DOSetter_1<::DG::Tweening::Color2>*, ::DG::Tweening::Color2, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TO_15_OFFSET))(getter, setter, endValue, duration);
		}

		static ::DG::Tweening::Sequence* Sequence()
		{
			return ((::DG::Tweening::Sequence*(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_SEQUENCE_OFFSET))();
		}

		static ::System::Int32 CompleteAll(::System::Boolean withCallbacks)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_COMPLETEALL_OFFSET))(withCallbacks);
		}

		static ::System::Int32 Complete(::System::Object* targetOrId, ::System::Boolean withCallbacks)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_COMPLETE_OFFSET))(targetOrId, withCallbacks);
		}

		static ::System::Int32 CompleteAndReturnKilledTot()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_COMPLETEANDRETURNKILLEDTOT_OFFSET))();
		}

		static ::System::Int32 CompleteAndReturnKilledTot_1(::System::Object* targetOrId)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_COMPLETEANDRETURNKILLEDTOT_1_OFFSET))(targetOrId);
		}

		static ::System::Int32 CompleteAndReturnKilledTotExceptFor(::Il2CppArray<::System::Object*>* excludeTargetsOrIds)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_COMPLETEANDRETURNKILLEDTOTEXCEPTFOR_OFFSET))(excludeTargetsOrIds);
		}

		static ::System::Int32 FlipAll()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_FLIPALL_OFFSET))();
		}

		static ::System::Int32 Flip(::System::Object* targetOrId)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_FLIP_OFFSET))(targetOrId);
		}

		static ::System::Int32 GotoAll(::System::Single to, ::System::Boolean andPlay)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_GOTOALL_OFFSET))(to, andPlay);
		}

		static ::System::Int32 Goto(::System::Object* targetOrId, ::System::Single to, ::System::Boolean andPlay)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_GOTO_OFFSET))(targetOrId, to, andPlay);
		}

		static ::System::Int32 KillAll(::System::Boolean complete)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_KILLALL_OFFSET))(complete);
		}

		static ::System::Int32 KillAll_1(::System::Boolean complete, ::Il2CppArray<::System::Object*>* idsOrTargetsToExclude)
		{
			return ((::System::Int32(*)(::System::Boolean, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_KILLALL_1_OFFSET))(complete, idsOrTargetsToExclude);
		}

		static ::System::Int32 Kill(::System::Object* targetOrId, ::System::Boolean complete)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_KILL_OFFSET))(targetOrId, complete);
		}

		static ::System::Int32 PauseAll()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_PAUSEALL_OFFSET))();
		}

		static ::System::Int32 Pause(::System::Object* targetOrId)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_PAUSE_OFFSET))(targetOrId);
		}

		static ::System::Int32 PlayAll()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_PLAYALL_OFFSET))();
		}

		static ::System::Int32 Play(::System::Object* targetOrId)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_PLAY_OFFSET))(targetOrId);
		}

		static ::System::Int32 Play_1(::System::Object* target, ::System::Object* id)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_PLAY_1_OFFSET))(target, id);
		}

		static ::System::Int32 PlayBackwardsAll()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_PLAYBACKWARDSALL_OFFSET))();
		}

		static ::System::Int32 PlayBackwards(::System::Object* targetOrId)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_PLAYBACKWARDS_OFFSET))(targetOrId);
		}

		static ::System::Int32 PlayBackwards_1(::System::Object* target, ::System::Object* id)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_PLAYBACKWARDS_1_OFFSET))(target, id);
		}

		static ::System::Int32 PlayForwardAll()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_PLAYFORWARDALL_OFFSET))();
		}

		static ::System::Int32 PlayForward(::System::Object* targetOrId)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_PLAYFORWARD_OFFSET))(targetOrId);
		}

		static ::System::Int32 PlayForward_1(::System::Object* target, ::System::Object* id)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_PLAYFORWARD_1_OFFSET))(target, id);
		}

		static ::System::Int32 RestartAll(::System::Boolean includeDelay)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_RESTARTALL_OFFSET))(includeDelay);
		}

		static ::System::Int32 Restart(::System::Object* targetOrId, ::System::Boolean includeDelay)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_RESTART_OFFSET))(targetOrId, includeDelay);
		}

		static ::System::Int32 Restart_1(::System::Object* target, ::System::Object* id, ::System::Boolean includeDelay)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_RESTART_1_OFFSET))(target, id, includeDelay);
		}

		static ::System::Int32 RewindAll(::System::Boolean includeDelay)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_REWINDALL_OFFSET))(includeDelay);
		}

		static ::System::Int32 Rewind(::System::Object* targetOrId, ::System::Boolean includeDelay)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_REWIND_OFFSET))(targetOrId, includeDelay);
		}

		static ::System::Int32 SmoothRewindAll()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_SMOOTHREWINDALL_OFFSET))();
		}

		static ::System::Int32 SmoothRewind(::System::Object* targetOrId)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_SMOOTHREWIND_OFFSET))(targetOrId);
		}

		static ::System::Int32 TogglePauseAll()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TOGGLEPAUSEALL_OFFSET))();
		}

		static ::System::Int32 TogglePause(::System::Object* targetOrId)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TOGGLEPAUSE_OFFSET))(targetOrId);
		}

		static ::System::Boolean IsTweening(::System::Object* targetOrId)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_ISTWEENING_OFFSET))(targetOrId);
		}

		static ::System::Int32 TotalPlayingTweens()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TOTALPLAYINGTWEENS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* PlayingTweens()
		{
			return ((::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_PLAYINGTWEENS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* PausedTweens()
		{
			return ((::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_PAUSEDTWEENS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* TweensById(::System::Object* id, ::System::Boolean playingOnly)
		{
			return ((::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TWEENSBYID_OFFSET))(id, playingOnly);
		}

		static ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* TweensByTarget(::System::Object* target, ::System::Boolean playingOnly)
		{
			return ((::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_TWEENSBYTARGET_OFFSET))(target, playingOnly);
		}

		static ::System::Void InitCheck()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN_INITCHECK_OFFSET))();
		}
	};
}
