#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_8289F2785D9AA990;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class AfterImage; }
namespace MoleMole { class FollowAnimator; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_AFTERIMAGEOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1107A2F0)
#define MOLEMOLE_AFTERIMAGEOBJECT_BEGINBLURSHADOW_OFFSET UNITYSDK_OFFSET(0x1107A380)
#define MOLEMOLE_AFTERIMAGEOBJECT_METHOD_5_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x1107AD00)
#define MOLEMOLE_AFTERIMAGEOBJECT_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1107AB40)
#define MOLEMOLE_AFTERIMAGEOBJECT_METHOD_5_3A158F2DBB2E47FE_OFFSET UNITYSDK_OFFSET(0x1107A5B0)
#define MOLEMOLE_AFTERIMAGEOBJECT_METHOD_5_F5E47CC27E96B888_OFFSET UNITYSDK_OFFSET(0x1107B010)
#define MOLEMOLE_AFTERIMAGEOBJECT_METHOD_5_F655FFE0347E3008_OFFSET UNITYSDK_OFFSET(0x1107AFA0)
#define MOLEMOLE_AFTERIMAGEOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1107AD50)
#define MOLEMOLE_AFTERIMAGEOBJECT_STOPBLURSHADOW_OFFSET UNITYSDK_OFFSET(0x1107AA20)
#define MOLEMOLE_AFTERIMAGEOBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1107AC10)
#define MOLEMOLE_AFTERIMAGEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1107AF50)

namespace MoleMole
{
	inline static constexpr unsigned int AfterImageObject_TypeDefinitionIndex = 50356;

	class AfterImageObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* prefabPath; // 0x18
		::UnityEngine::Transform* TargetRoot; // 0x20
		::System::Boolean use2ndFixedMaterial; // 0x28
		::MoleMole::AfterImage* Field_5_3; // 0x30
		::MoleMole::FollowAnimator* Field_5_4; // 0x38
		::System::Boolean UseLowPrefab; // 0x40
		::UnityEngine::GameObject* Field_5_6; // 0x48
		::System::Boolean Field_5_7; // 0x50
		::System::Boolean Field_5_8; // 0x51
		::Class_3_DFD5D1FDB9D2A4AC* Field_5_9; // 0x58
		::Class_1_8289F2785D9AA990* Field_5_10; // 0x60
		::System::Boolean Field_5_11; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_AWAKE_OFFSET))(this);
		}

		::System::Void BeginBlurShadow(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::Class_3_DFD5D1FDB9D2A4AC* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_BEGINBLURSHADOW_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void StopBlurShadow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_STOPBLURSHADOW_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_F655FFE0347E3008(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_METHOD_5_F655FFE0347E3008_OFFSET))(this, a1);
		}

		::System::Void Method_5_102A1038C38883F3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_METHOD_5_102A1038C38883F3_OFFSET))(this);
		}

		::System::Void Method_5_F5E47CC27E96B888(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_METHOD_5_F5E47CC27E96B888_OFFSET))(this, a1);
		}

		::System::Void Method_5_3A158F2DBB2E47FE(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::Class_3_DFD5D1FDB9D2A4AC* a4, ::System::Boolean a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_METHOD_5_3A158F2DBB2E47FE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
