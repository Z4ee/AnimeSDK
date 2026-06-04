#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RECORDCAMERAROOTPOS_METHOD_3_C4F3E38AAE3DB4BB_OFFSET UNITYSDK_OFFSET(0x19AB6B80)
#define RPG_GAMECORE_RECORDCAMERAROOTPOS_METHOD_3_E33BA7769D33A712_OFFSET UNITYSDK_OFFSET(0x19AB6C00)
#define RPG_GAMECORE_RECORDCAMERAROOTPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB6BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecordCameraRootPos_TypeDefinitionIndex = 22426;

	class RecordCameraRootPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDCAMERAROOTPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4F3E38AAE3DB4BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecordCameraRootPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecordCameraRootPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDCAMERAROOTPOS_METHOD_3_C4F3E38AAE3DB4BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E33BA7769D33A712(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecordCameraRootPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecordCameraRootPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDCAMERAROOTPOS_METHOD_3_E33BA7769D33A712_OFFSET))(a1, a2);
		}
	};
}
