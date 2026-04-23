#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHRESULTPREDICATE_METHOD_2_AF51F552ABD7F2CC_OFFSET UNITYSDK_OFFSET(0x18BF7320)
#define RPG_GAMECORE_PHOTOGRAPHRESULTPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF7560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphResultPredicate_TypeDefinitionIndex = 20494;

	class PhotoGraphResultPredicate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID PredicateName; // 0x10
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPredicateSuccess; // 0x28
		::Il2CppArray<::System::String*>* BindContainerFlagNames; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHRESULTPREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AF51F552ABD7F2CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphResultPredicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphResultPredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHRESULTPREDICATE_METHOD_2_AF51F552ABD7F2CC_OFFSET))(a1, a2);
		}
	};
}
