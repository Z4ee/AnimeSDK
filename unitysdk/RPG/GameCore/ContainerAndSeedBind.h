#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ContainerStateToSeedStateConfig; }

#define RPG_GAMECORE_CONTAINERANDSEEDBIND_METHOD_2_9D73AC9BBE396B5B_OFFSET UNITYSDK_OFFSET(0x1883B170)
#define RPG_GAMECORE_CONTAINERANDSEEDBIND__CTOR_OFFSET UNITYSDK_OFFSET(0x1883B290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ContainerAndSeedBind_TypeDefinitionIndex = 16669;

	class ContainerAndSeedBind : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SeedInstanceID; // 0x10
		::Il2CppArray<::RPG::GameCore::ContainerStateToSeedStateConfig*>* StateConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONTAINERANDSEEDBIND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9D73AC9BBE396B5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ContainerAndSeedBind*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ContainerAndSeedBind*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONTAINERANDSEEDBIND_METHOD_2_9D73AC9BBE396B5B_OFFSET))(a1, a2);
		}
	};
}
