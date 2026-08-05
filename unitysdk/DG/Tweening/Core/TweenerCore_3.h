#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateMode.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Tweener.h"

namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace DG::Tweening::Plugins::Core { template <typename T1, typename T2, typename T3> class ABSTweenPlugin_3; }
namespace System { class Object; }
namespace System { class String; }

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int TweenerCore_3_TypeDefinitionIndex = 28599;

	template <typename T1, typename T2, typename TPlugOptions>
	class TweenerCore_3 : public ::DG::Tweening::Tweener
	{
	public:
		T2 startValue; // 0x0
		T2 endValue; // 0x0
		T2 changeValue; // 0x0
		TPlugOptions plugOptions; // 0x0
		::DG::Tweening::Core::DOGetter_1<T1>* getter; // 0x0
		::DG::Tweening::Core::DOSetter_1<T1>* setter; // 0x0
		::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1, T2, TPlugOptions>* tweenPlugin; // 0x0
		// static const ::System::String* _TxtCantChangeSequencedValues; // 0x0
	};
}
