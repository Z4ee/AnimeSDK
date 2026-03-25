#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ContainerStateToSeedStateConfig; }

#define RPG_GAMECORE_CONTAINERANDSEEDBIND_METHOD_2_78CEF452694D5D64_OFFSET UNITYSDK_OFFSET(0x171340B0)
#define RPG_GAMECORE_CONTAINERANDSEEDBIND__CTOR_OFFSET UNITYSDK_OFFSET(0x17134200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ContainerAndSeedBind_TypeDefinitionIndex = 16138;

	class ContainerAndSeedBind : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SeedInstanceID; // 0x10
		::Il2CppArray<::RPG::GameCore::ContainerStateToSeedStateConfig*>* StateConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONTAINERANDSEEDBIND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_78CEF452694D5D64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ContainerAndSeedBind*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ContainerAndSeedBind*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONTAINERANDSEEDBIND_METHOD_2_78CEF452694D5D64_OFFSET))(a1, a2);
		}
	};
}
