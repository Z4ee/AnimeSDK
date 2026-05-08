#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/Sirenix/Serialization/DataFormat.h"

namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class RandomTextureSheetData; }
namespace MoleMole { class TextureSheetData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGTEXTURESHEET_GETFORMATTOSERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x181F01E0)
#define MOLEMOLE_CONFIGTEXTURESHEET_GETTEXTURECONFIGFOLDER_OFFSET UNITYSDK_OFFSET(0x181F0470)
#define MOLEMOLE_CONFIGTEXTURESHEET_GETTEXTURECONFIGPATH_OFFSET UNITYSDK_OFFSET(0x181F02F0)
#define MOLEMOLE_CONFIGTEXTURESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x181F05F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTextureSheet_TypeDefinitionIndex = 43690;

	class ConfigTextureSheet : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		// static const ::System::String* ConfigTextureConfigName; // 0x0
		// static const ::System::String* ConfigTextureConfigFolder; // 0x0
		::System::Int32 prorityOrder; // 0x58
		::MoleMole::TextureSheetType TextureSheetType; // 0x5C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>* textureSheetMap; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*>* textureSheetGroup; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::BlendTextureSheetData*>* BlendTextureSheets; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::RandomTextureSheetData*>* RandomTextureSheets; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET__CTOR_OFFSET))(this);
		}

		::Sirenix::Serialization::DataFormat GetFormatToSerializeAs(::System::Boolean isPlayer)
		{
			return ((::Sirenix::Serialization::DataFormat(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_GETFORMATTOSERIALIZEAS_OFFSET))(this, isPlayer);
		}

		static ::System::String* GetTextureConfigPath(::MoleMole::TextureSheetType type)
		{
			return ((::System::String*(*)(::MoleMole::TextureSheetType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_GETTEXTURECONFIGPATH_OFFSET))(type);
		}

		static ::System::String* GetTextureConfigFolder(::MoleMole::TextureSheetType type)
		{
			return ((::System::String*(*)(::MoleMole::TextureSheetType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_GETTEXTURECONFIGFOLDER_OFFSET))(type);
		}
	};
}
