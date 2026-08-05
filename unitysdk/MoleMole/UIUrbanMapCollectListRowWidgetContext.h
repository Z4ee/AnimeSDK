#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIURBANMAPCOLLECTLISTROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A02CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapCollectListRowWidgetContext_TypeDefinitionIndex = 73922;

	class UIUrbanMapCollectListRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Icon; // 0x28
		::System::String* DescText; // 0x30
		::System::Func_1<::System::Boolean>* GetProgressActive; // 0x38
		::UnityEngine::Color LeftNumColor; // 0x40
		::System::Int32 LeftNum; // 0x50
		::System::Int32 SpecialId; // 0x54
		::System::Int32 RightNum; // 0x58
		::System::Boolean ShowZenkovItemPop; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPCOLLECTLISTROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
