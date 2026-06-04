#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TutorialGuideConfigWrapper; }

#define CLASS_1_EFB22FF9BCC56FAB_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB7891A0)
#define CLASS_1_EFB22FF9BCC56FAB_METHOD_1_5D3CEF6DDC436090_OFFSET UNITYSDK_OFFSET(0xB789110)
#define CLASS_1_EFB22FF9BCC56FAB__CTOR_OFFSET UNITYSDK_OFFSET(0xB789190)

inline static constexpr unsigned int Class_1_EFB22FF9BCC56FAB_TypeDefinitionIndex = 63846;

class Class_1_EFB22FF9BCC56FAB : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFB22FF9BCC56FAB__CTOR_OFFSET))(this);
	}

	static ::Class_1_EFB22FF9BCC56FAB* Method_1_5D3CEF6DDC436090(::RPG::Client::TutorialGuideConfigWrapper* a1)
	{
		return ((::Class_1_EFB22FF9BCC56FAB*(*)(::RPG::Client::TutorialGuideConfigWrapper*))((::PBYTE)hIl2Cpp + CLASS_1_EFB22FF9BCC56FAB_METHOD_1_5D3CEF6DDC436090_OFFSET))(a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFB22FF9BCC56FAB_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
