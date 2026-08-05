#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_55230CEF110DAF7B_1.h"
#include "unitysdk/Enum_3_4D319CC539272284.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_61A5922E5046F385_2;

#define CLASS_4_C84245B6BE2DB696_METHOD_4_8A5437BCF5C88B31_OFFSET UNITYSDK_OFFSET(0x1812C190)
#define CLASS_4_C84245B6BE2DB696_METHOD_4_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1812C150)
#define CLASS_4_C84245B6BE2DB696__CTOR_OFFSET UNITYSDK_OFFSET(0x1812C160)

inline static constexpr unsigned int Class_4_C84245B6BE2DB696_TypeDefinitionIndex = 68734;

class Class_4_C84245B6BE2DB696 : public ::Class_3_55230CEF110DAF7B_1
{
public:
	::System::Single Field_4_1; // 0x10
	::System::Nullable_1<::UnityEngine::Vector3> Field_4_0; // 0x14

	::System::Void _ctor(::System::Single a1, ::System::Nullable_1<::UnityEngine::Vector3> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_4_C84245B6BE2DB696__CTOR_OFFSET))(this, a1, a2);
	}

	::Enum_3_4D319CC539272284 Method_4_A96DCA30C6927810()
	{
		return ((::Enum_3_4D319CC539272284(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C84245B6BE2DB696_METHOD_4_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_4_8A5437BCF5C88B31(::Class_3_61A5922E5046F385_2* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_61A5922E5046F385_2*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_C84245B6BE2DB696_METHOD_4_8A5437BCF5C88B31_OFFSET))(this, a1, a2);
	}
};
