#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C23DD4758FBF845D_METHOD_2_A86E06724FDFAF8F_OFFSET UNITYSDK_OFFSET(0x179E5DD0)
#define CLASS_2_C23DD4758FBF845D__CTOR_OFFSET UNITYSDK_OFFSET(0x179E5E70)
#define CLASS_2_C23DD4758FBF845D__ONBIND_OFFSET UNITYSDK_OFFSET(0x179E5CC0)

inline static constexpr unsigned int Class_2_C23DD4758FBF845D_TypeDefinitionIndex = 68608;

class Class_2_C23DD4758FBF845D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Animation* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23DD4758FBF845D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C23DD4758FBF845D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_A86E06724FDFAF8F(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C23DD4758FBF845D_METHOD_2_A86E06724FDFAF8F_OFFSET))(this, a1, a2);
	}
};
