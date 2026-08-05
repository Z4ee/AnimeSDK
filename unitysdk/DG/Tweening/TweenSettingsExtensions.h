#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/AxisConstraint.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/DG/Tweening/LoopType.h"
#include "unitysdk/DG/Tweening/Plugins/Options/ColorOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/FloatOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/PathOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/QuaternionOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/RectOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/StringOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/Vector3ArrayOptions.h"
#include "unitysdk/DG/Tweening/Plugins/Options/VectorOptions.h"
#include "unitysdk/DG/Tweening/ScrambleMode.h"
#include "unitysdk/DG/Tweening/UpdateType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace DG::Tweening { class EaseFunction; }
namespace DG::Tweening { class Sequence; }
namespace DG::Tweening { class Tween; }
namespace DG::Tweening { class TweenCallback; }
namespace DG::Tweening { class TweenParams; }
namespace DG::Tweening { class Tweener; }
namespace DG::Tweening { template <typename T> class TweenCallback_1; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Plugins::Core::PathCore { class Path; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_APPENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F6607D0)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_APPENDINTERVAL_OFFSET UNITYSDK_OFFSET(0x1F6606D0)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_APPEND_OFFSET UNITYSDK_OFFSET(0x1F659BE0)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_INSERTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F660940)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_INSERT_OFFSET UNITYSDK_OFFSET(0x1F660680)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_JOIN_OFFSET UNITYSDK_OFFSET(0x1F659C30)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_PREPENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F660890)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_PREPENDINTERVAL_OFFSET UNITYSDK_OFFSET(0x1F660710)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_PREPEND_OFFSET UNITYSDK_OFFSET(0x1F660630)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETLOOKAT_1_OFFSET UNITYSDK_OFFSET(0x1F661000)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETLOOKAT_2_OFFSET UNITYSDK_OFFSET(0x1F661060)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0x1F660CC0)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_10_OFFSET UNITYSDK_OFFSET(0x1F660B00)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_11_OFFSET UNITYSDK_OFFSET(0x1F65BFA0)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_12_OFFSET UNITYSDK_OFFSET(0x1F660C40)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_13_OFFSET UNITYSDK_OFFSET(0x1F660C60)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_14_OFFSET UNITYSDK_OFFSET(0x1F660C90)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_1_OFFSET UNITYSDK_OFFSET(0x1F660A20)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_2_OFFSET UNITYSDK_OFFSET(0x1F660A40)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_3_OFFSET UNITYSDK_OFFSET(0x1F658C00)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_4_OFFSET UNITYSDK_OFFSET(0x1F658DC0)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_5_OFFSET UNITYSDK_OFFSET(0x1F660A60)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_6_OFFSET UNITYSDK_OFFSET(0x1F660A80)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_7_OFFSET UNITYSDK_OFFSET(0x1F660AA0)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_8_OFFSET UNITYSDK_OFFSET(0x1F660AC0)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_9_OFFSET UNITYSDK_OFFSET(0x1F660AE0)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_OFFSET UNITYSDK_OFFSET(0x1F660A00)
#define DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETPATHFORWARDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1F660D20)

namespace DG::Tweening
{
	inline static constexpr unsigned int TweenSettingsExtensions_TypeDefinitionIndex = 28534;

	class TweenSettingsExtensions : public ::System::Object
	{
	public:
		static ::DG::Tweening::Sequence* Append(::DG::Tweening::Sequence* s, ::DG::Tweening::Tween* t)
		{
			return ((::DG::Tweening::Sequence*(*)(::DG::Tweening::Sequence*, ::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_APPEND_OFFSET))(s, t);
		}

		static ::DG::Tweening::Sequence* Prepend(::DG::Tweening::Sequence* s, ::DG::Tweening::Tween* t)
		{
			return ((::DG::Tweening::Sequence*(*)(::DG::Tweening::Sequence*, ::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_PREPEND_OFFSET))(s, t);
		}

		static ::DG::Tweening::Sequence* Join(::DG::Tweening::Sequence* s, ::DG::Tweening::Tween* t)
		{
			return ((::DG::Tweening::Sequence*(*)(::DG::Tweening::Sequence*, ::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_JOIN_OFFSET))(s, t);
		}

		static ::DG::Tweening::Sequence* Insert(::DG::Tweening::Sequence* s, ::System::Single atPosition, ::DG::Tweening::Tween* t)
		{
			return ((::DG::Tweening::Sequence*(*)(::DG::Tweening::Sequence*, ::System::Single, ::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_INSERT_OFFSET))(s, atPosition, t);
		}

		static ::DG::Tweening::Sequence* AppendInterval(::DG::Tweening::Sequence* s, ::System::Single interval)
		{
			return ((::DG::Tweening::Sequence*(*)(::DG::Tweening::Sequence*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_APPENDINTERVAL_OFFSET))(s, interval);
		}

		static ::DG::Tweening::Sequence* PrependInterval(::DG::Tweening::Sequence* s, ::System::Single interval)
		{
			return ((::DG::Tweening::Sequence*(*)(::DG::Tweening::Sequence*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_PREPENDINTERVAL_OFFSET))(s, interval);
		}

		static ::DG::Tweening::Sequence* AppendCallback(::DG::Tweening::Sequence* s, ::DG::Tweening::TweenCallback* callback)
		{
			return ((::DG::Tweening::Sequence*(*)(::DG::Tweening::Sequence*, ::DG::Tweening::TweenCallback*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_APPENDCALLBACK_OFFSET))(s, callback);
		}

		static ::DG::Tweening::Sequence* PrependCallback(::DG::Tweening::Sequence* s, ::DG::Tweening::TweenCallback* callback)
		{
			return ((::DG::Tweening::Sequence*(*)(::DG::Tweening::Sequence*, ::DG::Tweening::TweenCallback*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_PREPENDCALLBACK_OFFSET))(s, callback);
		}

		static ::DG::Tweening::Sequence* InsertCallback(::DG::Tweening::Sequence* s, ::System::Single atPosition, ::DG::Tweening::TweenCallback* callback)
		{
			return ((::DG::Tweening::Sequence*(*)(::DG::Tweening::Sequence*, ::System::Single, ::DG::Tweening::TweenCallback*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_INSERTCALLBACK_OFFSET))(s, atPosition, callback);
		}

		static ::DG::Tweening::Tweener* SetOptions(::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>* t, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::TweenerCore_3<::System::Single, ::System::Single, ::DG::Tweening::Plugins::Options::FloatOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_OFFSET))(t, snapping);
		}

		static ::DG::Tweening::Tweener* SetOptions_1(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* t, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_1_OFFSET))(t, snapping);
		}

		static ::DG::Tweening::Tweener* SetOptions_2(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* t, ::DG::Tweening::AxisConstraint axisConstraint, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>*, ::DG::Tweening::AxisConstraint, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_2_OFFSET))(t, axisConstraint, snapping);
		}

		static ::DG::Tweening::Tweener* SetOptions_3(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* t, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_3_OFFSET))(t, snapping);
		}

		static ::DG::Tweening::Tweener* SetOptions_4(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* t, ::DG::Tweening::AxisConstraint axisConstraint, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>*, ::DG::Tweening::AxisConstraint, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_4_OFFSET))(t, axisConstraint, snapping);
		}

		static ::DG::Tweening::Tweener* SetOptions_5(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>* t, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_5_OFFSET))(t, snapping);
		}

		static ::DG::Tweening::Tweener* SetOptions_6(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>* t, ::DG::Tweening::AxisConstraint axisConstraint, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::DG::Tweening::Plugins::Options::VectorOptions>*, ::DG::Tweening::AxisConstraint, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_6_OFFSET))(t, axisConstraint, snapping);
		}

		static ::DG::Tweening::Tweener* SetOptions_7(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>* t, ::System::Boolean useShortest360Route)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_7_OFFSET))(t, useShortest360Route);
		}

		static ::DG::Tweening::Tweener* SetOptions_8(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>* t, ::System::Boolean alphaOnly)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color, ::UnityEngine::Color, ::DG::Tweening::Plugins::Options::ColorOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_8_OFFSET))(t, alphaOnly);
		}

		static ::DG::Tweening::Tweener* SetOptions_9(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>* t, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::DG::Tweening::Plugins::Options::RectOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_9_OFFSET))(t, snapping);
		}

		static ::DG::Tweening::Tweener* SetOptions_10(::DG::Tweening::Core::TweenerCore_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>* t, ::System::Boolean richTextEnabled, ::DG::Tweening::ScrambleMode scrambleMode, ::System::String* scrambleChars)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::TweenerCore_3<::System::String*, ::System::String*, ::DG::Tweening::Plugins::Options::StringOptions>*, ::System::Boolean, ::DG::Tweening::ScrambleMode, ::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_10_OFFSET))(t, richTextEnabled, scrambleMode, scrambleChars);
		}

		static ::DG::Tweening::Tweener* SetOptions_11(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_11_OFFSET))(t, snapping);
		}

		static ::DG::Tweening::Tweener* SetOptions_12(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t, ::DG::Tweening::AxisConstraint axisConstraint, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*, ::DG::Tweening::AxisConstraint, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_12_OFFSET))(t, axisConstraint, snapping);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* SetOptions_13(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t, ::DG::Tweening::AxisConstraint lockPosition, ::DG::Tweening::AxisConstraint lockRotation)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*, ::DG::Tweening::AxisConstraint, ::DG::Tweening::AxisConstraint))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_13_OFFSET))(t, lockPosition, lockRotation);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* SetOptions_14(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t, ::System::Boolean closePath, ::DG::Tweening::AxisConstraint lockPosition, ::DG::Tweening::AxisConstraint lockRotation)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*, ::System::Boolean, ::DG::Tweening::AxisConstraint, ::DG::Tweening::AxisConstraint))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETOPTIONS_14_OFFSET))(t, closePath, lockPosition, lockRotation);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* SetLookAt(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t, ::UnityEngine::Vector3 lookAtPosition, ::System::Nullable_1<::UnityEngine::Vector3> forwardDirection, ::System::Nullable_1<::UnityEngine::Vector3> up)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETLOOKAT_OFFSET))(t, lookAtPosition, forwardDirection, up);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* SetLookAt_1(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t, ::UnityEngine::Transform* lookAtTransform, ::System::Nullable_1<::UnityEngine::Vector3> forwardDirection, ::System::Nullable_1<::UnityEngine::Vector3> up)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*, ::UnityEngine::Transform*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETLOOKAT_1_OFFSET))(t, lookAtTransform, forwardDirection, up);
		}

		static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* SetLookAt_2(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t, ::System::Single lookAhead, ::System::Nullable_1<::UnityEngine::Vector3> forwardDirection, ::System::Nullable_1<::UnityEngine::Vector3> up)
		{
			return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETLOOKAT_2_OFFSET))(t, lookAhead, forwardDirection, up);
		}

		static ::System::Void SetPathForwardDirection(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t, ::System::Nullable_1<::UnityEngine::Vector3> forwardDirection, ::System::Nullable_1<::UnityEngine::Vector3> up)
		{
			return ((::System::Void(*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENSETTINGSEXTENSIONS_SETPATHFORWARDDIRECTION_OFFSET))(t, forwardDirection, up);
		}
	};
}
