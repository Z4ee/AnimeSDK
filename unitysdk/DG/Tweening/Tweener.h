#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Tween.h"

namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace DG::Tweening::Plugins::Core { template <typename T1, typename T2, typename T3> class ABSTweenPlugin_3; }
namespace System { class Object; }

#define DG_TWEENING_TWEENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5609E0)

namespace DG::Tweening
{
	inline static constexpr unsigned int Tweener_TypeDefinitionIndex = 25442;

	class Tweener : public ::DG::Tweening::Tween
	{
	public:
		::System::Boolean isFromAllowed; // 0xF0
		::System::Boolean hasManuallySetStartValue; // 0xF1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_TWEENER__CTOR_OFFSET))(this);
		}
	};
}
