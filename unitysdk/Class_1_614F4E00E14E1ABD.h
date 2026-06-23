#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B2EFAAC2F547BEFA.h"
#include "unitysdk/Enum_3_DBF72281E66E6BAD.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_EF896E1D0FDF202A;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class String; }

#define CLASS_1_614F4E00E14E1ABD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15391520)
#define CLASS_1_614F4E00E14E1ABD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15391AF0)
#define CLASS_1_614F4E00E14E1ABD_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x15391B70)
#define CLASS_1_614F4E00E14E1ABD_METHOD_1_DCC1A04AAD39A4D8_OFFSET UNITYSDK_OFFSET(0x15391580)
#define CLASS_1_614F4E00E14E1ABD__CTOR_OFFSET UNITYSDK_OFFSET(0x15392DB0)

inline static constexpr unsigned int Class_1_614F4E00E14E1ABD_TypeDefinitionIndex = 48291;

class Class_1_614F4E00E14E1ABD : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_6; // 0x10
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_1_3; // 0x18
	::MoleMole::Config::DynamicInt* Field_1_8; // 0x20
	::MoleMole::Config::DynamicFloat* Field_1_7; // 0x28
	::MoleMole::Config::DynamicFloat* Field_1_10; // 0x30
	::System::String* Field_1_9; // 0x38
	::MoleMole::Config::DynamicInt* Field_1_4; // 0x40
	::MoleMole::Config::DynamicFloat* Field_1_5; // 0x48
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_1_1; // 0x50
	::Enum_3_B2EFAAC2F547BEFA Field_1_2; // 0x58
	::Enum_3_DBF72281E66E6BAD Field_1_0; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_614F4E00E14E1ABD__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_614F4E00E14E1ABD_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_614F4E00E14E1ABD_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DCC1A04AAD39A4D8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_614F4E00E14E1ABD_METHOD_1_DCC1A04AAD39A4D8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_614F4E00E14E1ABD_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}
};
