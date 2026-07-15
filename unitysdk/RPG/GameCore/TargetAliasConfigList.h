#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TARGETALIASCONFIGLIST_METHOD_2_4B1D2C5449EDC655_OFFSET UNITYSDK_OFFSET(0x1B44D4F0)
#define RPG_GAMECORE_TARGETALIASCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44D5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetAliasConfigList_TypeDefinitionIndex = 23103;

	class TargetAliasConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* AliasDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIASCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4B1D2C5449EDC655(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetAliasConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetAliasConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIASCONFIGLIST_METHOD_2_4B1D2C5449EDC655_OFFSET))(a1, a2);
		}
	};
}
