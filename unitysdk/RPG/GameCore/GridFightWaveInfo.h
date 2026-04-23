#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTWAVEINFO_METHOD_2_3E304D6651B070EB_OFFSET UNITYSDK_OFFSET(0x189DF910)
#define RPG_GAMECORE_GRIDFIGHTWAVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x189DFA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightWaveInfo_TypeDefinitionIndex = 17255;

	class GridFightWaveInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 WaveIndex; // 0x10
		::System::UInt32 StageId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAVEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3E304D6651B070EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightWaveInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightWaveInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAVEINFO_METHOD_2_3E304D6651B070EB_OFFSET))(a1, a2);
		}
	};
}
