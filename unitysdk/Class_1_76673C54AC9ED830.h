#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_267;
class Class_3_D2084E0C2DD39509;
namespace MoleMole { class AnimatorBlendData; }
namespace MoleMole { class AnimatorBlendGroup; }
namespace MoleMole { class AnimatorClipBlendData; }
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_76673C54AC9ED830_METHOD_1_2FAE02030638732C_OFFSET UNITYSDK_OFFSET(0xF8681F0)
#define CLASS_1_76673C54AC9ED830_METHOD_1_3A813CBC302E500B_OFFSET UNITYSDK_OFFSET(0xF866C00)
#define CLASS_1_76673C54AC9ED830_METHOD_1_5AC72BC0DC5F2475_OFFSET UNITYSDK_OFFSET(0x1197F850)
#define CLASS_1_76673C54AC9ED830_METHOD_1_5BCF3A8EFFA4E811_OFFSET UNITYSDK_OFFSET(0xF865120)
#define CLASS_1_76673C54AC9ED830_METHOD_1_6A449EE7DEEFA8A1_OFFSET UNITYSDK_OFFSET(0xF867A20)
#define CLASS_1_76673C54AC9ED830_METHOD_1_73F82E95636D1C82_OFFSET UNITYSDK_OFFSET(0xF8697D0)
#define CLASS_1_76673C54AC9ED830_METHOD_1_84B5C187D78B84F9_OFFSET UNITYSDK_OFFSET(0xF868C40)
#define CLASS_1_76673C54AC9ED830_METHOD_1_940933F595CDAD9D_OFFSET UNITYSDK_OFFSET(0xF862FF0)
#define CLASS_1_76673C54AC9ED830_METHOD_1_9AA92E75985CDAE6_OFFSET UNITYSDK_OFFSET(0xF866D90)
#define CLASS_1_76673C54AC9ED830_METHOD_1_A76014C9F5244E8E_OFFSET UNITYSDK_OFFSET(0xF868280)
#define CLASS_1_76673C54AC9ED830_METHOD_1_DB74F0D3E69C3FEF_OFFSET UNITYSDK_OFFSET(0xF8632D0)
#define CLASS_1_76673C54AC9ED830__CCTOR_OFFSET UNITYSDK_OFFSET(0xF862F10)

inline static constexpr unsigned int Class_1_76673C54AC9ED830_TypeDefinitionIndex = 72058;

class Class_1_76673C54AC9ED830 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76673C54AC9ED830_TypeDefinitionIndex)->GetStaticField(0x45F80);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76673C54AC9ED830_TypeDefinitionIndex)->GetStaticField(0x45F88);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76673C54AC9ED830_TypeDefinitionIndex)->GetStaticField(0x45F90);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_76673C54AC9ED830_TypeDefinitionIndex)->GetStaticField(0x10E20);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_76673C54AC9ED830_TypeDefinitionIndex)->GetStaticField(0x10E24);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76673C54AC9ED830__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_940933F595CDAD9D(::Class_0_16E4307DCC419505_267* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_267*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76673C54AC9ED830_METHOD_1_940933F595CDAD9D_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_3A813CBC302E500B(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76673C54AC9ED830_METHOD_1_3A813CBC302E500B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_9AA92E75985CDAE6(::MoleMole::Battle::Entity* a1, ::MoleMole::AnimatorBlendData* a2, ::MoleMole::SkillCharacterScriptConfig* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::AnimatorBlendData*, ::MoleMole::SkillCharacterScriptConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76673C54AC9ED830_METHOD_1_9AA92E75985CDAE6_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_A76014C9F5244E8E(::Class_0_16E4307DCC419505_267* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_267*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76673C54AC9ED830_METHOD_1_A76014C9F5244E8E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_84B5C187D78B84F9(::Class_3_D2084E0C2DD39509* a1, ::UnityEngine::Vector3& a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76673C54AC9ED830_METHOD_1_84B5C187D78B84F9_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector2 Method_1_2FAE02030638732C(::System::Single a1)
	{
		return ((::UnityEngine::Vector2(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76673C54AC9ED830_METHOD_1_2FAE02030638732C_OFFSET))(a1);
	}

	static ::System::Void Method_1_5BCF3A8EFFA4E811(::Class_0_16E4307DCC419505_267* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_267*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76673C54AC9ED830_METHOD_1_5BCF3A8EFFA4E811_OFFSET))(a1, a2);
	}

	static ::MoleMole::AnimatorBlendGroup* Method_1_6A449EE7DEEFA8A1(::MoleMole::AnimatorBlendData* a1, ::System::Single& a2, ::MoleMole::AnimatorClipBlendData*& a3, ::MoleMole::AnimatorClipBlendData*& a4)
	{
		return ((::MoleMole::AnimatorBlendGroup*(*)(::MoleMole::AnimatorBlendData*, ::System::Single&, ::MoleMole::AnimatorClipBlendData*&, ::MoleMole::AnimatorClipBlendData*&))((::PBYTE)hIl2Cpp + CLASS_1_76673C54AC9ED830_METHOD_1_6A449EE7DEEFA8A1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_73F82E95636D1C82(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_76673C54AC9ED830_METHOD_1_73F82E95636D1C82_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DB74F0D3E69C3FEF(::Class_0_16E4307DCC419505_267* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_267*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76673C54AC9ED830_METHOD_1_DB74F0D3E69C3FEF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5AC72BC0DC5F2475(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_76673C54AC9ED830_METHOD_1_5AC72BC0DC5F2475_OFFSET))(a1, a2, a3, a4, a5);
	}
};
