#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_F3F5185343BF3D7E_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0xA8D6C30)
#define CLASS_2_F3F5185343BF3D7E_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0xA8D6E40)
#define CLASS_2_F3F5185343BF3D7E__CTOR_OFFSET UNITYSDK_OFFSET(0xA8D6ED0)
#define CLASS_2_F3F5185343BF3D7E__ONBIND_OFFSET UNITYSDK_OFFSET(0xA8D6BD0)
#define CLASS_2_F3F5185343BF3D7E___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA8D6F00)

inline static constexpr unsigned int Class_2_F3F5185343BF3D7E_TypeDefinitionIndex = 67143;

class Class_2_F3F5185343BF3D7E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::Animation* Field_2_3; // 0x60
	::System::Boolean Field_2_4; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F5185343BF3D7E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F5185343BF3D7E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3F5185343BF3D7E_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3F5185343BF3D7E_METHOD_2_848FDD59AB054F3D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F5185343BF3D7E___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
