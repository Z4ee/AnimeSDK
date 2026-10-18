#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PETPARTYSUMMONUNITTAGMAPPING_METHOD_2_5F2C28500DDA2F3E_OFFSET UNITYSDK_OFFSET(0x1D90B130)
#define RPG_GAMECORE_PETPARTYSUMMONUNITTAGMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D90B280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartySummonUnitTagMapping_TypeDefinitionIndex = 17541;

	class PetPartySummonUnitTagMapping : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SummonUnitID; // 0x10
		::Il2CppArray<::System::String*>* InteractionTags; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSUMMONUNITTAGMAPPING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5F2C28500DDA2F3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartySummonUnitTagMapping*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartySummonUnitTagMapping*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSUMMONUNITTAGMAPPING_METHOD_2_5F2C28500DDA2F3E_OFFSET))(a1, a2);
		}
	};
}
