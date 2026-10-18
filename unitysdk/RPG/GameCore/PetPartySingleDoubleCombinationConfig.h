#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PetPartySingleDoubleStartPattern; }

#define RPG_GAMECORE_PETPARTYSINGLEDOUBLECOMBINATIONCONFIG_METHOD_2_2D79AF0DD307BC31_OFFSET UNITYSDK_OFFSET(0x1D8DBD80)
#define RPG_GAMECORE_PETPARTYSINGLEDOUBLECOMBINATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DD5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartySingleDoubleCombinationConfig_TypeDefinitionIndex = 17551;

	class PetPartySingleDoubleCombinationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Weight; // 0x10
		::Il2CppArray<::RPG::GameCore::PetPartySingleDoubleStartPattern*>* StartPatterns; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLEDOUBLECOMBINATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2D79AF0DD307BC31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartySingleDoubleCombinationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartySingleDoubleCombinationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLEDOUBLECOMBINATIONCONFIG_METHOD_2_2D79AF0DD307BC31_OFFSET))(a1, a2);
		}
	};
}
