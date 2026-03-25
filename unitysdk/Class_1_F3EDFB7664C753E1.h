#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E8C1B530F552FEF0.h"
#include "unitysdk/System/Object.h"

class Class_1_8F355422BD450641;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F3EDFB7664C753E1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1179D7C0)
#define CLASS_1_F3EDFB7664C753E1_METHOD_1_782FBC558668D4E1_OFFSET UNITYSDK_OFFSET(0x1179DFA0)
#define CLASS_1_F3EDFB7664C753E1_METHOD_1_97D3351D9DA48135_OFFSET UNITYSDK_OFFSET(0x1179D860)
#define CLASS_1_F3EDFB7664C753E1_METHOD_1_FA5DABCBDCFF09FF_OFFSET UNITYSDK_OFFSET(0x1179D760)
#define CLASS_1_F3EDFB7664C753E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1179D6C0)

inline static constexpr unsigned int Class_1_F3EDFB7664C753E1_TypeDefinitionIndex = 60715;

class Class_1_F3EDFB7664C753E1 : public ::System::Object
{
public:
	::System::String* Field_1_8; // 0x10
	::System::String* Field_1_5; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::String* Field_1_0; // 0x28
	::System::String* Field_1_1; // 0x30
	::System::String* Field_1_4; // 0x38
	::System::String* Field_1_2; // 0x40
	::System::String* Field_1_9; // 0x48
	::System::String* Field_1_3; // 0x50
	::System::String* Field_1_7; // 0x58
	::Struct_2_E8C1B530F552FEF0 Field_1_10; // 0x60

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3EDFB7664C753E1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_FA5DABCBDCFF09FF(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_F3EDFB7664C753E1_METHOD_1_FA5DABCBDCFF09FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3EDFB7664C753E1_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_97D3351D9DA48135(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_8F355422BD450641*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_8F355422BD450641*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3EDFB7664C753E1_METHOD_1_97D3351D9DA48135_OFFSET))(this, a1);
	}

	::System::Void Method_1_782FBC558668D4E1(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_8F355422BD450641*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_8F355422BD450641*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3EDFB7664C753E1_METHOD_1_782FBC558668D4E1_OFFSET))(this, a1, a2);
	}
};
