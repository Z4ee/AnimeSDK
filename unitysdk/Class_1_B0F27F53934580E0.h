#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942_1;
class Class_1_B0F27F53934580E0_Class_3_5189F202E0F37F03;
namespace RPG::GameCore { class ComplexSkillAIPostProcess; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B0F27F53934580E0_METHOD_1_199CD254663BC039_OFFSET UNITYSDK_OFFSET(0xCD40C70)
#define CLASS_1_B0F27F53934580E0_METHOD_1_3A58DA2A8BC7FEAE_OFFSET UNITYSDK_OFFSET(0xCD40B00)
#define CLASS_1_B0F27F53934580E0_METHOD_1_6D46E306D7A0A970_1_OFFSET UNITYSDK_OFFSET(0xCD40D20)
#define CLASS_1_B0F27F53934580E0_METHOD_1_6D46E306D7A0A970_OFFSET UNITYSDK_OFFSET(0xCD40BA0)
#define CLASS_1_B0F27F53934580E0_METHOD_1_F2E974523054AE15_OFFSET UNITYSDK_OFFSET(0xCD402F0)
#define CLASS_1_B0F27F53934580E0__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD40DE0)

inline static constexpr unsigned int Class_1_B0F27F53934580E0_TypeDefinitionIndex = 50131;

class Class_1_B0F27F53934580E0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_B0F27F53934580E0_Class_3_5189F202E0F37F03*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_B0F27F53934580E0_Class_3_5189F202E0F37F03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0F27F53934580E0_TypeDefinitionIndex)->GetStaticField(0x6B1D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0F27F53934580E0__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::FixPoint Method_1_F2E974523054AE15(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Class_1_70697F531F566942_1* a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_B0F27F53934580E0_METHOD_1_F2E974523054AE15_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::FixPoint Method_1_3A58DA2A8BC7FEAE(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Class_1_70697F531F566942_1* a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_B0F27F53934580E0_METHOD_1_3A58DA2A8BC7FEAE_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::FixPoint Method_1_6D46E306D7A0A970(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Class_1_70697F531F566942_1* a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_B0F27F53934580E0_METHOD_1_6D46E306D7A0A970_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::FixPoint Method_1_199CD254663BC039(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Class_1_70697F531F566942_1* a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_B0F27F53934580E0_METHOD_1_199CD254663BC039_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::FixPoint Method_1_6D46E306D7A0A970_1(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Class_1_70697F531F566942_1* a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_B0F27F53934580E0_METHOD_1_6D46E306D7A0A970_1_OFFSET))(a1, a2, a3, a4);
	}
};
