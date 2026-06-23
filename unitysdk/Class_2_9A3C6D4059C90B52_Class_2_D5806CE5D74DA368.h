#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"
#include "unitysdk/Class_2_9A3C6D4059C90B52_Class_2_D5806CE5D74DA368_Enum_3_4864555094AB37B4.h"
#include "unitysdk/Class_2_9A3C6D4059C90B52_Class_2_D5806CE5D74DA368_Struct_2_60DF5983B5B82E09.h"

namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }
template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_9A3C6D4059C90B52_CLASS_2_D5806CE5D74DA368_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14D2F4D0)
#define CLASS_2_9A3C6D4059C90B52_CLASS_2_D5806CE5D74DA368__CTOR_OFFSET UNITYSDK_OFFSET(0x14D2F610)

inline static constexpr unsigned int Class_2_9A3C6D4059C90B52_Class_2_D5806CE5D74DA368_TypeDefinitionIndex = 41727;

class Class_2_9A3C6D4059C90B52_Class_2_D5806CE5D74DA368 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::String*>* Field_2_1; // 0x60
	::Class_0_16E4307DCC419505_165<::System::String*>* Field_2_0; // 0x68
	::Class_0_16E4307DCC419505_165<::Class_2_9A3C6D4059C90B52_Class_2_D5806CE5D74DA368_Enum_3_4864555094AB37B4>* Field_2_3; // 0x70
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_6; // 0x78
	::UnityEngine::Events::UnityAction* Field_2_5; // 0x80
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_4; // 0x88
	::Class_0_16E4307DCC419505_165<::Class_2_9A3C6D4059C90B52_Class_2_D5806CE5D74DA368_Struct_2_60DF5983B5B82E09>* Field_2_2; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A3C6D4059C90B52_CLASS_2_D5806CE5D74DA368__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A3C6D4059C90B52_CLASS_2_D5806CE5D74DA368_ONCREATEPROPERTY_OFFSET))(this);
	}
};
