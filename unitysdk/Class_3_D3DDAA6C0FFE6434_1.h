#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace UnityEngine { class GameObject; }

#define CLASS_3_D3DDAA6C0FFE6434_1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x154E0AE0)
#define CLASS_3_D3DDAA6C0FFE6434_1_METHOD_3_4D10873DB5CC58E4_OFFSET UNITYSDK_OFFSET(0x154E0BC0)
#define CLASS_3_D3DDAA6C0FFE6434_1_METHOD_3_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x154E0BD0)
#define CLASS_3_D3DDAA6C0FFE6434_1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x154E0BE0)
#define CLASS_3_D3DDAA6C0FFE6434_1_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x154E0C70)
#define CLASS_3_D3DDAA6C0FFE6434_1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x154E0A90)
#define CLASS_3_D3DDAA6C0FFE6434_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x154E0B30)
#define CLASS_3_D3DDAA6C0FFE6434_1__CTOR_OFFSET UNITYSDK_OFFSET(0x154E0BB0)

inline static constexpr unsigned int Class_3_D3DDAA6C0FFE6434_1_TypeDefinitionIndex = 60931;

class Class_3_D3DDAA6C0FFE6434_1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_1 = 0x53; // 0x0
	::UnityEngine::GameObject* Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434_1__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434_1_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434_1_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_4D10873DB5CC58E4(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434_1_METHOD_3_4D10873DB5CC58E4_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_3_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434_1_METHOD_3_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434_1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_D3DDAA6C0FFE6434_1* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_D3DDAA6C0FFE6434_1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434_1_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
