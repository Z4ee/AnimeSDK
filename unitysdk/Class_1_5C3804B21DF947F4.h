#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_D2B8D50DD9833CFC;

#define CLASS_1_5C3804B21DF947F4_METHOD_1_CB7604B59F367726_OFFSET UNITYSDK_OFFSET(0x915C990)
#define CLASS_1_5C3804B21DF947F4__CTOR_OFFSET UNITYSDK_OFFSET(0x915CA80)

inline static constexpr unsigned int Class_1_5C3804B21DF947F4_TypeDefinitionIndex = 62962;

class Class_1_5C3804B21DF947F4 : public ::System::Object
{
public:
	::Class_1_D2B8D50DD9833CFC* Field_1_0; // 0x10
	::System::Int32 Field_1_5; // 0x18
	::System::Boolean Field_1_6; // 0x1C
	::UnityEngine::Vector2 Field_1_3; // 0x20
	::UnityEngine::Vector2Int Field_1_1; // 0x28
	::UnityEngine::Vector2Int Field_1_2; // 0x30
	::System::Single Field_1_7; // 0x38
	::UnityEngine::Vector2 Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C3804B21DF947F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB7604B59F367726()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C3804B21DF947F4_METHOD_1_CB7604B59F367726_OFFSET))(this);
	}
};
