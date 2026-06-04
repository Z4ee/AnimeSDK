#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RECORDENTITYFORMATIONINDEX_METHOD_3_0048AFB8930ED401_OFFSET UNITYSDK_OFFSET(0x19AB6D90)
#define RPG_GAMECORE_RECORDENTITYFORMATIONINDEX_METHOD_3_E17928DD86091BA8_OFFSET UNITYSDK_OFFSET(0x19AB6D10)
#define RPG_GAMECORE_RECORDENTITYFORMATIONINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB6D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecordEntityFormationIndex_TypeDefinitionIndex = 22406;

	class RecordEntityFormationIndex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDENTITYFORMATIONINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E17928DD86091BA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecordEntityFormationIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecordEntityFormationIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDENTITYFORMATIONINDEX_METHOD_3_E17928DD86091BA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0048AFB8930ED401(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecordEntityFormationIndex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecordEntityFormationIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDENTITYFORMATIONINDEX_METHOD_3_0048AFB8930ED401_OFFSET))(a1, a2);
		}
	};
}
