#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_323;
class Class_1_C662E2F2A633F51D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_1_952A7C560FC1CD4B_METHOD_1_16AD9E6C00F79F25_OFFSET UNITYSDK_OFFSET(0x127FD5D0)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x127FD350)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x127FD580)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x127FD470)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_81C52DAD6E507117_OFFSET UNITYSDK_OFFSET(0x127FD630)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_9AEEA16F27488438_OFFSET UNITYSDK_OFFSET(0x127FD620)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x127FD3F0)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x127FD430)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x127FD4C0)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x127FD500)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x127FD540)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0x127FD780)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x127FD3B0)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_CEAC9CDAE2EF9114_OFFSET UNITYSDK_OFFSET(0x127FD300)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x127FD810)
#define CLASS_1_952A7C560FC1CD4B_METHOD_1_ED4BCDA57B3199C8_OFFSET UNITYSDK_OFFSET(0x127FD7C0)
#define CLASS_1_952A7C560FC1CD4B__CTOR_OFFSET UNITYSDK_OFFSET(0x127FDA40)

inline static constexpr unsigned int Class_1_952A7C560FC1CD4B_TypeDefinitionIndex = 45931;

class Class_1_952A7C560FC1CD4B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C662E2F2A633F51D*>* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x20

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

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C662E2F2A633F51D*>* Method_1_9AEEA16F27488438()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C662E2F2A633F51D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_9AEEA16F27488438_OFFSET))(this);
	}

	::System::Void Method_1_81C52DAD6E507117(::System::String* a1, ::Class_1_C662E2F2A633F51D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_C662E2F2A633F51D*))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_81C52DAD6E507117_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_CA373AA1C7054598_6_OFFSET))(this);
	}

	::System::Void Method_1_ED4BCDA57B3199C8(::EnviromentSystemV2Space::OutputType a1, ::Class_0_16E4307DCC419505_323* a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_323*))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_ED4BCDA57B3199C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_952A7C560FC1CD4B_METHOD_1_DAEB67F34AF80609_OFFSET))(this);
	}
};
