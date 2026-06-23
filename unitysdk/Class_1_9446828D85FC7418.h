#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E33A8767CD3B76C6.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_9446828D85FC7418_METHOD_1_3F7D463AC4EB5F99_OFFSET UNITYSDK_OFFSET(0x113C37F0)
#define CLASS_1_9446828D85FC7418_METHOD_1_B26F42C2D774FAB0_OFFSET UNITYSDK_OFFSET(0x113C3A10)
#define CLASS_1_9446828D85FC7418_METHOD_1_D0FDC3E7C51C90F7_OFFSET UNITYSDK_OFFSET(0x113C3A90)
#define CLASS_1_9446828D85FC7418_METHOD_1_F29F7AFB8E344593_OFFSET UNITYSDK_OFFSET(0x113C3690)
#define CLASS_1_9446828D85FC7418__CTOR_OFFSET UNITYSDK_OFFSET(0x113C3A80)

inline static constexpr unsigned int Class_1_9446828D85FC7418_TypeDefinitionIndex = 72209;

class Class_1_9446828D85FC7418 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9446828D85FC7418__CTOR_OFFSET))(this);
	}

	::Struct_2_E33A8767CD3B76C6 Method_1_F29F7AFB8E344593(::UnityEngine::Vector3 a1)
	{
		return ((::Struct_2_E33A8767CD3B76C6(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9446828D85FC7418_METHOD_1_F29F7AFB8E344593_OFFSET))(this, a1);
	}

	::Struct_2_E33A8767CD3B76C6 Method_1_3F7D463AC4EB5F99(::System::Object* a1)
	{
		return ((::Struct_2_E33A8767CD3B76C6(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9446828D85FC7418_METHOD_1_3F7D463AC4EB5F99_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B26F42C2D774FAB0(::Struct_2_E33A8767CD3B76C6& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_E33A8767CD3B76C6&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_9446828D85FC7418_METHOD_1_B26F42C2D774FAB0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D0FDC3E7C51C90F7(::Struct_2_E33A8767CD3B76C6& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_E33A8767CD3B76C6&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_9446828D85FC7418_METHOD_1_D0FDC3E7C51C90F7_OFFSET))(this, a1, a2);
	}
};
