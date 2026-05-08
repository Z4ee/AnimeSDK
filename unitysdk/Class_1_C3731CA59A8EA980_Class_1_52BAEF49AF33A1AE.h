#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SkinMapAnimationClipData; }
namespace System { class Action; }

#define CLASS_1_C3731CA59A8EA980_CLASS_1_52BAEF49AF33A1AE_METHOD_1_99A975A2DDBDAE22_OFFSET UNITYSDK_OFFSET(0x13AD2D10)
#define CLASS_1_C3731CA59A8EA980_CLASS_1_52BAEF49AF33A1AE__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD2D00)

inline static constexpr unsigned int Class_1_C3731CA59A8EA980_Class_1_52BAEF49AF33A1AE_TypeDefinitionIndex = 58845;

class Class_1_C3731CA59A8EA980_Class_1_52BAEF49AF33A1AE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3731CA59A8EA980_CLASS_1_52BAEF49AF33A1AE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_99A975A2DDBDAE22(::MoleMole::SkinMapAnimationClipData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SkinMapAnimationClipData*))((::PBYTE)hIl2Cpp + CLASS_1_C3731CA59A8EA980_CLASS_1_52BAEF49AF33A1AE_METHOD_1_99A975A2DDBDAE22_OFFSET))(this, a1);
	}
};
