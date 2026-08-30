#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_176971BF7FCA1F10;
namespace RPG::GameCore { class AIGlobalVarsConfig; }
namespace RPG::GameCore { class ComplexSkillAIFactorGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_289B583C0168995C_METHOD_1_12340FD2FA41D544_OFFSET UNITYSDK_OFFSET(0x161FA6B0)
#define CLASS_1_289B583C0168995C_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x161FA900)
#define CLASS_1_289B583C0168995C_METHOD_1_33BE208E9812B600_OFFSET UNITYSDK_OFFSET(0x161FABD0)
#define CLASS_1_289B583C0168995C_METHOD_1_518C6F1B8C5A6FFD_OFFSET UNITYSDK_OFFSET(0x161FACD0)
#define CLASS_1_289B583C0168995C_METHOD_1_5B678B7A7A41603D_OFFSET UNITYSDK_OFFSET(0x161FA710)
#define CLASS_1_289B583C0168995C_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x161FA520)
#define CLASS_1_289B583C0168995C_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x161FAF20)
#define CLASS_1_289B583C0168995C_METHOD_1_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0x161FA9D0)
#define CLASS_1_289B583C0168995C__CCTOR_OFFSET UNITYSDK_OFFSET(0x161FAFA0)

inline static constexpr unsigned int Class_1_289B583C0168995C_TypeDefinitionIndex = 56669;

class Class_1_289B583C0168995C : public ::System::Object
{
public:
	static ::RPG::GameCore::AIGlobalVarsConfig** StaticGet_PBMPIJFLNIA()
	{
		return (::RPG::GameCore::AIGlobalVarsConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_289B583C0168995C_TypeDefinitionIndex)->GetStaticField(0x41090);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_176971BF7FCA1F10*>** StaticGet_ENICAPCDPEK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_176971BF7FCA1F10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_289B583C0168995C_TypeDefinitionIndex)->GetStaticField(0x41098);
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

	static ::RPG::GameCore::ComplexSkillAIFactorGroup* Method_1_33BE208E9812B600(::System::String* a1)
	{
		return ((::RPG::GameCore::ComplexSkillAIFactorGroup*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_289B583C0168995C_METHOD_1_33BE208E9812B600_OFFSET))(a1);
	}

	static ::System::Void Method_1_FCB175EE4400634C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_289B583C0168995C_METHOD_1_FCB175EE4400634C_OFFSET))();
	}

	static ::System::Void Method_1_12340FD2FA41D544(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_289B583C0168995C_METHOD_1_12340FD2FA41D544_OFFSET))(a1);
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
