#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtom; }
namespace CriWare { class CriAtomCueSheet; }
namespace System { template <typename T> class Predicate_1; }

#define CRIWARE_CRIATOM___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC5C50)
#define CRIWARE_CRIATOM___C__DISPLAYCLASS58_0__MARGECUESHEET_B__0_OFFSET UNITYSDK_OFFSET(0x12BC6CE0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtom___c__DisplayClass58_0_TypeDefinitionIndex = 36680;

	class CriAtom___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::CriWare::CriAtomCueSheet*>* __9__0; // 0x10
		::CriWare::CriAtom* __4__this; // 0x18
		::System::Int32 i; // 0x20

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
