#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_17C5CD93E85C546D_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1D0342A0)
#define CLASS_4_17C5CD93E85C546D_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1D034260)
#define CLASS_4_17C5CD93E85C546D_METHOD_4_B193BE3C813F58CC_OFFSET UNITYSDK_OFFSET(0x1D033FC0)
#define CLASS_4_17C5CD93E85C546D_METHOD_4_FE72CD80F88EC4C9_OFFSET UNITYSDK_OFFSET(0x1D034010)
#define CLASS_4_17C5CD93E85C546D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D034000)

inline static constexpr unsigned int Class_4_17C5CD93E85C546D_TypeDefinitionIndex = 19911;

class Class_4_17C5CD93E85C546D : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::RPG::GameCore::DynamicFloat*>* EIBFMMJPOIG; // 0x20
	::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x28
	::Enum_3_0A3761FE34514D6C_3 MMNJODIJPOE; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_17C5CD93E85C546D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_B193BE3C813F58CC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_17C5CD93E85C546D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_17C5CD93E85C546D*&))((::PBYTE)hIl2Cpp + CLASS_4_17C5CD93E85C546D_METHOD_4_B193BE3C813F58CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_FE72CD80F88EC4C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_17C5CD93E85C546D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_17C5CD93E85C546D*))((::PBYTE)hIl2Cpp + CLASS_4_17C5CD93E85C546D_METHOD_4_FE72CD80F88EC4C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_17C5CD93E85C546D*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_17C5CD93E85C546D*&))((::PBYTE)hIl2Cpp + CLASS_4_17C5CD93E85C546D_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_17C5CD93E85C546D* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_17C5CD93E85C546D*))((::PBYTE)hIl2Cpp + CLASS_4_17C5CD93E85C546D_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
