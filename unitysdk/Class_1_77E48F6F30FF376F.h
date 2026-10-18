#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Graphic; }

#define CLASS_1_77E48F6F30FF376F_METHOD_1_2B96DE645DE88352_OFFSET UNITYSDK_OFFSET(0xCF51760)
#define CLASS_1_77E48F6F30FF376F_METHOD_1_8BCA271F5C8156BE_OFFSET UNITYSDK_OFFSET(0xCF51810)
#define CLASS_1_77E48F6F30FF376F_METHOD_1_C8F6C197A812A31D_OFFSET UNITYSDK_OFFSET(0xCF516A0)
#define CLASS_1_77E48F6F30FF376F_METHOD_1_D32686B8B515F21A_OFFSET UNITYSDK_OFFSET(0xCF518A0)

inline static constexpr unsigned int Class_1_77E48F6F30FF376F_TypeDefinitionIndex = 49763;

class Class_1_77E48F6F30FF376F : public ::System::Object
{
public:
	static ::System::Single Method_1_C8F6C197A812A31D(::UnityEngine::Animation* a1, ::System::String* a2)
	{
		return ((::System::Single(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77E48F6F30FF376F_METHOD_1_C8F6C197A812A31D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2B96DE645DE88352(::UnityEngine::Animation* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77E48F6F30FF376F_METHOD_1_2B96DE645DE88352_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8BCA271F5C8156BE(::UnityEngine::Animation* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_77E48F6F30FF376F_METHOD_1_8BCA271F5C8156BE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D32686B8B515F21A(::UnityEngine::UI::Graphic* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Graphic*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_77E48F6F30FF376F_METHOD_1_D32686B8B515F21A_OFFSET))(a1, a2);
	}
};
