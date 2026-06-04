#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_120C213434019E49_Class_3_5189F202E0F37F03;
class Class_1_70697F531F566942_1;
namespace RPG::GameCore { class ComplexSkillAIPostProcess; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_120C213434019E49_METHOD_1_48AC5C3288E88E23_1_OFFSET UNITYSDK_OFFSET(0xB788690)
#define CLASS_1_120C213434019E49_METHOD_1_48AC5C3288E88E23_OFFSET UNITYSDK_OFFSET(0xB788500)
#define CLASS_1_120C213434019E49_METHOD_1_6D46E306D7A0A970_OFFSET UNITYSDK_OFFSET(0xB7885D0)
#define CLASS_1_120C213434019E49_METHOD_1_7A22E27D30DA9832_OFFSET UNITYSDK_OFFSET(0xB788360)
#define CLASS_1_120C213434019E49_METHOD_1_F2E974523054AE15_OFFSET UNITYSDK_OFFSET(0xB788190)
#define CLASS_1_120C213434019E49__CCTOR_OFFSET UNITYSDK_OFFSET(0xB788750)

inline static constexpr unsigned int Class_1_120C213434019E49_TypeDefinitionIndex = 50798;

class Class_1_120C213434019E49 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_120C213434019E49_Class_3_5189F202E0F37F03*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_120C213434019E49_Class_3_5189F202E0F37F03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_120C213434019E49_TypeDefinitionIndex)->GetStaticField(0x58700);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_120C213434019E49__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::FixPoint Method_1_F2E974523054AE15(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Class_1_70697F531F566942_1* a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_120C213434019E49_METHOD_1_F2E974523054AE15_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::FixPoint Method_1_7A22E27D30DA9832(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Class_1_70697F531F566942_1* a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_120C213434019E49_METHOD_1_7A22E27D30DA9832_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::FixPoint Method_1_48AC5C3288E88E23(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Class_1_70697F531F566942_1* a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_120C213434019E49_METHOD_1_48AC5C3288E88E23_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::FixPoint Method_1_6D46E306D7A0A970(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Class_1_70697F531F566942_1* a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_120C213434019E49_METHOD_1_6D46E306D7A0A970_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::FixPoint Method_1_48AC5C3288E88E23_1(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::Class_1_70697F531F566942_1* a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_120C213434019E49_METHOD_1_48AC5C3288E88E23_1_OFFSET))(a1, a2, a3, a4);
	}
};
