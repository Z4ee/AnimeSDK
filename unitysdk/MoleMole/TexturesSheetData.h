#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TEXTURESSHEETDATA_GET_TEXTURECOUNT_OFFSET UNITYSDK_OFFSET(0x12BE1790)
#define MOLEMOLE_TEXTURESSHEETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE17B0)

namespace MoleMole
{
	inline static constexpr unsigned int TexturesSheetData_TypeDefinitionIndex = 52659;

	class TexturesSheetData : public ::MoleMole::TextureSheetData
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::TextureSheetData*>* textures; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESSHEETDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_textureCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESSHEETDATA_GET_TEXTURECOUNT_OFFSET))(this);
		}
	};
}
