#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_Shelf; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS___C__DISPLAYCLASS19_0__ADDSHELF_B__0_OFFSET UNITYSDK_OFFSET(0x1B153520)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1517B0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ShelfTools___c__DisplayClass19_0_TypeDefinitionIndex = 39368;

	class HEU_ShelfTools___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::String* shelfName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddShelf_b__0(::HoudiniEngineUnity::HEU_Shelf* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_Shelf*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS___C__DISPLAYCLASS19_0__ADDSHELF_B__0_OFFSET))(this, a1);
		}
	};
}
