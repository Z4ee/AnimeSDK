#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/System/Object.h"

class Class_1_061801F5C4991F1A;
class Class_1_236FD73ABC492E3F;
class Class_2_2A56CCCB20A346FA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F76D791F8810CBA5_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17A43380)
#define CLASS_1_F76D791F8810CBA5_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17A43830)
#define CLASS_1_F76D791F8810CBA5_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x17A438B0)
#define CLASS_1_F76D791F8810CBA5_METHOD_1_B02211135C5665F9_OFFSET UNITYSDK_OFFSET(0x17A433E0)
#define CLASS_1_F76D791F8810CBA5__CTOR_OFFSET UNITYSDK_OFFSET(0x17A44180)

inline static constexpr unsigned int Class_1_F76D791F8810CBA5_TypeDefinitionIndex = 55827;

class Class_1_F76D791F8810CBA5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::Class_1_061801F5C4991F1A*>* Field_1_0; // 0x20
	::MoleMole::Config::TeamProperty Field_1_2; // 0x28
	::MoleMole::Config::TeamProperty Field_1_3; // 0x2C
	::System::Boolean Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F76D791F8810CBA5__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F76D791F8810CBA5_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_F76D791F8810CBA5_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B02211135C5665F9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F76D791F8810CBA5_METHOD_1_B02211135C5665F9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_F76D791F8810CBA5_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
