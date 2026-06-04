#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEACTIONPOINT_METHOD_3_39513B51341790F2_OFFSET UNITYSDK_OFFSET(0x19C431B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEACTIONPOINT_METHOD_3_85B3E727471C840D_OFFSET UNITYSDK_OFFSET(0x19C43140)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEACTIONPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C43180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueActionPoint_TypeDefinitionIndex = 20563;

	class SetDynamicValueByRogueActionPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEACTIONPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_85B3E727471C840D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueActionPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueActionPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEACTIONPOINT_METHOD_3_85B3E727471C840D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_39513B51341790F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueActionPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueActionPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEACTIONPOINT_METHOD_3_39513B51341790F2_OFFSET))(a1, a2);
		}
	};
}
