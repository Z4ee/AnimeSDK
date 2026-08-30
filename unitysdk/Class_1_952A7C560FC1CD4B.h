#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_379;
class Class_1_39155512A8777971;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_1_952A7C560FC1CD4B_METHOD_1_16AD9E6C00F79F25_OFFSET UNITYSDK_OFFSET(0x159C2D90)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x159C2B10)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x159C2D40)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x159C2C30)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_81C52DAD6E507117_OFFSET UNITYSDK_OFFSET(0x159C2DF0)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_9AEEA16F27488438_OFFSET UNITYSDK_OFFSET(0x159C2DE0)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x159C2FD0)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x159C2BB0)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x159C2BF0)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x159C2C80)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x159C2CC0)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x159C2D00)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0x159C2F40)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x159C2B70)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CEAC9CDAE2EF9114_OFFSET UNITYSDK_OFFSET(0x159C2AC0)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_ED4BCDA57B3199C8_OFFSET UNITYSDK_OFFSET(0x159C2F80)
#define CLASS_1_952A7C560FC1CD4B__CTOR_OFFSET UNITYSDK_OFFSET(0x159C3410)

inline static constexpr unsigned int Class_1_952A7C560FC1CD4B_TypeDefinitionIndex = 49759;

class Class_1_952A7C560FC1CD4B : public ::System::Object
{
public:
	::System::String* LFLPOOCDHDP; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_39155512A8777971*>* AGIJODGKPBN; // 0x18
	::System::Boolean MNALFCDKDAC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CEAC9CDAE2EF9114(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_CEAC9CDAE2EF9114_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_16AD9E6C00F79F25(::RPG::CustomRP::CustomLightQualityFilter a1, ::RPG::CustomRP::CustomLightQualityFilter a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_16AD9E6C00F79F25_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_39155512A8777971*>* Method_1_9AEEA16F27488438()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_39155512A8777971*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_9AEEA16F27488438_OFFSET))(this);
	}

	::System::Void Method_1_81C52DAD6E507117(::System::String* a1, ::Class_1_39155512A8777971* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_39155512A8777971*))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_81C52DAD6E507117_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_6_OFFSET))(this);
	}

	::System::Void Method_1_ED4BCDA57B3199C8(::EnviromentSystemV2Space::OutputType a1, ::Class_0_16E4307DCC419505_379* a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_379*))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_ED4BCDA57B3199C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}
};
