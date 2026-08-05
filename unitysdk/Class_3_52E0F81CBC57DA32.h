#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Enum_3_F72C1BA6E546E86B.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_52E0F81CBC57DA32_Class_2_D2E4F5D140DE589E;

#define CLASS_3_52E0F81CBC57DA32_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x137F0180)
#define CLASS_3_52E0F81CBC57DA32_METHOD_3_34B78ECE41DFA15E_OFFSET UNITYSDK_OFFSET(0x137F02B0)
#define CLASS_3_52E0F81CBC57DA32_METHOD_3_5294E3A4717C97BA_OFFSET UNITYSDK_OFFSET(0x137F07D0)
#define CLASS_3_52E0F81CBC57DA32_METHOD_3_7A55FA16DDC7AE06_OFFSET UNITYSDK_OFFSET(0x137F0340)
#define CLASS_3_52E0F81CBC57DA32_METHOD_3_7B2824F5AC7EF5FB_OFFSET UNITYSDK_OFFSET(0x137F03B0)
#define CLASS_3_52E0F81CBC57DA32_METHOD_3_917D2FCD2DDE0DFD_OFFSET UNITYSDK_OFFSET(0x137F0250)
#define CLASS_3_52E0F81CBC57DA32_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x137F0C70)
#define CLASS_3_52E0F81CBC57DA32_METHOD_3_D0154F311465DAEC_OFFSET UNITYSDK_OFFSET(0x137F0AC0)
#define CLASS_3_52E0F81CBC57DA32_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x137EFFA0)
#define CLASS_3_52E0F81CBC57DA32__CCTOR_OFFSET UNITYSDK_OFFSET(0x137F01D0)
#define CLASS_3_52E0F81CBC57DA32__CTOR_OFFSET UNITYSDK_OFFSET(0x137F0040)

inline static constexpr unsigned int Class_3_52E0F81CBC57DA32_TypeDefinitionIndex = 41295;

class Class_3_52E0F81CBC57DA32 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0x57; // 0x0
	::Class_3_52E0F81CBC57DA32_Class_2_D2E4F5D140DE589E* Field_3_1; // 0x48
	::UnityEngine::Vector3 Field_3_0; // 0x50
	::UnityEngine::Vector3 Field_3_2; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32__CCTOR_OFFSET))();
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_GETCLASSID_OFFSET))(this);
	}

	::Class_3_AF7A56E03A4D3952_Enum_3_F72C1BA6E546E86B Method_3_917D2FCD2DDE0DFD()
	{
		return ((::Class_3_AF7A56E03A4D3952_Enum_3_F72C1BA6E546E86B(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_METHOD_3_917D2FCD2DDE0DFD_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_3_34B78ECE41DFA15E()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_METHOD_3_34B78ECE41DFA15E_OFFSET))(this);
	}

	::System::Void Method_3_7A55FA16DDC7AE06(::MoleMole::EntityHandle a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_METHOD_3_7A55FA16DDC7AE06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7B2824F5AC7EF5FB(::MoleMole::EntityHandle a1, ::Class_3_AF7A56E03A4D3952_Enum_3_F72C1BA6E546E86B a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Class_3_AF7A56E03A4D3952_Enum_3_F72C1BA6E546E86B, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_METHOD_3_7B2824F5AC7EF5FB_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_5294E3A4717C97BA(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_METHOD_3_5294E3A4717C97BA_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_3_52E0F81CBC57DA32* Method_3_D0154F311465DAEC()
	{
		return ((::Class_3_52E0F81CBC57DA32*(*)())((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_METHOD_3_D0154F311465DAEC_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
