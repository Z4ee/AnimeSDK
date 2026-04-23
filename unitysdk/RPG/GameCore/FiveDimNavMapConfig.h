#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimMapFaceConfig; }

#define RPG_GAMECORE_FIVEDIMNAVMAPCONFIG_METHOD_2_3C12E304F9717E0D_OFFSET UNITYSDK_OFFSET(0x18910F10)
#define RPG_GAMECORE_FIVEDIMNAVMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18911050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimNavMapConfig_TypeDefinitionIndex = 17586;

	class FiveDimNavMapConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimMapFaceConfig*>* FaceList; // 0x10
		::System::Int16 UnitPixelCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMNAVMAPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3C12E304F9717E0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimNavMapConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimNavMapConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMNAVMAPCONFIG_METHOD_2_3C12E304F9717E0D_OFFSET))(a1, a2);
		}
	};
}
