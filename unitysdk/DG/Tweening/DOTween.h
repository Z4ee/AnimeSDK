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

#define DG_TWEENING_DOTWEEN_AUTOINIT_OFFSET UNITYSDK_OFFSET(0x1FA0D230)
#define DG_TWEENING_DOTWEEN_CLEARCACHEDTWEENS_OFFSET UNITYSDK_OFFSET(0x1FA0D640)
#define DG_TWEENING_DOTWEEN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FA0D350)
#define DG_TWEENING_DOTWEEN_COMPLETEALL_OFFSET UNITYSDK_OFFSET(0x1FA0F740)
#define DG_TWEENING_DOTWEEN_COMPLETEANDRETURNKILLEDTOTEXCEPTFOR_OFFSET UNITYSDK_OFFSET(0x1FA0F940)
#define DG_TWEENING_DOTWEEN_COMPLETEANDRETURNKILLEDTOT_1_OFFSET UNITYSDK_OFFSET(0x1FA0F8C0)
#define DG_TWEENING_DOTWEEN_COMPLETEANDRETURNKILLEDTOT_OFFSET UNITYSDK_OFFSET(0x1FA0F850)
#define DG_TWEENING_DOTWEEN_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1FA0F7C0)
#define DG_TWEENING_DOTWEEN_FLIPALL_OFFSET UNITYSDK_OFFSET(0x1FA0F9C0)
#define DG_TWEENING_DOTWEEN_FLIP_OFFSET UNITYSDK_OFFSET(0x1FA0FA30)
#define DG_TWEENING_DOTWEEN_GET_LOGBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1FA0C450)
#define DG_TWEENING_DOTWEEN_GOTOALL_OFFSET UNITYSDK_OFFSET(0x1FA0FAB0)
#define DG_TWEENING_DOTWEEN_GOTO_OFFSET UNITYSDK_OFFSET(0x1FA0FB30)
#define DG_TWEENING_DOTWEEN_INITCHECK_OFFSET UNITYSDK_OFFSET(0x1FA0F5D0)
#define DG_TWEENING_DOTWEEN_INIT_1_OFFSET UNITYSDK_OFFSET(0x1FA0C790)
#define DG_TWEENING_DOTWEEN_INIT_OFFSET UNITYSDK_OFFSET(0x1FA0C620)
#define DG_TWEENING_DOTWEEN_ISTWEENING_OFFSET UNITYSDK_OFFSET(0x1FA109C0)
#define DG_TWEENING_DOTWEEN_KILLALL_1_OFFSET UNITYSDK_OFFSET(0x1FA0FCB0)
#define DG_TWEENING_DOTWEEN_KILLALL_OFFSET UNITYSDK_OFFSET(0x1FA0FBC0)
#define DG_TWEENING_DOTWEEN_KILL_OFFSET UNITYSDK_OFFSET(0x1FA0FEB0)
#define DG_TWEENING_DOTWEEN_PAUSEALL_OFFSET UNITYSDK_OFFSET(0x1FA0FFE0)
#define DG_TWEENING_DOTWEEN_PAUSEDTWEENS_OFFSET UNITYSDK_OFFSET(0x1FA10B00)
#define DG_TWEENING_DOTWEEN_PAUSE_OFFSET UNITYSDK_OFFSET(0x1FA10050)
#define DG_TWEENING_DOTWEEN_PLAYALL_OFFSET UNITYSDK_OFFSET(0x1FA100D0)
#define DG_TWEENING_DOTWEEN_PLAYBACKWARDSALL_OFFSET UNITYSDK_OFFSET(0x1FA10250)
#define DG_TWEENING_DOTWEEN_PLAYBACKWARDS_1_OFFSET UNITYSDK_OFFSET(0x1FA10340)
#define DG_TWEENING_DOTWEEN_PLAYBACKWARDS_OFFSET UNITYSDK_OFFSET(0x1FA102C0)
#define DG_TWEENING_DOTWEEN_PLAYFORWARDALL_OFFSET UNITYSDK_OFFSET(0x1FA103D0)
#define DG_TWEENING_DOTWEEN_PLAYFORWARD_1_OFFSET UNITYSDK_OFFSET(0x1FA104C0)
#define DG_TWEENING_DOTWEEN_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x1FA10440)
#define DG_TWEENING_DOTWEEN_PLAYINGTWEENS_OFFSET UNITYSDK_OFFSET(0x1FA10AA0)
#define DG_TWEENING_DOTWEEN_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1FA101C0)
#define DG_TWEENING_DOTWEEN_PLAY_OFFSET UNITYSDK_OFFSET(0x1FA10140)
#define DG_TWEENING_DOTWEEN_PUNCH_OFFSET UNITYSDK_OFFSET(0x1FA0E1C0)
#define DG_TWEENING_DOTWEEN_RESTARTALL_OFFSET UNITYSDK_OFFSET(0x1FA10550)
#define DG_TWEENING_DOTWEEN_RESTART_1_OFFSET UNITYSDK_OFFSET(0x1FA10650)
#define DG_TWEENING_DOTWEEN_RESTART_OFFSET UNITYSDK_OFFSET(0x1FA105D0)
#define DG_TWEENING_DOTWEEN_REWINDALL_OFFSET UNITYSDK_OFFSET(0x1FA106E0)
#define DG_TWEENING_DOTWEEN_REWIND_OFFSET UNITYSDK_OFFSET(0x1FA10760)
#define DG_TWEENING_DOTWEEN_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x1FA0F540)
#define DG_TWEENING_DOTWEEN_SETTWEENSCAPACITY_OFFSET UNITYSDK_OFFSET(0x1FA0D2F0)
#define DG_TWEENING_DOTWEEN_SET_LOGBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1FA0C4B0)
#define DG_TWEENING_DOTWEEN_SHAKE_1_OFFSET UNITYSDK_OFFSET(0x1FA0F3B0)
#define DG_TWEENING_DOTWEEN_SHAKE_2_OFFSET UNITYSDK_OFFSET(0x1FA0EA50)
#define DG_TWEENING_DOTWEEN_SHAKE_OFFSET UNITYSDK_OFFSET(0x1FA0E960)
#define DG_TWEENING_DOTWEEN_SMOOTHREWINDALL_OFFSET UNITYSDK_OFFSET(0x1FA107E0)
#define DG_TWEENING_DOTWEEN_SMOOTHREWIND_OFFSET UNITYSDK_OFFSET(0x1FA10850)
#define DG_TWEENING_DOTWEEN_TOALPHA_OFFSET UNITYSDK_OFFSET(0x1FA0DF70)
#define DG_TWEENING_DOTWEEN_TOARRAY_OFFSET UNITYSDK_OFFSET(0x1FA0E640)
#define DG_TWEENING_DOTWEEN_TOAXIS_OFFSET UNITYSDK_OFFSET(0x1FA0DEB0)
#define DG_TWEENING_DOTWEEN_TOGGLEPAUSEALL_OFFSET UNITYSDK_OFFSET(0x1FA108D0)
#define DG_TWEENING_DOTWEEN_TOGGLEPAUSE_OFFSET UNITYSDK_OFFSET(0x1FA10940)
#define DG_TWEENING_DOTWEEN_TOTALPLAYINGTWEENS_OFFSET UNITYSDK_OFFSET(0x1FA10A40)
#define DG_TWEENING_DOTWEEN_TO_10_OFFSET UNITYSDK_OFFSET(0x1FA0DC60)
#define DG_TWEENING_DOTWEEN_TO_11_OFFSET UNITYSDK_OFFSET(0x1FA0DD00)
#define DG_TWEENING_DOTWEEN_TO_12_OFFSET UNITYSDK_OFFSET(0x1FA0DD90)
#define DG_TWEENING_DOTWEEN_TO_13_OFFSET UNITYSDK_OFFSET(0x1FA0DE20)
#define DG_TWEENING_DOTWEEN_TO_14_OFFSET UNITYSDK_OFFSET(0x1FA0E030)
#define DG_TWEENING_DOTWEEN_TO_15_OFFSET UNITYSDK_OFFSET(0x1FA0F4A0)
#define DG_TWEENING_DOTWEEN_TO_1_OFFSET UNITYSDK_OFFSET(0x1FA0D790)
#define DG_TWEENING_DOTWEEN_TO_2_OFFSET UNITYSDK_OFFSET(0x1FA0D820)
#define DG_TWEENING_DOTWEEN_TO_3_OFFSET UNITYSDK_OFFSET(0x1FA0D8A0)
#define DG_TWEENING_DOTWEEN_TO_4_OFFSET UNITYSDK_OFFSET(0x1FA0D920)
#define DG_TWEENING_DOTWEEN_TO_5_OFFSET UNITYSDK_OFFSET(0x1FA0D9A0)
#define DG_TWEENING_DOTWEEN_TO_6_OFFSET UNITYSDK_OFFSET(0x1FA0DA20)
#define DG_TWEENING_DOTWEEN_TO_7_OFFSET UNITYSDK_OFFSET(0x1FA0DAB0)
#define DG_TWEENING_DOTWEEN_TO_8_OFFSET UNITYSDK_OFFSET(0x1FA0DB30)
#define DG_TWEENING_DOTWEEN_TO_9_OFFSET UNITYSDK_OFFSET(0x1FA0DBD0)
#define DG_TWEENING_DOTWEEN_TO_OFFSET UNITYSDK_OFFSET(0x1FA0D700)
#define DG_TWEENING_DOTWEEN_TWEENSBYID_OFFSET UNITYSDK_OFFSET(0x1FA10B60)
#define DG_TWEENING_DOTWEEN_TWEENSBYTARGET_OFFSET UNITYSDK_OFFSET(0x1FA10BC0)
#define DG_TWEENING_DOTWEEN_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1FA0D6A0)
#define DG_TWEENING_DOTWEEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA0C520)
#define DG_TWEENING_DOTWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA10C20)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOTween_TypeDefinitionIndex = 28439;

	class DOTween : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Version()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x24200);
		}
		static ::System::Collections::Generic::List_1<::DG::Tweening::TweenCallback*>** StaticGet_GizmosDelegates()
		{
			return (::System::Collections::Generic::List_1<::DG::Tweening::TweenCallback*>**)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x24208);
		}
		static ::DG::Tweening::Core::DOTweenComponent** StaticGet_instance()
		{
			return (::DG::Tweening::Core::DOTweenComponent**)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x24210);
		}
		static ::DG::Tweening::UpdateType* StaticGet_defaultUpdateType()
		{
			return (::DG::Tweening::UpdateType*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7860);
		}
		static ::DG::Tweening::Ease* StaticGet_defaultEaseType()
		{
			return (::DG::Tweening::Ease*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7864);
		}
		static ::System::Boolean* StaticGet_defaultRecyclable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7868);
		}
		static ::System::Boolean* StaticGet_drawGizmos()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7869);
		}
		static ::System::Boolean* StaticGet_isQuitting()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x786A);
		}
		static ::System::Boolean* StaticGet_initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x786B);
		}
		static ::System::Single* StaticGet_defaultEasePeriod()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x786C);
		}
		static ::System::Int32* StaticGet_maxActiveSequencesReached()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7870);
		}
		static ::DG::Tweening::LogBehaviour* StaticGet__logBehaviour()
		{
			return (::DG::Tweening::LogBehaviour*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7874);
		}
		static ::DG::Tweening::LoopType* StaticGet_defaultLoopType()
		{
			return (::DG::Tweening::LoopType*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7878);
		}
		static ::System::Boolean* StaticGet_useSafeMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x787C);
		}
		static ::System::Boolean* StaticGet_isDebugBuild()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x787D);
		}
		static ::System::Boolean* StaticGet_useSmoothDeltaTime()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x787E);
		}
		static ::System::Boolean* StaticGet_isUnityEditor()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x787F);
		}
		static ::System::Single* StaticGet_defaultEaseOvershootOrAmplitude()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7880);
		}
		static ::System::Single* StaticGet_timeScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7884);
		}
		static ::System::Boolean* StaticGet_defaultAutoKill()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7888);
		}
		static ::System::Boolean* StaticGet_defaultTimeScaleIndependent()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7889);
		}
		static ::System::Boolean* StaticGet_showUnityEditorReport()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x788A);
		}
		static ::DG::Tweening::AutoPlay* StaticGet_defaultAutoPlay()
		{
			return (::DG::Tweening::AutoPlay*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x788C);
		}
		static ::System::Int32* StaticGet_maxActiveTweenersReached()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DOTween_TypeDefinitionIndex)->GetStaticField(0x7890);
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
