#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PetPartySingleCombinationStartPattern; }

#define RPG_GAMECORE_PETPARTYSINGLECOMBINATIONCONFIG_METHOD_2_368E43A012D37D86_OFFSET UNITYSDK_OFFSET(0x1D8DBC30)
#define RPG_GAMECORE_PETPARTYSINGLECOMBINATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DD400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartySingleCombinationConfig_TypeDefinitionIndex = 17548;

	class PetPartySingleCombinationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Weight; // 0x10
		::Il2CppArray<::RPG::GameCore::PetPartySingleCombinationStartPattern*>* StartPatterns; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLECOMBINATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_368E43A012D37D86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartySingleCombinationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartySingleCombinationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLECOMBINATIONCONFIG_METHOD_2_368E43A012D37D86_OFFSET))(a1, a2);
		}
	};
}
