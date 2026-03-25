#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5EC4A19F55865739_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x10AE5AA0)
#define CLASS_2_5EC4A19F55865739_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x10AE5C60)
#define CLASS_2_5EC4A19F55865739_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x10AE5BE0)
#define CLASS_2_5EC4A19F55865739_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0x10AE5AF0)
#define CLASS_2_5EC4A19F55865739__CTOR_OFFSET UNITYSDK_OFFSET(0x10AE5CB0)
#define CLASS_2_5EC4A19F55865739___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x10AE5D10)
#define CLASS_2_5EC4A19F55865739___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x10AE5E60)
#define CLASS_2_5EC4A19F55865739___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x10AE5DF0)
#define CLASS_2_5EC4A19F55865739___IFIXBASEPROXY_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0x10AE5D80)

inline static constexpr unsigned int Class_2_5EC4A19F55865739_TypeDefinitionIndex = 52296;

class Class_2_5EC4A19F55865739 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC4A19F55865739__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_5EC4A19F55865739_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateRemoveRole(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5EC4A19F55865739_UPDATEREMOVEROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_5EC4A19F55865739_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_5EC4A19F55865739_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_5EC4A19F55865739___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateRemoveRole(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5EC4A19F55865739___IFIXBASEPROXY_UPDATEREMOVEROLE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 P0, ::System::Collections::Generic::IList_1<::System::UInt32>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_5EC4A19F55865739___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_5EC4A19F55865739___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, P0);
	}
};
