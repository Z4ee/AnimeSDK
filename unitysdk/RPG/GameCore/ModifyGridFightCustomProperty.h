#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }

#define RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_METHOD_3_60C7D4D51453FA8B_OFFSET UNITYSDK_OFFSET(0x1D1BBEE0)
#define RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_METHOD_3_935082945CA60222_OFFSET UNITYSDK_OFFSET(0x1D1BBF30)
#define RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BBF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyGridFightCustomProperty_TypeDefinitionIndex = 22284;

	class ModifyGridFightCustomProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::JsonEnum* CustomType; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x20
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_60C7D4D51453FA8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyGridFightCustomProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyGridFightCustomProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_METHOD_3_60C7D4D51453FA8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_935082945CA60222(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyGridFightCustomProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyGridFightCustomProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_METHOD_3_935082945CA60222_OFFSET))(a1, a2);
		}
	};
}
