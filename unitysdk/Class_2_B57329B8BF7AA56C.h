#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_B57329B8BF7AA56C_METHOD_2_99DEF871D2E391DA_OFFSET UNITYSDK_OFFSET(0x11DDF3A0)
#define CLASS_2_B57329B8BF7AA56C__CTOR_OFFSET UNITYSDK_OFFSET(0x11DDF4D0)
#define CLASS_2_B57329B8BF7AA56C__ONBIND_OFFSET UNITYSDK_OFFSET(0x11DDF300)
#define CLASS_2_B57329B8BF7AA56C___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11DDF500)

inline static constexpr unsigned int Class_2_B57329B8BF7AA56C_TypeDefinitionIndex = 66596;

class Class_2_B57329B8BF7AA56C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Image* Field_2_0; // 0x60
	::UnityEngine::UI::Text* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B57329B8BF7AA56C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B57329B8BF7AA56C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_99DEF871D2E391DA(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B57329B8BF7AA56C_METHOD_2_99DEF871D2E391DA_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B57329B8BF7AA56C___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
