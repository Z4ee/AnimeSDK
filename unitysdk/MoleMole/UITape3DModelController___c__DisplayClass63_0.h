#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E40DD0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS63_0__TRANSLATE_B__0_OFFSET UNITYSDK_OFFSET(0x12E40DE0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS63_0__TRANSLATE_B__1_OFFSET UNITYSDK_OFFSET(0x12E40DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UITape3DModelController___c__DisplayClass63_0_TypeDefinitionIndex = 77367;

	class UITape3DModelController___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x10
		::System::Action* onTick; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _Translate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS63_0__TRANSLATE_B__0_OFFSET))(this);
		}

		::System::Void _Translate_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS63_0__TRANSLATE_B__1_OFFSET))(this);
		}
	};
}
