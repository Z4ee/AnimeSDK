#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_402812A65CC3A690;

#define MOLEMOLE_SHOPPINGMALLPAGECONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x129DA060)
#define MOLEMOLE_SHOPPINGMALLPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x129DA1A0)
#define MOLEMOLE_SHOPPINGMALLPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x129DA200)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallPageContext_TypeDefinitionIndex = 58917;

	class ShoppingMallPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_402812A65CC3A690* ItemDataPair; // 0x28
		::System::Int32 TabGroupID; // 0x30
		::System::Int32 TabID; // 0x34
		::System::Int32 RecommendID; // 0x38

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
