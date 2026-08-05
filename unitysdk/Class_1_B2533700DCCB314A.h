#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MarcelShape.h"
#include "unitysdk/MoleMole/MarcelShapeConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class MarcelConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_B2533700DCCB314A_METHOD_1_079483A719F0F20C_OFFSET UNITYSDK_OFFSET(0x14C6E070)
#define CLASS_1_B2533700DCCB314A_METHOD_1_1F3435817602CC29_OFFSET UNITYSDK_OFFSET(0x14C6DF20)
#define CLASS_1_B2533700DCCB314A_METHOD_1_33987E1168B8A343_OFFSET UNITYSDK_OFFSET(0x14C6DDC0)
#define CLASS_1_B2533700DCCB314A_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x14C6DB90)
#define CLASS_1_B2533700DCCB314A_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x14C6DF50)
#define CLASS_1_B2533700DCCB314A_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x14C6DB60)
#define CLASS_1_B2533700DCCB314A_METHOD_1_E8024D1B75A10789_OFFSET UNITYSDK_OFFSET(0x14C6DEF0)
#define CLASS_1_B2533700DCCB314A_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x14C6E040)

inline static constexpr unsigned int Class_1_B2533700DCCB314A_TypeDefinitionIndex = 90885;

class Class_1_B2533700DCCB314A : public ::System::Object
{
public:
	static ::MoleMole::MarcelConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::MarcelConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B2533700DCCB314A_TypeDefinitionIndex)->GetStaticField(0x3EE50);
	}

	static ::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2533700DCCB314A_METHOD_1_D978819B0A4871A0_OFFSET))();
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B2533700DCCB314A_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_33987E1168B8A343(::MoleMole::MarcelShape a1, ::MoleMole::MarcelShapeConfig& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::MarcelShape, ::MoleMole::MarcelShapeConfig&))((::PBYTE)hIl2Cpp + CLASS_1_B2533700DCCB314A_METHOD_1_33987E1168B8A343_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Color Method_1_E8024D1B75A10789()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2533700DCCB314A_METHOD_1_E8024D1B75A10789_OFFSET))();
	}

	static ::UnityEngine::AnimationCurve* Method_1_1F3435817602CC29()
	{
		return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2533700DCCB314A_METHOD_1_1F3435817602CC29_OFFSET))();
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B2533700DCCB314A_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2533700DCCB314A_METHOD_1_FB4BE762B6186C23_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_079483A719F0F20C()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2533700DCCB314A_METHOD_1_079483A719F0F20C_OFFSET))();
	}
};
