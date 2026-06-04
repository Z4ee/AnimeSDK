#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

class Class_1_8844A4E6AE686D5C_4;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_9D9CEAB48731DBF8_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xAAAAB00)
#define CLASS_2_9D9CEAB48731DBF8_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xAAAAC00)
#define CLASS_2_9D9CEAB48731DBF8_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xAAAAB50)
#define CLASS_2_9D9CEAB48731DBF8_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0xAAAAEF0)
#define CLASS_2_9D9CEAB48731DBF8__CTOR_OFFSET UNITYSDK_OFFSET(0xAAAB120)
#define CLASS_2_9D9CEAB48731DBF8___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xAAAB150)
#define CLASS_2_9D9CEAB48731DBF8___IFIXBASEPROXY_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xAAAB210)
#define CLASS_2_9D9CEAB48731DBF8___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xAAAB1B0)
#define CLASS_2_9D9CEAB48731DBF8___IFIXBASEPROXY_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0xAAAB270)

inline static constexpr unsigned int Class_2_9D9CEAB48731DBF8_TypeDefinitionIndex = 61099;

class Class_2_9D9CEAB48731DBF8 : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9CEAB48731DBF8__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_9D9CEAB48731DBF8_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_9D9CEAB48731DBF8_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAddItem(::Class_1_8844A4E6AE686D5C_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_4*))((::PBYTE)hIl2Cpp + CLASS_2_9D9CEAB48731DBF8_UPDATEADDITEM_OFFSET))(this, a1);
	}

	::System::Void UpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9CEAB48731DBF8_UPDATEDONE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_9D9CEAB48731DBF8___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_9D9CEAB48731DBF8___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_UpdateAddItem(::Class_1_8844A4E6AE686D5C_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_4*))((::PBYTE)hIl2Cpp + CLASS_2_9D9CEAB48731DBF8___IFIXBASEPROXY_UPDATEADDITEM_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9CEAB48731DBF8___IFIXBASEPROXY_UPDATEDONE_OFFSET))(this);
	}
};
