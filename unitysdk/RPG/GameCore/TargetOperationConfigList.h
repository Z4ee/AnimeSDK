#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetSeqOperation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TARGETOPERATIONCONFIGLIST_METHOD_2_8FB9FB731A6421CC_OFFSET UNITYSDK_OFFSET(0x1E1BE670)
#define RPG_GAMECORE_TARGETOPERATIONCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BE750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetOperationConfigList_TypeDefinitionIndex = 23684;

	class TargetOperationConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetSeqOperation*>* OperationDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETOPERATIONCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8FB9FB731A6421CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetOperationConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetOperationConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETOPERATIONCONFIGLIST_METHOD_2_8FB9FB731A6421CC_OFFSET))(a1, a2);
		}
	};
}
