#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_C220C7BFE0635B55__CTOR_OFFSET UNITYSDK_OFFSET(0x14421A70)

inline static constexpr unsigned int Class_1_C220C7BFE0635B55_TypeDefinitionIndex = 46863;

class Class_1_C220C7BFE0635B55 : public ::System::Object
{
public:
	::System::Func_2<::System::Int32, ::System::Int32>* Field_1_6; // 0x10
	::System::Func_1<::System::Boolean>* Field_1_5; // 0x18
	::System::Func_2<::System::Int32, ::System::Boolean>* Field_1_7; // 0x20
	::System::Action_2<::System::Int32, ::System::Boolean>* Field_1_0; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean Field_1_11; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C220C7BFE0635B55__CTOR_OFFSET))(this);
	}
};
