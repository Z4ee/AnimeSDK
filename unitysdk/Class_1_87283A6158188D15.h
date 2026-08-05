#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F41D242A20F8FE06;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6; }

#define CLASS_1_87283A6158188D15_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x117C93D0)
#define CLASS_1_87283A6158188D15__CTOR_OFFSET UNITYSDK_OFFSET(0x117C93C0)

inline static constexpr unsigned int Class_1_87283A6158188D15_TypeDefinitionIndex = 90575;

class Class_1_87283A6158188D15 : public ::System::Object
{
public:
	::System::Action_6<::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32>* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87283A6158188D15__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87283A6158188D15_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
