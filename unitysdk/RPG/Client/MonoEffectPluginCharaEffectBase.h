#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase_CharaEffectRenderMaterialIndexItem.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase_CharacterEffectEnableReason.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase_RenderHideType.h"
#include "unitysdk/RPG/Client/ReplaceMaterialsBlock.h"

class Class_1_0CB627C4F1CDDD99;
class Class_1_9CBC71DC5240DC00;
namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginCharaEffectBase_CharaEffectMaterialBlockItem; }
namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace RPG::Client { class MonoEffectPluginCharaMaterialBlock; }
namespace RPG::GameCore { class MaterialPropertyAdaptionConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_COMPAREPRIORITY_OFFSET UNITYSDK_OFFSET(0xA95BE30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_COPYORIGINMATERIALCHARACTERCOMMONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA95BEF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xA95FF60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA95D1B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xA95FFA0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETINSTANCEMATERIALS_OFFSET UNITYSDK_OFFSET(0xA95B580)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETRENDERINSTANCEDMATERIALMAP_OFFSET UNITYSDK_OFFSET(0xA95B7D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETTARGETRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xA95B780)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISAPPLY_OFFSET UNITYSDK_OFFSET(0xA960C90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISEDITORMODE_OFFSET UNITYSDK_OFFSET(0xA95D190)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISSUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9651D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISTARGETPARTMONSTER_OFFSET UNITYSDK_OFFSET(0xA9651B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_PARENTPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9651F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET__ISAPPLY_OFFSET UNITYSDK_OFFSET(0xA965210)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET__ISRESET_OFFSET UNITYSDK_OFFSET(0xA965230)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA95D150)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ISCONFLICT_OFFSET UNITYSDK_OFFSET(0xA95B900)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ISTARGETGROUPLEADER_OFFSET UNITYSDK_OFFSET(0xA95B820)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0AC350B64D89A1AE_1_OFFSET UNITYSDK_OFFSET(0xA960160)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0AC350B64D89A1AE_2_OFFSET UNITYSDK_OFFSET(0xA95FD10)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0AC350B64D89A1AE_OFFSET UNITYSDK_OFFSET(0xA95F340)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0E549C9E38D0E257_OFFSET UNITYSDK_OFFSET(0xA95C180)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0F219594B5F172AE_OFFSET UNITYSDK_OFFSET(0xA962A10)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA965050)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1FE2B10286A019B7_OFFSET UNITYSDK_OFFSET(0xA95FE10)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_20139550C8206D50_OFFSET UNITYSDK_OFFSET(0xA95D960)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_2A5F76182A02F976_OFFSET UNITYSDK_OFFSET(0xA960440)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0xA9631A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0xA95F6F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3AC067C2C6518EDA_OFFSET UNITYSDK_OFFSET(0xA963D20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3CEE9D93D2EBC326_OFFSET UNITYSDK_OFFSET(0xA9638C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0xA95E010)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3EBE3F136A41CCD9_OFFSET UNITYSDK_OFFSET(0xA95C4E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0xA962E20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xA95D840)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xA962500)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_591CEBEAFC47406B_OFFSET UNITYSDK_OFFSET(0xA95E290)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0xA95C680)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_6AE9C0C7D4D137B0_OFFSET UNITYSDK_OFFSET(0xA95C7E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_712E1FA01E5693FE_OFFSET UNITYSDK_OFFSET(0xA960980)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_714674645EE1CBCA_OFFSET UNITYSDK_OFFSET(0xA962170)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_7306210DF60C7569_OFFSET UNITYSDK_OFFSET(0xA962030)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_74FE0F242303E029_OFFSET UNITYSDK_OFFSET(0xA9639C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0xA95DB90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_8B1FA4185C7C0938_1_OFFSET UNITYSDK_OFFSET(0xA95B460)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_8B1FA4185C7C0938_OFFSET UNITYSDK_OFFSET(0xA95B340)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_9079FE2639801498_1_OFFSET UNITYSDK_OFFSET(0xA964ED0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_9079FE2639801498_OFFSET UNITYSDK_OFFSET(0xA964C60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_946586516B7DFBDB_OFFSET UNITYSDK_OFFSET(0xA960E30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_9C08DA5C1FAA2B3E_OFFSET UNITYSDK_OFFSET(0xA963F70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_9FA0F2F97B19BDFF_OFFSET UNITYSDK_OFFSET(0xA963E60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0xA962810)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_A80796DA5203C46C_OFFSET UNITYSDK_OFFSET(0xA963930)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_B2B7B6D6D6477556_OFFSET UNITYSDK_OFFSET(0xA960CB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_BF5C484D5D51196F_OFFSET UNITYSDK_OFFSET(0xA95D0A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0xA960260)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C5DCE2A551C0E81B_OFFSET UNITYSDK_OFFSET(0xA9625E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C6C47C9FFA92653C_1_OFFSET UNITYSDK_OFFSET(0xA95F610)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C6C47C9FFA92653C_OFFSET UNITYSDK_OFFSET(0xA9650D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_D0FA121921ED01A5_OFFSET UNITYSDK_OFFSET(0xA960340)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0xA963030)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_DAB3177560EA0C5C_OFFSET UNITYSDK_OFFSET(0xA9615C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0xA962250)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_E844C30991F3F8DC_OFFSET UNITYSDK_OFFSET(0xA960D20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_EA1C78EF39610042_OFFSET UNITYSDK_OFFSET(0xA9605D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_F1FEBBADC39F3EAB_OFFSET UNITYSDK_OFFSET(0xA9634D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xA95F440)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_F94757253A563A02_1_OFFSET UNITYSDK_OFFSET(0xA964460)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_F94757253A563A02_OFFSET UNITYSDK_OFFSET(0xA9640D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_REMOVESUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xA95C3D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xA95CA50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETCHARAEFFECTENABLE_OFFSET UNITYSDK_OFFSET(0xA93BF50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETOTHEREFFECTTARGET_OFFSET UNITYSDK_OFFSET(0xA95C580)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETSUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xA95C380)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_ISSUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9651E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_ISTARGETPARTMONSTER_OFFSET UNITYSDK_OFFSET(0xA9651C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_PARENTPLUGIN_OFFSET UNITYSDK_OFFSET(0xA965200)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET__ISAPPLY_OFFSET UNITYSDK_OFFSET(0xA965220)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET__ISRESET_OFFSET UNITYSDK_OFFSET(0xA965240)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_TRYCREATESUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xA94E660)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA965250)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xA965420)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xA965460)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA9653E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaEffectBase_TypeDefinitionIndex = 64468;

	class MonoEffectPluginCharaEffectBase : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Comparison_1<::RPG::Client::MonoEffectPluginCharaEffectBase*>* Field_6_0; // 0x28
		::System::Boolean _IsTargetPartMonster_k__BackingField; // 0x30
		::System::Boolean _IsSubPlugin_k__BackingField; // 0x31
		::RPG::Client::MonoEffectPluginCharaEffectBase* _ParentPlugin_k__BackingField; // 0x38
		::UnityEngine::GameObject* Target; // 0x40
		::System::Boolean UseOfflineTarget; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* TargetRenderers; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* TargetAttachPointNames; // 0x58
		::Il2CppArray<::RPG::Client::MonoEffectPluginCharaEffectBase_CharaEffectRenderMaterialIndexItem>* TargetRenderMaterials; // 0x60
		::System::String* NPCReplaceMatKey; // 0x68
		::System::Boolean ClearTargetHiddenState; // 0x70
		::System::Boolean RegisterToTargetMatrerials; // 0x71
		::System::Boolean NeedAdditionalDepth; // 0x72
		::System::UInt32 AdditionalRenderingLayerMasks; // 0x74
		::System::Boolean ExcludeArtModelEffects; // 0x78
		::System::Boolean HideArtModelEffects; // 0x79
		::RPG::Client::MonoEffectPluginCharaEffectBase_RenderHideType HideTargetRendersType; // 0x7C
		::Il2CppArray<::RPG::Client::MonoEffectPluginCharaEffectBase_CharaEffectMaterialBlockItem*>* PartMonsterMaterialBlockArr; // 0x80
		::Il2CppArray<::RPG::Client::MonoEffectPluginCharaEffectBase_CharaEffectMaterialBlockItem*>* TargetScaleMaterialBlockArr; // 0x88
		::System::Boolean IsInheritAllMaterialProperties; // 0x90
		::System::Boolean IsInheritCharacterStencilSettings; // 0x91
		::System::Boolean IsInheritCharacterCommonProperties; // 0x92
		::Il2CppArray<::RPG::Client::MonoEffectPluginCharaEffectBase_CharaEffectMaterialBlockItem*>* ToInheritMaterialPropertyArray; // 0x98
		::System::Int32 Priority; // 0xA0
		::System::Int32 OverlayMutexID; // 0xA4
		::System::Boolean IsKeyHideTargetRendersOn; // 0xA8
		::System::Boolean HideTargetRenders; // 0xA9
		::System::Boolean IsResetMaterialProperties; // 0xAA
		::System::Boolean MuteCharaEff; // 0xAB
		::Class_1_0CB627C4F1CDDD99* Field_6_29; // 0xB0
		::System::Boolean __IsApply_k__BackingField; // 0xB8
		::System::Boolean __IsReset_k__BackingField; // 0xB9
		::Class_1_9CBC71DC5240DC00* Field_6_32; // 0xC0
		::Il2CppArray<::UnityEngine::Renderer*>* Field_6_33; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_6_34; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_6_35; // 0xD8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* Field_6_36; // 0xE0
		::Il2CppArray<::System::Boolean>* Field_6_37; // 0xE8
		::Il2CppArray<::System::Boolean>* Field_6_38; // 0xF0
		::Il2CppArray<::RPG::Client::MonoEffectPluginCharaMaterialBlock*>* Field_6_39; // 0xF8
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* Field_6_40; // 0x100
		::Il2CppArray<::RPG::GameCore::MaterialPropertyAdaptionConfig*>* Field_6_41; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_6_42; // 0x110
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*>* Field_6_43; // 0x118
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* Field_6_44; // 0x120
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_6_45; // 0x128
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_6_46; // 0x130
		::System::Collections::Generic::List_1<::System::UInt32>* Field_6_47; // 0x138
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginCharaEffectBase*>* Field_6_48; // 0x140
		::System::Boolean Field_6_49; // 0x148
		::RPG::Client::MonoEffect* Field_6_50; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE__CTOR_OFFSET))(this);
		}

		::System::Void SetCharaEffectEnable(::System::Boolean a1, ::RPG::Client::MonoEffectPluginCharaEffectBase_CharacterEffectEnableReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::MonoEffectPluginCharaEffectBase_CharacterEffectEnableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETCHARAEFFECTENABLE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* GetInstanceMaterials(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETINSTANCEMATERIALS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* GetTargetRendererList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETTARGETRENDERERLIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* GetRenderInstancedMaterialMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETRENDERINSTANCEDMATERIALMAP_OFFSET))(this);
		}

		::System::Boolean IsTargetGroupLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ISTARGETGROUPLEADER_OFFSET))(this);
		}

		static ::System::Boolean IsConflict(::RPG::Client::MonoEffectPluginCharaEffectBase* a1, ::RPG::Client::MonoEffectPluginCharaEffectBase* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MonoEffectPluginCharaEffectBase*, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ISCONFLICT_OFFSET))(a1, a2);
		}

		static ::System::Int32 ComparePriority(::RPG::Client::MonoEffectPluginCharaEffectBase* a1, ::RPG::Client::MonoEffectPluginCharaEffectBase* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::MonoEffectPluginCharaEffectBase*, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_COMPAREPRIORITY_OFFSET))(a1, a2);
		}

		::System::Void CopyOriginMaterialCharacterCommonProperties(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_COPYORIGINMATERIALCHARACTERCOMMONPROPERTIES_OFFSET))(this, a1);
		}

		::System::Void SetSubPlugIn(::RPG::Client::MonoEffectPluginCharaEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETSUBPLUGIN_OFFSET))(this, a1);
		}

		::System::Void RemoveSubPlugIn(::RPG::Client::MonoEffectPluginCharaEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_REMOVESUBPLUGIN_OFFSET))(this, a1);
		}

		::System::Void SetOtherEffectTarget(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETOTHEREFFECTTARGET_OFFSET))(this, a1);
		}

		::System::Void TryCreateSubPlugin(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_TRYCREATESUBPLUGIN_OFFSET))(this, a1);
		}

		::System::Void Method_6_BF5C484D5D51196F(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_BF5C484D5D51196F_OFFSET))(this, a1);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_6_0AC350B64D89A1AE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0AC350B64D89A1AE_OFFSET))(this, a1);
		}

		::System::Void Method_6_8B1FA4185C7C0938(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_8B1FA4185C7C0938_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_0AC350B64D89A1AE_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0AC350B64D89A1AE_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_8B1FA4185C7C0938_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_8B1FA4185C7C0938_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_0AC350B64D89A1AE_2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0AC350B64D89A1AE_2_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_20139550C8206D50()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_20139550C8206D50_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Method_6_2A5F76182A02F976(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_2A5F76182A02F976_OFFSET))(this, a1);
		}

		::System::Void Method_6_EA1C78EF39610042(::System::Boolean& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_EA1C78EF39610042_OFFSET))(this, a1);
		}

		::System::Void Method_6_33E2FA8E6403B93D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_33E2FA8E6403B93D_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Method_6_712E1FA01E5693FE()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_712E1FA01E5693FE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* Method_6_591CEBEAFC47406B()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_591CEBEAFC47406B_OFFSET))(this);
		}

		::System::Void Method_6_E844C30991F3F8DC(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_E844C30991F3F8DC_OFFSET))(this, a1);
		}

		::System::Void Method_6_C081D0F1BA12AC56(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C081D0F1BA12AC56_OFFSET))(this, a1);
		}

		::System::Void Method_6_1FE2B10286A019B7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1FE2B10286A019B7_OFFSET))(this);
		}

		::System::Void Method_6_946586516B7DFBDB(::UnityEngine::Material* a1, ::Il2CppArray<::RPG::Client::ReplaceMaterialsBlock>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::Il2CppArray<::RPG::Client::ReplaceMaterialsBlock>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_946586516B7DFBDB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_7306210DF60C7569(::UnityEngine::Material* a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_7306210DF60C7569_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_3D2B77EBCAE390AB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3D2B77EBCAE390AB_OFFSET))(this);
		}

		::System::Void Method_6_E26C99C52BC1E654()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_E26C99C52BC1E654_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* Method_6_C5DCE2A551C0E81B(::UnityEngine::Renderer* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C5DCE2A551C0E81B_OFFSET))(this, a1);
		}

		::System::Void Method_6_A44A18C9451109E4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_A44A18C9451109E4_OFFSET))(this);
		}

		::System::Void Method_6_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_508D4DD02D3DB74E_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* Method_6_0F219594B5F172AE(::UnityEngine::Renderer* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0F219594B5F172AE_OFFSET))(this, a1);
		}

		::System::Void Method_6_41F5D9C0F0A306F5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_41F5D9C0F0A306F5_OFFSET))(this);
		}

		::System::Void Method_6_D155D4917B3D2C6A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_D155D4917B3D2C6A_OFFSET))(this);
		}

		::System::Void Method_6_3EBE3F136A41CCD9(::RPG::Client::MonoEffectPluginCharaEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3EBE3F136A41CCD9_OFFSET))(this, a1);
		}

		::System::Void Method_6_2BC55A66CB2B0118()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_2BC55A66CB2B0118_OFFSET))(this);
		}

		::System::Void Method_6_DAB3177560EA0C5C(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_DAB3177560EA0C5C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_0E549C9E38D0E257(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0E549C9E38D0E257_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_F1FEBBADC39F3EAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_F1FEBBADC39F3EAB_OFFSET))(this, a1);
		}

		::System::Void Method_6_714674645EE1CBCA(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_714674645EE1CBCA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_3CEE9D93D2EBC326(::RPG::Client::CommonEffectMaterialBlockOne* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CommonEffectMaterialBlockOne*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3CEE9D93D2EBC326_OFFSET))(this, a1);
		}

		::System::Void Method_6_A80796DA5203C46C(::System::Collections::Generic::IEnumerable_1<::RPG::Client::CommonEffectMaterialBlockOne*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::CommonEffectMaterialBlockOne*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_A80796DA5203C46C_OFFSET))(this, a1);
		}

		::System::Void Method_6_74FE0F242303E029(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_74FE0F242303E029_OFFSET))(this, a1);
		}

		::System::Void Method_6_F94757253A563A02(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_F94757253A563A02_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_F94757253A563A02_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_F94757253A563A02_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_9FA0F2F97B19BDFF(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_9FA0F2F97B19BDFF_OFFSET))(this, a1);
		}

		::System::Void Method_6_3AC067C2C6518EDA(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::UnityEngine::MaterialPropertyBlock* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3AC067C2C6518EDA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_9C08DA5C1FAA2B3E(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_9C08DA5C1FAA2B3E_OFFSET))(this, a1);
		}

		::System::Void Method_6_9079FE2639801498(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_9079FE2639801498_OFFSET))(this, a1);
		}

		::System::Void Method_6_9079FE2639801498_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_9079FE2639801498_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_455E250D679F9642()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_455E250D679F9642_OFFSET))(this);
		}

		::System::Boolean Method_6_5E72916301E347E2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_5E72916301E347E2_OFFSET))(this);
		}

		::System::Void Method_6_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_F5447CD65612575D_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginCharaEffectBase* Method_6_6AE9C0C7D4D137B0(::RPG::Client::MonoEffect* a1)
		{
			return ((::RPG::Client::MonoEffectPluginCharaEffectBase*(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_6AE9C0C7D4D137B0_OFFSET))(this, a1);
		}

		::System::Void Method_6_C6C47C9FFA92653C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C6C47C9FFA92653C_OFFSET))(this);
		}

		::System::Void Method_6_C6C47C9FFA92653C_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C6C47C9FFA92653C_1_OFFSET))(this);
		}

		::System::Void Method_6_D0FA121921ED01A5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_D0FA121921ED01A5_OFFSET))(this, a1);
		}

		::System::Void Method_6_821BBDC04720A2EB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_821BBDC04720A2EB_OFFSET))(this);
		}

		::System::Boolean Method_6_B2B7B6D6D6477556(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_B2B7B6D6D6477556_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEditorMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISEDITORMODE_OFFSET))(this);
		}

		::System::Boolean get_IsApply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISAPPLY_OFFSET))(this);
		}

		::System::Boolean get_IsTargetPartMonster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISTARGETPARTMONSTER_OFFSET))(this);
		}

		::System::Void set_IsTargetPartMonster(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_ISTARGETPARTMONSTER_OFFSET))(this, value);
		}

		::System::Boolean get_IsSubPlugin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISSUBPLUGIN_OFFSET))(this);
		}

		::System::Void set_IsSubPlugin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_ISSUBPLUGIN_OFFSET))(this, value);
		}

		::RPG::Client::MonoEffectPluginCharaEffectBase* get_ParentPlugin()
		{
			return ((::RPG::Client::MonoEffectPluginCharaEffectBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_PARENTPLUGIN_OFFSET))(this);
		}

		::System::Void set_ParentPlugin(::RPG::Client::MonoEffectPluginCharaEffectBase* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_PARENTPLUGIN_OFFSET))(this, value);
		}

		::System::Boolean get__IsApply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET__ISAPPLY_OFFSET))(this);
		}

		::System::Void set__IsApply(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET__ISAPPLY_OFFSET))(this, value);
		}

		::System::Boolean get__IsReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET__ISRESET_OFFSET))(this);
		}

		::System::Void set__IsReset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET__ISRESET_OFFSET))(this, value);
		}

		::System::Boolean Method_6_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, P0);
		}
	};
}
