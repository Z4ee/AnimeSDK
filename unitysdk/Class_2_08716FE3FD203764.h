#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_08716FE3FD203764_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13774350)
#define CLASS_2_08716FE3FD203764_METHOD_2_0F4A4C6D93D0708D_OFFSET UNITYSDK_OFFSET(0x13773E20)
#define CLASS_2_08716FE3FD203764_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x13774830)
#define CLASS_2_08716FE3FD203764_METHOD_2_27A9FBF1D87B9C6A_OFFSET UNITYSDK_OFFSET(0x13774180)
#define CLASS_2_08716FE3FD203764_METHOD_2_3C24DDABFEBD866B_OFFSET UNITYSDK_OFFSET(0x13774070)
#define CLASS_2_08716FE3FD203764_METHOD_2_59DD21E8DDD7D5C7_OFFSET UNITYSDK_OFFSET(0x13774870)
#define CLASS_2_08716FE3FD203764_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13774C50)
#define CLASS_2_08716FE3FD203764_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13774420)
#define CLASS_2_08716FE3FD203764__CTOR_OFFSET UNITYSDK_OFFSET(0x13774820)

inline static constexpr unsigned int Class_2_08716FE3FD203764_TypeDefinitionIndex = 89078;

class Class_2_08716FE3FD203764 : public ::MoleMole::RendererFader
{
public:
	::System::Single Field_2_1; // 0x28
	::System::Single Field_2_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08716FE3FD203764__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0F4A4C6D93D0708D(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_08716FE3FD203764_METHOD_2_0F4A4C6D93D0708D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C24DDABFEBD866B(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_08716FE3FD203764_METHOD_2_3C24DDABFEBD866B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_27A9FBF1D87B9C6A(::UnityEngine::MaterialPropertyBlock*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + CLASS_2_08716FE3FD203764_METHOD_2_27A9FBF1D87B9C6A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08716FE3FD203764_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08716FE3FD203764_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08716FE3FD203764_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_59DD21E8DDD7D5C7(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_08716FE3FD203764_METHOD_2_59DD21E8DDD7D5C7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08716FE3FD203764_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
