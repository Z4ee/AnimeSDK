#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { template <typename T> class TweenCallback_1; }

#define DG_TWEENING_DOVIRTUAL___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA10C30)
#define DG_TWEENING_DOVIRTUAL___C__DISPLAYCLASS0_0__FLOAT_B__0_OFFSET UNITYSDK_OFFSET(0x1FA10C40)
#define DG_TWEENING_DOVIRTUAL___C__DISPLAYCLASS0_0__FLOAT_B__1_OFFSET UNITYSDK_OFFSET(0x1FA10C50)
#define DG_TWEENING_DOVIRTUAL___C__DISPLAYCLASS0_0__FLOAT_B__2_OFFSET UNITYSDK_OFFSET(0x1FA10C60)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOVirtual___c__DisplayClass0_0_TypeDefinitionIndex = 28442;

	class DOVirtual___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::DG::Tweening::TweenCallback_1<::System::Single>* onVirtualUpdate; // 0x10
		::System::Single val; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOVIRTUAL___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Single _Float_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOVIRTUAL___C__DISPLAYCLASS0_0__FLOAT_B__0_OFFSET))(this);
		}

		::System::Void _Float_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOVIRTUAL___C__DISPLAYCLASS0_0__FLOAT_B__1_OFFSET))(this, x);
		}

		::System::Void _Float_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOVIRTUAL___C__DISPLAYCLASS0_0__FLOAT_B__2_OFFSET))(this);
		}
	};
}
