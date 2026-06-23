#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace MoleMole { class MonoEffect; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19134E70)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_GET_MAT_OFFSET UNITYSDK_OFFSET(0x19134810)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_GET_MONOEFFECT_OFFSET UNITYSDK_OFFSET(0x19134800)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x19135510)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_3C081D06DA6B1B22_OFFSET UNITYSDK_OFFSET(0x19134C40)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_5171919365955F95_OFFSET UNITYSDK_OFFSET(0x19134CC0)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_5539393F5F97D178_OFFSET UNITYSDK_OFFSET(0x19135180)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_8EB0B5A1956DA0FB_OFFSET UNITYSDK_OFFSET(0x19134A90)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x19135330)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x19135380)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19134F20)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x19135170)

namespace MoleMole
{
	inline static constexpr unsigned int MatKeyPropValueFaderByIndex_TypeDefinitionIndex = 43204;

	class MatKeyPropValueFaderByIndex : public ::MoleMole::RendererFader
	{
	public:
		::MoleMole::MonoEffect* monoEffect; // 0x28
		::System::Single lastVal; // 0x30
		::System::Single oriVal; // 0x34
		::System::Boolean _hasInsMat; // 0x38
		::System::Int32 _materialInstanceId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoEffect* get_MonoEffect()
		{
			return ((::MoleMole::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_GET_MONOEFFECT_OFFSET))(this);
		}

		::UnityEngine::Material* get_mat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_GET_MAT_OFFSET))(this);
		}

		::System::Void Method_2_8EB0B5A1956DA0FB(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_8EB0B5A1956DA0FB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_3C081D06DA6B1B22(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_3C081D06DA6B1B22_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_5171919365955F95(::UnityEngine::MaterialPropertyBlock*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_5171919365955F95_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_DISPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_2_5539393F5F97D178(::MoleMole::MonoEffect* a1, ::System::Int32 a2, ::System::String* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffect*, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_5539393F5F97D178_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
		}

		::System::Void Method_2_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::String* Method_2_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_128774387667156B_OFFSET))(this);
		}
	};
}
