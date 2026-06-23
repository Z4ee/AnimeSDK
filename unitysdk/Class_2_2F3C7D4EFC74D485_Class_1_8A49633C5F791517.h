#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2F3C7D4EFC74D485;
class Class_3_48C7D152812F0173;
class Class_3_5B0D01C92C1E671E_11;
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_1_8CC15846339E7FB0;

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_8A49633C5F791517_METHOD_1_C6060C1240E86B04_OFFSET UNITYSDK_OFFSET(0x137D7580)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_8A49633C5F791517__CTOR_OFFSET UNITYSDK_OFFSET(0x137D7570)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_8A49633C5F791517_TypeDefinitionIndex = 63003;

class Class_2_2F3C7D4EFC74D485_Class_1_8A49633C5F791517 : public ::System::Object
{
public:
	::System::Action_1<::Class_3_48C7D152812F0173*>* Field_1_2; // 0x10
	::Class_3_5B0D01C92C1E671E_11* Field_1_1; // 0x18
	::Class_2_2F3C7D4EFC74D485* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_8A49633C5F791517__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C6060C1240E86B04(::Class_1_8CC15846339E7FB0<::Class_3_48C7D152812F0173*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8CC15846339E7FB0<::Class_3_48C7D152812F0173*>*))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_8A49633C5F791517_METHOD_1_C6060C1240E86B04_OFFSET))(this, a1);
	}
};
