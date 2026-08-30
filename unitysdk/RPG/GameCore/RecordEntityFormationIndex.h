#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RECORDENTITYFORMATIONINDEX_METHOD_3_0048AFB8930ED401_OFFSET UNITYSDK_OFFSET(0x1DB7BF10)
#define RPG_GAMECORE_RECORDENTITYFORMATIONINDEX_METHOD_3_C53A08864895341A_OFFSET UNITYSDK_OFFSET(0x1DB7BED0)
#define RPG_GAMECORE_RECORDENTITYFORMATIONINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7BF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecordEntityFormationIndex_TypeDefinitionIndex = 23427;

	class RecordEntityFormationIndex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDENTITYFORMATIONINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C53A08864895341A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecordEntityFormationIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecordEntityFormationIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDENTITYFORMATIONINDEX_METHOD_3_C53A08864895341A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0048AFB8930ED401(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecordEntityFormationIndex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecordEntityFormationIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDENTITYFORMATIONINDEX_METHOD_3_0048AFB8930ED401_OFFSET))(a1, a2);
		}
	};
}
