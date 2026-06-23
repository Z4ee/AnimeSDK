#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIAnimationFunctionSet; }
namespace MoleMole::Config { class ConfigUIScriptableAnimSpecialNum; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0E858BB7E45AD41E_METHOD_1_38BCD5D2A9AD3F73_OFFSET UNITYSDK_OFFSET(0x101136C0)
#define CLASS_1_0E858BB7E45AD41E_METHOD_1_3FFFB9A260477A10_OFFSET UNITYSDK_OFFSET(0x10113640)
#define CLASS_1_0E858BB7E45AD41E_METHOD_1_60EF1E2939F0029A_OFFSET UNITYSDK_OFFSET(0x10112D10)
#define CLASS_1_0E858BB7E45AD41E_METHOD_1_7E303290A2F9EA25_OFFSET UNITYSDK_OFFSET(0x10113260)
#define CLASS_1_0E858BB7E45AD41E_METHOD_1_9E8C8E82893C2FE8_OFFSET UNITYSDK_OFFSET(0x10112AE0)
#define CLASS_1_0E858BB7E45AD41E_METHOD_1_C4FF53B04BE1D6B4_OFFSET UNITYSDK_OFFSET(0x10112BF0)
#define CLASS_1_0E858BB7E45AD41E__CCTOR_OFFSET UNITYSDK_OFFSET(0x10112A40)

inline static constexpr unsigned int Class_1_0E858BB7E45AD41E_TypeDefinitionIndex = 71174;

class Class_1_0E858BB7E45AD41E : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIScriptableAnimSpecialNum** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::ConfigUIScriptableAnimSpecialNum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0E858BB7E45AD41E_TypeDefinitionIndex)->GetStaticField(0x3FD10);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIAnimationFunctionSet*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIAnimationFunctionSet*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0E858BB7E45AD41E_TypeDefinitionIndex)->GetStaticField(0x3FD18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9E8C8E82893C2FE8(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E_METHOD_1_9E8C8E82893C2FE8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_C4FF53B04BE1D6B4(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E_METHOD_1_C4FF53B04BE1D6B4_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIAnimationFunctionSet*>* Method_1_3FFFB9A260477A10()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIAnimationFunctionSet*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E_METHOD_1_3FFFB9A260477A10_OFFSET))();
	}

	static ::System::Void Method_1_7E303290A2F9EA25(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E_METHOD_1_7E303290A2F9EA25_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_60EF1E2939F0029A(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E_METHOD_1_60EF1E2939F0029A_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UISpecialNumGroup*>* Method_1_38BCD5D2A9AD3F73()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UISpecialNumGroup*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E_METHOD_1_38BCD5D2A9AD3F73_OFFSET))();
	}
};
