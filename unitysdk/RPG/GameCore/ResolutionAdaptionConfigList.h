#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ResolutionAdaptionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESOLUTIONADAPTIONCONFIGLIST_METHOD_2_821C742B91CB6BA6_OFFSET UNITYSDK_OFFSET(0x1D01DE60)
#define RPG_GAMECORE_RESOLUTIONADAPTIONCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01DF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResolutionAdaptionConfigList_TypeDefinitionIndex = 16454;

	class ResolutionAdaptionConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ResolutionAdaptionConfig*>* AdaptionConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOLUTIONADAPTIONCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_821C742B91CB6BA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResolutionAdaptionConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResolutionAdaptionConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOLUTIONADAPTIONCONFIGLIST_METHOD_2_821C742B91CB6BA6_OFFSET))(a1, a2);
		}
	};
}
