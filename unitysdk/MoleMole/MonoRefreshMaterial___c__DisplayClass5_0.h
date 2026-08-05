#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace DG::Tweening { class TweenCallback; }
namespace MoleMole { class MonoRefreshMaterial; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x191AD9E0)
#define MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_0__PLAYITEMICONADDANI_B__2_OFFSET UNITYSDK_OFFSET(0x191AD9F0)
#define MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_0__PLAYITEMICONADDANI_B__6_OFFSET UNITYSDK_OFFSET(0x191ADAE0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRefreshMaterial___c__DisplayClass5_0_TypeDefinitionIndex = 48751;

	class MonoRefreshMaterial___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* consumeList; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _expMatItems; // 0x18
		::MoleMole::MonoRefreshMaterial* __4__this; // 0x20
		::DG::Tweening::TweenCallback* __9__6; // 0x28
		::System::Int32 showItemCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayItemIconAddAni_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_0__PLAYITEMICONADDANI_B__2_OFFSET))(this);
		}

		::System::Void _PlayItemIconAddAni_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL___C__DISPLAYCLASS5_0__PLAYITEMICONADDANI_B__6_OFFSET))(this);
		}
	};
}
