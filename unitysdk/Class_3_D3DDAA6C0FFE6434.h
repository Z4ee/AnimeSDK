#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace UnityEngine { class GameObject; }

#define CLASS_3_D3DDAA6C0FFE6434_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x137D2BB0)
#define CLASS_3_D3DDAA6C0FFE6434_METHOD_3_4D10873DB5CC58E4_OFFSET UNITYSDK_OFFSET(0x137D2D20)
#define CLASS_3_D3DDAA6C0FFE6434_METHOD_3_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x137D2D10)
#define CLASS_3_D3DDAA6C0FFE6434_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x137D2D30)
#define CLASS_3_D3DDAA6C0FFE6434_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x137D2C90)
#define CLASS_3_D3DDAA6C0FFE6434_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x137D2B60)
#define CLASS_3_D3DDAA6C0FFE6434__CCTOR_OFFSET UNITYSDK_OFFSET(0x137D2C00)
#define CLASS_3_D3DDAA6C0FFE6434__CTOR_OFFSET UNITYSDK_OFFSET(0x137D2C80)

inline static constexpr unsigned int Class_3_D3DDAA6C0FFE6434_TypeDefinitionIndex = 50295;

class Class_3_D3DDAA6C0FFE6434 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0x53; // 0x0
	::UnityEngine::GameObject* Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_D3DDAA6C0FFE6434* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_D3DDAA6C0FFE6434*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::UnityEngine::GameObject* Method_3_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434_METHOD_3_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_3_4D10873DB5CC58E4(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434_METHOD_3_4D10873DB5CC58E4_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3DDAA6C0FFE6434_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
