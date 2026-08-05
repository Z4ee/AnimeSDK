#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_7.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x161068B0)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_1__ONSHOW_B__5_OFFSET UNITYSDK_OFFSET(0x161068C0)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_1__ONSHOW_B__6_OFFSET UNITYSDK_OFFSET(0x16106900)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattlePageController___c__DisplayClass16_1_TypeDefinitionIndex = 86284;

	class UIVRBossBattlePageController___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::System::Int32 materialItemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnShow_b__5(::Struct_2_3659D99D9E0DCBB9_7 preview)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9_7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_1__ONSHOW_B__5_OFFSET))(this, preview);
		}

		::System::Boolean _OnShow_b__6(::Struct_2_3659D99D9E0DCBB9_7 preview)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9_7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_1__ONSHOW_B__6_OFFSET))(this, preview);
		}
	};
}
