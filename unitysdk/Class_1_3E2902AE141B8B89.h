#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxVector.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_3E2902AE141B8B89_METHOD_1_352C39EE4A7C0B56_OFFSET UNITYSDK_OFFSET(0x18B7E520)
#define CLASS_1_3E2902AE141B8B89_METHOD_1_3AE3E1CDBA536DC1_OFFSET UNITYSDK_OFFSET(0x18B7E460)
#define CLASS_1_3E2902AE141B8B89_METHOD_1_3BD66292DE3BEB83_OFFSET UNITYSDK_OFFSET(0x18B7DFD0)
#define CLASS_1_3E2902AE141B8B89_METHOD_1_588BE1638FF25E7D_OFFSET UNITYSDK_OFFSET(0x18B7E080)
#define CLASS_1_3E2902AE141B8B89__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7DFC0)

inline static constexpr unsigned int Class_1_3E2902AE141B8B89_TypeDefinitionIndex = 65497;

class Class_1_3E2902AE141B8B89 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x3C; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x1E; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x14; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x14; // 0x0
	::Il2CppArray<::System::Boolean>* Field_1_6; // 0x10
	::System::Single Field_1_10; // 0x18
	::System::Single Field_1_7; // 0x1C
	::System::Int32 Field_1_4; // 0x20
	::System::Single Field_1_9; // 0x24
	::System::Int32 Field_1_5; // 0x28
	::System::Single Field_1_8; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E2902AE141B8B89__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3BD66292DE3BEB83(::UnityEngine::Vector3 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_3E2902AE141B8B89_METHOD_1_3BD66292DE3BEB83_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_588BE1638FF25E7D(::FlexBuffers::FlxVector a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxVector))((::PBYTE)hIl2Cpp + CLASS_1_3E2902AE141B8B89_METHOD_1_588BE1638FF25E7D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3AE3E1CDBA536DC1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3E2902AE141B8B89_METHOD_1_3AE3E1CDBA536DC1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_352C39EE4A7C0B56(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_3E2902AE141B8B89_METHOD_1_352C39EE4A7C0B56_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
