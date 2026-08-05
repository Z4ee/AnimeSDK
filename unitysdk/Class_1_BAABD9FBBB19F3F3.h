#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1A07023AFF917E15.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BAABD9FBBB19F3F3_METHOD_1_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x1A2B0950)
#define CLASS_1_BAABD9FBBB19F3F3_ONSCENEANIMATIONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x1A2B0900)
#define CLASS_1_BAABD9FBBB19F3F3_ONSCENEANIMATIONPLAY_OFFSET UNITYSDK_OFFSET(0x1A2B0890)
#define CLASS_1_BAABD9FBBB19F3F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2B0880)

inline static constexpr unsigned int Class_1_BAABD9FBBB19F3F3_TypeDefinitionIndex = 45860;

class Class_1_BAABD9FBBB19F3F3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAABD9FBBB19F3F3__CTOR_OFFSET))(this);
	}

	::Enum_3_1A07023AFF917E15 OnSceneAnimationPlay(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::Enum_3_1A07023AFF917E15(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BAABD9FBBB19F3F3_ONSCENEANIMATIONPLAY_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Enum_3_1A07023AFF917E15 OnSceneAnimationInterrupt(::System::String* a1)
	{
		return ((::Enum_3_1A07023AFF917E15(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BAABD9FBBB19F3F3_ONSCENEANIMATIONINTERRUPT_OFFSET))(this, a1);
	}

	::System::Void Method_1_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAABD9FBBB19F3F3_METHOD_1_D78B51BFDA4B8B32_OFFSET))(this);
	}
};
