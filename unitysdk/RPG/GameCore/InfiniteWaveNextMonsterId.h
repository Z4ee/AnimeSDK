#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_INFINITEWAVENEXTMONSTERID_METHOD_3_0D1F0B4DB709D303_OFFSET UNITYSDK_OFFSET(0x172BAA60)
#define RPG_GAMECORE_INFINITEWAVENEXTMONSTERID_METHOD_3_F037ABBC15D2C8B6_OFFSET UNITYSDK_OFFSET(0x172BAAE0)
#define RPG_GAMECORE_INFINITEWAVENEXTMONSTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x172BAAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteWaveNextMonsterId_TypeDefinitionIndex = 20961;

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

		static ::System::Void Method_3_0D1F0B4DB709D303(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveNextMonsterId*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveNextMonsterId*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVENEXTMONSTERID_METHOD_3_0D1F0B4DB709D303_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F037ABBC15D2C8B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveNextMonsterId* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveNextMonsterId*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVENEXTMONSTERID_METHOD_3_F037ABBC15D2C8B6_OFFSET))(a1, a2);
		}
	};
}
