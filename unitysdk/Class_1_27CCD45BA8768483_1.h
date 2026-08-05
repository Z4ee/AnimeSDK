#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_09F8159A68C9F1AE;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_27CCD45BA8768483_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F64AD0)
#define CLASS_1_27CCD45BA8768483_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16F64720)
#define CLASS_1_27CCD45BA8768483_1_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0x16F64B30)
#define CLASS_1_27CCD45BA8768483_1_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x16F647A0)
#define CLASS_1_27CCD45BA8768483_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16F64D40)

inline static constexpr unsigned int Class_1_27CCD45BA8768483_1_TypeDefinitionIndex = 48798;

class Class_1_27CCD45BA8768483_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_09F8159A68C9F1AE*>* Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_1__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_1_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_27CCD45BA8768483_1_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}
};
