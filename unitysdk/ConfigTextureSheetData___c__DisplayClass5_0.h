#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTextureSheet; }

#define CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12F17150)
#define CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS5_0__RELOADFROMFILE_B__0_OFFSET UNITYSDK_OFFSET(0x12F17160)

inline static constexpr unsigned int ConfigTextureSheetData___c__DisplayClass5_0_TypeDefinitionIndex = 72805;

class ConfigTextureSheetData___c__DisplayClass5_0 : public ::System::Object
{
public:
	::MoleMole::TextureSheetType value; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ReloadFromFile_b__0(::MoleMole::ConfigTextureSheet* config)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigTextureSheet*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS5_0__RELOADFROMFILE_B__0_OFFSET))(this, config);
	}
};
