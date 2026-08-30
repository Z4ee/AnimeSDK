#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"

class Class_1_AE54088C838A17D2;
class Class_2_244369E1A8054DAC;
class Class_2_7059893B56AC9837;
namespace RPG::Client::ActivityAlley { class AlleyPackAnchor; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace RPG::Client::ActivityAlley { class AlleyPackGroupData; }
namespace RPG::Client::ActivityAlley { class AlleyPackShipData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_38D90DDCB9D4A509_METHOD_1_13CDF50F4F862E40_OFFSET UNITYSDK_OFFSET(0xC3E2EA0)
#define CLASS_1_38D90DDCB9D4A509_METHOD_1_192BC346FE96A607_OFFSET UNITYSDK_OFFSET(0xC3E33F0)
#define CLASS_1_38D90DDCB9D4A509_METHOD_1_985AD6AB29B1A204_1_OFFSET UNITYSDK_OFFSET(0xC3E3550)
#define CLASS_1_38D90DDCB9D4A509_METHOD_1_985AD6AB29B1A204_OFFSET UNITYSDK_OFFSET(0xC3E34A0)
#define CLASS_1_38D90DDCB9D4A509_METHOD_1_985E738B1D2F5270_OFFSET UNITYSDK_OFFSET(0xC3E3600)
#define CLASS_1_38D90DDCB9D4A509_METHOD_1_A1FEE6E75CDAE8C7_OFFSET UNITYSDK_OFFSET(0xC3E2D00)

inline static constexpr unsigned int Class_1_38D90DDCB9D4A509_TypeDefinitionIndex = 74003;

class Class_1_38D90DDCB9D4A509 : public ::System::Object
{
public:
	static ::RPG::Client::ActivityAlley::AlleyPackShipData* Method_1_A1FEE6E75CDAE8C7(::System::UInt32 a1, ::RPG::Client::ActivityAlley::AlleyPackComponent* a2)
	{
		return ((::RPG::Client::ActivityAlley::AlleyPackShipData*(*)(::System::UInt32, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + CLASS_1_38D90DDCB9D4A509_METHOD_1_A1FEE6E75CDAE8C7_OFFSET))(a1, a2);
	}

	static ::RPG::Client::ActivityAlley::AlleyPackGoodData* Method_1_13CDF50F4F862E40(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::ActivityAlley::AlleyPackComponent* a3)
	{
		return ((::RPG::Client::ActivityAlley::AlleyPackGoodData*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + CLASS_1_38D90DDCB9D4A509_METHOD_1_13CDF50F4F862E40_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_AE54088C838A17D2* Method_1_192BC346FE96A607(::RPG::Client::ActivityAlley::AlleyPackAnchor* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2)
	{
		return ((::Class_1_AE54088C838A17D2*(*)(::RPG::Client::ActivityAlley::AlleyPackAnchor*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + CLASS_1_38D90DDCB9D4A509_METHOD_1_192BC346FE96A607_OFFSET))(a1, a2);
	}

	static ::Class_2_7059893B56AC9837* Method_1_985AD6AB29B1A204(::RPG::Client::ActivityAlley::AlleyPackAnchor* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2, ::RPG::GameCore::AlleyPackAnchorType a3)
	{
		return ((::Class_2_7059893B56AC9837*(*)(::RPG::Client::ActivityAlley::AlleyPackAnchor*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_38D90DDCB9D4A509_METHOD_1_985AD6AB29B1A204_OFFSET))(a1, a2, a3);
	}

	static ::Class_2_244369E1A8054DAC* Method_1_985AD6AB29B1A204_1(::RPG::Client::ActivityAlley::AlleyPackAnchor* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2, ::RPG::GameCore::AlleyPackAnchorType a3)
	{
		return ((::Class_2_244369E1A8054DAC*(*)(::RPG::Client::ActivityAlley::AlleyPackAnchor*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_38D90DDCB9D4A509_METHOD_1_985AD6AB29B1A204_1_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::ActivityAlley::AlleyPackGroupData* Method_1_985E738B1D2F5270(::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* a1)
	{
		return ((::RPG::Client::ActivityAlley::AlleyPackGroupData*(*)(::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>*))((::PBYTE)hIl2Cpp + CLASS_1_38D90DDCB9D4A509_METHOD_1_985E738B1D2F5270_OFFSET))(a1);
	}
};
