#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/SpiralMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tweener; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define DG_TWEENING_SHORTCUTEXTENSIONSPRO_DOSPIRAL_1_OFFSET UNITYSDK_OFFSET(0x1FB8CC60)
#define DG_TWEENING_SHORTCUTEXTENSIONSPRO_DOSPIRAL_OFFSET UNITYSDK_OFFSET(0x1FB8C8B0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensionsPro_TypeDefinitionIndex = 35134;

	class ShortcutExtensionsPro : public ::System::Object
	{
	public:
		static ::DG::Tweening::Tweener* DOSpiral(::UnityEngine::Transform* target, ::System::Single duration, ::System::Nullable_1<::UnityEngine::Vector3> axis, ::DG::Tweening::SpiralMode mode, ::System::Single speed, ::System::Single frequency, ::System::Single depth, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Transform*, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::DG::Tweening::SpiralMode, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONSPRO_DOSPIRAL_OFFSET))(target, duration, axis, mode, speed, frequency, depth, snapping);
		}

		static ::DG::Tweening::Tweener* DOSpiral_1(::UnityEngine::Rigidbody* target, ::System::Single duration, ::System::Nullable_1<::UnityEngine::Vector3> axis, ::DG::Tweening::SpiralMode mode, ::System::Single speed, ::System::Single frequency, ::System::Single depth, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Rigidbody*, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::DG::Tweening::SpiralMode, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONSPRO_DOSPIRAL_1_OFFSET))(target, duration, axis, mode, speed, frequency, depth, snapping);
		}
	};
}
