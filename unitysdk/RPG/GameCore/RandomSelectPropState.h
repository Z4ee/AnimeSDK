#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GroupEntityInfo; }

#define RPG_GAMECORE_RANDOMSELECTPROPSTATE_METHOD_3_1F5690FE5185FF0D_OFFSET UNITYSDK_OFFSET(0x18C8AC60)
#define RPG_GAMECORE_RANDOMSELECTPROPSTATE_METHOD_3_A3FAE66E1C70220C_OFFSET UNITYSDK_OFFSET(0x18C8ACE0)
#define RPG_GAMECORE_RANDOMSELECTPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8ACB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectPropState_TypeDefinitionIndex = 21109;

	class RandomSelectPropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GroupEntityInfo*>* PropList; // 0x18
		::Il2CppArray<::RPG::GameCore::PropState>* ComparePropStateList; // 0x20
		::RPG::GameCore::DynamicString* CustomStringPrefix; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F5690FE5185FF0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectPropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectPropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTPROPSTATE_METHOD_3_1F5690FE5185FF0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A3FAE66E1C70220C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectPropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTPROPSTATE_METHOD_3_A3FAE66E1C70220C_OFFSET))(a1, a2);
		}
	};
}
