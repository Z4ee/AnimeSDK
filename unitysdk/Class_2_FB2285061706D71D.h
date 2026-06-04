#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FB2285061706D71D_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xB017C80)
#define CLASS_2_FB2285061706D71D_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xB017F20)
#define CLASS_2_FB2285061706D71D_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xB017EB0)
#define CLASS_2_FB2285061706D71D_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xB017CD0)
#define CLASS_2_FB2285061706D71D__CTOR_OFFSET UNITYSDK_OFFSET(0xB017F70)
#define CLASS_2_FB2285061706D71D___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xB017FD0)
#define CLASS_2_FB2285061706D71D___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xB0180F0)
#define CLASS_2_FB2285061706D71D___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xB018090)
#define CLASS_2_FB2285061706D71D___IFIXBASEPROXY_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xB018030)

inline static constexpr unsigned int Class_2_FB2285061706D71D_TypeDefinitionIndex = 60183;

class Class_2_FB2285061706D71D : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB2285061706D71D__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_FB2285061706D71D_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateRemoveRole(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FB2285061706D71D_UPDATEREMOVEROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_FB2285061706D71D_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_FB2285061706D71D_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_FB2285061706D71D___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateRemoveRole(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FB2285061706D71D___IFIXBASEPROXY_UPDATEREMOVEROLE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_FB2285061706D71D___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_FB2285061706D71D___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, a1);
	}
};
