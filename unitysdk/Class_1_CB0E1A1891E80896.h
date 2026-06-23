#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4017E5F8F706DFC9.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CB0E1A1891E80896_METHOD_1_39CCCCFA2D1089DC_OFFSET UNITYSDK_OFFSET(0x14F410B0)
#define CLASS_1_CB0E1A1891E80896__CTOR_OFFSET UNITYSDK_OFFSET(0x14F41020)

inline static constexpr unsigned int Class_1_CB0E1A1891E80896_TypeDefinitionIndex = 55933;

class Class_1_CB0E1A1891E80896 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Struct_2_4017E5F8F706DFC9>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB0E1A1891E80896__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_39CCCCFA2D1089DC(::System::UInt32 a1, ::Struct_2_4017E5F8F706DFC9 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Struct_2_4017E5F8F706DFC9))((::PBYTE)hIl2Cpp + CLASS_1_CB0E1A1891E80896_METHOD_1_39CCCCFA2D1089DC_OFFSET))(this, a1, a2);
	}
};
