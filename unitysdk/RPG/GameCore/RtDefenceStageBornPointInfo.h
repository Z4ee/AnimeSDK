#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTDEFENCESTAGEBORNPOINTINFO_METHOD_2_07EDF8A6223F5A95_OFFSET UNITYSDK_OFFSET(0x1B7613B0)
#define RPG_GAMECORE_RTDEFENCESTAGEBORNPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B761500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceStageBornPointInfo_TypeDefinitionIndex = 17334;

	class RtDefenceStageBornPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::Il2CppArray<::RPG::GameCore::FixVec2>* PosList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESTAGEBORNPOINTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_07EDF8A6223F5A95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDefenceStageBornPointInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceStageBornPointInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESTAGEBORNPOINTINFO_METHOD_2_07EDF8A6223F5A95_OFFSET))(a1, a2);
		}
	};
}
