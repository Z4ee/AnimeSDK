#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_999E3D9B0BF07A95_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16AE80E0)
#define CLASS_1_999E3D9B0BF07A95_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16AE8590)
#define CLASS_1_999E3D9B0BF07A95_METHOD_1_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x16AE8610)
#define CLASS_1_999E3D9B0BF07A95_METHOD_1_F7BD93A4FE3C1F71_OFFSET UNITYSDK_OFFSET(0x16AE8140)
#define CLASS_1_999E3D9B0BF07A95__CTOR_OFFSET UNITYSDK_OFFSET(0x16AE8E20)

inline static constexpr unsigned int Class_1_999E3D9B0BF07A95_TypeDefinitionIndex = 82678;

class Class_1_999E3D9B0BF07A95 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* Field_1_3; // 0x18
	::System::String* Field_1_4; // 0x20
	::System::Boolean Field_1_2; // 0x28
	::System::Int32 Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_999E3D9B0BF07A95__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_999E3D9B0BF07A95_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_999E3D9B0BF07A95_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F7BD93A4FE3C1F71(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_999E3D9B0BF07A95_METHOD_1_F7BD93A4FE3C1F71_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_999E3D9B0BF07A95_METHOD_1_00531776927FE5B6_OFFSET))(this, a1);
	}
};
