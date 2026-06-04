#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class AnchorInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CEC16FA18DF47E19_METHOD_1_0D3455A2B8A3E6D4_OFFSET UNITYSDK_OFFSET(0xA96F2D0)
#define CLASS_1_CEC16FA18DF47E19_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA96EFF0)
#define CLASS_1_CEC16FA18DF47E19_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xA96F500)
#define CLASS_1_CEC16FA18DF47E19_METHOD_1_3BF2499759697629_OFFSET UNITYSDK_OFFSET(0xA96F3C0)
#define CLASS_1_CEC16FA18DF47E19_METHOD_1_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0xA96F050)
#define CLASS_1_CEC16FA18DF47E19_METHOD_1_B7CCB99AAB7A4C8B_OFFSET UNITYSDK_OFFSET(0xA96F1A0)
#define CLASS_1_CEC16FA18DF47E19__CTOR_OFFSET UNITYSDK_OFFSET(0xA96FD70)

inline static constexpr unsigned int Class_1_CEC16FA18DF47E19_TypeDefinitionIndex = 69052;

class Class_1_CEC16FA18DF47E19 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::RPG::GameCore::AnchorInfo* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x3C
	::System::Single Field_1_6; // 0x48
	::UnityEngine::Vector3 Field_1_7; // 0x4C
	::System::Single Field_1_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEC16FA18DF47E19__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEC16FA18DF47E19_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_8B1D6514BFAE88DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEC16FA18DF47E19_METHOD_1_8B1D6514BFAE88DD_OFFSET))(this);
	}

	::System::Void Method_1_B7CCB99AAB7A4C8B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEC16FA18DF47E19_METHOD_1_B7CCB99AAB7A4C8B_OFFSET))(this);
	}

	::System::Void Method_1_0D3455A2B8A3E6D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEC16FA18DF47E19_METHOD_1_0D3455A2B8A3E6D4_OFFSET))(this);
	}

	::System::Void Method_1_3BF2499759697629(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CEC16FA18DF47E19_METHOD_1_3BF2499759697629_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEC16FA18DF47E19_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}
};
