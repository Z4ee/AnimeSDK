#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAEVALUATIONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170A8D10)
#define RPG_GAMECORE_CHIMERAEVALUATIONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170A8E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraEvaluationGroupRow_TypeDefinitionIndex = 11880;

	class ChimeraEvaluationGroupRow : public ::System::Object
	{
	public:
		::System::UInt32 Sort; // 0x10
		::System::UInt32 EvaluationGroupID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraEvaluationGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraEvaluationGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
