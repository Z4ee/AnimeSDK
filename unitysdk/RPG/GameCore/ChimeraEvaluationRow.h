#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAEVALUATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFD1680)
#define RPG_GAMECORE_CHIMERAEVALUATIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD18F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraEvaluationRow_TypeDefinitionIndex = 12921;

	class ChimeraEvaluationRow : public ::System::Object
	{
	public:
		::System::String* ConditionJson; // 0x10
		::RPG::Client::TextID EvaluationName; // 0x18
		::RPG::Client::TextID EvaluationDesc; // 0x28
		::System::UInt32 GroupID; // 0x38
		::System::UInt32 EvaluationID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraEvaluationRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraEvaluationRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
