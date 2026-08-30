#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FB32407D2CB425FF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A57E67DE67D2A85D_METHOD_1_42A62E63C4837C60_OFFSET UNITYSDK_OFFSET(0x1521FFD0)
#define CLASS_1_A57E67DE67D2A85D_METHOD_1_65146791C480A45A_OFFSET UNITYSDK_OFFSET(0x1521FDF0)
#define CLASS_1_A57E67DE67D2A85D__CTOR_OFFSET UNITYSDK_OFFSET(0x15220260)

inline static constexpr unsigned int Class_1_A57E67DE67D2A85D_TypeDefinitionIndex = 56412;

class Class_1_A57E67DE67D2A85D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_FB32407D2CB425FF*>* LDMGJFCOEGH; // 0x10
	::System::Single JKDFIMCIKFJ; // 0x18
	::System::UInt32 NJGKCPOOHDM; // 0x1C
	::System::Int32 AFPALJAFCPI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57E67DE67D2A85D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_65146791C480A45A(::System::Single a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A57E67DE67D2A85D_METHOD_1_65146791C480A45A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_42A62E63C4837C60(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A57E67DE67D2A85D_METHOD_1_42A62E63C4837C60_OFFSET))(this, a1);
	}
};
