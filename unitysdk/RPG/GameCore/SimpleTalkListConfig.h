#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SimpleTalkInfo; }

#define RPG_GAMECORE_SIMPLETALKLISTCONFIG_METHOD_3_B64C74A655E34688_OFFSET UNITYSDK_OFFSET(0x19C891A0)
#define RPG_GAMECORE_SIMPLETALKLISTCONFIG_METHOD_3_C91FC9402021A12C_OFFSET UNITYSDK_OFFSET(0x19C88D70)
#define RPG_GAMECORE_SIMPLETALKLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C89170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimpleTalkListConfig_TypeDefinitionIndex = 19698;

	class SimpleTalkListConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SimpleTalkInfo*>* SimpleTalkList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C91FC9402021A12C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SimpleTalkListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SimpleTalkListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKLISTCONFIG_METHOD_3_C91FC9402021A12C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B64C74A655E34688(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SimpleTalkListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SimpleTalkListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKLISTCONFIG_METHOD_3_B64C74A655E34688_OFFSET))(a1, a2);
		}
	};
}
