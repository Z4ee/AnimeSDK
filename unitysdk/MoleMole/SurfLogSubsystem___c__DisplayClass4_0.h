#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_10F339609BE79763;

#define MOLEMOLE_SURFLOGSUBSYSTEM___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10E51630)
#define MOLEMOLE_SURFLOGSUBSYSTEM___C__DISPLAYCLASS4_0__RECORDITEM_B__0_OFFSET UNITYSDK_OFFSET(0x10E51640)

namespace MoleMole
{
	inline static constexpr unsigned int SurfLogSubsystem___c__DisplayClass4_0_TypeDefinitionIndex = 46842;

	class SurfLogSubsystem___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Int32 itemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RecordItem_b__0(::Class_3_10F339609BE79763* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_10F339609BE79763*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM___C__DISPLAYCLASS4_0__RECORDITEM_B__0_OFFSET))(this, x);
		}
	};
}
