#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_CE2E7DC9D5241F3C_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1DBDEED36076C483_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD33D480)
#define CLASS_1_1DBDEED36076C483_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD33CF60)
#define CLASS_1_1DBDEED36076C483_METHOD_1_1F4AF917A1653551_OFFSET UNITYSDK_OFFSET(0xD33D4E0)
#define CLASS_1_1DBDEED36076C483_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0xD33CFE0)
#define CLASS_1_1DBDEED36076C483__CTOR_OFFSET UNITYSDK_OFFSET(0xD33D890)

inline static constexpr unsigned int Class_1_1DBDEED36076C483_TypeDefinitionIndex = 68181;

class Class_1_1DBDEED36076C483 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_CE2E7DC9D5241F3C_1*>* Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DBDEED36076C483__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_1DBDEED36076C483_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DBDEED36076C483_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1F4AF917A1653551(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DBDEED36076C483_METHOD_1_1F4AF917A1653551_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_1DBDEED36076C483_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
