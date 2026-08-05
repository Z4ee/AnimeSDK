#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace MoleMole { class MonoEffect; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_MATKEYWORDFADERBYINDEX_DISPOSE_OFFSET UNITYSDK_OFFSET(0x192629C0)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_GET_MAT_OFFSET UNITYSDK_OFFSET(0x19262200)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_GET_MONOEFFECT_OFFSET UNITYSDK_OFFSET(0x192621F0)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x19262F40)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x19263210)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x19262F90)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_50E3056F008A7E35_OFFSET UNITYSDK_OFFSET(0x19262660)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_6D1AD736C02B5A5D_OFFSET UNITYSDK_OFFSET(0x19262D30)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_B2999571AB88000B_1_OFFSET UNITYSDK_OFFSET(0x19263460)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_B2999571AB88000B_OFFSET UNITYSDK_OFFSET(0x19263250)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_C2E812C9305B1BB9_OFFSET UNITYSDK_OFFSET(0x19262480)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19263170)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_D1D374C6EA801A5E_OFFSET UNITYSDK_OFFSET(0x192627F0)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19262AB0)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x19262D20)

namespace MoleMole
{
	inline static constexpr unsigned int MatKeyWordFaderByIndex_TypeDefinitionIndex = 88931;

	class MatKeyWordFaderByIndex : public ::MoleMole::RendererFader
	{
	public:
		::MoleMole::MonoEffect* monoEffect; // 0x28
		::System::String* keyWord; // 0x30
		::System::Boolean lastVal; // 0x38
		::System::Boolean oriVal; // 0x39
		::System::Boolean _hasInsMat; // 0x3A
		::System::Int32 _matInstanceId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoEffect* get_MonoEffect()
		{
			return ((::MoleMole::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_GET_MONOEFFECT_OFFSET))(this);
		}

		::UnityEngine::Material* get_mat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_GET_MAT_OFFSET))(this);
		}

		::System::Void Method_2_C2E812C9305B1BB9(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_C2E812C9305B1BB9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_50E3056F008A7E35(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_50E3056F008A7E35_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_D1D374C6EA801A5E(::UnityEngine::MaterialPropertyBlock*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_D1D374C6EA801A5E_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_DISPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_2_6D1AD736C02B5A5D(::MoleMole::MonoEffect* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffect*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_6D1AD736C02B5A5D_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_2_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
		}

		::System::Void Method_2_1C409C2CC83887DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_1C409C2CC83887DC_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::String* Method_2_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_128774387667156B_OFFSET))(this);
		}

		::System::Void Method_2_B2999571AB88000B(::MoleMole::MonoEffect* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffect*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_B2999571AB88000B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_B2999571AB88000B_1(::MoleMole::MonoEffect* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffect*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_B2999571AB88000B_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
