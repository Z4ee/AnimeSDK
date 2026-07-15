#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdvFloatValueTickType; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVSTARTTICKFLOATVALUE_METHOD_3_2D1EB5FB598704A8_OFFSET UNITYSDK_OFFSET(0x1AE48810)
#define RPG_GAMECORE_ADVSTARTTICKFLOATVALUE_METHOD_3_2FC844732E73495D_OFFSET UNITYSDK_OFFSET(0x1AE487D0)
#define RPG_GAMECORE_ADVSTARTTICKFLOATVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE48800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvStartTickFloatValue_TypeDefinitionIndex = 20236;

	class AdvStartTickFloatValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* ConfigName; // 0x18
		::RPG::GameCore::AdvFloatValueTickType* TickType; // 0x20
		::RPG::GameCore::DynamicString* TargetDynamicValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTARTTICKFLOATVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2FC844732E73495D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvStartTickFloatValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvStartTickFloatValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTARTTICKFLOATVALUE_METHOD_3_2FC844732E73495D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2D1EB5FB598704A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvStartTickFloatValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvStartTickFloatValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTARTTICKFLOATVALUE_METHOD_3_2D1EB5FB598704A8_OFFSET))(a1, a2);
		}
	};
}
