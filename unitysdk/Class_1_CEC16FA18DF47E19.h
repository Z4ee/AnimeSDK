#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class AnchorInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CEC16FA18DF47E19_METHOD_1_0D3455A2B8A3E6D4_OFFSET UNITYSDK_OFFSET(0xBD036C0)
#define CLASS_1_CEC16FA18DF47E19_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBD033F0)
#define CLASS_1_CEC16FA18DF47E19_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xBD038F0)
#define CLASS_1_CEC16FA18DF47E19_METHOD_1_3BF2499759697629_OFFSET UNITYSDK_OFFSET(0xBD037B0)
#define CLASS_1_CEC16FA18DF47E19_METHOD_1_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0xBD03450)
#define CLASS_1_CEC16FA18DF47E19_METHOD_1_B7CCB99AAB7A4C8B_OFFSET UNITYSDK_OFFSET(0xBD03590)
#define CLASS_1_CEC16FA18DF47E19__CTOR_OFFSET UNITYSDK_OFFSET(0xBD04160)

inline static constexpr unsigned int Class_1_CEC16FA18DF47E19_TypeDefinitionIndex = 73870;

class Class_1_CEC16FA18DF47E19 : public ::System::Object
{
public:
	::RPG::GameCore::AnchorInfo* ELOGPDHHGHO; // 0x10
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* HNFMNLPOMNK; // 0x18
	::System::String* JGCDBLPNBML; // 0x20
	::System::Action* FKJNCLCDKOL; // 0x28
	::UnityEngine::Vector3 NDDPJBEIGIJ; // 0x30
	::System::Single JODPHBJFOPL; // 0x3C
	::UnityEngine::Vector3 OPMGDNNAEJF; // 0x40
	::System::Single NGFAGMJHKJO; // 0x4C
	::UnityEngine::Vector3 LKLEKMMPAAN; // 0x50

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
