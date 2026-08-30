#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class ShowAttackTimeParam; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E0161CA3DFEB1832_METHOD_2_860337AF64F567C9_OFFSET UNITYSDK_OFFSET(0x1A811800)
#define CLASS_2_E0161CA3DFEB1832_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x1A811A90)
#define CLASS_2_E0161CA3DFEB1832__CTOR_OFFSET UNITYSDK_OFFSET(0x1A811AE0)
#define CLASS_2_E0161CA3DFEB1832__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A811780)

inline static constexpr unsigned int Class_2_E0161CA3DFEB1832_TypeDefinitionIndex = 71192;

class Class_2_E0161CA3DFEB1832 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x60
	::UnityEngine::UI::Text* GEPFFDDHPAI; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0161CA3DFEB1832__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0161CA3DFEB1832__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_860337AF64F567C9(::RPG::Client::ShowAttackTimeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + CLASS_2_E0161CA3DFEB1832_METHOD_2_860337AF64F567C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0161CA3DFEB1832_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}
};
