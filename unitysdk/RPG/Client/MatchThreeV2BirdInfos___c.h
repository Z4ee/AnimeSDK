#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2BirdData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2BIRDINFOS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C996CD0)
#define RPG_CLIENT_MATCHTHREEV2BIRDINFOS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C996D00)
#define RPG_CLIENT_MATCHTHREEV2BIRDINFOS___C__GET_ALLSHOWBIRDDATALIST_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C996D10)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2BirdInfos___c_TypeDefinitionIndex = 66043;

	class MatchThreeV2BirdInfos___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MatchThreeV2BirdInfos___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeV2BirdInfos___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2BirdInfos___c_TypeDefinitionIndex)->GetStaticField(0x66070);
		}
		static ::System::Func_2<::RPG::Client::MatchThreeV2BirdData*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeV2BirdData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2BirdInfos___c_TypeDefinitionIndex)->GetStaticField(0x66078);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDINFOS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDINFOS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_AllShowBirdDataList_b__4_0(::RPG::Client::MatchThreeV2BirdData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2BirdData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDINFOS___C__GET_ALLSHOWBIRDDATALIST_B__4_0_OFFSET))(this, a1);
		}
	};
}
