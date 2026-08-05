#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/Unity/Mathematics/quaternion.h"

namespace MoleMole::EffectSimulate { class EffectMeshRendererBillboardComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define CLASS_1_68FCC721A8467E29_METHOD_1_00368BA1D508F827_OFFSET UNITYSDK_OFFSET(0x150B6910)
#define CLASS_1_68FCC721A8467E29_METHOD_1_18CEBE9C2CC4CA70_OFFSET UNITYSDK_OFFSET(0x150B75E0)
#define CLASS_1_68FCC721A8467E29_METHOD_1_26C840B9EEE812DF_OFFSET UNITYSDK_OFFSET(0x150B6700)
#define CLASS_1_68FCC721A8467E29_METHOD_1_57581DF9A386C5BA_OFFSET UNITYSDK_OFFSET(0x150B6FD0)
#define CLASS_1_68FCC721A8467E29_METHOD_1_6A47E919513E3EEC_OFFSET UNITYSDK_OFFSET(0x150B7A70)
#define CLASS_1_68FCC721A8467E29_METHOD_1_817AA45CCA12106A_OFFSET UNITYSDK_OFFSET(0x150B78E0)
#define CLASS_1_68FCC721A8467E29_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x150B6D90)
#define CLASS_1_68FCC721A8467E29_METHOD_1_890BABD6763E8385_OFFSET UNITYSDK_OFFSET(0x150B7B40)
#define CLASS_1_68FCC721A8467E29_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x150B76A0)
#define CLASS_1_68FCC721A8467E29_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x150B7CC0)
#define CLASS_1_68FCC721A8467E29_METHOD_1_FE15FCD4D3A8EFC9_OFFSET UNITYSDK_OFFSET(0x150B7380)
#define CLASS_1_68FCC721A8467E29__CTOR_OFFSET UNITYSDK_OFFSET(0x150B6530)

inline static constexpr unsigned int Class_1_68FCC721A8467E29_TypeDefinitionIndex = 89396;

class Class_1_68FCC721A8467E29 : public ::System::Object
{
public:
	static ::Class_1_68FCC721A8467E29** StaticGet_Field_1_2()
	{
		return (::Class_1_68FCC721A8467E29**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68FCC721A8467E29_TypeDefinitionIndex)->GetStaticField(0x39800);
	}
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*>* Field_1_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*, ::System::Int32>* Field_1_7; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*>* Field_1_1; // 0x30
	::Unity::Mathematics::quaternion Field_1_4; // 0x38
	::Unity::Mathematics::float3 Field_1_11; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68FCC721A8467E29__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_26C840B9EEE812DF(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_68FCC721A8467E29_METHOD_1_26C840B9EEE812DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_00368BA1D508F827(::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*))((::PBYTE)hIl2Cpp + CLASS_1_68FCC721A8467E29_METHOD_1_00368BA1D508F827_OFFSET))(this, a1);
	}

	::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68FCC721A8467E29_METHOD_1_87318FF00D6BC7EB_OFFSET))(this);
	}

	::Unity::Jobs::JobHandle Method_1_FE15FCD4D3A8EFC9(::Unity::Jobs::JobHandle a1)
	{
		return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_1_68FCC721A8467E29_METHOD_1_FE15FCD4D3A8EFC9_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_18CEBE9C2CC4CA70()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_68FCC721A8467E29_METHOD_1_18CEBE9C2CC4CA70_OFFSET))();
	}

	::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68FCC721A8467E29_METHOD_1_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_1_817AA45CCA12106A(::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*))((::PBYTE)hIl2Cpp + CLASS_1_68FCC721A8467E29_METHOD_1_817AA45CCA12106A_OFFSET))(this, a1);
	}

	static ::Class_1_68FCC721A8467E29* Method_1_6A47E919513E3EEC()
	{
		return ((::Class_1_68FCC721A8467E29*(*)())((::PBYTE)hIl2Cpp + CLASS_1_68FCC721A8467E29_METHOD_1_6A47E919513E3EEC_OFFSET))();
	}

	::System::Void Method_1_57581DF9A386C5BA(::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*))((::PBYTE)hIl2Cpp + CLASS_1_68FCC721A8467E29_METHOD_1_57581DF9A386C5BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_890BABD6763E8385(::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*))((::PBYTE)hIl2Cpp + CLASS_1_68FCC721A8467E29_METHOD_1_890BABD6763E8385_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68FCC721A8467E29_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
