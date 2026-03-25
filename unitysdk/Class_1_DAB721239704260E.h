#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_DAB721239704260E_METHOD_1_603D366CEDA8F92A_OFFSET UNITYSDK_OFFSET(0x11957890)
#define CLASS_1_DAB721239704260E_METHOD_1_626C719A884DEF9A_1_OFFSET UNITYSDK_OFFSET(0x119577E0)
#define CLASS_1_DAB721239704260E_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x11957680)
#define CLASS_1_DAB721239704260E_METHOD_1_CED7A2E9A352C6FD_1_OFFSET UNITYSDK_OFFSET(0x11957730)
#define CLASS_1_DAB721239704260E_METHOD_1_CED7A2E9A352C6FD_OFFSET UNITYSDK_OFFSET(0x119575D0)
#define CLASS_1_DAB721239704260E__CTOR_OFFSET UNITYSDK_OFFSET(0x11957C30)

inline static constexpr unsigned int Class_1_DAB721239704260E_TypeDefinitionIndex = 57905;

class Class_1_DAB721239704260E : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_3; // 0x20
	::UnityEngine::Vector3 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAB721239704260E__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_CED7A2E9A352C6FD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAB721239704260E_METHOD_1_CED7A2E9A352C6FD_OFFSET))(this);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DAB721239704260E_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_CED7A2E9A352C6FD_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAB721239704260E_METHOD_1_CED7A2E9A352C6FD_1_OFFSET))(this);
	}

	::System::Void Method_1_626C719A884DEF9A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DAB721239704260E_METHOD_1_626C719A884DEF9A_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_603D366CEDA8F92A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAB721239704260E_METHOD_1_603D366CEDA8F92A_OFFSET))(this);
	}
};
