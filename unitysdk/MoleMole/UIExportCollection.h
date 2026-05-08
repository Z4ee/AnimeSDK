#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControlCollection.h"

namespace System { class String; }

#define MOLEMOLE_UIEXPORTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15F63280)

namespace MoleMole
{
	inline static constexpr unsigned int UIExportCollection_TypeDefinitionIndex = 71828;

	class UIExportCollection : public ::MoleMole::UIControlCollection
	{
	public:
		::System::String* exportDir; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPORTCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
