#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ChessboardTextureTagConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHESSBOARDTEXTURESHEETTAGSDATA_ADDTAGS_OFFSET UNITYSDK_OFFSET(0x175201E0)
#define MOLEMOLE_CHESSBOARDTEXTURESHEETTAGSDATA_GETTAGS_OFFSET UNITYSDK_OFFSET(0x17520430)
#define MOLEMOLE_CHESSBOARDTEXTURESHEETTAGSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17520570)

namespace MoleMole
{
	inline static constexpr unsigned int ChessboardTextureSheetTagsData_TypeDefinitionIndex = 49732;

	class ChessboardTextureSheetTagsData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessboardTextureTagConfig*>* tagDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSBOARDTEXTURESHEETTAGSDATA__CTOR_OFFSET))(this);
		}

		::System::Void AddTags(::System::String* key, ::MoleMole::ChessboardTextureTagConfig* tagConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::ChessboardTextureTagConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSBOARDTEXTURESHEETTAGSDATA_ADDTAGS_OFFSET))(this, key, tagConfig);
		}

		::MoleMole::ChessboardTextureTagConfig* GetTags(::System::String* key)
		{
			return ((::MoleMole::ChessboardTextureTagConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSBOARDTEXTURESHEETTAGSDATA_GETTAGS_OFFSET))(this, key);
		}
	};
}
