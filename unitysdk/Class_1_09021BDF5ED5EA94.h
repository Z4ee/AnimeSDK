#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODTreeEnableReason.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODTreeExpandStatus.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class StreamingItemHLODNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_09021BDF5ED5EA94_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11AFAFF0)
#define CLASS_1_09021BDF5ED5EA94_METHOD_1_FD49DE6A35A411DC_OFFSET UNITYSDK_OFFSET(0x11AFB040)
#define CLASS_1_09021BDF5ED5EA94__CTOR_OFFSET UNITYSDK_OFFSET(0x11AFB0B0)

inline static constexpr unsigned int Class_1_09021BDF5ED5EA94_TypeDefinitionIndex = 67952;

class Class_1_09021BDF5ED5EA94 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_09021BDF5ED5EA94*>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_5; // 0x18
	::RPG::Client::OpenWorld::StreamingItemData* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_10; // 0x28
	::RPG::GameCore::StreamingItemHLODNode* Field_1_0; // 0x30
	::System::Int32 Field_1_7; // 0x38
	::RPG::Client::OpenWorld::SceneItemHLODTreeExpandStatus Field_1_8; // 0x3C
	::System::Int32 Field_1_3; // 0x40
	::System::Int32 Field_1_6; // 0x44
	::System::Int32 Field_1_9; // 0x48
	::System::Int32 Field_1_2; // 0x4C
	::System::Boolean Field_1_11; // 0x50
	::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::SceneItemHLODTreeEnableReason> Field_1_12; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09021BDF5ED5EA94__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09021BDF5ED5EA94_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_FD49DE6A35A411DC(::System::Boolean a1, ::RPG::Client::OpenWorld::SceneItemHLODTreeEnableReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::SceneItemHLODTreeEnableReason))((::PBYTE)hIl2Cpp + CLASS_1_09021BDF5ED5EA94_METHOD_1_FD49DE6A35A411DC_OFFSET))(this, a1, a2);
	}
};
