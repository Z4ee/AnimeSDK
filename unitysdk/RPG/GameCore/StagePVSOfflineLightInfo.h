#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/Struct_2_0ACB88BD1D804FF7.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEPVSOFFLINELIGHTINFO_METHOD_2_9FF3D63697DFE5CA_OFFSET UNITYSDK_OFFSET(0x1B0B26D0)
#define RPG_GAMECORE_STAGEPVSOFFLINELIGHTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B2830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineLightInfo_TypeDefinitionIndex = 18434;

	class StagePVSOfflineLightInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int64 LightID; // 0x10
		::Struct_2_0ACB88BD1D804FF7 matrix; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINELIGHTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9FF3D63697DFE5CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePVSOfflineLightInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePVSOfflineLightInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINELIGHTINFO_METHOD_2_9FF3D63697DFE5CA_OFFSET))(a1, a2);
		}
	};
}
