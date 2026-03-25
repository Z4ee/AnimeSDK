#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BF5210DF5B358112_Class_1_B8E5DF5B61B39C64;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CLASS_2_5668A5419A7BEAB2_CLASS_1_C5FEB9B9881CF18E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B98140)
#define CLASS_2_5668A5419A7BEAB2_CLASS_1_C5FEB9B9881CF18E_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x10B9B160)
#define CLASS_2_5668A5419A7BEAB2_CLASS_1_C5FEB9B9881CF18E_METHOD_1_B1A25BE8B2A743E4_OFFSET UNITYSDK_OFFSET(0x10B98BF0)
#define CLASS_2_5668A5419A7BEAB2_CLASS_1_C5FEB9B9881CF18E_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10B9CF00)
#define CLASS_2_5668A5419A7BEAB2_CLASS_1_C5FEB9B9881CF18E__CTOR_OFFSET UNITYSDK_OFFSET(0x10B9B290)

inline static constexpr unsigned int Class_2_5668A5419A7BEAB2_Class_1_C5FEB9B9881CF18E_TypeDefinitionIndex = 48841;

class Class_2_5668A5419A7BEAB2_Class_1_C5FEB9B9881CF18E : public ::System::Object
{
public:
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	::UnityEngine::Material* Field_1_1; // 0x10
	::Class_1_BF5210DF5B358112_Class_1_B8E5DF5B61B39C64* Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_CLASS_1_C5FEB9B9881CF18E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_CLASS_1_C5FEB9B9881CF18E_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_CLASS_1_C5FEB9B9881CF18E_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_CLASS_1_C5FEB9B9881CF18E_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1A25BE8B2A743E4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_CLASS_1_C5FEB9B9881CF18E_METHOD_1_B1A25BE8B2A743E4_OFFSET))(this, a1);
	}
};
