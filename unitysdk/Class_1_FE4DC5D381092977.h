#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EADB70559B2B5513.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }

#define CLASS_1_FE4DC5D381092977_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15F2F670)
#define CLASS_1_FE4DC5D381092977__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2F660)

inline static constexpr unsigned int Class_1_FE4DC5D381092977_TypeDefinitionIndex = 73582;

class Class_1_FE4DC5D381092977 : public ::System::Object
{
public:
	::UnityEngine::Collider* Field_1_0; // 0x10
	::System::Single Field_1_8; // 0x18
	::UnityEngine::Vector3 Field_1_4; // 0x1C
	::Struct_2_EADB70559B2B5513 Field_1_9; // 0x28
	::UnityEngine::Vector3 Field_1_6; // 0x2C
	::System::Boolean Field_1_15; // 0x38
	::UnityEngine::Vector3 Field_1_7; // 0x3C
	::System::Int32 Field_1_10; // 0x48
	::UnityEngine::Vector3 Field_1_11; // 0x4C
	::UnityEngine::Vector3 Field_1_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4DC5D381092977__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4DC5D381092977_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
