#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_402812A65CC3A690;

#define MOLEMOLE_SHOPPINGMALLPAGECONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x117825E0)
#define MOLEMOLE_SHOPPINGMALLPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11782720)
#define MOLEMOLE_SHOPPINGMALLPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x11782730)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallPageContext_TypeDefinitionIndex = 68271;

	class ShoppingMallPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_402812A65CC3A690* ItemDataPair; // 0x28
		::System::Int32 TabID; // 0x30
		::System::Int32 RecommendID; // 0x34
		::System::Int32 TabGroupID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLPAGECONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
