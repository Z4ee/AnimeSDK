#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ECurveObjectLogicState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYCURVEPROPGROUPOBJECTSTATE_METHOD_3_7316629718E9B424_OFFSET UNITYSDK_OFFSET(0x1742B790)
#define RPG_GAMECORE_MODIFYCURVEPROPGROUPOBJECTSTATE_METHOD_3_78CF5A1320174147_OFFSET UNITYSDK_OFFSET(0x1742B810)
#define RPG_GAMECORE_MODIFYCURVEPROPGROUPOBJECTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1742B7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyCurvePropGroupObjectState_TypeDefinitionIndex = 20450;

	class ModifyCurvePropGroupObjectState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x18
		::System::String* ObjectUniqueName; // 0x20
		::RPG::GameCore::ECurveObjectLogicState ModifyState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCURVEPROPGROUPOBJECTSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7316629718E9B424(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyCurvePropGroupObjectState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyCurvePropGroupObjectState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCURVEPROPGROUPOBJECTSTATE_METHOD_3_7316629718E9B424_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_78CF5A1320174147(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyCurvePropGroupObjectState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyCurvePropGroupObjectState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCURVEPROPGROUPOBJECTSTATE_METHOD_3_78CF5A1320174147_OFFSET))(a1, a2);
		}
	};
}
