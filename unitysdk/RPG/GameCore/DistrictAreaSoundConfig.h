#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DistrictAreaSoundTransform; }
namespace System { class String; }

#define RPG_GAMECORE_DISTRICTAREASOUNDCONFIG_METHOD_2_367E62EC66A1DB1F_OFFSET UNITYSDK_OFFSET(0x1DB0BB50)
#define RPG_GAMECORE_DISTRICTAREASOUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0BD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistrictAreaSoundConfig_TypeDefinitionIndex = 17069;

	class DistrictAreaSoundConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PlayEventName; // 0x10
		::System::Single PlayEventCD; // 0x18
		::System::String* StopEventName; // 0x20
		::System::Single StopEventCD; // 0x28
		::Il2CppArray<::RPG::GameCore::DistrictAreaSoundTransform*>* TransformList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTAREASOUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_367E62EC66A1DB1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DistrictAreaSoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DistrictAreaSoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTAREASOUNDCONFIG_METHOD_2_367E62EC66A1DB1F_OFFSET))(a1, a2);
		}
	};
}
