#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_270.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_97_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x17CA2950)
#define CLASS_1_D9FAA3DCCFE14DB8_97_METHOD_1_76391AC1B4F1AE89_OFFSET UNITYSDK_OFFSET(0x17CA2A90)
#define CLASS_1_D9FAA3DCCFE14DB8_97_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17CA2940)
#define CLASS_1_D9FAA3DCCFE14DB8_97_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x17CA2850)
#define CLASS_1_D9FAA3DCCFE14DB8_97_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17CA2840)
#define CLASS_1_D9FAA3DCCFE14DB8_97__CTOR_OFFSET UNITYSDK_OFFSET(0x17CA2830)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_97_TypeDefinitionIndex = 16328;

class Class_1_D9FAA3DCCFE14DB8_97 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_7* Field_1_2; // 0x10
	::Struct_2_58DF5669875F2C66_270 Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_5; // 0x28
	::System::Boolean Field_1_1; // 0x30
	::System::Byte Field_1_0; // 0x31
	::System::Byte Field_1_7; // 0x32
	::System::Int32 Field_1_6; // 0x34

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_270 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_270, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_97__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_97_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_97_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_97_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_97_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_76391AC1B4F1AE89()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_97_METHOD_1_76391AC1B4F1AE89_OFFSET))(this);
	}
};
