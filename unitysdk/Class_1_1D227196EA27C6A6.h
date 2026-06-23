#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_1_1D227196EA27C6A6_METHOD_1_38A291FC8AE37730_OFFSET UNITYSDK_OFFSET(0x1133B490)
#define CLASS_1_1D227196EA27C6A6_METHOD_1_7353188A6E11C60F_OFFSET UNITYSDK_OFFSET(0x1133B700)
#define CLASS_1_1D227196EA27C6A6_METHOD_1_D1A6276260D76DE8_OFFSET UNITYSDK_OFFSET(0x1133BB70)
#define CLASS_1_1D227196EA27C6A6_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x1133BAD0)
#define CLASS_1_1D227196EA27C6A6_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x1133B780)
#define CLASS_1_1D227196EA27C6A6_METHOD_1_EFDE274FAF89F595_OFFSET UNITYSDK_OFFSET(0x1133BD70)
#define CLASS_1_1D227196EA27C6A6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1133BB40)
#define CLASS_1_1D227196EA27C6A6_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x1133ACE0)
#define CLASS_1_1D227196EA27C6A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1133BAC0)

inline static constexpr unsigned int Class_1_1D227196EA27C6A6_TypeDefinitionIndex = 61423;

class Class_1_1D227196EA27C6A6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	::System::Threading::CancellationTokenSource* Field_1_10; // 0x10
	::MoleMole::EntityHandle Field_1_7; // 0x18
	::UnityEngine::Vector3 Field_1_6; // 0x28
	::UnityEngine::Vector3 Field_1_5; // 0x34
	::System::Int32 Field_1_8; // 0x40
	::System::Int32 Field_1_9; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D227196EA27C6A6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D227196EA27C6A6_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D227196EA27C6A6_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D227196EA27C6A6_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D227196EA27C6A6_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_1_D1A6276260D76DE8()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D227196EA27C6A6_METHOD_1_D1A6276260D76DE8_OFFSET))(this);
	}

	static ::System::Void Method_1_38A291FC8AE37730(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_1D227196EA27C6A6_METHOD_1_38A291FC8AE37730_OFFSET))(a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_7353188A6E11C60F(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1D227196EA27C6A6_METHOD_1_7353188A6E11C60F_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_1_EFDE274FAF89F595(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1D227196EA27C6A6_METHOD_1_EFDE274FAF89F595_OFFSET))(this, a1);
	}
};
