#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_DB56C30256984A5E;
class MonoUITableScrollV2;

#define CLASS_2_DB56C30256984A5E_CLASS_1_5FAC3DD1C0E1BC50_METHOD_1_FFA8E6B24A072C02_OFFSET UNITYSDK_OFFSET(0x16644910)
#define CLASS_2_DB56C30256984A5E_CLASS_1_5FAC3DD1C0E1BC50__CTOR_OFFSET UNITYSDK_OFFSET(0x166444C0)

inline static constexpr unsigned int Class_2_DB56C30256984A5E_Class_1_5FAC3DD1C0E1BC50_TypeDefinitionIndex = 70159;

class Class_2_DB56C30256984A5E_Class_1_5FAC3DD1C0E1BC50 : public ::System::Object
{
public:
	::MonoUITableScrollV2* Field_1_1; // 0x10
	::Class_2_DB56C30256984A5E* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_CLASS_1_5FAC3DD1C0E1BC50__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FFA8E6B24A072C02(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_CLASS_1_5FAC3DD1C0E1BC50_METHOD_1_FFA8E6B24A072C02_OFFSET))(this, a1);
	}
};
