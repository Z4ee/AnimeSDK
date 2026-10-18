#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeCatchStatic___c__DisplayClass52_0; }
namespace RPG::GameCore { class LevelGraphComponent; }

#define RPG_CLIENT_CAKECATCHSTATIC___C__DISPLAYCLASS52_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC8EE9B0)
#define RPG_CLIENT_CAKECATCHSTATIC___C__DISPLAYCLASS52_1__STARTCAKEPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0xC8EFD60)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchStatic___c__DisplayClass52_1_TypeDefinitionIndex = 62974;

	class CakeCatchStatic___c__DisplayClass52_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelGraphComponent* levelGraph; // 0x10
		::RPG::Client::CakeCatchStatic___c__DisplayClass52_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C__DISPLAYCLASS52_1__CTOR_OFFSET))(this);
		}

		::System::Void _StartCakePerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C__DISPLAYCLASS52_1__STARTCAKEPERFORMANCE_B__0_OFFSET))(this);
		}
	};
}
