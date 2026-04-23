#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SCREENTRANSFERSINGLETEXTINFO_METHOD_2_49887C9D43397F2E_OFFSET UNITYSDK_OFFSET(0x18E006E0)
#define RPG_GAMECORE_SCREENTRANSFERSINGLETEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18E00780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenTransferSingleTextInfo_TypeDefinitionIndex = 19842;

	class ScreenTransferSingleTextInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERSINGLETEXTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_49887C9D43397F2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScreenTransferSingleTextInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScreenTransferSingleTextInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERSINGLETEXTINFO_METHOD_2_49887C9D43397F2E_OFFSET))(a1, a2);
		}
	};
}
