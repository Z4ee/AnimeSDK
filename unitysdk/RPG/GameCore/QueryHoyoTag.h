#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HoyoTagQueryType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_QUERYHOYOTAG_METHOD_4_97D55DF78BD71683_OFFSET UNITYSDK_OFFSET(0x17575E30)
#define RPG_GAMECORE_QUERYHOYOTAG_METHOD_4_BDCC204720CB4A3F_OFFSET UNITYSDK_OFFSET(0x17575F00)
#define RPG_GAMECORE_QUERYHOYOTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x17575EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QueryHoyoTag_TypeDefinitionIndex = 19066;

	class QueryHoyoTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::HoyoTagQueryType QueryType; // 0x28
		::Il2CppArray<::System::String*>* QuertInput; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUERYHOYOTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_97D55DF78BD71683(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QueryHoyoTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QueryHoyoTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUERYHOYOTAG_METHOD_4_97D55DF78BD71683_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BDCC204720CB4A3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QueryHoyoTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QueryHoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUERYHOYOTAG_METHOD_4_BDCC204720CB4A3F_OFFSET))(a1, a2);
		}
	};
}
