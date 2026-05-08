#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class ConfigTextureSheet; }
namespace MoleMole { class TextureSheetData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CONFIGTEXTURESHEETDATA_CHECKHOLLOWTEXTURELOOP_OFFSET UNITYSDK_OFFSET(0x14DFED40)
#define CONFIGTEXTURESHEETDATA_CREATEANDRELOADTEXTURESHEETS_OFFSET UNITYSDK_OFFSET(0x14DFE1A0)
#define CONFIGTEXTURESHEETDATA_GETBATTLETEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x14DFE950)
#define CONFIGTEXTURESHEETDATA_GETBLENDTEXTURESHEET_1_OFFSET UNITYSDK_OFFSET(0x14DFE4D0)
#define CONFIGTEXTURESHEETDATA_GETBLENDTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x14DFE330)
#define CONFIGTEXTURESHEETDATA_GETTEXTURESHEETASSETS_OFFSET UNITYSDK_OFFSET(0x14DFE6E0)
#define CONFIGTEXTURESHEETDATA_GETTEXTURESHEETBYALL_OFFSET UNITYSDK_OFFSET(0x14DFF560)
#define CONFIGTEXTURESHEETDATA_GETTEXTURESHEETBYCOMBINELIBRARY_OFFSET UNITYSDK_OFFSET(0x14DFE1E0)
#define CONFIGTEXTURESHEETDATA_GETTEXTURESHEETCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x14DFE910)
#define CONFIGTEXTURESHEETDATA_GETTEXTURESHEETDATA_1_OFFSET UNITYSDK_OFFSET(0x14DFEFC0)
#define CONFIGTEXTURESHEETDATA_GETTEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x14DFF1D0)
#define CONFIGTEXTURESHEETDATA_GETTEXTURESHEETGROUPDATA_OFFSET UNITYSDK_OFFSET(0x14DFE7F0)
#define CONFIGTEXTURESHEETDATA_ISCONTAINTARGETTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x14DFE0A0)
#define CONFIGTEXTURESHEETDATA_RELEASEALLTEXTURESHEETPLAYER_OFFSET UNITYSDK_OFFSET(0x14DFF890)
#define CONFIGTEXTURESHEETDATA_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x14DFBCF0)
#define CONFIGTEXTURESHEETDATA_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x14DFC290)
#define CONFIGTEXTURESHEETDATA_RELOADTEXTURESHEETFROMFILE_OFFSET UNITYSDK_OFFSET(0x14DFBDE0)
#define CONFIGTEXTURESHEETDATA_TRYRANDOMTEXTURESHEETKEY_OFFSET UNITYSDK_OFFSET(0x14DFE520)
#define CONFIGTEXTURESHEETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14DFF8D0)

inline static constexpr unsigned int ConfigTextureSheetData_TypeDefinitionIndex = 44049;

class ConfigTextureSheetData : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::MoleMole::ConfigTextureSheet*>** StaticGet_configMaps()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::MoleMole::ConfigTextureSheet*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheetData_TypeDefinitionIndex)->GetStaticField(0x3B730);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>** StaticGet_combineTexutreSheets()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheetData_TypeDefinitionIndex)->GetStaticField(0x3B738);
	}
	static ::MoleMole::ConfigTextureSheet** StaticGet_config()
	{
		return (::MoleMole::ConfigTextureSheet**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheetData_TypeDefinitionIndex)->GetStaticField(0x3B740);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA__CTOR_OFFSET))(this);
	}

	static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
	}

	static ::System::Void ReloadTextureSheetFromFile(::System::Boolean isAync, ::System::Action* complete)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_RELOADTEXTURESHEETFROMFILE_OFFSET))(isAync, complete);
	}

	static ::System::Void ReloadFromFile(::System::Boolean isAync, ::System::Action* complete)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_RELOADFROMFILE_OFFSET))(isAync, complete);
	}

	static ::System::Boolean IsContainTargetTextureSheet(::System::String* key)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_ISCONTAINTARGETTEXTURESHEET_OFFSET))(key);
	}

	static ::MoleMole::TextureSheetData* GetTextureSheetByCombineLibrary(::System::String* key)
	{
		return ((::MoleMole::TextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETTEXTURESHEETBYCOMBINELIBRARY_OFFSET))(key);
	}

	static ::System::Void CreateAndReloadTextureSheets()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_CREATEANDRELOADTEXTURESHEETS_OFFSET))();
	}

	static ::MoleMole::BlendTextureSheetData* GetBlendTextureSheet(::MoleMole::TextureSheetType type, ::System::String* key)
	{
		return ((::MoleMole::BlendTextureSheetData*(*)(::MoleMole::TextureSheetType, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETBLENDTEXTURESHEET_OFFSET))(type, key);
	}

	static ::MoleMole::BlendTextureSheetData* GetBlendTextureSheet_1(::System::String* key)
	{
		return ((::MoleMole::BlendTextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETBLENDTEXTURESHEET_1_OFFSET))(key);
	}

	static ::System::String* TryRandomTextureSheetKey(::System::String* key)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_TRYRANDOMTEXTURESHEETKEY_OFFSET))(key);
	}

	static ::MoleMole::ConfigTextureSheet* GetTextureSheetAssets(::MoleMole::TextureSheetType type)
	{
		return ((::MoleMole::ConfigTextureSheet*(*)(::MoleMole::TextureSheetType))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETTEXTURESHEETASSETS_OFFSET))(type);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>* GetTextureSheetGroupData(::MoleMole::TextureSheetType type)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*(*)(::MoleMole::TextureSheetType))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETTEXTURESHEETGROUPDATA_OFFSET))(type);
	}

	static ::System::String* GetTextureSheetConfigPath(::MoleMole::TextureSheetType textureSheetType)
	{
		return ((::System::String*(*)(::MoleMole::TextureSheetType))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETTEXTURESHEETCONFIGPATH_OFFSET))(textureSheetType);
	}

	static ::MoleMole::TextureSheetData* GetBattleTextureSheetData(::System::String* key)
	{
		return ((::MoleMole::TextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETBATTLETEXTURESHEETDATA_OFFSET))(key);
	}

	static ::System::Boolean CheckHollowTextureLoop(::System::String* key, ::System::String* refTex)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_CHECKHOLLOWTEXTURELOOP_OFFSET))(key, refTex);
	}

	static ::MoleMole::TextureSheetData* GetTextureSheetData(::MoleMole::TextureSheetType type, ::System::String* key, ::System::Boolean enableLog)
	{
		return ((::MoleMole::TextureSheetData*(*)(::MoleMole::TextureSheetType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETTEXTURESHEETDATA_OFFSET))(type, key, enableLog);
	}

	static ::MoleMole::TextureSheetData* GetTextureSheetByAll(::System::String* key)
	{
		return ((::MoleMole::TextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETTEXTURESHEETBYALL_OFFSET))(key);
	}

	static ::MoleMole::TextureSheetData* GetTextureSheetData_1(::System::String* key, ::System::Boolean enableLog)
	{
		return ((::MoleMole::TextureSheetData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_GETTEXTURESHEETDATA_1_OFFSET))(key, enableLog);
	}

	static ::System::Void ReleaseAllTextureSheetPlayer()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA_RELEASEALLTEXTURESHEETPLAYER_OFFSET))();
	}
};
