#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_611234F4673C7CBC.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_169;
class Class_2_208CC9941471731A_279;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_45F445D07EF6A227_METHOD_1_0EE3C322DA900C20_OFFSET UNITYSDK_OFFSET(0x18AE3D00)
#define CLASS_1_45F445D07EF6A227_METHOD_1_29338D0ACE3894D9_OFFSET UNITYSDK_OFFSET(0x18AE3F70)
#define CLASS_1_45F445D07EF6A227_METHOD_1_2EA3BB7C989DFB55_OFFSET UNITYSDK_OFFSET(0x18AE3E00)
#define CLASS_1_45F445D07EF6A227__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AE3C50)

inline static constexpr unsigned int Class_1_45F445D07EF6A227_TypeDefinitionIndex = 45365;

class Class_1_45F445D07EF6A227 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_169*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_169*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45F445D07EF6A227_TypeDefinitionIndex)->GetStaticField(0x30120);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45F445D07EF6A227__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0EE3C322DA900C20(::Enum_3_611234F4673C7CBC a1, ::Class_0_16E4307DCC419505_169* a2)
	{
		return ((::System::Void(*)(::Enum_3_611234F4673C7CBC, ::Class_0_16E4307DCC419505_169*))((::PBYTE)hIl2Cpp + CLASS_1_45F445D07EF6A227_METHOD_1_0EE3C322DA900C20_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2EA3BB7C989DFB55(::Class_2_208CC9941471731A_279* a1)
	{
		return ((::System::Boolean(*)(::Class_2_208CC9941471731A_279*))((::PBYTE)hIl2Cpp + CLASS_1_45F445D07EF6A227_METHOD_1_2EA3BB7C989DFB55_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_169* Method_1_29338D0ACE3894D9(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_169*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45F445D07EF6A227_METHOD_1_29338D0ACE3894D9_OFFSET))(a1);
	}
};
