#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RANDOMSELECTORCASE_METHOD_2_F6DA3C8A7D5A9F32_OFFSET UNITYSDK_OFFSET(0x1D386A90)
#define RPG_GAMECORE_RANDOMSELECTORCASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D386BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectorCase_TypeDefinitionIndex = 23502;

	class RandomSelectorCase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelect; // 0x10
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::System::UInt32 Weight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTORCASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F6DA3C8A7D5A9F32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectorCase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectorCase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTORCASE_METHOD_2_F6DA3C8A7D5A9F32_OFFSET))(a1, a2);
		}
	};
}
