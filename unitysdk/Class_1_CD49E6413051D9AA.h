#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODTreeEnableReason.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODTreeExpandStatus.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_7.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CD49E6413051D9AA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14E5ADF0)
#define CLASS_1_CD49E6413051D9AA_METHOD_1_47196F2035DEF024_OFFSET UNITYSDK_OFFSET(0x14E5AE40)
#define CLASS_1_CD49E6413051D9AA__CTOR_OFFSET UNITYSDK_OFFSET(0x14E5AEB0)

inline static constexpr unsigned int Class_1_CD49E6413051D9AA_TypeDefinitionIndex = 70442;

class Class_1_CD49E6413051D9AA : public ::System::Object
{
public:
	::Struct_2_CC45B4503679E14E_7 Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_CD49E6413051D9AA*>* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_2; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_3; // 0x30
	::RPG::Client::OpenWorld::StreamingItemData* Field_1_4; // 0x38
	::System::Boolean Field_1_5; // 0x40
	::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::SceneItemHLODTreeEnableReason> Field_1_6; // 0x48
	::System::Int32 Field_1_7; // 0x50
	::System::Int32 Field_1_8; // 0x54
	::RPG::Client::OpenWorld::SceneItemHLODTreeExpandStatus Field_1_9; // 0x58
	::System::Int32 Field_1_10; // 0x5C
	::System::Int32 Field_1_11; // 0x60
	::System::Int32 Field_1_12; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD49E6413051D9AA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD49E6413051D9AA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_47196F2035DEF024(::System::Boolean a1, ::RPG::Client::OpenWorld::SceneItemHLODTreeEnableReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::SceneItemHLODTreeEnableReason))((::PBYTE)hIl2Cpp + CLASS_1_CD49E6413051D9AA_METHOD_1_47196F2035DEF024_OFFSET))(this, a1, a2);
	}
};
