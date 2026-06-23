#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }

#define DG_TWEENING_DOTWEEN___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E26BF90)
#define DG_TWEENING_DOTWEEN___C__DISPLAYCLASS52_0__TO_B__0_OFFSET UNITYSDK_OFFSET(0x1E26BFA0)
#define DG_TWEENING_DOTWEEN___C__DISPLAYCLASS52_0__TO_B__1_OFFSET UNITYSDK_OFFSET(0x1E26BFB0)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOTween___c__DisplayClass52_0_TypeDefinitionIndex = 27836;

	class DOTween___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::DG::Tweening::Core::DOSetter_1<::System::Single>* setter; // 0x10
		::System::Single v; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Single _To_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN___C__DISPLAYCLASS52_0__TO_B__0_OFFSET))(this);
		}

		::System::Void _To_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEEN___C__DISPLAYCLASS52_0__TO_B__1_OFFSET))(this, x);
		}
	};
}
