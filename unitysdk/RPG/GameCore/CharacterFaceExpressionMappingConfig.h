#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterFaceExpressionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERFACEEXPRESSIONMAPPINGCONFIG_METHOD_2_688F88D73EE77492_OFFSET UNITYSDK_OFFSET(0x1706C450)
#define RPG_GAMECORE_CHARACTERFACEEXPRESSIONMAPPINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1706C520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterFaceExpressionMappingConfig_TypeDefinitionIndex = 16032;

	class CharacterFaceExpressionMappingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterFaceExpressionConfig*>* SetConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFACEEXPRESSIONMAPPINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_688F88D73EE77492(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterFaceExpressionMappingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterFaceExpressionMappingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFACEEXPRESSIONMAPPINGCONFIG_METHOD_2_688F88D73EE77492_OFFSET))(a1, a2);
		}
	};
}
