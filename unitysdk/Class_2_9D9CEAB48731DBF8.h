#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_8844A4E6AE686D5C_6;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_9D9CEAB48731DBF8_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xBE5CAF0)
#define CLASS_2_9D9CEAB48731DBF8_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xBE5CBF0)
#define CLASS_2_9D9CEAB48731DBF8_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xBE5CB40)
#define CLASS_2_9D9CEAB48731DBF8_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0xBE5D020)
#define CLASS_2_9D9CEAB48731DBF8__CTOR_OFFSET UNITYSDK_OFFSET(0xBE5D240)

inline static constexpr unsigned int Class_2_9D9CEAB48731DBF8_TypeDefinitionIndex = 65404;

class Class_2_9D9CEAB48731DBF8 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* COPHHBGMLFO; // 0x10
	::System::Boolean COIMKHGDGEK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9CEAB48731DBF8__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_9D9CEAB48731DBF8_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_9D9CEAB48731DBF8_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAddItem(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_9D9CEAB48731DBF8_UPDATEADDITEM_OFFSET))(this, a1);
	}

	::System::Void UpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9CEAB48731DBF8_UPDATEDONE_OFFSET))(this);
	}
};
