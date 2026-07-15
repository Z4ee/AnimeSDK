#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINWAVE_METHOD_2_FEBE7F531CA16D8D_OFFSET UNITYSDK_OFFSET(0x1BEA0EC0)
#define RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA10B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMiniGameCollectCoinWave_TypeDefinitionIndex = 18071;

	class FiveDimMiniGameCollectCoinWave : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* FireCoinTemplateIndex; // 0x10
		::System::Single CoinSpeed; // 0x18
		::System::String* WaveEvent; // 0x20
		::System::Single BeforeFireWaitTime; // 0x28
		::System::Single FinishWaitTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FEBE7F531CA16D8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMiniGameCollectCoinWave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMiniGameCollectCoinWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINWAVE_METHOD_2_FEBE7F531CA16D8D_OFFSET))(a1, a2);
		}
	};
}
