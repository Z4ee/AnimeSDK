#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_CE2E7DC9D5241F3C_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3DA1354BE57B4E9B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14964E30)
#define CLASS_1_3DA1354BE57B4E9B_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14964930)
#define CLASS_1_3DA1354BE57B4E9B_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x149649B0)
#define CLASS_1_3DA1354BE57B4E9B_METHOD_1_E0AC97338167133E_OFFSET UNITYSDK_OFFSET(0x14964E90)
#define CLASS_1_3DA1354BE57B4E9B__CTOR_OFFSET UNITYSDK_OFFSET(0x14965250)

inline static constexpr unsigned int Class_1_3DA1354BE57B4E9B_TypeDefinitionIndex = 67000;

class Class_1_3DA1354BE57B4E9B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_CE2E7DC9D5241F3C_1*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA1354BE57B4E9B__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_3DA1354BE57B4E9B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3DA1354BE57B4E9B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_3DA1354BE57B4E9B_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E0AC97338167133E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3DA1354BE57B4E9B_METHOD_1_E0AC97338167133E_OFFSET))(this, a1, a2);
	}
};
