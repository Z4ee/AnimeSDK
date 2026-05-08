#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAvatarAnimator; }
namespace System { class String; }

#define CLASS_1_9CFBC14B74B66E2C_METHOD_1_1F1EEF8961A54F56_OFFSET UNITYSDK_OFFSET(0x114A9FF0)
#define CLASS_1_9CFBC14B74B66E2C_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x114A9E60)
#define CLASS_1_9CFBC14B74B66E2C_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x114A9D50)
#define CLASS_1_9CFBC14B74B66E2C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x114A9DF0)
#define CLASS_1_9CFBC14B74B66E2C_METHOD_1_71126EBEAAAFC673_OFFSET UNITYSDK_OFFSET(0x114A9DA0)
#define CLASS_1_9CFBC14B74B66E2C_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x114AA110)
#define CLASS_1_9CFBC14B74B66E2C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x114AA0C0)
#define CLASS_1_9CFBC14B74B66E2C__CTOR_OFFSET UNITYSDK_OFFSET(0x114A9D40)

inline static constexpr unsigned int Class_1_9CFBC14B74B66E2C_TypeDefinitionIndex = 66062;

class Class_1_9CFBC14B74B66E2C : public ::System::Object
{
public:
	::MoleMole::UIAvatarAnimator* Field_1_4; // 0x10
	::System::String* Field_1_5; // 0x18
	::System::Boolean Field_1_6; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Single Field_1_2; // 0x28
	::System::Single Field_1_1; // 0x2C
	::System::Single Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_71126EBEAAAFC673(::MoleMole::UIAvatarAnimator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimator*))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C_METHOD_1_71126EBEAAAFC673_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_1F1EEF8961A54F56(::System::Single a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C_METHOD_1_1F1EEF8961A54F56_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C_METHOD_1_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9CFBC14B74B66E2C_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}
};
