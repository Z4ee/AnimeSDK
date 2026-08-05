#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTextureSheet; }

#define CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1821BE70)
#define CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS4_1__RELOADTEXTURESHEETFROMFILE_B__1_OFFSET UNITYSDK_OFFSET(0x1821BE80)

inline static constexpr unsigned int ConfigTextureSheetData___c__DisplayClass4_1_TypeDefinitionIndex = 72802;

class ConfigTextureSheetData___c__DisplayClass4_1 : public ::System::Object
{
public:
	::MoleMole::TextureSheetType value; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
	}

	::System::Boolean _ReloadTextureSheetFromFile_b__1(::MoleMole::ConfigTextureSheet* config)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigTextureSheet*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS4_1__RELOADTEXTURESHEETFROMFILE_B__1_OFFSET))(this, config);
	}
};
