#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPCURVEMOVEPAUSE_METHOD_3_66440961E3EB5823_OFFSET UNITYSDK_OFFSET(0x17517770)
#define RPG_GAMECORE_PROPCURVEMOVEPAUSE_METHOD_3_D2B85BA5E08D255B_OFFSET UNITYSDK_OFFSET(0x17517840)
#define RPG_GAMECORE_PROPCURVEMOVEPAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x175177F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMovePause_TypeDefinitionIndex = 19336;

	class PropCurveMovePause : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVEPAUSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_66440961E3EB5823(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMovePause*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMovePause*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVEPAUSE_METHOD_3_66440961E3EB5823_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D2B85BA5E08D255B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMovePause* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMovePause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVEPAUSE_METHOD_3_D2B85BA5E08D255B_OFFSET))(a1, a2);
		}
	};
}
