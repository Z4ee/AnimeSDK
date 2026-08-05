#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace Sirenix::OdinInspector { class SerializedScriptableObject; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_31B1FC04F61A4BAC_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x126ED630)
#define CLASS_1_31B1FC04F61A4BAC_METHOD_1_A480CC23201B682A_OFFSET UNITYSDK_OFFSET(0x126ED6C0)
#define CLASS_1_31B1FC04F61A4BAC_METHOD_1_F6C58D34AD32CD8A_OFFSET UNITYSDK_OFFSET(0x126ED670)
#define CLASS_1_31B1FC04F61A4BAC__CTOR_OFFSET UNITYSDK_OFFSET(0x126ED620)

inline static constexpr unsigned int Class_1_31B1FC04F61A4BAC_TypeDefinitionIndex = 65075;

class Class_1_31B1FC04F61A4BAC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31B1FC04F61A4BAC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_31B1FC04F61A4BAC_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_F6C58D34AD32CD8A(::System::Action_1<::Sirenix::OdinInspector::SerializedScriptableObject*>* a1, ::System::Action_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffectBase*>* a2)
	{
		return ((::System::Void(*)(::System::Action_1<::Sirenix::OdinInspector::SerializedScriptableObject*>*, ::System::Action_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffectBase*>*))((::PBYTE)hIl2Cpp + CLASS_1_31B1FC04F61A4BAC_METHOD_1_F6C58D34AD32CD8A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A480CC23201B682A(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_31B1FC04F61A4BAC_METHOD_1_A480CC23201B682A_OFFSET))(a1, a2);
	}
};
