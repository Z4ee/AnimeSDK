#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_9C01005F36902ADF_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1192F660)
#define CLASS_2_9C01005F36902ADF_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1192F7A0)
#define CLASS_2_9C01005F36902ADF_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1192F850)
#define CLASS_2_9C01005F36902ADF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1192F800)
#define CLASS_2_9C01005F36902ADF__CTOR_OFFSET UNITYSDK_OFFSET(0x1192F670)

inline static constexpr unsigned int Class_2_9C01005F36902ADF_TypeDefinitionIndex = 64599;

class Class_2_9C01005F36902ADF : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::Int32 Field_2_0; // 0x20
	::System::Int32 Field_2_1; // 0x24

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_9C01005F36902ADF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C01005F36902ADF_GET_ISRUNNING_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C01005F36902ADF_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C01005F36902ADF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C01005F36902ADF_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
