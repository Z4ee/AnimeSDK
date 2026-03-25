#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_631;
class Class_1_120319518E6F6581_36;
class Class_1_99BD961747420BEB_29;
class Class_1_99BD961747420BEB_30;
class Class_1_B1FF62FAE312BC49_7;
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_F1E9B98123CB5682_METHOD_1_0A88558886DAB838_OFFSET UNITYSDK_OFFSET(0x10B09640)
#define CLASS_1_F1E9B98123CB5682_METHOD_1_142F58C083327CF0_OFFSET UNITYSDK_OFFSET(0x10B09310)
#define CLASS_1_F1E9B98123CB5682_METHOD_1_2B081523EC96C6A9_OFFSET UNITYSDK_OFFSET(0x10B09690)
#define CLASS_1_F1E9B98123CB5682_METHOD_1_2C012DA3A9315A95_OFFSET UNITYSDK_OFFSET(0x10B09030)
#define CLASS_1_F1E9B98123CB5682_METHOD_1_B9746DD346A42051_OFFSET UNITYSDK_OFFSET(0x10B09700)
#define CLASS_1_F1E9B98123CB5682__CTOR_OFFSET UNITYSDK_OFFSET(0x10B09020)

inline static constexpr unsigned int Class_1_F1E9B98123CB5682_TypeDefinitionIndex = 53001;

class Class_1_F1E9B98123CB5682 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_631* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_631* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_631*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightRole* Method_1_2C012DA3A9315A95(::Class_1_B1FF62FAE312BC49_7* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_7*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682_METHOD_1_2C012DA3A9315A95_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::GridFightRole* Method_1_142F58C083327CF0(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a4)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682_METHOD_1_142F58C083327CF0_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::GridFightForgeItemData* Method_1_0A88558886DAB838(::Class_1_99BD961747420BEB_30* a1)
	{
		return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::Class_1_99BD961747420BEB_30*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682_METHOD_1_0A88558886DAB838_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightNPC* Method_1_2B081523EC96C6A9(::Class_1_99BD961747420BEB_29* a1)
	{
		return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::Class_1_99BD961747420BEB_29*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682_METHOD_1_2B081523EC96C6A9_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightProjection* Method_1_B9746DD346A42051(::Class_1_120319518E6F6581_36* a1)
	{
		return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::Class_1_120319518E6F6581_36*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682_METHOD_1_B9746DD346A42051_OFFSET))(this, a1);
	}
};
