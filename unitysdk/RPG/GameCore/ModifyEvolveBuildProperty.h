#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildPropertyType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_MODIFYEVOLVEBUILDPROPERTY_METHOD_3_1C464D090863587F_OFFSET UNITYSDK_OFFSET(0x199557F0)
#define RPG_GAMECORE_MODIFYEVOLVEBUILDPROPERTY_METHOD_3_AE271607FE018280_OFFSET UNITYSDK_OFFSET(0x19955880)
#define RPG_GAMECORE_MODIFYEVOLVEBUILDPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x19955850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyEvolveBuildProperty_TypeDefinitionIndex = 21844;

	class ModifyEvolveBuildProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EvolveBuildPropertyType ValueType; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x1C
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYEVOLVEBUILDPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C464D090863587F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyEvolveBuildProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyEvolveBuildProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYEVOLVEBUILDPROPERTY_METHOD_3_1C464D090863587F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AE271607FE018280(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyEvolveBuildProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyEvolveBuildProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYEVOLVEBUILDPROPERTY_METHOD_3_AE271607FE018280_OFFSET))(a1, a2);
		}
	};
}
