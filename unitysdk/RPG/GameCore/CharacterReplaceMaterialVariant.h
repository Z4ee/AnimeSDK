#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANT_METHOD_2_986770D6425CB453_OFFSET UNITYSDK_OFFSET(0x17072590)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANT__CTOR_OFFSET UNITYSDK_OFFSET(0x17072770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceMaterialVariant_TypeDefinitionIndex = 16024;

	class CharacterReplaceMaterialVariant : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MaterialPropertyCollection; // 0x10
		::System::String* MaterialTemplate; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_331ACDD60B60D2E3>* PropertyColor; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* PropertyFloat; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_986770D6425CB453(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReplaceMaterialVariant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReplaceMaterialVariant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANT_METHOD_2_986770D6425CB453_OFFSET))(a1, a2);
		}
	};
}
