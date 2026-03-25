#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

class Class_1_B1FF62FAE312BC49_7;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_A3A18F7F117D2665_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x10C8B220)
#define CLASS_2_A3A18F7F117D2665_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x10C8BA50)
#define CLASS_2_A3A18F7F117D2665_METHOD_2_E6A464C09590E175_OFFSET UNITYSDK_OFFSET(0x10C8B330)
#define CLASS_2_A3A18F7F117D2665_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x10C8B6E0)
#define CLASS_2_A3A18F7F117D2665_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x10C8B280)
#define CLASS_2_A3A18F7F117D2665__CTOR_OFFSET UNITYSDK_OFFSET(0x10C8B940)
#define CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x10C8B970)
#define CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x10C8BAC0)
#define CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x10C8B9E0)

inline static constexpr unsigned int Class_2_A3A18F7F117D2665_TypeDefinitionIndex = 53067;

class Class_2_A3A18F7F117D2665 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_1; // 0x10
	::System::UInt32 Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E6A464C09590E175(::Class_1_B1FF62FAE312BC49_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_7*))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_METHOD_2_E6A464C09590E175_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 P0, ::System::Collections::Generic::IList_1<::System::UInt32>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_B1FF62FAE312BC49_7* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_7*))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, P0);
	}
};
