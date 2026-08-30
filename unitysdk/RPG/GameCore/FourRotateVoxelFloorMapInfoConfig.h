#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FourRotateVoxelMapInfoConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELFLOORMAPINFOCONFIG_METHOD_2_5D23BB317529C195_OFFSET UNITYSDK_OFFSET(0x1D114810)
#define RPG_GAMECORE_FOURROTATEVOXELFLOORMAPINFOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D114960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelFloorMapInfoConfig_TypeDefinitionIndex = 16569;

	class FourRotateVoxelFloorMapInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::Il2CppArray<::RPG::GameCore::FourRotateVoxelMapInfoConfig*>* MapInfoConfigs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFLOORMAPINFOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5D23BB317529C195(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelFloorMapInfoConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelFloorMapInfoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFLOORMAPINFOCONFIG_METHOD_2_5D23BB317529C195_OFFSET))(a1, a2);
		}
	};
}
