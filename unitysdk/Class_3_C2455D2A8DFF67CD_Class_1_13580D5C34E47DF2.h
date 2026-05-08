#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_3_C2455D2A8DFF67CD_Class_1_3E05A2677F6F2423;
namespace UnityEngine { class GameObject; }

#define CLASS_3_C2455D2A8DFF67CD_CLASS_1_13580D5C34E47DF2_METHOD_1_C5F6A2E641774048_OFFSET UNITYSDK_OFFSET(0x166208A0)
#define CLASS_3_C2455D2A8DFF67CD_CLASS_1_13580D5C34E47DF2__CTOR_OFFSET UNITYSDK_OFFSET(0x16620890)

inline static constexpr unsigned int Class_3_C2455D2A8DFF67CD_Class_1_13580D5C34E47DF2_TypeDefinitionIndex = 45321;

class Class_3_C2455D2A8DFF67CD_Class_1_13580D5C34E47DF2 : public ::System::Object
{
public:
	::Class_3_C2455D2A8DFF67CD_Class_1_3E05A2677F6F2423* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD_CLASS_1_13580D5C34E47DF2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C5F6A2E641774048(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD_CLASS_1_13580D5C34E47DF2_METHOD_1_C5F6A2E641774048_OFFSET))(this, a1, a2);
	}
};
