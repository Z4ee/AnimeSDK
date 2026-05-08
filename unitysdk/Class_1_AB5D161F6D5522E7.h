#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Diagnostics { class Stopwatch; }

#define CLASS_1_AB5D161F6D5522E7_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0xE4B07B0)
#define CLASS_1_AB5D161F6D5522E7_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0xE4B07A0)
#define CLASS_1_AB5D161F6D5522E7_METHOD_1_A566F09A958B35F3_OFFSET UNITYSDK_OFFSET(0xE4B07C0)
#define CLASS_1_AB5D161F6D5522E7__CTOR_OFFSET UNITYSDK_OFFSET(0xE4B0750)

inline static constexpr unsigned int Class_1_AB5D161F6D5522E7_TypeDefinitionIndex = 49340;

class Class_1_AB5D161F6D5522E7 : public ::System::Object
{
public:
	::System::Diagnostics::Stopwatch* Field_1_0; // 0x10
	::System::Int64 Field_1_1; // 0x18

	::System::Void _ctor(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_AB5D161F6D5522E7__CTOR_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB5D161F6D5522E7_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_AB5D161F6D5522E7_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_A566F09A958B35F3(::System::Collections::Generic::Queue_1<::System::Action*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::System::Action*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB5D161F6D5522E7_METHOD_1_A566F09A958B35F3_OFFSET))(this, a1);
	}
};
