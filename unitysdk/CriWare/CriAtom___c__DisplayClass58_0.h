#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtom; }
namespace CriWare { class CriAtomCueSheet; }

#define CRIWARE_CRIATOM___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E87B820)
#define CRIWARE_CRIATOM___C__DISPLAYCLASS58_0__MARGECUESHEET_B__0_OFFSET UNITYSDK_OFFSET(0x1E87B830)

namespace CriWare
{
	inline static constexpr unsigned int CriAtom___c__DisplayClass58_0_TypeDefinitionIndex = 34241;

	class CriAtom___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::CriWare::CriAtom* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _MargeCueSheet_b__0(::CriWare::CriAtomCueSheet* sheet)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomCueSheet*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM___C__DISPLAYCLASS58_0__MARGECUESHEET_B__0_OFFSET))(this, sheet);
		}
	};
}
