#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_D276261F488D3DEB_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x19025F20)
#define CLASS_1_D276261F488D3DEB_METHOD_1_1676349FAEF4B05E_OFFSET UNITYSDK_OFFSET(0x19025F60)
#define CLASS_1_D276261F488D3DEB_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x19025E20)
#define CLASS_1_D276261F488D3DEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19025D20)
#define CLASS_1_D276261F488D3DEB__CTOR_OFFSET UNITYSDK_OFFSET(0x19025CE0)

inline static constexpr unsigned int Class_1_D276261F488D3DEB_TypeDefinitionIndex = 74836;

class Class_1_D276261F488D3DEB : public ::System::Object
{
public:
	::System::UInt32 Field_1_3; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::UnityEngine::Vector3 Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x24
	::UnityEngine::Vector3 Field_1_1; // 0x28
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D276261F488D3DEB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D276261F488D3DEB_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D276261F488D3DEB_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D276261F488D3DEB_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_1676349FAEF4B05E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D276261F488D3DEB_METHOD_1_1676349FAEF4B05E_OFFSET))(this);
	}
};
