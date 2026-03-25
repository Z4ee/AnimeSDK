#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_8D4C11F92ED78C70_METHOD_2_4BD2BFB48FF90060_OFFSET UNITYSDK_OFFSET(0x8ADFF70)
#define CLASS_2_8D4C11F92ED78C70_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x8AE06B0)
#define CLASS_2_8D4C11F92ED78C70__CTOR_OFFSET UNITYSDK_OFFSET(0x8AE0740)
#define CLASS_2_8D4C11F92ED78C70__ONBIND_OFFSET UNITYSDK_OFFSET(0x8ADFED0)
#define CLASS_2_8D4C11F92ED78C70___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8AE0770)

inline static constexpr unsigned int Class_2_8D4C11F92ED78C70_TypeDefinitionIndex = 58837;

class Class_2_8D4C11F92ED78C70 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::UnityEngine::Animation* Field_2_0; // 0x60
	::System::Boolean Field_2_4; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D4C11F92ED78C70__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D4C11F92ED78C70__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4BD2BFB48FF90060(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D4C11F92ED78C70_METHOD_2_4BD2BFB48FF90060_OFFSET))(this, a1);
	}

	::System::Void Method_2_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D4C11F92ED78C70_METHOD_2_848FDD59AB054F3D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D4C11F92ED78C70___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
