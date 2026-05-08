#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_D0D2B3C2533F6DF2;
class Class_1_D0D2B3C2533F6DF2_4;

#define CLASS_1_ADDE2B57A010E39A_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11BB3270)
#define CLASS_1_ADDE2B57A010E39A_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11BB2E50)
#define CLASS_1_ADDE2B57A010E39A_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x11BB2DD0)
#define CLASS_1_ADDE2B57A010E39A_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x11BB2ED0)
#define CLASS_1_ADDE2B57A010E39A_METHOD_1_8F38D1E0FC0C448C_OFFSET UNITYSDK_OFFSET(0x11BB32D0)
#define CLASS_1_ADDE2B57A010E39A__CTOR_OFFSET UNITYSDK_OFFSET(0x11BB34F0)

inline static constexpr unsigned int Class_1_ADDE2B57A010E39A_TypeDefinitionIndex = 72503;

class Class_1_ADDE2B57A010E39A : public ::System::Object
{
public:
	::Class_1_D0D2B3C2533F6DF2* Field_1_1; // 0x10
	::Il2CppArray<::Class_1_D0D2B3C2533F6DF2_4*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADDE2B57A010E39A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADDE2B57A010E39A_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_ADDE2B57A010E39A_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADDE2B57A010E39A_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_ADDE2B57A010E39A_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8F38D1E0FC0C448C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADDE2B57A010E39A_METHOD_1_8F38D1E0FC0C448C_OFFSET))(this, a1, a2);
	}
};
