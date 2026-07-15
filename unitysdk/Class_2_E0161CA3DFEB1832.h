#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class ShowAttackTimeParam; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E0161CA3DFEB1832_METHOD_2_860337AF64F567C9_OFFSET UNITYSDK_OFFSET(0x163A45E0)
#define CLASS_2_E0161CA3DFEB1832_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x163A46D0)
#define CLASS_2_E0161CA3DFEB1832__CTOR_OFFSET UNITYSDK_OFFSET(0x163A4720)
#define CLASS_2_E0161CA3DFEB1832__ONBIND_OFFSET UNITYSDK_OFFSET(0x163A4560)

inline static constexpr unsigned int Class_2_E0161CA3DFEB1832_TypeDefinitionIndex = 68019;

class Class_2_E0161CA3DFEB1832 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Text* Field_2_0; // 0x60
	::UnityEngine::UI::Image* Field_2_1; // 0x68

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
