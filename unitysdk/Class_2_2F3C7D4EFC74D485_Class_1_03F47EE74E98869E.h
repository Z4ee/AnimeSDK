#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2F3C7D4EFC74D485;
class Class_2_E23E4CB2769CC93F;
class Class_3_6F16E75038FBC479;
namespace System { class Action; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_03F47EE74E98869E_METHOD_1_B579DB9B03931A80_OFFSET UNITYSDK_OFFSET(0x128E4FD0)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_03F47EE74E98869E_METHOD_1_D37B4520DFC58579_OFFSET UNITYSDK_OFFSET(0x128E58E0)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_03F47EE74E98869E__CTOR_OFFSET UNITYSDK_OFFSET(0x128E4FC0)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_03F47EE74E98869E_TypeDefinitionIndex = 43434;

class Class_2_2F3C7D4EFC74D485_Class_1_03F47EE74E98869E : public ::System::Object
{
public:
	::Class_2_2F3C7D4EFC74D485* Field_1_0; // 0x10
	::System::Action* Field_1_5; // 0x18
	::Class_2_E23E4CB2769CC93F* Field_1_7; // 0x20
	::System::Boolean Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_03F47EE74E98869E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B579DB9B03931A80(::Class_1_27F786FF2A30778C<::Class_3_6F16E75038FBC479*>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27F786FF2A30778C<::Class_3_6F16E75038FBC479*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_03F47EE74E98869E_METHOD_1_B579DB9B03931A80_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D37B4520DFC58579()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_03F47EE74E98869E_METHOD_1_D37B4520DFC58579_OFFSET))(this);
	}
};
