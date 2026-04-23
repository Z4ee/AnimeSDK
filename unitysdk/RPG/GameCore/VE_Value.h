#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_VE_VALUE_METHOD_3_397DFE624488C7F9_OFFSET UNITYSDK_OFFSET(0x190EFED0)
#define RPG_GAMECORE_VE_VALUE_METHOD_3_C11AD855D9ABDAC8_OFFSET UNITYSDK_OFFSET(0x190EFF10)
#define RPG_GAMECORE_VE_VALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x190EFF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Value_TypeDefinitionIndex = 23030;

	class VE_Value : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_VALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_397DFE624488C7F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Value*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Value*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_VALUE_METHOD_3_397DFE624488C7F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C11AD855D9ABDAC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Value* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Value*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_VALUE_METHOD_3_C11AD855D9ABDAC8_OFFSET))(a1, a2);
		}
	};
}
