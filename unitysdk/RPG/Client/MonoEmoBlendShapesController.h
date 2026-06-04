#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_9EFBE27577E50792;
namespace RPG::Client { class EmoBlendShapesConfig; }
namespace RPG::Client { class MonoEmoBlendShapeBlink; }
namespace RPG::Client { class MonoEmoBlendShapesMouth; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC0FE910)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPECONFIGNAMES_OFFSET UNITYSDK_OFFSET(0xC0FB840)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPEDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0xC0FC030)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPEINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0xC0FBF90)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPEVALUE_OFFSET UNITYSDK_OFFSET(0xC0FB0A0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_BLENDSHAPENAMES_OFFSET UNITYSDK_OFFSET(0xC0FB960)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_BLINK_OFFSET UNITYSDK_OFFSET(0xC0FBBC0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_CACHEDBLENDSHAPECOUNT_OFFSET UNITYSDK_OFFSET(0xC0FB7E0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_CACHEDBLENDSHAPENAMES_OFFSET UNITYSDK_OFFSET(0xC0FB830)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_CONTROLENABLED_OFFSET UNITYSDK_OFFSET(0xC0FB7C0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC0FBBB0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_ISSTORYMODE_OFFSET UNITYSDK_OFFSET(0xC0FBBE0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_MOUTH_OFFSET UNITYSDK_OFFSET(0xC0FBBD0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xC0FB9C0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_438300467EDE6B0B_OFFSET UNITYSDK_OFFSET(0xC0FD140)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0xC0FC250)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_8608350DFEDEE4FD_OFFSET UNITYSDK_OFFSET(0xC0FD530)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_94AA348A045D277E_OFFSET UNITYSDK_OFFSET(0xC0FCA90)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_A536C0A3C82A1588_OFFSET UNITYSDK_OFFSET(0xC0FD760)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_AE5C73F4BEB1C1A8_OFFSET UNITYSDK_OFFSET(0xC0FDDE0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_B650CDF375474809_OFFSET UNITYSDK_OFFSET(0xC0FD680)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0xC0FD1B0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_D9DDB7A58F4BCA1A_OFFSET UNITYSDK_OFFSET(0xC0FE000)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0xC0FCCF0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC0FED70)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC0FECA0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_RESETADDITIVEVALUES_OFFSET UNITYSDK_OFFSET(0xC0FC1A0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xC0FCC10)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETCONTROLENABLED_OFFSET UNITYSDK_OFFSET(0xC0FBC00)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETUPAUTOBLINK_OFFSET UNITYSDK_OFFSET(0xC0FC130)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETUPBLENDSHAPECONFIG_OFFSET UNITYSDK_OFFSET(0xC0FC8C0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETUPDEFAULTBLENDSHAPES_OFFSET UNITYSDK_OFFSET(0xC0FBC50)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SET_CONTROLENABLED_OFFSET UNITYSDK_OFFSET(0xC0FB7D0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SET_ISSTORYMODE_OFFSET UNITYSDK_OFFSET(0xC0FBBF0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SNAPSHOTCURRENTBLENDSHAPES_OFFSET UNITYSDK_OFFSET(0xC0FC3E0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_UPDATEBLENDSHAPECONFIG_OFFSET UNITYSDK_OFFSET(0xC0FC6A0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0FEF20)
#define RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC0FEE60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoBlendShapesController_TypeDefinitionIndex = 66508;

	class MonoEmoBlendShapesController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoEmoBlendShapesController_TypeDefinitionIndex)->GetStaticField(0x62830);
		}
		// static const ::System::Single MaxWeight; // 0x0
		::UnityEngine::SkinnedMeshRenderer* meshRenderer; // 0x18
		::System::Boolean _ControlEnabled_k__BackingField; // 0x20
		::RPG::Client::EmoBlendShapesConfig* configAsset; // 0x28
		::System::Boolean _IsStoryMode_k__BackingField; // 0x30
		::System::Boolean Field_5_6; // 0x31
		::System::WeakReference_1<::UnityEngine::Mesh*>* Field_5_7; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* Field_5_8; // 0x40
		::Class_1_9EFBE27577E50792* Field_5_9; // 0x48
		::Class_1_9EFBE27577E50792* Field_5_10; // 0x50
		::Class_1_9EFBE27577E50792* Field_5_11; // 0x58
		::System::Int32 Field_5_12; // 0x60
		::System::Collections::Generic::List_1<::Class_1_9EFBE27577E50792*>* Field_5_13; // 0x68
		::RPG::Client::MonoEmoBlendShapeBlink* Field_5_14; // 0x70
		::RPG::Client::MonoEmoBlendShapesMouth* Field_5_15; // 0x78
		::System::Single Field_5_16; // 0x80
		::System::Single Field_5_17; // 0x84
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_5_18; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Boolean get_ControlEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_CONTROLENABLED_OFFSET))(this);
		}

		::System::Void set_ControlEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SET_CONTROLENABLED_OFFSET))(this, a1);
		}

		::System::Int32 get_CachedBlendShapeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_CACHEDBLENDSHAPECOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_CachedBlendShapeNames()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_CACHEDBLENDSHAPENAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetBlendShapeConfigNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPECONFIGNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_BlendShapeNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_BLENDSHAPENAMES_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_ISACTIVE_OFFSET))(this);
		}

		::RPG::Client::MonoEmoBlendShapeBlink* get_Blink()
		{
			return ((::RPG::Client::MonoEmoBlendShapeBlink*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_BLINK_OFFSET))(this);
		}

		::RPG::Client::MonoEmoBlendShapesMouth* get_Mouth()
		{
			return ((::RPG::Client::MonoEmoBlendShapesMouth*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_MOUTH_OFFSET))(this);
		}

		::System::Boolean get_IsStoryMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GET_ISSTORYMODE_OFFSET))(this);
		}

		::System::Void set_IsStoryMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SET_ISSTORYMODE_OFFSET))(this, a1);
		}

		::System::Void SetControlEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETCONTROLENABLED_OFFSET))(this, a1);
		}

		::System::Void SetupDefaultBlendShapes(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETUPDEFAULTBLENDSHAPES_OFFSET))(this, a1);
		}

		::System::Int32 GetBlendShapeIndexByName(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPEINDEXBYNAME_OFFSET))(this, a1);
		}

		::System::Single GetBlendShapeDefaultValue(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPEDEFAULTVALUE_OFFSET))(this, a1);
		}

		::System::Single GetBlendShapeValue(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_GETBLENDSHAPEVALUE_OFFSET))(this, a1);
		}

		::System::Void SetupAutoBlink(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETUPAUTOBLINK_OFFSET))(this, a1);
		}

		::System::Void ResetAdditiveValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_RESETADDITIVEVALUES_OFFSET))(this);
		}

		::System::Void SnapshotCurrentBlendShapes(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SNAPSHOTCURRENTBLENDSHAPES_OFFSET))(this, a1);
		}

		::System::Boolean UpdateBlendShapeConfig(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_UPDATEBLENDSHAPECONFIG_OFFSET))(this, a1, a2);
		}

		::System::UInt32 SetupBlendShapeConfig(::System::Single a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_SETUPBLENDSHAPECONFIG_OFFSET))(this, a1, a2);
		}

		::Class_1_9EFBE27577E50792* Method_5_94AA348A045D277E()
		{
			return ((::Class_1_9EFBE27577E50792*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_94AA348A045D277E_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void Method_5_438300467EDE6B0B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_438300467EDE6B0B_OFFSET))(this, a1);
		}

		::System::Void Method_5_8608350DFEDEE4FD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_8608350DFEDEE4FD_OFFSET))(this, a1);
		}

		::System::Void Method_5_B650CDF375474809(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_B650CDF375474809_OFFSET))(this, a1);
		}

		::System::Void Method_5_A536C0A3C82A1588(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_A536C0A3C82A1588_OFFSET))(this, a1);
		}

		::System::Void Method_5_809094DEBF13B21A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_809094DEBF13B21A_OFFSET))(this);
		}

		::System::Void Method_5_AE5C73F4BEB1C1A8(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_AE5C73F4BEB1C1A8_OFFSET))(this, a1);
		}

		::System::Void Method_5_D9DDB7A58F4BCA1A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_D9DDB7A58F4BCA1A_OFFSET))(this, a1);
		}

		::System::Void Method_5_F5B4708E7805566C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_F5B4708E7805566C_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_CD8EB704BDED69B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_CD8EB704BDED69B6_OFFSET))(this);
		}

		::System::Void Method_5_17BD30EFE8176014()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESCONTROLLER_METHOD_5_17BD30EFE8176014_OFFSET))(this);
		}
	};
}
