#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_844.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_99_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x169443B0)
#define CLASS_1_D9FAA3DCCFE14DB8_99_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x169443A0)
#define CLASS_1_D9FAA3DCCFE14DB8_99_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x169442A0)
#define CLASS_1_D9FAA3DCCFE14DB8_99_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16944390)
#define CLASS_1_D9FAA3DCCFE14DB8_99__CTOR_OFFSET UNITYSDK_OFFSET(0x16944290)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_99_TypeDefinitionIndex = 15617;

class Class_1_D9FAA3DCCFE14DB8_99 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_7* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_10; // 0x18
	::Struct_2_3E75877A2888D88A_844 Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_11; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::Int32 Field_1_6; // 0x40
	::System::Byte Field_1_7; // 0x44
	::System::Boolean Field_1_4; // 0x45
	::System::Boolean Field_1_1; // 0x46
	::System::Byte Field_1_0; // 0x47
	::System::Int32 Field_1_9; // 0x48

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_844 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_844, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_99_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_99_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_99_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_99_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}
};
