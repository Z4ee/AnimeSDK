#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9CBBB791D0978B97_1.h"
#include "unitysdk/Enum_3_B42D3B4769D5C848.h"
#include "unitysdk/Enum_3_E08203B0D6ACEDCE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_4708064C2D9D131C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E631FD14D6BC8365_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13ADA4C0)
#define CLASS_1_E631FD14D6BC8365_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13AD9B20)
#define CLASS_1_E631FD14D6BC8365_METHOD_1_14DF275FDD6E920A_OFFSET UNITYSDK_OFFSET(0x13AD9BA0)
#define CLASS_1_E631FD14D6BC8365_METHOD_1_E8FBF00074801DA0_OFFSET UNITYSDK_OFFSET(0x13ADA520)
#define CLASS_1_E631FD14D6BC8365__CTOR_OFFSET UNITYSDK_OFFSET(0x13ADA8F0)

inline static constexpr unsigned int Class_1_E631FD14D6BC8365_TypeDefinitionIndex = 39398;

class Class_1_E631FD14D6BC8365 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_4708064C2D9D131C*>* Field_1_5; // 0x10
	::System::String* Field_1_3; // 0x18
	::Enum_3_B42D3B4769D5C848 Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x24
	::Enum_3_9CBBB791D0978B97_1 Field_1_4; // 0x28
	::Enum_3_E08203B0D6ACEDCE Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E631FD14D6BC8365__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_E631FD14D6BC8365_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E631FD14D6BC8365_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_14DF275FDD6E920A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_E631FD14D6BC8365_METHOD_1_14DF275FDD6E920A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E8FBF00074801DA0(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E631FD14D6BC8365_METHOD_1_E8FBF00074801DA0_OFFSET))(this, a1, a2);
	}
};
