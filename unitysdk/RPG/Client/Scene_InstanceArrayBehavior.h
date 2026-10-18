#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Scene_InstanceArrayBehavior_Struct_2_5E903D90EDF6D163.h"
#include "unitysdk/RPG/Client/Scene_InstanceArrayBehavior_Struct_2_77B43E26B2FCBFB7.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class Scene_InstanceArrayBehavior_Class_1_64A9CAC73C6C32F4; }
namespace RPG::Client { class Scene_InstanceArrayElementDataMonoBase; }
namespace RPG::Client { class Scene_InstanceArrayMonoPlugin; }
namespace RPG::Client { class Scene_InstanceArrayMonoPlugin_IndexedMaterial; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xE0985D0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_GET__ISBAKEDATACONTAINERMODE_OFFSET UNITYSDK_OFFSET(0xE095570)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE095600)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xE0972A0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_11CA03F4DCCAD111_OFFSET UNITYSDK_OFFSET(0xE098E50)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_148111C1B03E7741_OFFSET UNITYSDK_OFFSET(0xE09C650)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_292435743009A063_1_OFFSET UNITYSDK_OFFSET(0xE09A100)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_292435743009A063_OFFSET UNITYSDK_OFFSET(0xE098F30)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xE098A40)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_39EC74DF0F8B053E_OFFSET UNITYSDK_OFFSET(0xE09A490)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xE098830)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xE098A80)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE098B70)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_4BE99DDCF7F1FD88_OFFSET UNITYSDK_OFFSET(0xE099960)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xE098900)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0xE09A720)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_6EACE7B13393544A_OFFSET UNITYSDK_OFFSET(0xE0974C0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0xE0959D0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0xE099770)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_905CF6772C26FD13_OFFSET UNITYSDK_OFFSET(0xE099490)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xE0958A0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_9B2459E153911241_OFFSET UNITYSDK_OFFSET(0xE09AB60)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xE0957A0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xE09A200)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_A9F6594EA869CA9D_OFFSET UNITYSDK_OFFSET(0xE0973A0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xE09C770)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xE095650)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_C12B7C41ED13FF06_OFFSET UNITYSDK_OFFSET(0xE098BD0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_D38692167A58B9DA_OFFSET UNITYSDK_OFFSET(0xE098D10)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0xE099B70)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE097210)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xE09CF00)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE09C7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int Scene_InstanceArrayBehavior_TypeDefinitionIndex = 70845;

	class Scene_InstanceArrayBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__Poly_IsLodSwitching()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x155E0);
		}
		static ::System::Int32* StaticGet__PropID_LinYZ2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x155E4);
		}
		static ::System::Int32* StaticGet__Poly_DistanceType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x155E8);
		}
		static ::System::Int32* StaticGet__Poly_AdjustAlbedo()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x155EC);
		}
		static ::System::Int32* StaticGet__PropID_RTZ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x155F0);
		}
		static ::System::Int32* StaticGet__PropID_ModuleSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x155F4);
		}
		static ::System::Int32* StaticGet__PropID_AtlasID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x155F8);
		}
		static ::System::Int32* StaticGet__PropID_LinForceUpN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x155FC);
		}
		static ::System::Int32* StaticGet__PropID_LinXY1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x15600);
		}
		static ::System::Int32* StaticGet__PropID_LinXZ1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x15604);
		}
		static ::System::Int32* StaticGet__Poly_DitherOn()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x15608);
		}
		static ::System::Int32* StaticGet__PropID_LinYZ1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x1560C);
		}
		static ::System::Int32* StaticGet__PropID_LTZ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x15610);
		}
		static ::System::Int32* StaticGet__PropID_LinZY2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x15614);
		}
		static ::System::Int32* StaticGet__PropID_InstanceScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x15618);
		}
		static ::System::Int32* StaticGet__PropID_UseAtlas()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x1561C);
		}
		static ::System::Int32* StaticGet__Poly_DitherFadeIn()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x15620);
		}
		static ::System::Int32* StaticGet__PropID_RTY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x15624);
		}
		static ::System::Int32* StaticGet__PropID_LinMainUVScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x15628);
		}
		static ::System::Int32* StaticGet__PropID_LinXZ2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x1562C);
		}
		static ::System::Int32* StaticGet__PropID_LinUVOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x15630);
		}
		static ::System::Int32* StaticGet__PropID_RTX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x15634);
		}
		static ::System::Int32* StaticGet__PropID_LinYX1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x15638);
		}
		static ::System::Int32* StaticGet__Poly_DitherAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x1563C);
		}
		static ::System::Int32* StaticGet__Poly_TerrainRate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Scene_InstanceArrayBehavior_TypeDefinitionIndex)->GetStaticField(0x15640);
		}
		// static const ::System::Int32 kMaxBatchSize = 0x3FF; // 0x0
		::UnityEngine::Renderer* _polymerProbeRenderer; // 0x38
		::UnityEngine::MaterialPropertyBlock* _polymerProbeMPB; // 0x40
		::RPG::Client::Scene_InstanceArrayBehavior_Struct_2_5E903D90EDF6D163 _polymerState; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Mesh*>* _MeshLookup; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* _MaterialLookup; // 0x80
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Scene_InstanceArrayBehavior_Struct_2_77B43E26B2FCBFB7, ::RPG::Client::Scene_InstanceArrayBehavior_Class_1_64A9CAC73C6C32F4*>* _BatchGroups; // 0x88
		::Il2CppArray<::UnityEngine::Matrix4x4>* _TempMatrices; // 0x90
		::UnityEngine::MaterialPropertyBlock* _TempMPB; // 0x98
		::UnityEngine::MaterialPropertyBlock* _TempSingleMPB; // 0xA0
		::System::Collections::Generic::List_1<::System::Single>* _TmpLTZ; // 0xA8
		::System::Collections::Generic::List_1<::System::Single>* _TmpRTZ; // 0xB0
		::System::Collections::Generic::List_1<::System::Single>* _TmpRTX; // 0xB8
		::System::Collections::Generic::List_1<::System::Single>* _TmpRTY; // 0xC0
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinXZ1; // 0xC8
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinXZ2; // 0xD0
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinYZ1; // 0xD8
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinYZ2; // 0xE0
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinXY1; // 0xE8
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinYX1; // 0xF0
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinZY2; // 0xF8
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinUVOffset; // 0x100
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinForceUpN; // 0x108
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinMainUVScale; // 0x110
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _TmpModuleSize; // 0x118
		::System::Collections::Generic::List_1<::System::Single>* _TmpUseAtlas; // 0x120
		::System::Collections::Generic::List_1<::System::Single>* _TmpAtlasID; // 0x128
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _TmpInstanceScale; // 0x130
		::System::Collections::Generic::List_1<::RPG::Client::Scene_InstanceArrayElementDataMonoBase*>* _ScratchElements; // 0x138
		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* _ScratchMeshRenderers; // 0x140
		::System::Boolean _NeedRefreshMatrices; // 0x148
		::System::Int32 _RuntimeLastRebuildFrame; // 0x14C
		::System::Int32 _RuntimeLastRefreshFrame; // 0x150
		::System::Int32 _RuntimeLastDrawFrame; // 0x154
		::System::Int32 _RuntimeStructureHash; // 0x158
		::System::Int32 _RuntimeLastStructureHashFrame; // 0x15C
		::UnityEngine::Animator* _CachedAnimator; // 0x160
		::System::Boolean _AnimatorCacheValid; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Boolean get__IsBakeDataContainerMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_GET__ISBAKEDATACONTAINERMODE_OFFSET))(this);
		}

		::System::Void Method_3_B768DA94E3FD91D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_B768DA94E3FD91D9_OFFSET))(this);
		}

		::System::Void Method_3_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_A9F6594EA869CA9D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_A9F6594EA869CA9D_OFFSET))(this);
		}

		::System::Void Method_3_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_3_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_3_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::UnityEngine::Mesh* Method_3_C12B7C41ED13FF06(::System::Int32 a1)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_C12B7C41ED13FF06_OFFSET))(this, a1);
		}

		::UnityEngine::Material* Method_3_D38692167A58B9DA(::System::Int32 a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_D38692167A58B9DA_OFFSET))(this, a1);
		}

		::RPG::Client::Scene_InstanceArrayMonoPlugin_IndexedMaterial* Method_3_11CA03F4DCCAD111(::System::Int32 a1)
		{
			return ((::RPG::Client::Scene_InstanceArrayMonoPlugin_IndexedMaterial*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_11CA03F4DCCAD111_OFFSET))(this, a1);
		}

		::System::Void Method_3_7B411317D337F87A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_7B411317D337F87A_OFFSET))(this);
		}

		::System::Void Method_3_FD3B916300F77FDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_FD3B916300F77FDA_OFFSET))(this);
		}

		::System::Void Method_3_A27DC2C5A103933A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_A27DC2C5A103933A_OFFSET))(this);
		}

		::System::Void Method_3_6EACE7B13393544A(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_6EACE7B13393544A_OFFSET))(this, a1);
		}

		::System::Int32 Method_3_39EC74DF0F8B053E()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_39EC74DF0F8B053E_OFFSET))(this);
		}

		::System::Void Method_3_9B2459E153911241(::RPG::Client::Scene_InstanceArrayBehavior_Class_1_64A9CAC73C6C32F4* a1, ::UnityEngine::Camera* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Scene_InstanceArrayBehavior_Class_1_64A9CAC73C6C32F4*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_9B2459E153911241_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_7F29568EA964E563()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_7F29568EA964E563_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_4BE99DDCF7F1FD88()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_4BE99DDCF7F1FD88_OFFSET))(this);
		}

		::System::Void Method_3_6916CB2AB9451DD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_6916CB2AB9451DD7_OFFSET))(this);
		}

		::System::Void Method_3_148111C1B03E7741(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_148111C1B03E7741_OFFSET))(this, a1);
		}

		::System::Void Method_3_292435743009A063(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_292435743009A063_OFFSET))(this, a1);
		}

		::System::Void Method_3_292435743009A063_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_292435743009A063_1_OFFSET))(this, a1);
		}

		static ::UnityEngine::Matrix4x4 Method_3_905CF6772C26FD13(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_METHOD_3_905CF6772C26FD13_OFFSET))(a1);
		}

		::RPG::Client::Scene_InstanceArrayMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Scene_InstanceArrayMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
