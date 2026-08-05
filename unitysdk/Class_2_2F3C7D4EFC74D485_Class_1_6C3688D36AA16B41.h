#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1A84C744BF703CC0.h"
#include "unitysdk/System/Object.h"

class Class_3_6F16E75038FBC479;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_6C3688D36AA16B41_METHOD_1_0866A3CCE03C8ECA_OFFSET UNITYSDK_OFFSET(0x12751370)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_6C3688D36AA16B41__CTOR_OFFSET UNITYSDK_OFFSET(0x12751360)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_6C3688D36AA16B41_TypeDefinitionIndex = 43409;

class Class_2_2F3C7D4EFC74D485_Class_1_6C3688D36AA16B41 : public ::System::Object
{
public:
	::System::Action_3<::Class_1_27F786FF2A30778C<::Class_3_6F16E75038FBC479*>*, ::System::Boolean, ::System::Boolean>* Field_1_1; // 0x10
	::Struct_2_1A84C744BF703CC0 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_6C3688D36AA16B41__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0866A3CCE03C8ECA(::Class_1_27F786FF2A30778C<::Class_3_6F16E75038FBC479*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27F786FF2A30778C<::Class_3_6F16E75038FBC479*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_6C3688D36AA16B41_METHOD_1_0866A3CCE03C8ECA_OFFSET))(this, a1, a2);
	}
};
