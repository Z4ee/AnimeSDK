#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_AFD9211503308052_METHOD_2_22658297F688418A_OFFSET UNITYSDK_OFFSET(0xF0A2010)
#define CLASS_2_AFD9211503308052_METHOD_2_7C0ABCE8E7C44D4E_OFFSET UNITYSDK_OFFSET(0xF0A1A30)
#define CLASS_2_AFD9211503308052_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0xF0A1CE0)
#define CLASS_2_AFD9211503308052__CTOR_OFFSET UNITYSDK_OFFSET(0xF0A1C90)

inline static constexpr unsigned int Class_2_AFD9211503308052_TypeDefinitionIndex = 81301;

class Class_2_AFD9211503308052 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::MoleMole::UIDailyChallengeCardRowWidgetController* Field_2_1; // 0x50
	::UnityEngine::RectTransform* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFD9211503308052__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7C0ABCE8E7C44D4E(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_AFD9211503308052_METHOD_2_7C0ABCE8E7C44D4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFD9211503308052_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_2_22658297F688418A(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_AFD9211503308052_METHOD_2_22658297F688418A_OFFSET))(this, a1, a2);
	}
};
