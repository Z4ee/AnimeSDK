#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimationCurveLibrary; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_455B0F50E509634B_METHOD_1_0005E3DD34580ABC_OFFSET UNITYSDK_OFFSET(0x16D007D0)
#define CLASS_1_455B0F50E509634B_METHOD_1_0CC1EA4372265873_OFFSET UNITYSDK_OFFSET(0x16D0A630)
#define CLASS_1_455B0F50E509634B_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x16D0A3A0)
#define CLASS_1_455B0F50E509634B_METHOD_1_4BFE4240535C31C9_OFFSET UNITYSDK_OFFSET(0x16D0A770)
#define CLASS_1_455B0F50E509634B_METHOD_1_886FB00AC4054CCB_OFFSET UNITYSDK_OFFSET(0x16D0A880)
#define CLASS_1_455B0F50E509634B_METHOD_1_C9D02DA0F72A0E7D_OFFSET UNITYSDK_OFFSET(0x16D0B150)
#define CLASS_1_455B0F50E509634B_METHOD_1_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x16D0AFB0)
#define CLASS_1_455B0F50E509634B__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D0A370)

inline static constexpr unsigned int Class_1_455B0F50E509634B_TypeDefinitionIndex = 82388;

class Class_1_455B0F50E509634B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationCurve*, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationCurve*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455B0F50E509634B_TypeDefinitionIndex)->GetStaticField(0x3FF80);
	}
	static ::UnityEngine::AnimationCurve** StaticGet_Field_1_2()
	{
		return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455B0F50E509634B_TypeDefinitionIndex)->GetStaticField(0x3FF88);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455B0F50E509634B_TypeDefinitionIndex)->GetStaticField(0x3FF90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_0CC1EA4372265873(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::String*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_METHOD_1_0CC1EA4372265873_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_0005E3DD34580ABC(::System::String* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_METHOD_1_0005E3DD34580ABC_OFFSET))(a1);
	}

	static ::System::Void Method_1_4BFE4240535C31C9(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_METHOD_1_4BFE4240535C31C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_886FB00AC4054CCB(::System::Collections::Generic::List_1<::MoleMole::Config::AnimationCurveLibrary*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::AnimationCurveLibrary*>*))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_METHOD_1_886FB00AC4054CCB_OFFSET))(a1);
	}

	static ::System::Void Method_1_C9D02DA0F72A0E7D(::System::String* a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_METHOD_1_C9D02DA0F72A0E7D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D737CD2779D51A4E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_METHOD_1_D737CD2779D51A4E_OFFSET))();
	}
};
