#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9D0DA3B61DDF2467.h"
#include "unitysdk/Enum_3_DFCB42601400F441_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_24BCD046BD647EB4_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x12473680)
#define CLASS_1_24BCD046BD647EB4_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x124736C0)
#define CLASS_1_24BCD046BD647EB4_METHOD_1_6A8CE1CF876FD945_OFFSET UNITYSDK_OFFSET(0x12473690)
#define CLASS_1_24BCD046BD647EB4_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x124736A0)
#define CLASS_1_24BCD046BD647EB4_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x124736D0)
#define CLASS_1_24BCD046BD647EB4_METHOD_1_B6E6F8552A000080_OFFSET UNITYSDK_OFFSET(0x124736B0)
#define CLASS_1_24BCD046BD647EB4__CTOR_OFFSET UNITYSDK_OFFSET(0x12473670)

inline static constexpr unsigned int Class_1_24BCD046BD647EB4_TypeDefinitionIndex = 52432;

class Class_1_24BCD046BD647EB4 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Enum_3_9D0DA3B61DDF2467>* Field_1_2; // 0x18
	::Enum_3_DFCB42601400F441_1 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24BCD046BD647EB4__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24BCD046BD647EB4_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_6A8CE1CF876FD945(::System::Collections::Generic::List_1<::Enum_3_9D0DA3B61DDF2467>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_9D0DA3B61DDF2467>*))((::PBYTE)hIl2Cpp + CLASS_1_24BCD046BD647EB4_METHOD_1_6A8CE1CF876FD945_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_24BCD046BD647EB4_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Enum_3_9D0DA3B61DDF2467>* Method_1_B6E6F8552A000080()
	{
		return ((::System::Collections::Generic::List_1<::Enum_3_9D0DA3B61DDF2467>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24BCD046BD647EB4_METHOD_1_B6E6F8552A000080_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DFCB42601400F441_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441_1))((::PBYTE)hIl2Cpp + CLASS_1_24BCD046BD647EB4_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_DFCB42601400F441_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DFCB42601400F441_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24BCD046BD647EB4_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}
};
