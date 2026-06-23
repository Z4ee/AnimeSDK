#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTextureSheet; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x130F9CC0)
#define CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS4_0__RELOADTEXTURESHEETFROMFILE_B__0_OFFSET UNITYSDK_OFFSET(0x130F9CD0)

inline static constexpr unsigned int ConfigTextureSheetData___c__DisplayClass4_0_TypeDefinitionIndex = 62963;

class ConfigTextureSheetData___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::ConfigTextureSheet*>* multiConfigs; // 0x10
	::System::Action* complete; // 0x18
	::System::Action_1<::MoleMole::ConfigTextureSheet*>* __9__0; // 0x20
	::System::Int32 inLoadingRef; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReloadTextureSheetFromFile_b__0(::MoleMole::ConfigTextureSheet* textureConfig)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTextureSheet*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA___C__DISPLAYCLASS4_0__RELOADTEXTURESHEETFROMFILE_B__0_OFFSET))(this, textureConfig);
	}
};
