#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtom; }
namespace CriWare { class CriAtomCueSheet; }
namespace System { template <typename T> class Predicate_1; }

#define CRIWARE_CRIATOM___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB7A010)
#define CRIWARE_CRIATOM___C__DISPLAYCLASS69_0__MARGECUESHEET_B__0_OFFSET UNITYSDK_OFFSET(0x1CB7AA60)

namespace CriWare
{
	inline static constexpr unsigned int CriAtom___c__DisplayClass69_0_TypeDefinitionIndex = 38612;

	class CriAtom___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::CriWare::CriAtomCueSheet*>* __9__0; // 0x10
		::CriWare::CriAtom* __4__this; // 0x18
		::System::Int32 i; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _MargeCueSheet_b__0(::CriWare::CriAtomCueSheet* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomCueSheet*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM___C__DISPLAYCLASS69_0__MARGECUESHEET_B__0_OFFSET))(this, a1);
		}
	};
}
