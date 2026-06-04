#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SWITCHREFFLOORSAVEDVALUE_METHOD_3_8B7BC6F7E23454F2_OFFSET UNITYSDK_OFFSET(0x19CDF360)
#define RPG_GAMECORE_SWITCHREFFLOORSAVEDVALUE_METHOD_3_95FF7E727B62A66F_OFFSET UNITYSDK_OFFSET(0x19CDFBE0)
#define RPG_GAMECORE_SWITCHREFFLOORSAVEDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CDF350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefFloorSavedValue_TypeDefinitionIndex = 16665;

	class SwitchRefFloorSavedValue : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORSAVEDVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_95FF7E727B62A66F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefFloorSavedValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefFloorSavedValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORSAVEDVALUE_METHOD_3_95FF7E727B62A66F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8B7BC6F7E23454F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORSAVEDVALUE_METHOD_3_8B7BC6F7E23454F2_OFFSET))(a1, a2);
		}
	};
}
