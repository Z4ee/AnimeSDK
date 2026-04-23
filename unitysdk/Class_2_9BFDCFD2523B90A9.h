#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_6CE70F4211D79CD5_3;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_9BFDCFD2523B90A9_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x11D4AB30)
#define CLASS_2_9BFDCFD2523B90A9_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11D4AE80)
#define CLASS_2_9BFDCFD2523B90A9_METHOD_2_6161A7BAB784EB4F_OFFSET UNITYSDK_OFFSET(0x11D4AC00)
#define CLASS_2_9BFDCFD2523B90A9_METHOD_2_ED5FC1D8B47FC436_OFFSET UNITYSDK_OFFSET(0x11D4AD80)
#define CLASS_2_9BFDCFD2523B90A9__CTOR_OFFSET UNITYSDK_OFFSET(0x11D4ADF0)
#define CLASS_2_9BFDCFD2523B90A9__ONBIND_OFFSET UNITYSDK_OFFSET(0x11D4AA70)
#define CLASS_2_9BFDCFD2523B90A9___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11D4AE20)

inline static constexpr unsigned int Class_2_9BFDCFD2523B90A9_TypeDefinitionIndex = 65990;

class Class_2_9BFDCFD2523B90A9 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Image* Field_2_0; // 0x60
	::RPG::Client::UIValueChangeAnimation* Field_2_2; // 0x68
	::RPG::Client::LocalizedText* Field_2_1; // 0x70
	::System::Boolean Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BFDCFD2523B90A9__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BFDCFD2523B90A9__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BFDCFD2523B90A9_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_6161A7BAB784EB4F(::Class_1_6CE70F4211D79CD5_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_3*))((::PBYTE)hIl2Cpp + CLASS_2_9BFDCFD2523B90A9_METHOD_2_6161A7BAB784EB4F_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED5FC1D8B47FC436(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9BFDCFD2523B90A9_METHOD_2_ED5FC1D8B47FC436_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BFDCFD2523B90A9___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BFDCFD2523B90A9_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
