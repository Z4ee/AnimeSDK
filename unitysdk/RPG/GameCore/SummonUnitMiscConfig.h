#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITMISCCONFIG_METHOD_2_1D64C01866E77273_OFFSET UNITYSDK_OFFSET(0x18EB5F30)
#define RPG_GAMECORE_SUMMONUNITMISCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB7270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitMiscConfig_TypeDefinitionIndex = 16701;

	class SummonUnitMiscConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LevelGraphPath; // 0x10
		::System::Boolean LevelGraphNeedServer; // 0x18
		::System::Boolean NeedBillboard; // 0x19
		::System::UInt32 MiniMapIconType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMISCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1D64C01866E77273(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitMiscConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitMiscConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMISCCONFIG_METHOD_2_1D64C01866E77273_OFFSET))(a1, a2);
		}
	};
}
