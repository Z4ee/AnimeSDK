#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesRegionCellConfig; }
namespace RPG::GameCore { class ChenLingFesRegionItemConfig; }

#define RPG_GAMECORE_CHENLINGFESREGIONCONFIG_METHOD_3_479522B08F6F87D4_OFFSET UNITYSDK_OFFSET(0x1CFB50A0)
#define RPG_GAMECORE_CHENLINGFESREGIONCONFIG_METHOD_3_8CADC1BF4708F0B5_OFFSET UNITYSDK_OFFSET(0x1CFB5100)
#define RPG_GAMECORE_CHENLINGFESREGIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB50F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesRegionConfig_TypeDefinitionIndex = 18229;

	class ChenLingFesRegionConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChenLingFesRegionCellConfig*>* CellList; // 0x10
		::Il2CppArray<::RPG::GameCore::ChenLingFesRegionItemConfig*>* ItemList; // 0x18
		::System::UInt32 Length; // 0x20
		::System::UInt32 Width; // 0x24
		::RPG::MVector3 CameraCenterFollowOffset; // 0x28
		::RPG::MVector3 CameraCenterLookAtOffset; // 0x34
		::System::Single CameraFOV; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESREGIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_479522B08F6F87D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesRegionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesRegionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESREGIONCONFIG_METHOD_3_479522B08F6F87D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8CADC1BF4708F0B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesRegionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesRegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESREGIONCONFIG_METHOD_3_8CADC1BF4708F0B5_OFFSET))(a1, a2);
		}
	};
}
