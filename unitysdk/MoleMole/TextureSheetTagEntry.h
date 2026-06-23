#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/EffectResult.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Unreal { class SerializableGameplayTagQuery; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TEXTURESHEETTAGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x173FDE90)

namespace MoleMole
{
	inline static constexpr unsigned int TextureSheetTagEntry_TypeDefinitionIndex = 41277;

	class TextureSheetTagEntry : public ::System::Object
	{
	public:
		::MoleMole::HollowChessboard::EffectResult EffectResult; // 0x10
		::System::Collections::Generic::List_1<::Foundation::Unreal::SerializableGameplayTagQuery*>* Queries; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETTAGENTRY__CTOR_OFFSET))(this);
		}
	};
}
