#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_402812A65CC3A690;

#define MOLEMOLE_UICOMPOSEITEMCONTEXTBASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x1803DCF0)
#define MOLEMOLE_UICOMPOSEITEMCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1803DDD0)
#define MOLEMOLE_UICOMPOSEITEMCONTEXTBASE___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x1803DE30)

namespace MoleMole
{
	inline static constexpr unsigned int UIComposeItemContextBase_TypeDefinitionIndex = 85230;

	class UIComposeItemContextBase : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_402812A65CC3A690* selectItem; // 0x28
		::System::Int32 setCount; // 0x30
		::System::Int32 selectTab; // 0x34
		::System::Int32 filterIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMCONTEXTBASE__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMCONTEXTBASE_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMCONTEXTBASE___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
