#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GravityBallCondition; }

#define RPG_GAMECORE_GRAVITYBALLPUZZLELASTFINISHCONDITION_METHOD_3_CCB5B29140E7FA48_OFFSET UNITYSDK_OFFSET(0x1899C5F0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLELASTFINISHCONDITION_METHOD_3_CCD013273C325858_OFFSET UNITYSDK_OFFSET(0x1899C570)
#define RPG_GAMECORE_GRAVITYBALLPUZZLELASTFINISHCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1899C5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GravityBallPuzzleLastFinishCondition_TypeDefinitionIndex = 19332;

	class GravityBallPuzzleLastFinishCondition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* DefaultGroupEvent; // 0x18
		::Il2CppArray<::RPG::GameCore::GravityBallCondition*>* ConditionLogic; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLELASTFINISHCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CCD013273C325858(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GravityBallPuzzleLastFinishCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GravityBallPuzzleLastFinishCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLELASTFINISHCONDITION_METHOD_3_CCD013273C325858_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCB5B29140E7FA48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GravityBallPuzzleLastFinishCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GravityBallPuzzleLastFinishCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLELASTFINISHCONDITION_METHOD_3_CCB5B29140E7FA48_OFFSET))(a1, a2);
		}
	};
}
