#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BF5210DF5B358112_Class_1_B8E5DF5B61B39C64;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CLASS_1_D878E1F1D44CD185_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113F0FE0)
#define CLASS_1_D878E1F1D44CD185_METHOD_1_B1A25BE8B2A743E4_OFFSET UNITYSDK_OFFSET(0x113F1120)
#define CLASS_1_D878E1F1D44CD185_METHOD_1_DCDCD984F3A05F38_OFFSET UNITYSDK_OFFSET(0x113F1060)
#define CLASS_1_D878E1F1D44CD185__CTOR_OFFSET UNITYSDK_OFFSET(0x113F0EE0)

inline static constexpr unsigned int Class_1_D878E1F1D44CD185_TypeDefinitionIndex = 64047;

class Class_1_D878E1F1D44CD185 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	::UnityEngine::Material* Field_1_2; // 0x10
	::Class_1_BF5210DF5B358112_Class_1_B8E5DF5B61B39C64* Field_1_3; // 0x18
	::System::Single Field_1_1; // 0x20

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_D878E1F1D44CD185__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D878E1F1D44CD185_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DCDCD984F3A05F38(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D878E1F1D44CD185_METHOD_1_DCDCD984F3A05F38_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1A25BE8B2A743E4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D878E1F1D44CD185_METHOD_1_B1A25BE8B2A743E4_OFFSET))(this, a1);
	}
};
