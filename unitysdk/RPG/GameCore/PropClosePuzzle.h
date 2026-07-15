#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPCLOSEPUZZLE_METHOD_3_7039A45D409B6285_OFFSET UNITYSDK_OFFSET(0x1BA1B540)
#define RPG_GAMECORE_PROPCLOSEPUZZLE_METHOD_3_8D6BADC9695B57CD_OFFSET UNITYSDK_OFFSET(0x1BA1B5C0)
#define RPG_GAMECORE_PROPCLOSEPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1B590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropClosePuzzle_TypeDefinitionIndex = 19584;

	class PropClosePuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCLOSEPUZZLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7039A45D409B6285(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropClosePuzzle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropClosePuzzle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCLOSEPUZZLE_METHOD_3_7039A45D409B6285_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8D6BADC9695B57CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropClosePuzzle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropClosePuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCLOSEPUZZLE_METHOD_3_8D6BADC9695B57CD_OFFSET))(a1, a2);
		}
	};
}
