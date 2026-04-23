#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;
class Class_1_4BC858D7C27E10ED_30;
class Class_1_4BC858D7C27E10ED_31;
class Class_1_B1FF62FAE312BC49_4;
class Class_1_D1E0AD3915BCCF29_37;
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_F1E9B98123CB5682_METHOD_1_0A88558886DAB838_OFFSET UNITYSDK_OFFSET(0x9529A10)
#define CLASS_1_F1E9B98123CB5682_METHOD_1_142F58C083327CF0_OFFSET UNITYSDK_OFFSET(0x95296E0)
#define CLASS_1_F1E9B98123CB5682_METHOD_1_2B081523EC96C6A9_OFFSET UNITYSDK_OFFSET(0x9529A60)
#define CLASS_1_F1E9B98123CB5682_METHOD_1_2C012DA3A9315A95_OFFSET UNITYSDK_OFFSET(0x9529400)
#define CLASS_1_F1E9B98123CB5682_METHOD_1_B9746DD346A42051_OFFSET UNITYSDK_OFFSET(0x9529AD0)
#define CLASS_1_F1E9B98123CB5682__CTOR_OFFSET UNITYSDK_OFFSET(0x95293F0)

inline static constexpr unsigned int Class_1_F1E9B98123CB5682_TypeDefinitionIndex = 60091;

class Class_1_F1E9B98123CB5682 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_722* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_722* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightRole* Method_1_2C012DA3A9315A95(::Class_1_B1FF62FAE312BC49_4* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_4*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682_METHOD_1_2C012DA3A9315A95_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::GridFightRole* Method_1_142F58C083327CF0(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a4)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682_METHOD_1_142F58C083327CF0_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::GridFightForgeItemData* Method_1_0A88558886DAB838(::Class_1_4BC858D7C27E10ED_31* a1)
	{
		return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_31*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682_METHOD_1_0A88558886DAB838_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightNPC* Method_1_2B081523EC96C6A9(::Class_1_4BC858D7C27E10ED_30* a1)
	{
		return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_30*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682_METHOD_1_2B081523EC96C6A9_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightProjection* Method_1_B9746DD346A42051(::Class_1_D1E0AD3915BCCF29_37* a1)
	{
		return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_37*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682_METHOD_1_B9746DD346A42051_OFFSET))(this, a1);
	}
};
