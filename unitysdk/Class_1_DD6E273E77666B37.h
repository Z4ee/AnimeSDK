#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }

#define CLASS_1_DD6E273E77666B37_GET_FINISH_OFFSET UNITYSDK_OFFSET(0xC384B70)
#define CLASS_1_DD6E273E77666B37_METHOD_1_CDFCB4F1AB271783_OFFSET UNITYSDK_OFFSET(0xC384940)
#define CLASS_1_DD6E273E77666B37_SET_FINISH_OFFSET UNITYSDK_OFFSET(0xC384B80)
#define CLASS_1_DD6E273E77666B37__CCTOR_OFFSET UNITYSDK_OFFSET(0xC384B90)
#define CLASS_1_DD6E273E77666B37__CTOR_OFFSET UNITYSDK_OFFSET(0xC3847D0)

inline static constexpr unsigned int Class_1_DD6E273E77666B37_TypeDefinitionIndex = 78527;

class Class_1_DD6E273E77666B37 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_MFEFDCONKCC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD6E273E77666B37_TypeDefinitionIndex)->GetStaticField(0x2C80);
	}
	::UnityEngine::LineRenderer* ONEFCLJPGLE; // 0x10
	::Il2CppArray<::UnityEngine::Color>* NJCPOOIKDGH; // 0x18
	::Il2CppArray<::UnityEngine::Material*>* BOMHPPBMBPN; // 0x20
	::System::Single ELCEJCOGOFJ; // 0x28
	::System::Single IEHPFADHJFD; // 0x2C
	::System::Single PMHMEGEJDGP; // 0x30
	::System::Boolean _Finish_k__BackingField; // 0x34

	::System::Void _ctor(::UnityEngine::LineRenderer* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DD6E273E77666B37__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD6E273E77666B37__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CDFCB4F1AB271783(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DD6E273E77666B37_METHOD_1_CDFCB4F1AB271783_OFFSET))(this, a1);
	}

	::System::Boolean get_Finish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD6E273E77666B37_GET_FINISH_OFFSET))(this);
	}

	::System::Void set_Finish(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DD6E273E77666B37_SET_FINISH_OFFSET))(this, a1);
	}
};
