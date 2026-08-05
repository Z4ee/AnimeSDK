#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_FF61869387895FA4_CLASS_1_A8A60A96F9E3AFDF_COMPARE_OFFSET UNITYSDK_OFFSET(0x161C64E0)
#define CLASS_1_FF61869387895FA4_CLASS_1_A8A60A96F9E3AFDF__CTOR_OFFSET UNITYSDK_OFFSET(0x161C64D0)

inline static constexpr unsigned int Class_1_FF61869387895FA4_Class_1_A8A60A96F9E3AFDF_TypeDefinitionIndex = 71202;

class Class_1_FF61869387895FA4_Class_1_A8A60A96F9E3AFDF : public ::System::Object
{
public:
	::System::Func_2<::System::UInt32, ::System::Boolean>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Func_2<::System::UInt32, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_FF61869387895FA4_CLASS_1_A8A60A96F9E3AFDF__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD a1, ::Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD, ::Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD))((::PBYTE)hIl2Cpp + CLASS_1_FF61869387895FA4_CLASS_1_A8A60A96F9E3AFDF_COMPARE_OFFSET))(this, a1, a2);
	}
};
