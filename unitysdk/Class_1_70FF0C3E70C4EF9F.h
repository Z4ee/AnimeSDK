#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Animator; }

#define CLASS_1_70FF0C3E70C4EF9F_METHOD_1_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0x16A6A580)
#define CLASS_1_70FF0C3E70C4EF9F_METHOD_1_17A4FC8F0F949C2F_OFFSET UNITYSDK_OFFSET(0x16A69E20)
#define CLASS_1_70FF0C3E70C4EF9F_METHOD_1_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x16A6A2D0)
#define CLASS_1_70FF0C3E70C4EF9F_METHOD_1_7353188A6E11C60F_OFFSET UNITYSDK_OFFSET(0x16A6A260)
#define CLASS_1_70FF0C3E70C4EF9F_METHOD_1_D1A6276260D76DE8_OFFSET UNITYSDK_OFFSET(0x16A6A640)
#define CLASS_1_70FF0C3E70C4EF9F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16A6A840)
#define CLASS_1_70FF0C3E70C4EF9F_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x16A69690)
#define CLASS_1_70FF0C3E70C4EF9F__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A6A530)
#define CLASS_1_70FF0C3E70C4EF9F__CTOR_OFFSET UNITYSDK_OFFSET(0x16A6A520)

inline static constexpr unsigned int Class_1_70FF0C3E70C4EF9F_TypeDefinitionIndex = 69287;

class Class_1_70FF0C3E70C4EF9F : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_70FF0C3E70C4EF9F_TypeDefinitionIndex)->GetStaticField(0x10EC0);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_70FF0C3E70C4EF9F_TypeDefinitionIndex)->GetStaticField(0x10EC4);
	}
	// static const ::System::Int32 Field_1_0 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xA; // 0x0
	::UnityEngine::Animator* Field_1_10; // 0x10
	::MoleMole::EntityHandle Field_1_9; // 0x18
	::System::Threading::CancellationTokenSource* Field_1_14; // 0x28
	::UnityEngine::Vector3 Field_1_8; // 0x30
	::System::Int32 Field_1_12; // 0x3C
	::System::Boolean Field_1_11; // 0x40
	::UnityEngine::Vector3 Field_1_7; // 0x44
	::System::Int32 Field_1_13; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F__CCTOR_OFFSET))();
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F_METHOD_1_5176DC743E478510_OFFSET))(this);
	}

	::System::Boolean Method_1_0EB2899F45F512FE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F_METHOD_1_0EB2899F45F512FE_OFFSET))(this);
	}

	::System::Int32 Method_1_D1A6276260D76DE8()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F_METHOD_1_D1A6276260D76DE8_OFFSET))(this);
	}

	::System::Void Method_1_17A4FC8F0F949C2F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F_METHOD_1_17A4FC8F0F949C2F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_7353188A6E11C60F(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F_METHOD_1_7353188A6E11C60F_OFFSET))(this, a1);
	}
};
