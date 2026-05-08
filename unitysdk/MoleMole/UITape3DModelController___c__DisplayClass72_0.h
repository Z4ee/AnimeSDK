#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14815020)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS72_0__ROTATE_B__0_OFFSET UNITYSDK_OFFSET(0x14815030)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS72_0__ROTATE_B__1_OFFSET UNITYSDK_OFFSET(0x14815040)

namespace MoleMole
{
	inline static constexpr unsigned int UITape3DModelController___c__DisplayClass72_0_TypeDefinitionIndex = 77371;

	class UITape3DModelController___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
		}

		::System::Void _Rotate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS72_0__ROTATE_B__0_OFFSET))(this);
		}

		::System::Void _Rotate_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS72_0__ROTATE_B__1_OFFSET))(this);
		}
	};
}
