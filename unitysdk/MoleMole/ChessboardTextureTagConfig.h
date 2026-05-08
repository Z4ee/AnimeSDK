#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Unreal { class SerializableGameplayTagContainer; }
namespace MoleMole { class TextureSheetTagEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHESSBOARDTEXTURETAGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xECF9030)

namespace MoleMole
{
	inline static constexpr unsigned int ChessboardTextureTagConfig_TypeDefinitionIndex = 56046;

	class ChessboardTextureTagConfig : public ::System::Object
	{
	public:
		::Foundation::Unreal::SerializableGameplayTagContainer* tagContainer; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::TextureSheetTagEntry*>* tagEffectConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSBOARDTEXTURETAGCONFIG__CTOR_OFFSET))(this);
		}
	};
}
