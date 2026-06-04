#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TalkConvinceTalkingSide.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConvinceTrickSkillGroup; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define RPG_CLIENT_CONVINCEUIUTILS_GETCONVINCEGAMEPLAYNPCID_OFFSET UNITYSDK_OFFSET(0xB714260)
#define RPG_CLIENT_CONVINCEUIUTILS_GETCONVINCESPLITELINEPOS_OFFSET UNITYSDK_OFFSET(0xB714430)
#define RPG_CLIENT_CONVINCEUIUTILS_GETHP_OFFSET UNITYSDK_OFFSET(0xB713A10)
#define RPG_CLIENT_CONVINCEUIUTILS_GETNAMETEXTS_OFFSET UNITYSDK_OFFSET(0xB713D50)
#define RPG_CLIENT_CONVINCEUIUTILS_GETSKILLINFO_OFFSET UNITYSDK_OFFSET(0xB7140C0)
#define RPG_CLIENT_CONVINCEUIUTILS_GETTALKINGSIDE_OFFSET UNITYSDK_OFFSET(0xB713EF0)
#define RPG_CLIENT_CONVINCEUIUTILS_GETTURN_OFFSET UNITYSDK_OFFSET(0xB713BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConvinceUIUtils_TypeDefinitionIndex = 56718;

	class ConvinceUIUtils : public ::System::Object
	{
	public:
		static ::System::Int32 GetHP()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEUIUTILS_GETHP_OFFSET))();
		}

		static ::System::Tuple_2<::System::Int32, ::System::Int32>* GetTurn()
		{
			return ((::System::Tuple_2<::System::Int32, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEUIUTILS_GETTURN_OFFSET))();
		}

		static ::System::Tuple_2<::RPG::Client::TextID, ::RPG::Client::TextID>* GetNameTexts()
		{
			return ((::System::Tuple_2<::RPG::Client::TextID, ::RPG::Client::TextID>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEUIUTILS_GETNAMETEXTS_OFFSET))();
		}

		static ::RPG::Client::TalkConvinceTalkingSide GetTalkingSide()
		{
			return ((::RPG::Client::TalkConvinceTalkingSide(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEUIUTILS_GETTALKINGSIDE_OFFSET))();
		}

		static ::RPG::Client::ConvinceTrickSkillGroup* GetSkillInfo()
		{
			return ((::RPG::Client::ConvinceTrickSkillGroup*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEUIUTILS_GETSKILLINFO_OFFSET))();
		}

		static ::System::UInt32 GetConvinceGameplayNPCID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEUIUTILS_GETCONVINCEGAMEPLAYNPCID_OFFSET))();
		}

		static ::System::Single GetConvinceSpliteLinePos()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEUIUTILS_GETCONVINCESPLITELINEPOS_OFFSET))();
		}
	};
}
