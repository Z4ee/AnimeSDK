#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GroupEntityInfo; }

#define RPG_GAMECORE_RANDOMSELECTPROPSTATE_METHOD_3_7217843444F8D50F_OFFSET UNITYSDK_OFFSET(0x1B9B7670)
#define RPG_GAMECORE_RANDOMSELECTPROPSTATE_METHOD_3_87817F5E907E34A6_OFFSET UNITYSDK_OFFSET(0x1B9B76B0)
#define RPG_GAMECORE_RANDOMSELECTPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B76A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectPropState_TypeDefinitionIndex = 21427;

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

		static ::System::Void Method_3_7217843444F8D50F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectPropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectPropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTPROPSTATE_METHOD_3_7217843444F8D50F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_87817F5E907E34A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectPropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTPROPSTATE_METHOD_3_87817F5E907E34A6_OFFSET))(a1, a2);
		}
	};
}
