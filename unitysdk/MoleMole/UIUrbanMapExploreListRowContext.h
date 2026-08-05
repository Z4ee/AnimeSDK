#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIURBANMAPEXPLORELISTROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D76710)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapExploreListRowContext_TypeDefinitionIndex = 90213;

	class UIUrbanMapExploreListRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_2<::MoleMole::UIUrbanMapExploreListRowContext*, ::System::Boolean>* IsSelect; // 0x28
		::System::Func_2<::MoleMole::UIUrbanMapExploreListRowContext*, ::System::Boolean>* IsLock; // 0x30
		::System::String* RightNum; // 0x38
		::System::Action_1<::MoleMole::UIUrbanMapExploreListRowContext*>* OnClick; // 0x40
		::Foundation::AssetPath Icon; // 0x48
		::System::String* DescText; // 0x58
		::System::Int32 SpecialId; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEXPLORELISTROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
