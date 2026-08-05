#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_178;
class Class_1_5DA2E7556103D5A3_446;
class Class_2_F8EB4D9464ADCCA1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_82054AF24890A4D8_METHOD_1_22B5BF12AFD8B168_OFFSET UNITYSDK_OFFSET(0x17F41380)
#define CLASS_1_82054AF24890A4D8_METHOD_1_CEE1216948F12D88_OFFSET UNITYSDK_OFFSET(0x17F41200)
#define CLASS_1_82054AF24890A4D8_METHOD_1_F68230F0BDC41370_OFFSET UNITYSDK_OFFSET(0x17F410A0)
#define CLASS_1_82054AF24890A4D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F41010)

inline static constexpr unsigned int Class_1_82054AF24890A4D8_TypeDefinitionIndex = 42167;

class Class_1_82054AF24890A4D8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_F8EB4D9464ADCCA1*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_F8EB4D9464ADCCA1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_82054AF24890A4D8_TypeDefinitionIndex)->GetStaticField(0x38F20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_82054AF24890A4D8__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_F68230F0BDC41370(::Class_1_5DA2E7556103D5A3_178* a1)
	{
		return ((::System::Int32(*)(::Class_1_5DA2E7556103D5A3_178*))((::PBYTE)hIl2Cpp + CLASS_1_82054AF24890A4D8_METHOD_1_F68230F0BDC41370_OFFSET))(a1);
	}

	static ::System::Void Method_1_CEE1216948F12D88(::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_446*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_446*>*))((::PBYTE)hIl2Cpp + CLASS_1_82054AF24890A4D8_METHOD_1_CEE1216948F12D88_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_2_F8EB4D9464ADCCA1*>* Method_1_22B5BF12AFD8B168(::Class_1_5DA2E7556103D5A3_178* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_F8EB4D9464ADCCA1*>*(*)(::Class_1_5DA2E7556103D5A3_178*))((::PBYTE)hIl2Cpp + CLASS_1_82054AF24890A4D8_METHOD_1_22B5BF12AFD8B168_OFFSET))(a1);
	}
};
