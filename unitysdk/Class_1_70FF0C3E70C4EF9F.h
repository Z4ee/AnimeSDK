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

#define CLASS_1_70FF0C3E70C4EF9F_METHOD_1_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0xFE320C0)
#define CLASS_1_70FF0C3E70C4EF9F_METHOD_1_17A4FC8F0F949C2F_OFFSET UNITYSDK_OFFSET(0xFE31730)
#define CLASS_1_70FF0C3E70C4EF9F_METHOD_1_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0xFE31BE0)
#define CLASS_1_70FF0C3E70C4EF9F_METHOD_1_7353188A6E11C60F_OFFSET UNITYSDK_OFFSET(0xFE31B70)
#define CLASS_1_70FF0C3E70C4EF9F_METHOD_1_D1A6276260D76DE8_OFFSET UNITYSDK_OFFSET(0xFE31E90)
#define CLASS_1_70FF0C3E70C4EF9F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xFE32090)
#define CLASS_1_70FF0C3E70C4EF9F_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xFE30FA0)
#define CLASS_1_70FF0C3E70C4EF9F__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE31E40)
#define CLASS_1_70FF0C3E70C4EF9F__CTOR_OFFSET UNITYSDK_OFFSET(0xFE31E30)

inline static constexpr unsigned int Class_1_70FF0C3E70C4EF9F_TypeDefinitionIndex = 78212;

class Class_1_70FF0C3E70C4EF9F : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_70FF0C3E70C4EF9F_TypeDefinitionIndex)->GetStaticField(0xEF40);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_70FF0C3E70C4EF9F_TypeDefinitionIndex)->GetStaticField(0xEF44);
	}
	// static const ::System::Int32 Field_1_0 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xA; // 0x0
	::MoleMole::EntityHandle Field_1_9; // 0x10
	::UnityEngine::Animator* Field_1_10; // 0x20
	::System::Threading::CancellationTokenSource* Field_1_14; // 0x28
	::System::Boolean Field_1_11; // 0x30
	::System::Int32 Field_1_13; // 0x34
	::System::Int32 Field_1_12; // 0x38
	::UnityEngine::Vector3 Field_1_7; // 0x3C
	::UnityEngine::Vector3 Field_1_8; // 0x48

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

	::System::Int32 Method_1_D1A6276260D76DE8()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F_METHOD_1_D1A6276260D76DE8_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_17A4FC8F0F949C2F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F_METHOD_1_17A4FC8F0F949C2F_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_7353188A6E11C60F(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F_METHOD_1_7353188A6E11C60F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0EB2899F45F512FE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70FF0C3E70C4EF9F_METHOD_1_0EB2899F45F512FE_OFFSET))(this);
	}
};
