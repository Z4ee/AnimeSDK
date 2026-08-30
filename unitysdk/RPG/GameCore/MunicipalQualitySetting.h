#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUNICIPALQUALITYSETTING_METHOD_2_98BB791B74E0FD02_OFFSET UNITYSDK_OFFSET(0x1CE78BE0)
#define RPG_GAMECORE_MUNICIPALQUALITYSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE78E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalQualitySetting_TypeDefinitionIndex = 16724;

	class MunicipalQualitySetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 CrowdGroupMaxNum; // 0x10
		::System::UInt32 PedestrianMaxNum; // 0x14
		::Il2CppArray<::System::Single>* CrowdPercents; // 0x18
		::Il2CppArray<::System::Single>* PedestrianPercents; // 0x20
		::Il2CppArray<::System::Single>* AssemScoreLimit; // 0x28
		::Il2CppArray<::System::Single>* AudiencePercents; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALQUALITYSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_98BB791B74E0FD02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalQualitySetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalQualitySetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALQUALITYSETTING_METHOD_2_98BB791B74E0FD02_OFFSET))(a1, a2);
		}
	};
}
