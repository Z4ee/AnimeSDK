#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Enum_3_C1C43F3DF96EC6EB.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_52E0F81CBC57DA32_Class_2_D2E4F5D140DE589E;

#define CLASS_3_52E0F81CBC57DA32_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11E63600)
#define CLASS_3_52E0F81CBC57DA32_METHOD_3_34B78ECE41DFA15E_OFFSET UNITYSDK_OFFSET(0x11E636D0)
#define CLASS_3_52E0F81CBC57DA32_METHOD_3_5294E3A4717C97BA_OFFSET UNITYSDK_OFFSET(0x11E639E0)
#define CLASS_3_52E0F81CBC57DA32_METHOD_3_7A55FA16DDC7AE06_OFFSET UNITYSDK_OFFSET(0x11E637C0)
#define CLASS_3_52E0F81CBC57DA32_METHOD_3_917D2FCD2DDE0DFD_OFFSET UNITYSDK_OFFSET(0x11E63760)
#define CLASS_3_52E0F81CBC57DA32_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11E640A0)
#define CLASS_3_52E0F81CBC57DA32_METHOD_3_D0154F311465DAEC_OFFSET UNITYSDK_OFFSET(0x11E63830)
#define CLASS_3_52E0F81CBC57DA32_METHOD_3_D625F34194C98CC8_OFFSET UNITYSDK_OFFSET(0x11E63CC0)
#define CLASS_3_52E0F81CBC57DA32_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11E63420)
#define CLASS_3_52E0F81CBC57DA32__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E63650)
#define CLASS_3_52E0F81CBC57DA32__CTOR_OFFSET UNITYSDK_OFFSET(0x11E634C0)

inline static constexpr unsigned int Class_3_52E0F81CBC57DA32_TypeDefinitionIndex = 79469;

class Class_3_52E0F81CBC57DA32 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0x56; // 0x0
	::Class_3_52E0F81CBC57DA32_Class_2_D2E4F5D140DE589E* Field_3_1; // 0x48
	::UnityEngine::Vector3 Field_3_2; // 0x50
	::UnityEngine::Vector3 Field_3_0; // 0x5C

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

	::MoleMole::EntityHandle Method_3_34B78ECE41DFA15E()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_METHOD_3_34B78ECE41DFA15E_OFFSET))(this);
	}

	::Class_3_AF7A56E03A4D3952_Enum_3_C1C43F3DF96EC6EB Method_3_917D2FCD2DDE0DFD()
	{
		return ((::Class_3_AF7A56E03A4D3952_Enum_3_C1C43F3DF96EC6EB(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_METHOD_3_917D2FCD2DDE0DFD_OFFSET))(this);
	}

	::System::Void Method_3_7A55FA16DDC7AE06(::MoleMole::EntityHandle a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_METHOD_3_7A55FA16DDC7AE06_OFFSET))(this, a1, a2);
	}

	static ::Class_3_52E0F81CBC57DA32* Method_3_D0154F311465DAEC()
	{
		return ((::Class_3_52E0F81CBC57DA32*(*)())((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_METHOD_3_D0154F311465DAEC_OFFSET))();
	}

	::System::Boolean Method_3_5294E3A4717C97BA(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_METHOD_3_5294E3A4717C97BA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_D625F34194C98CC8(::MoleMole::EntityHandle a1, ::Class_3_AF7A56E03A4D3952_Enum_3_C1C43F3DF96EC6EB a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Class_3_AF7A56E03A4D3952_Enum_3_C1C43F3DF96EC6EB, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_METHOD_3_D625F34194C98CC8_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52E0F81CBC57DA32_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
