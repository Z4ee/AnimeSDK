#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ENVIRONMENTDATAINFO_METHOD_2_D87F7C75A2B95D3C_OFFSET UNITYSDK_OFFSET(0x188B1210)
#define RPG_GAMECORE_ENVIRONMENTDATAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x188B1520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnvironmentDataInfo_TypeDefinitionIndex = 18124;

	class EnvironmentDataInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* AssetPath; // 0x18
		::System::Int32 Active; // 0x20
		::System::Single PosX; // 0x24
		::System::Single PosY; // 0x28
		::System::Single PosZ; // 0x2C
		::System::Single RotX; // 0x30
		::System::Single RotY; // 0x34
		::System::Single RotZ; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENVIRONMENTDATAINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D87F7C75A2B95D3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnvironmentDataInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnvironmentDataInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENVIRONMENTDATAINFO_METHOD_2_D87F7C75A2B95D3C_OFFSET))(a1, a2);
		}
	};
}
