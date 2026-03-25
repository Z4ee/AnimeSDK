#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetSeqOperation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TARGETOPERATIONCONFIGLIST_METHOD_2_B54F1EA3DDC130AE_OFFSET UNITYSDK_OFFSET(0x177C4890)
#define RPG_GAMECORE_TARGETOPERATIONCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x177C4960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetOperationConfigList_TypeDefinitionIndex = 22236;

	class TargetOperationConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetSeqOperation*>* OperationDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETOPERATIONCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B54F1EA3DDC130AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetOperationConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetOperationConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETOPERATIONCONFIGLIST_METHOD_2_B54F1EA3DDC130AE_OFFSET))(a1, a2);
		}
	};
}
