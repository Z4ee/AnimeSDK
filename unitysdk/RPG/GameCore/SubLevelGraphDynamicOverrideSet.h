#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SubLevelGraphDynamicFloatOverride; }
namespace RPG::GameCore { class SubLevelGraphDynamicStringOverride; }

#define RPG_GAMECORE_SUBLEVELGRAPHDYNAMICOVERRIDESET_METHOD_2_15D99FEE8836157A_OFFSET UNITYSDK_OFFSET(0x1CAF67C0)
#define RPG_GAMECORE_SUBLEVELGRAPHDYNAMICOVERRIDESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB069F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubLevelGraphDynamicOverrideSet_TypeDefinitionIndex = 20479;

	class SubLevelGraphDynamicOverrideSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SubLevelGraphDynamicFloatOverride*>* FloatOverrides; // 0x10
		::Il2CppArray<::RPG::GameCore::SubLevelGraphDynamicStringOverride*>* StringOverrides; // 0x18
		::Il2CppArray<::RPG::GameCore::SubLevelGraphDynamicFloatOverride*>* UIntOverrides; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBLEVELGRAPHDYNAMICOVERRIDESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_15D99FEE8836157A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubLevelGraphDynamicOverrideSet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubLevelGraphDynamicOverrideSet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBLEVELGRAPHDYNAMICOVERRIDESET_METHOD_2_15D99FEE8836157A_OFFSET))(a1, a2);
		}
	};
}
