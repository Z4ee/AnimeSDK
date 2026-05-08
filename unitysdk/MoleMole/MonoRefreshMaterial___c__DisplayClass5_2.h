#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace MoleMole { class ItemIconTweenConfig; }
namespace MoleMole { class MonoRefreshMaterial___c__DisplayClass5_0; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1235F890)
#define MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_2__PLAYITEMICONADDANI_B__3_OFFSET UNITYSDK_OFFSET(0x1235F8A0)
#define MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_2__PLAYITEMICONADDANI_B__4_OFFSET UNITYSDK_OFFSET(0x1235FB70)
#define MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_2__PLAYITEMICONADDANI_B__5_OFFSET UNITYSDK_OFFSET(0x1235FBB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRefreshMaterial___c__DisplayClass5_2_TypeDefinitionIndex = 82365;

	class MonoRefreshMaterial___c__DisplayClass5_2 : public ::System::Object
	{
	public:
		::DG::Tweening::Core::DOSetter_1<::System::Single>* __9__5; // 0x10
		::MoleMole::MonoRefreshMaterial___c__DisplayClass5_0* CS___8__locals2; // 0x18
		::MoleMole::ItemIconTweenConfig* tweenConfig; // 0x20
		::UnityEngine::RectTransform* rect0; // 0x28
		::DG::Tweening::Core::DOGetter_1<::System::Single>* __9__4; // 0x30
		::System::Single duration; // 0x38
		::UnityEngine::Vector2 posEnd; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayItemIconAddAni_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_2__PLAYITEMICONADDANI_B__3_OFFSET))(this);
		}

		::System::Single _PlayItemIconAddAni_b__4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_2__PLAYITEMICONADDANI_B__4_OFFSET))(this);
		}

		::System::Void _PlayItemIconAddAni_b__5(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_2__PLAYITEMICONADDANI_B__5_OFFSET))(this, val);
		}
	};
}
