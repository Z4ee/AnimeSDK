#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_INFINITEWAVENEXTMONSTERID_METHOD_3_CDCF584D3D7857CB_OFFSET UNITYSDK_OFFSET(0x1D21C830)
#define RPG_GAMECORE_INFINITEWAVENEXTMONSTERID_METHOD_3_F037ABBC15D2C8B6_OFFSET UNITYSDK_OFFSET(0x1D21C870)
#define RPG_GAMECORE_INFINITEWAVENEXTMONSTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21C860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteWaveNextMonsterId_TypeDefinitionIndex = 22511;

	class InfiniteWaveNextMonsterId : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x18
		::System::String* MonsterIDKey; // 0x20
		::System::String* EliteGroupKey; // 0x28
		::System::String* MonsterSlotKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVENEXTMONSTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CDCF584D3D7857CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveNextMonsterId*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveNextMonsterId*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVENEXTMONSTERID_METHOD_3_CDCF584D3D7857CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F037ABBC15D2C8B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveNextMonsterId* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveNextMonsterId*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVENEXTMONSTERID_METHOD_3_F037ABBC15D2C8B6_OFFSET))(a1, a2);
		}
	};
}
