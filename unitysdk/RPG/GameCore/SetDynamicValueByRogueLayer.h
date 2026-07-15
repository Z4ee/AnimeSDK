#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUELAYER_METHOD_3_58F553C77ECD885E_OFFSET UNITYSDK_OFFSET(0x1C2E7130)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUELAYER_METHOD_3_E20A6F0BF2E9950B_OFFSET UNITYSDK_OFFSET(0x1C2E7170)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E7160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueLayer_TypeDefinitionIndex = 20984;

	class SetDynamicValueByRogueLayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUELAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_58F553C77ECD885E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueLayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueLayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUELAYER_METHOD_3_58F553C77ECD885E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E20A6F0BF2E9950B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueLayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUELAYER_METHOD_3_E20A6F0BF2E9950B_OFFSET))(a1, a2);
		}
	};
}
