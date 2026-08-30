#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_03BE39B29264B5AC_OFFSET UNITYSDK_OFFSET(0x1D306D20)
#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_2951BB2CD21716CD_OFFSET UNITYSDK_OFFSET(0x1D306D60)
#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_899ACBF51D5D598A_OFFSET UNITYSDK_OFFSET(0x1D306F70)
#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_D06FFBB02ED1ABBD_OFFSET UNITYSDK_OFFSET(0x1D306F40)
#define RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D306D50)

namespace RPG::Client
{
	inline static constexpr unsigned int ByCompareMatchThreeV2BirdLocation_TypeDefinitionIndex = 10244;

	class ByCompareMatchThreeV2BirdLocation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 BirdID; // 0x20
		::RPG::GameCore::DynamicFloat* LocationID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_03BE39B29264B5AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_03BE39B29264B5AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2951BB2CD21716CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_2951BB2CD21716CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D06FFBB02ED1ABBD(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_D06FFBB02ED1ABBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_899ACBF51D5D598A(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREMATCHTHREEV2BIRDLOCATION_METHOD_4_899ACBF51D5D598A_OFFSET))(a1, a2);
		}
	};
}
