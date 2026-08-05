#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_252.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_892.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_8E01ADA29EAEFAEA_METHOD_2_9C09969EFB8B998C_OFFSET UNITYSDK_OFFSET(0x19DF4A60)
#define CLASS_2_8E01ADA29EAEFAEA__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF4A50)

inline static constexpr unsigned int Class_2_8E01ADA29EAEFAEA_TypeDefinitionIndex = 12651;

class Class_2_8E01ADA29EAEFAEA : public ::Class_1_5DA2E7556103D5A3_252
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x70

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_892 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_892, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_8E01ADA29EAEFAEA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_9C09969EFB8B998C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E01ADA29EAEFAEA_METHOD_2_9C09969EFB8B998C_OFFSET))(this);
	}
};
