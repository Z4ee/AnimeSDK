#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F9D2DAC0C372386C;
namespace RPG::GameCore { class AIGlobalVarsConfig; }
namespace RPG::GameCore { class ComplexSkillAIFactorGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_289B583C0168995C_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16571F40)
#define CLASS_1_289B583C0168995C_METHOD_1_4FBF7C35D211BF3B_OFFSET UNITYSDK_OFFSET(0x16572210)
#define CLASS_1_289B583C0168995C_METHOD_1_518C6F1B8C5A6FFD_OFFSET UNITYSDK_OFFSET(0x165723A0)
#define CLASS_1_289B583C0168995C_METHOD_1_5B678B7A7A41603D_OFFSET UNITYSDK_OFFSET(0x16571D50)
#define CLASS_1_289B583C0168995C_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x16571B60)
#define CLASS_1_289B583C0168995C_METHOD_1_BBDFC34BA3BAC7CD_OFFSET UNITYSDK_OFFSET(0x16571CF0)
#define CLASS_1_289B583C0168995C_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x165725A0)
#define CLASS_1_289B583C0168995C_METHOD_1_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0x16572010)
#define CLASS_1_289B583C0168995C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16572620)

inline static constexpr unsigned int Class_1_289B583C0168995C_TypeDefinitionIndex = 56484;

class Class_1_289B583C0168995C : public ::System::Object
{
public:
	static ::RPG::GameCore::AIGlobalVarsConfig** StaticGet_PBMPIJFLNIA()
	{
		return (::RPG::GameCore::AIGlobalVarsConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_289B583C0168995C_TypeDefinitionIndex)->GetStaticField(0x64540);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_F9D2DAC0C372386C*>** StaticGet_ENICAPCDPEK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_F9D2DAC0C372386C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_289B583C0168995C_TypeDefinitionIndex)->GetStaticField(0x64548);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_289B583C0168995C__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_289B583C0168995C_METHOD_1_82E992240300FB30_OFFSET))();
	}

	static ::System::Void Method_1_5B678B7A7A41603D(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ComplexSkillAIFactorGroup*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ComplexSkillAIFactorGroup*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_289B583C0168995C_METHOD_1_5B678B7A7A41603D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_289B583C0168995C_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}

	static ::RPG::GameCore::ComplexSkillAIFactorGroup* Method_1_4FBF7C35D211BF3B(::System::String* a1)
	{
		return ((::RPG::GameCore::ComplexSkillAIFactorGroup*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_289B583C0168995C_METHOD_1_4FBF7C35D211BF3B_OFFSET))(a1);
	}

	static ::System::Void Method_1_FCB175EE4400634C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_289B583C0168995C_METHOD_1_FCB175EE4400634C_OFFSET))();
	}

	static ::System::Void Method_1_BBDFC34BA3BAC7CD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_289B583C0168995C_METHOD_1_BBDFC34BA3BAC7CD_OFFSET))(a1);
	}

	static ::System::Void Method_1_518C6F1B8C5A6FFD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_289B583C0168995C_METHOD_1_518C6F1B8C5A6FFD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_289B583C0168995C_METHOD_1_CE18697B63E52504_OFFSET))();
	}
};
