#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_863.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_83_METHOD_1_51652EAB9A014635_1_OFFSET UNITYSDK_OFFSET(0x17CA3BE0)
#define CLASS_1_D9FAA3DCCFE14DB8_83_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x17CA3A60)
#define CLASS_1_D9FAA3DCCFE14DB8_83_METHOD_1_75D0422F760341EE_OFFSET UNITYSDK_OFFSET(0x17CA35A0)
#define CLASS_1_D9FAA3DCCFE14DB8_83_METHOD_1_883C3A41389A55F9_OFFSET UNITYSDK_OFFSET(0x17CA3D60)
#define CLASS_1_D9FAA3DCCFE14DB8_83_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17CA3950)
#define CLASS_1_D9FAA3DCCFE14DB8_83_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x17CA3960)
#define CLASS_1_D9FAA3DCCFE14DB8_83_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17CA3A50)
#define CLASS_1_D9FAA3DCCFE14DB8_83__CTOR_OFFSET UNITYSDK_OFFSET(0x17CA3590)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_83_TypeDefinitionIndex = 12386;

class Class_1_D9FAA3DCCFE14DB8_83 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x10
	::System::String* Field_1_11; // 0x18
	::Class_0_16E4307DCC419505_7* Field_1_0; // 0x20
	::Struct_2_3E75877A2888D88A_863 Field_1_1; // 0x28
	::System::Int32 Field_1_10; // 0x38
	::System::Byte Field_1_5; // 0x3C
	::System::Boolean Field_1_7; // 0x3D
	::System::Byte Field_1_6; // 0x3E
	::System::Int32 Field_1_4; // 0x40

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_863 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_863, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_83__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_75D0422F760341EE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_83_METHOD_1_75D0422F760341EE_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_83_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_83_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_83_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_83_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_83_METHOD_1_51652EAB9A014635_1_OFFSET))(this);
	}

	::System::String* Method_1_883C3A41389A55F9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_83_METHOD_1_883C3A41389A55F9_OFFSET))(this);
	}
};
