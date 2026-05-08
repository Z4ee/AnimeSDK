#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCCF9BCA86B17EFC.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_87F855E9737731A7;
class MonoNPCCrowdPlatModelComponent;
class SceneObjectPlatModelConfig;
namespace MoleMole { class SceneObjectStateWidget; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_39CEA7F613ED7FAD_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x165A4800)
#define CLASS_2_39CEA7F613ED7FAD_METHOD_2_3F6AB3D8A9631DF0_OFFSET UNITYSDK_OFFSET(0x165A44F0)
#define CLASS_2_39CEA7F613ED7FAD_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x165A3A30)
#define CLASS_2_39CEA7F613ED7FAD_METHOD_2_45451642D6BFC83E_OFFSET UNITYSDK_OFFSET(0x165A43C0)
#define CLASS_2_39CEA7F613ED7FAD_METHOD_2_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x165A3B40)
#define CLASS_2_39CEA7F613ED7FAD_METHOD_2_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x165A3F70)
#define CLASS_2_39CEA7F613ED7FAD_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x165A38A0)
#define CLASS_2_39CEA7F613ED7FAD_METHOD_2_89C3277EC45EFA8C_OFFSET UNITYSDK_OFFSET(0x165A42E0)
#define CLASS_2_39CEA7F613ED7FAD_METHOD_2_B75DC64B533CD6AE_OFFSET UNITYSDK_OFFSET(0x165A3D20)
#define CLASS_2_39CEA7F613ED7FAD_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x165A4770)
#define CLASS_2_39CEA7F613ED7FAD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x165A46E0)
#define CLASS_2_39CEA7F613ED7FAD_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x165A3A90)
#define CLASS_2_39CEA7F613ED7FAD__CTOR_OFFSET UNITYSDK_OFFSET(0x165A37D0)

inline static constexpr unsigned int Class_2_39CEA7F613ED7FAD_TypeDefinitionIndex = 64251;

class Class_2_39CEA7F613ED7FAD : public ::Class_1_BCCF9BCA86B17EFC
{
public:
	::UnityEngine::MaterialPropertyBlock* Field_2_4; // 0x38
	::System::Threading::CancellationTokenSource* Field_2_2; // 0x40
	::Il2CppArray<::MonoNPCCrowdPlatModelComponent*>* Field_2_3; // 0x48
	::Il2CppArray<::UnityEngine::MeshRenderer*>* Field_2_0; // 0x50
	::SceneObjectPlatModelConfig* Field_2_1; // 0x58
	::System::Single Field_2_5; // 0x60

	::System::Void _ctor(::Class_1_87F855E9737731A7* a1, ::MoleMole::SceneObjectStateWidget* a2, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_1>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87F855E9737731A7*, ::MoleMole::SceneObjectStateWidget*, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_1>*))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_METHOD_2_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void Method_2_B75DC64B533CD6AE(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_METHOD_2_B75DC64B533CD6AE_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_45451642D6BFC83E(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::System::Single a2, ::System::Boolean a3, ::System::Threading::CancellationToken a4, ::System::Action* a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Single, ::System::Boolean, ::System::Threading::CancellationToken, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_METHOD_2_45451642D6BFC83E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_METHOD_2_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_2_3F6AB3D8A9631DF0(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_METHOD_2_3F6AB3D8A9631DF0_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_89C3277EC45EFA8C(::System::Boolean a1, ::System::Threading::CancellationToken a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Threading::CancellationToken, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_METHOD_2_89C3277EC45EFA8C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
