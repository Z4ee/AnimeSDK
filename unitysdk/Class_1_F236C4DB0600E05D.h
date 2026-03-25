#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_CustomPredicatorType.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_GroupRefreshReason.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_122;
class Class_1_4C9F1682233ECDD3_1;
class Class_3_ED629420A95E72D8;
namespace RPG::Client { class MapDef; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F236C4DB0600E05D__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C6F60)

inline static constexpr unsigned int Class_1_F236C4DB0600E05D_TypeDefinitionIndex = 50372;

class Class_1_F236C4DB0600E05D : public ::System::Object
{
public:
	::RPG::Client::MapDef* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_12; // 0x18
	::Class_3_ED629420A95E72D8* Field_1_16; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_43BD383C98B4C0C5_122*>* Field_1_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4C9F1682233ECDD3_1*>* Field_1_6; // 0x30
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_8; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_13; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* Field_1_1; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_11; // 0x50
	::System::Boolean Field_1_10; // 0x58
	::System::Boolean Field_1_17; // 0x59
	::System::Boolean Field_1_9; // 0x5A
	::System::Boolean Field_1_5; // 0x5B
	::RPG::Client::RuntimeGroupManager_CustomPredicatorType Field_1_4; // 0x5C
	::RPG::Client::RuntimeGroupManager_GroupRefreshReason Field_1_3; // 0x60
	::System::UInt32 Field_1_19; // 0x64
	::System::UInt32 Field_1_18; // 0x68
	::System::UInt32 Field_1_14; // 0x6C
	::System::Boolean Field_1_7; // 0x70
	::System::Boolean Field_1_15; // 0x71

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F236C4DB0600E05D__CTOR_OFFSET))(this);
	}
};
