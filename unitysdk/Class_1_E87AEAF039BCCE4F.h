#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"

class Class_1_AE54088C838A17D2;
class Class_2_244369E1A8054DAC;
class Class_2_6E6B68B4081104EC;
namespace RPG::Client::ActivityAlley { class AlleyPackAnchor; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace RPG::Client::ActivityAlley { class AlleyPackGroupData; }
namespace RPG::Client::ActivityAlley { class AlleyPackShipData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E87AEAF039BCCE4F_METHOD_1_192BC346FE96A607_OFFSET UNITYSDK_OFFSET(0x8D95B30)
#define CLASS_1_E87AEAF039BCCE4F_METHOD_1_21CA2548CFCAEE68_OFFSET UNITYSDK_OFFSET(0x8D95D40)
#define CLASS_1_E87AEAF039BCCE4F_METHOD_1_44617DE2AC3434AA_OFFSET UNITYSDK_OFFSET(0x8D95620)
#define CLASS_1_E87AEAF039BCCE4F_METHOD_1_985AD6AB29B1A204_1_OFFSET UNITYSDK_OFFSET(0x8D95C90)
#define CLASS_1_E87AEAF039BCCE4F_METHOD_1_985AD6AB29B1A204_OFFSET UNITYSDK_OFFSET(0x8D95BE0)
#define CLASS_1_E87AEAF039BCCE4F_METHOD_1_A1FEE6E75CDAE8C7_OFFSET UNITYSDK_OFFSET(0x8D95480)

inline static constexpr unsigned int Class_1_E87AEAF039BCCE4F_TypeDefinitionIndex = 60759;

class Class_1_E87AEAF039BCCE4F : public ::System::Object
{
public:
	static ::RPG::Client::ActivityAlley::AlleyPackShipData* Method_1_A1FEE6E75CDAE8C7(::System::UInt32 a1, ::RPG::Client::ActivityAlley::AlleyPackComponent* a2)
	{
		return ((::RPG::Client::ActivityAlley::AlleyPackShipData*(*)(::System::UInt32, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + CLASS_1_E87AEAF039BCCE4F_METHOD_1_A1FEE6E75CDAE8C7_OFFSET))(a1, a2);
	}

	static ::RPG::Client::ActivityAlley::AlleyPackGoodData* Method_1_44617DE2AC3434AA(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::ActivityAlley::AlleyPackComponent* a3)
	{
		return ((::RPG::Client::ActivityAlley::AlleyPackGoodData*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + CLASS_1_E87AEAF039BCCE4F_METHOD_1_44617DE2AC3434AA_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_AE54088C838A17D2* Method_1_192BC346FE96A607(::RPG::Client::ActivityAlley::AlleyPackAnchor* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2)
	{
		return ((::Class_1_AE54088C838A17D2*(*)(::RPG::Client::ActivityAlley::AlleyPackAnchor*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + CLASS_1_E87AEAF039BCCE4F_METHOD_1_192BC346FE96A607_OFFSET))(a1, a2);
	}

	static ::Class_2_6E6B68B4081104EC* Method_1_985AD6AB29B1A204(::RPG::Client::ActivityAlley::AlleyPackAnchor* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2, ::RPG::GameCore::AlleyPackAnchorType a3)
	{
		return ((::Class_2_6E6B68B4081104EC*(*)(::RPG::Client::ActivityAlley::AlleyPackAnchor*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_E87AEAF039BCCE4F_METHOD_1_985AD6AB29B1A204_OFFSET))(a1, a2, a3);
	}

	static ::Class_2_244369E1A8054DAC* Method_1_985AD6AB29B1A204_1(::RPG::Client::ActivityAlley::AlleyPackAnchor* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2, ::RPG::GameCore::AlleyPackAnchorType a3)
	{
		return ((::Class_2_244369E1A8054DAC*(*)(::RPG::Client::ActivityAlley::AlleyPackAnchor*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_E87AEAF039BCCE4F_METHOD_1_985AD6AB29B1A204_1_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::ActivityAlley::AlleyPackGroupData* Method_1_21CA2548CFCAEE68(::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* a1)
	{
		return ((::RPG::Client::ActivityAlley::AlleyPackGroupData*(*)(::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>*))((::PBYTE)hIl2Cpp + CLASS_1_E87AEAF039BCCE4F_METHOD_1_21CA2548CFCAEE68_OFFSET))(a1);
	}
};
