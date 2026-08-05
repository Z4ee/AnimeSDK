#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D59D655CB9D3D9DD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14023B50)
#define CLASS_1_D59D655CB9D3D9DD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14023900)
#define CLASS_1_D59D655CB9D3D9DD_METHOD_1_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0x14023BB0)
#define CLASS_1_D59D655CB9D3D9DD_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x14023980)
#define CLASS_1_D59D655CB9D3D9DD__CTOR_OFFSET UNITYSDK_OFFSET(0x14023E10)

inline static constexpr unsigned int Class_1_D59D655CB9D3D9DD_TypeDefinitionIndex = 66618;

class Class_1_D59D655CB9D3D9DD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D59D655CB9D3D9DD__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_D59D655CB9D3D9DD_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D59D655CB9D3D9DD_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D59D655CB9D3D9DD_METHOD_1_157E312840A3BD00_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_D59D655CB9D3D9DD_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}
};
