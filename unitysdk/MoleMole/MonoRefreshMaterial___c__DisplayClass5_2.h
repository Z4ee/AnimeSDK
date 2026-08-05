#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace MoleMole { class ItemIconTweenConfig; }
namespace MoleMole { class MonoRefreshMaterial___c__DisplayClass5_0; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x136DF030)
#define MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_2__PLAYITEMICONADDANI_B__3_OFFSET UNITYSDK_OFFSET(0x136DF040)
#define MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_2__PLAYITEMICONADDANI_B__4_OFFSET UNITYSDK_OFFSET(0x136DF310)
#define MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_2__PLAYITEMICONADDANI_B__5_OFFSET UNITYSDK_OFFSET(0x136DF350)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRefreshMaterial___c__DisplayClass5_2_TypeDefinitionIndex = 48752;

	class MonoRefreshMaterial___c__DisplayClass5_2 : public ::System::Object
	{
	public:
		::MoleMole::ItemIconTweenConfig* tweenConfig; // 0x10
		::DG::Tweening::Core::DOSetter_1<::System::Single>* __9__5; // 0x18
		::DG::Tweening::Core::DOGetter_1<::System::Single>* __9__4; // 0x20
		::MoleMole::MonoRefreshMaterial___c__DisplayClass5_0* CS___8__locals2; // 0x28
		::UnityEngine::RectTransform* rect0; // 0x30
		::UnityEngine::Vector2 posEnd; // 0x38
		::System::Single duration; // 0x40

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
