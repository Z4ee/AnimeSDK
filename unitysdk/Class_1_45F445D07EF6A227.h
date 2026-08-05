#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_611234F4673C7CBC.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_293;
class Class_2_208CC9941471731A_393;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_45F445D07EF6A227_METHOD_1_0EE3C322DA900C20_OFFSET UNITYSDK_OFFSET(0x17670420)
#define CLASS_1_45F445D07EF6A227_METHOD_1_29338D0ACE3894D9_OFFSET UNITYSDK_OFFSET(0x17670690)
#define CLASS_1_45F445D07EF6A227_METHOD_1_2EA3BB7C989DFB55_OFFSET UNITYSDK_OFFSET(0x17670520)
#define CLASS_1_45F445D07EF6A227__CCTOR_OFFSET UNITYSDK_OFFSET(0x17670370)

inline static constexpr unsigned int Class_1_45F445D07EF6A227_TypeDefinitionIndex = 70559;

class Class_1_45F445D07EF6A227 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_293*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_293*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45F445D07EF6A227_TypeDefinitionIndex)->GetStaticField(0x50410);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45F445D07EF6A227__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_2EA3BB7C989DFB55(::Class_2_208CC9941471731A_393* a1)
	{
		return ((::System::Boolean(*)(::Class_2_208CC9941471731A_393*))((::PBYTE)hIl2Cpp + CLASS_1_45F445D07EF6A227_METHOD_1_2EA3BB7C989DFB55_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_293* Method_1_29338D0ACE3894D9(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_293*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_45F445D07EF6A227_METHOD_1_29338D0ACE3894D9_OFFSET))(a1);
	}

	static ::System::Void Method_1_0EE3C322DA900C20(::Enum_3_611234F4673C7CBC a1, ::Class_0_16E4307DCC419505_293* a2)
	{
		return ((::System::Void(*)(::Enum_3_611234F4673C7CBC, ::Class_0_16E4307DCC419505_293*))((::PBYTE)hIl2Cpp + CLASS_1_45F445D07EF6A227_METHOD_1_0EE3C322DA900C20_OFFSET))(a1, a2);
	}
};
