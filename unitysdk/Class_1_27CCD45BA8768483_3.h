#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_8A50BFB20D9D2482_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_27CCD45BA8768483_3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D10E60)
#define CLASS_1_27CCD45BA8768483_3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D10AB0)
#define CLASS_1_27CCD45BA8768483_3_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0x17D10EC0)
#define CLASS_1_27CCD45BA8768483_3_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x17D10B30)
#define CLASS_1_27CCD45BA8768483_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17D110D0)

inline static constexpr unsigned int Class_1_27CCD45BA8768483_3_TypeDefinitionIndex = 76004;

class Class_1_27CCD45BA8768483_3 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_8A50BFB20D9D2482_1*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_3__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_3_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_3_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_3_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
	}
};
