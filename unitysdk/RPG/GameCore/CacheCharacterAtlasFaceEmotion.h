#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CACHECHARACTERATLASFACEEMOTION_METHOD_3_2EA263A1776109D1_OFFSET UNITYSDK_OFFSET(0x18765AA0)
#define RPG_GAMECORE_CACHECHARACTERATLASFACEEMOTION_METHOD_3_357A7AFD47614978_OFFSET UNITYSDK_OFFSET(0x18765B20)
#define RPG_GAMECORE_CACHECHARACTERATLASFACEEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18765AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CacheCharacterAtlasFaceEmotion_TypeDefinitionIndex = 19597;

	class CacheCharacterAtlasFaceEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CACHECHARACTERATLASFACEEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2EA263A1776109D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CacheCharacterAtlasFaceEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CacheCharacterAtlasFaceEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CACHECHARACTERATLASFACEEMOTION_METHOD_3_2EA263A1776109D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_357A7AFD47614978(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CacheCharacterAtlasFaceEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CacheCharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CACHECHARACTERATLASFACEEMOTION_METHOD_3_357A7AFD47614978_OFFSET))(a1, a2);
		}
	};
}
