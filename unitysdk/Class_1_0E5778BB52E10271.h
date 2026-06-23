#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15A8EF2824547B27.h"
#include "unitysdk/Enum_3_629D4F26795DE047.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_3.h"
#include "unitysdk/System/Object.h"

class Class_1_4F9417780723166C;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_0E5778BB52E10271__CTOR_OFFSET UNITYSDK_OFFSET(0xF89E760)

inline static constexpr unsigned int Class_1_0E5778BB52E10271_TypeDefinitionIndex = 55700;

class Class_1_0E5778BB52E10271 : public ::System::Object
{
public:
	::System::Func_1<::System::Boolean>* Field_1_9; // 0x10
	::Struct_2_5B421F8FFABD4CA3_3 Field_1_12; // 0x18
	::System::Func_2<::System::Int32, ::System::String*>* Field_1_3; // 0x38
	::System::Action_1<::Class_1_0E5778BB52E10271*>* Field_1_8; // 0x40
	::Class_1_4F9417780723166C* Field_1_0; // 0x48
	::System::Boolean Field_1_2; // 0x50
	::System::Boolean Field_1_11; // 0x51
	::System::Boolean Field_1_6; // 0x52
	::Enum_3_15A8EF2824547B27 Field_1_4; // 0x54
	::Enum_3_629D4F26795DE047 Field_1_5; // 0x58
	::System::UInt32 Field_1_7; // 0x5C
	::System::Boolean Field_1_1; // 0x60
	::System::Boolean Field_1_10; // 0x61

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E5778BB52E10271__CTOR_OFFSET))(this);
	}
};
