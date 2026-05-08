#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_FLOATRENDERERFADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15400870)
#define MOLEMOLE_FLOATRENDERERFADER_METHOD_2_066A2A302F994390_OFFSET UNITYSDK_OFFSET(0x15400570)
#define MOLEMOLE_FLOATRENDERERFADER_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x15400D00)
#define MOLEMOLE_FLOATRENDERERFADER_METHOD_2_446DC60834959E58_OFFSET UNITYSDK_OFFSET(0x15401180)
#define MOLEMOLE_FLOATRENDERERFADER_METHOD_2_665FCAD00B431E3A_OFFSET UNITYSDK_OFFSET(0x15400D40)
#define MOLEMOLE_FLOATRENDERERFADER_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x15401000)
#define MOLEMOLE_FLOATRENDERERFADER_METHOD_2_E8DB97264B6D98F7_OFFSET UNITYSDK_OFFSET(0x15400360)
#define MOLEMOLE_FLOATRENDERERFADER_METHOD_2_FC67D285196A4120_OFFSET UNITYSDK_OFFSET(0x15400680)
#define MOLEMOLE_FLOATRENDERERFADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15400910)
#define MOLEMOLE_FLOATRENDERERFADER__CTOR_OFFSET UNITYSDK_OFFSET(0x15400350)

namespace MoleMole
{
	inline static constexpr unsigned int FloatRendererFader_TypeDefinitionIndex = 74729;

	class FloatRendererFader : public ::MoleMole::RendererFader
	{
	public:
		::System::Single _origAlpha; // 0x28
		::System::Single _startAlpha; // 0x2C
		::System::Boolean _isOneZero; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_E8DB97264B6D98F7(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_METHOD_2_E8DB97264B6D98F7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_066A2A302F994390(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_METHOD_2_066A2A302F994390_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_FC67D285196A4120(::UnityEngine::MaterialPropertyBlock*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_METHOD_2_FC67D285196A4120_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_DISPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_TOSTRING_OFFSET))(this);
		}

		::System::String* Method_2_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_METHOD_2_128774387667156B_OFFSET))(this);
		}

		::System::Void Method_2_665FCAD00B431E3A(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_METHOD_2_665FCAD00B431E3A_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Void Method_2_446DC60834959E58(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOATRENDERERFADER_METHOD_2_446DC60834959E58_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
