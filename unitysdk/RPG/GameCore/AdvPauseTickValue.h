#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPAUSETICKVALUE_METHOD_3_022F8D0496410D6A_OFFSET UNITYSDK_OFFSET(0x19430AF0)
#define RPG_GAMECORE_ADVPAUSETICKVALUE_METHOD_3_595369525D267497_OFFSET UNITYSDK_OFFSET(0x19430BC0)
#define RPG_GAMECORE_ADVPAUSETICKVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19430B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPauseTickValue_TypeDefinitionIndex = 19873;

	class AdvPauseTickValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::DynamicString* ConfigName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPAUSETICKVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_022F8D0496410D6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPauseTickValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPauseTickValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPAUSETICKVALUE_METHOD_3_022F8D0496410D6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_595369525D267497(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPauseTickValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPauseTickValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPAUSETICKVALUE_METHOD_3_595369525D267497_OFFSET))(a1, a2);
		}
	};
}
