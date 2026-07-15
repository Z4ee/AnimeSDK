#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RotatableRegion; }

#define RPG_GAMECORE_MAPROTATIONCONFIG_METHOD_2_F63683245205BB86_OFFSET UNITYSDK_OFFSET(0x1BCE4040)
#define RPG_GAMECORE_MAPROTATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCE4130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationConfig_TypeDefinitionIndex = 16345;

	class MapRotationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RotatableRegion*>* RotatableRegions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F63683245205BB86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONCONFIG_METHOD_2_F63683245205BB86_OFFSET))(a1, a2);
		}
	};
}
