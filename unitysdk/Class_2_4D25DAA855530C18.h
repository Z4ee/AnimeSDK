#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_4D25DAA855530C18_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x18ADE220)
#define CLASS_2_4D25DAA855530C18_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0x18ADE300)
#define CLASS_2_4D25DAA855530C18__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADE3B0)
#define CLASS_2_4D25DAA855530C18__ONBIND_OFFSET UNITYSDK_OFFSET(0x18ADE150)

inline static constexpr unsigned int Class_2_4D25DAA855530C18_TypeDefinitionIndex = 69067;

class Class_2_4D25DAA855530C18 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x60
	::UnityEngine::UI::Image* Field_2_1; // 0x68
	::UnityEngine::Animation* Field_2_2; // 0x70
	::System::Nullable_1<::System::Boolean> Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D25DAA855530C18__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D25DAA855530C18__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4D25DAA855530C18_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4D25DAA855530C18_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}
};
