#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_2_F8FEC3ABC4732593_CLASS_1_5F2AF534298BD49E_METHOD_1_6D22CA609E35E6FB_OFFSET UNITYSDK_OFFSET(0x14578B20)
#define CLASS_2_F8FEC3ABC4732593_CLASS_1_5F2AF534298BD49E_METHOD_1_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x14578A00)
#define CLASS_2_F8FEC3ABC4732593_CLASS_1_5F2AF534298BD49E__CTOR_OFFSET UNITYSDK_OFFSET(0x145789F0)

inline static constexpr unsigned int Class_2_F8FEC3ABC4732593_Class_1_5F2AF534298BD49E_TypeDefinitionIndex = 79610;

class Class_2_F8FEC3ABC4732593_Class_1_5F2AF534298BD49E : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::UnityEngine::GameObject* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_CLASS_1_5F2AF534298BD49E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_CLASS_1_5F2AF534298BD49E_METHOD_1_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_1_6D22CA609E35E6FB(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_F8FEC3ABC4732593_CLASS_1_5F2AF534298BD49E_METHOD_1_6D22CA609E35E6FB_OFFSET))(this, a1, a2);
	}
};
