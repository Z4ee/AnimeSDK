#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_B7A012A804BEA677__CTOR_OFFSET UNITYSDK_OFFSET(0x143EE930)

inline static constexpr unsigned int Class_1_B7A012A804BEA677_TypeDefinitionIndex = 67377;

class Class_1_B7A012A804BEA677 : public ::System::Object
{
public:
	::System::Func_1<::System::Single>* Field_1_5; // 0x10
	::System::Func_1<::System::Int32>* Field_1_7; // 0x18
	::System::Func_1<::System::Single>* Field_1_6; // 0x20
	::System::Func_2<::System::Int32, ::System::Boolean>* Field_1_4; // 0x28
	::System::Boolean Field_1_1; // 0x30
	::System::Int32 Field_1_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7A012A804BEA677__CTOR_OFFSET))(this);
	}
};
