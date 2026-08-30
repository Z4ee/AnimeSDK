#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_09B87FFAAC14D202.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

namespace RPG::Client { class GridFightPrayQuest; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_43BD383C98B4C0C5_171_CLASS_3_FC83F6F7E5C3EFDB_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x105E1F10)
#define CLASS_1_43BD383C98B4C0C5_171_CLASS_3_FC83F6F7E5C3EFDB_METHOD_3_2C41347CFFA67969_OFFSET UNITYSDK_OFFSET(0x105E26A0)
#define CLASS_1_43BD383C98B4C0C5_171_CLASS_3_FC83F6F7E5C3EFDB_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x105E2BF0)
#define CLASS_1_43BD383C98B4C0C5_171_CLASS_3_FC83F6F7E5C3EFDB_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x105E2C70)
#define CLASS_1_43BD383C98B4C0C5_171_CLASS_3_FC83F6F7E5C3EFDB_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x105E1F60)
#define CLASS_1_43BD383C98B4C0C5_171_CLASS_3_FC83F6F7E5C3EFDB__CTOR_OFFSET UNITYSDK_OFFSET(0x105E3230)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_171_Class_3_FC83F6F7E5C3EFDB_TypeDefinitionIndex = 65154;

class Class_1_43BD383C98B4C0C5_171_Class_3_FC83F6F7E5C3EFDB : public ::Class_2_09B87FFAAC14D202
{
public:
	::RPG::Client::GridFightPrayQuest* FIBOEKFNHNO; // 0x18
	::System::Collections::Generic::IList_1<::System::UInt32>* LOMLIJKOGGN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_171_CLASS_3_FC83F6F7E5C3EFDB__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_171_CLASS_3_FC83F6F7E5C3EFDB_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_171_CLASS_3_FC83F6F7E5C3EFDB_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_171_CLASS_3_FC83F6F7E5C3EFDB_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_171_CLASS_3_FC83F6F7E5C3EFDB_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	static ::System::Boolean Method_3_2C41347CFFA67969(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_171_CLASS_3_FC83F6F7E5C3EFDB_METHOD_3_2C41347CFFA67969_OFFSET))(a1, a2);
	}
};
