#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FB2285061706D71D_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xC477040)
#define CLASS_2_FB2285061706D71D_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xC477380)
#define CLASS_2_FB2285061706D71D_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xC477310)
#define CLASS_2_FB2285061706D71D_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xC477090)
#define CLASS_2_FB2285061706D71D__CTOR_OFFSET UNITYSDK_OFFSET(0xC4773D0)

inline static constexpr unsigned int Class_2_FB2285061706D71D_TypeDefinitionIndex = 64453;

class Class_2_FB2285061706D71D : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* FPMHFDPGEOA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB2285061706D71D__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_FB2285061706D71D_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateRemoveRole(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FB2285061706D71D_UPDATEREMOVEROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_FB2285061706D71D_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_FB2285061706D71D_UPDATEAFTER_OFFSET))(this, a1);
	}
};
