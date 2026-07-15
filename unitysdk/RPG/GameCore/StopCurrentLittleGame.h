#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STOPCURRENTLITTLEGAME_METHOD_3_1E71426C5543D205_OFFSET UNITYSDK_OFFSET(0x1B0C53D0)
#define RPG_GAMECORE_STOPCURRENTLITTLEGAME_METHOD_3_2E358668E41A6F88_OFFSET UNITYSDK_OFFSET(0x1B0C54A0)
#define RPG_GAMECORE_STOPCURRENTLITTLEGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C5490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopCurrentLittleGame_TypeDefinitionIndex = 20206;

	class StopCurrentLittleGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPCURRENTLITTLEGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1E71426C5543D205(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopCurrentLittleGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopCurrentLittleGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPCURRENTLITTLEGAME_METHOD_3_1E71426C5543D205_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E358668E41A6F88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopCurrentLittleGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopCurrentLittleGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPCURRENTLITTLEGAME_METHOD_3_2E358668E41A6F88_OFFSET))(a1, a2);
		}
	};
}
