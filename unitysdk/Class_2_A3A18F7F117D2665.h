#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

class Class_1_B1FF62FAE312BC49_5;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_A3A18F7F117D2665_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x14429CB0)
#define CLASS_2_A3A18F7F117D2665_METHOD_2_413351932F8E5F3D_OFFSET UNITYSDK_OFFSET(0x14429DC0)
#define CLASS_2_A3A18F7F117D2665_METHOD_2_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0x1442A5D0)
#define CLASS_2_A3A18F7F117D2665_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1442A230)
#define CLASS_2_A3A18F7F117D2665_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x14429D10)
#define CLASS_2_A3A18F7F117D2665__CTOR_OFFSET UNITYSDK_OFFSET(0x1442A4E0)
#define CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1442A510)
#define CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1442A630)
#define CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1442A570)

inline static constexpr unsigned int Class_2_A3A18F7F117D2665_TypeDefinitionIndex = 61098;

class Class_2_A3A18F7F117D2665 : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

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

	::System::Void Method_2_413351932F8E5F3D(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_METHOD_2_413351932F8E5F3D_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8CD1A6D1096A6CB7(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_METHOD_2_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, a1);
	}
};
