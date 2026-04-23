#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_METHOD_4_7F474753D4DD78E0_OFFSET UNITYSDK_OFFSET(0x18DC69F0)
#define RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_METHOD_4_AD93869A4A30042E_OFFSET UNITYSDK_OFFSET(0x18DC6850)
#define RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC69A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleTargetFetchGridByTag_TypeDefinitionIndex = 23255;

	class RtBattleTargetFetchGridByTag : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* Tag; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AD93869A4A30042E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleTargetFetchGridByTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleTargetFetchGridByTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_METHOD_4_AD93869A4A30042E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F474753D4DD78E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleTargetFetchGridByTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleTargetFetchGridByTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_METHOD_4_7F474753D4DD78E0_OFFSET))(a1, a2);
		}
	};
}
