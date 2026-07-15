#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_66D6A0360B93D27A_1;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_A3A18F7F117D2665_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x192116B0)
#define CLASS_2_A3A18F7F117D2665_METHOD_2_34566E7905D6C48F_OFFSET UNITYSDK_OFFSET(0x192117C0)
#define CLASS_2_A3A18F7F117D2665_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x19211DA0)
#define CLASS_2_A3A18F7F117D2665_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x19211710)
#define CLASS_2_A3A18F7F117D2665__CTOR_OFFSET UNITYSDK_OFFSET(0x192120D0)

inline static constexpr unsigned int Class_2_A3A18F7F117D2665_TypeDefinitionIndex = 62418;

class Class_2_A3A18F7F117D2665 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_34566E7905D6C48F(::Class_1_66D6A0360B93D27A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66D6A0360B93D27A_1*))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_METHOD_2_34566E7905D6C48F_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_UPDATEAFTER_OFFSET))(this, a1);
	}
};
