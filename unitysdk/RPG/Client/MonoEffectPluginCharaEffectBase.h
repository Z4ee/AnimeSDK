#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase_CharaEffectRenderMaterialIndexItem.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase_CharacterEffectEnableReason.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase_RenderHideType.h"
#include "unitysdk/RPG/Client/ReplaceMaterialsBlock.h"

class Class_1_0CB627C4F1CDDD99;
class Class_1_1342B57709FD7AC5;
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

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_COMPAREPRIORITY_OFFSET UNITYSDK_OFFSET(0xC0A8330)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_COPYORIGINMATERIALCHARACTERCOMMONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xC0A83F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0ACBB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A97D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xC0ACBF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETINSTANCEMATERIALS_OFFSET UNITYSDK_OFFSET(0xC0A7B00)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETRENDERINSTANCEDMATERIALMAP_OFFSET UNITYSDK_OFFSET(0xC0A7D30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETTARGETRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xC0A7CE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISAPPLY_OFFSET UNITYSDK_OFFSET(0xC0AD8D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISEDITORMODE_OFFSET UNITYSDK_OFFSET(0xC0A97B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISSUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0B2050)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISTARGETPARTMONSTER_OFFSET UNITYSDK_OFFSET(0xC0B2030)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_PARENTPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0B2070)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET__ISAPPLY_OFFSET UNITYSDK_OFFSET(0xC0B2090)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET__ISRESET_OFFSET UNITYSDK_OFFSET(0xC0B20B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xC0A9770)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ISCONFLICT_OFFSET UNITYSDK_OFFSET(0xC0A7E60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ISTARGETGROUPLEADER_OFFSET UNITYSDK_OFFSET(0xC0A7D80)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0986B6F765C6D4BF_1_OFFSET UNITYSDK_OFFSET(0xC0B1D70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0986B6F765C6D4BF_OFFSET UNITYSDK_OFFSET(0xC0B1AF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0E549C9E38D0E257_OFFSET UNITYSDK_OFFSET(0xC0A86C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0F219594B5F172AE_OFFSET UNITYSDK_OFFSET(0xC0AF8E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_11DA6C71B7E37D4A_OFFSET UNITYSDK_OFFSET(0xC0A7920)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xC0B1EF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0xC0AC1F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1D9EE327BF7D6281_OFFSET UNITYSDK_OFFSET(0xC0B0410)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1FE2B10286A019B7_1_OFFSET UNITYSDK_OFFSET(0xC0B1F70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1FE2B10286A019B7_2_OFFSET UNITYSDK_OFFSET(0xC0AC130)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1FE2B10286A019B7_OFFSET UNITYSDK_OFFSET(0xC0ACA80)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0xC0AA2C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0xC0B00F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_30C54FBB113E604B_OFFSET UNITYSDK_OFFSET(0xC0B0800)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3D1C0CAD940ED788_OFFSET UNITYSDK_OFFSET(0xC0AF420)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0xC0AA790)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3EBE3F136A41CCD9_OFFSET UNITYSDK_OFFSET(0xC0A8A20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xC0A9E60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0xC0AF680)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_4BD2BFB48FF90060_OFFSET UNITYSDK_OFFSET(0xC0B0950)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_51E28B5DC2ED8035_OFFSET UNITYSDK_OFFSET(0xC0B08C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_55AF424C73EE0E01_OFFSET UNITYSDK_OFFSET(0xC0B0DE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_59002B45D7F4D522_OFFSET UNITYSDK_OFFSET(0xC0AAA00)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_5C8000781A401354_OFFSET UNITYSDK_OFFSET(0xC0AD8F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0xC0A8C80)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_6AE9C0C7D4D137B0_OFFSET UNITYSDK_OFFSET(0xC0A8DE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_712E1FA01E5693FE_OFFSET UNITYSDK_OFFSET(0xC0AD590)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_714674645EE1CBCA_OFFSET UNITYSDK_OFFSET(0xC0AEF20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_7306210DF60C7569_OFFSET UNITYSDK_OFFSET(0xC0AEDF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0xC0AFCF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_8D488119A13CC453_OFFSET UNITYSDK_OFFSET(0xC0A7A10)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_8E1350FB77B75FCF_OFFSET UNITYSDK_OFFSET(0xC0ACF60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_929438D091716485_OFFSET UNITYSDK_OFFSET(0xC0AE2D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_946586516B7DFBDB_OFFSET UNITYSDK_OFFSET(0xC0ADAF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_96423E189D7E47C7_OFFSET UNITYSDK_OFFSET(0xC0AFF80)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xC0AF340)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_9C08DA5C1FAA2B3E_OFFSET UNITYSDK_OFFSET(0xC0B0F00)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_A43F688580F32E0F_OFFSET UNITYSDK_OFFSET(0xC0A9FE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_AFA8A3948456CE48_OFFSET UNITYSDK_OFFSET(0xC0B0C90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0xC0AF000)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_BF5C484D5D51196F_OFFSET UNITYSDK_OFFSET(0xC0A96C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0xC0ACEA0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C313ED05DF415F39_1_OFFSET UNITYSDK_OFFSET(0xC0B1360)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C313ED05DF415F39_OFFSET UNITYSDK_OFFSET(0xC0B1040)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_EA0748E027FD6339_1_OFFSET UNITYSDK_OFFSET(0xC0ACDB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_EA0748E027FD6339_2_OFFSET UNITYSDK_OFFSET(0xC0AC990)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_EA0748E027FD6339_OFFSET UNITYSDK_OFFSET(0xC0ABE50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_EA1C78EF39610042_OFFSET UNITYSDK_OFFSET(0xC0AD1D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_EBC6B21098C341ED_OFFSET UNITYSDK_OFFSET(0xC0AD9D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xC0ABF40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_F61F1112F51B0081_OFFSET UNITYSDK_OFFSET(0xC0AD030)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_REMOVESUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A8910)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A9050)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETCHARAEFFECTENABLE_OFFSET UNITYSDK_OFFSET(0xC0A77D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETOTHEREFFECTTARGET_OFFSET UNITYSDK_OFFSET(0xC0A8AC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETSUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A88C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_ISSUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0B2060)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_ISTARGETPARTMONSTER_OFFSET UNITYSDK_OFFSET(0xC0B2040)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_PARENTPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0B2080)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET__ISAPPLY_OFFSET UNITYSDK_OFFSET(0xC0B20A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET__ISRESET_OFFSET UNITYSDK_OFFSET(0xC0B20C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_TRYCREATESUBPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A8BD0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0B20D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0B22B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xC0B22F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xC0B2270)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaEffectBase_TypeDefinitionIndex = 65389;

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
		::Class_1_1342B57709FD7AC5* Field_6_32; // 0xC0
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

		::System::Void Method_6_EA0748E027FD6339(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_EA0748E027FD6339_OFFSET))(this, a1);
		}

		::System::Void Method_6_11DA6C71B7E37D4A(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_11DA6C71B7E37D4A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_EA0748E027FD6339_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_EA0748E027FD6339_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_8D488119A13CC453(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_8D488119A13CC453_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_EA0748E027FD6339_2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_EA0748E027FD6339_2_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_A43F688580F32E0F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_A43F688580F32E0F_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Method_6_F61F1112F51B0081(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_F61F1112F51B0081_OFFSET))(this, a1);
		}

		::System::Void Method_6_EA1C78EF39610042(::System::Boolean& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_EA1C78EF39610042_OFFSET))(this, a1);
		}

		::System::Void Method_6_19FB5FBEA9EA66CD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_19FB5FBEA9EA66CD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Method_6_712E1FA01E5693FE()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_712E1FA01E5693FE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* Method_6_59002B45D7F4D522()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_59002B45D7F4D522_OFFSET))(this);
		}

		::System::Void Method_6_EBC6B21098C341ED(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_EBC6B21098C341ED_OFFSET))(this, a1);
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

		::System::Void Method_6_AFC8215C57A0845A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_AFC8215C57A0845A_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* Method_6_3D1C0CAD940ED788(::UnityEngine::Renderer* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3D1C0CAD940ED788_OFFSET))(this, a1);
		}

		::System::Void Method_6_47EDBC4CA1AB8BEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_47EDBC4CA1AB8BEE_OFFSET))(this);
		}

		::System::Void Method_6_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_97D83E4CB3B11935_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* Method_6_0F219594B5F172AE(::UnityEngine::Renderer* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0F219594B5F172AE_OFFSET))(this, a1);
		}

		::System::Void Method_6_763B70E1B527E566()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_763B70E1B527E566_OFFSET))(this);
		}

		::System::Void Method_6_96423E189D7E47C7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_96423E189D7E47C7_OFFSET))(this);
		}

		::System::Void Method_6_3EBE3F136A41CCD9(::RPG::Client::MonoEffectPluginCharaEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3EBE3F136A41CCD9_OFFSET))(this, a1);
		}

		::System::Void Method_6_2BC55A66CB2B0118()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_2BC55A66CB2B0118_OFFSET))(this);
		}

		::System::Void Method_6_929438D091716485(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_929438D091716485_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_0E549C9E38D0E257(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0E549C9E38D0E257_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_1D9EE327BF7D6281(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1D9EE327BF7D6281_OFFSET))(this, a1);
		}

		::System::Void Method_6_714674645EE1CBCA(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_714674645EE1CBCA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_30C54FBB113E604B(::RPG::Client::CommonEffectMaterialBlockOne* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CommonEffectMaterialBlockOne*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_30C54FBB113E604B_OFFSET))(this, a1);
		}

		::System::Void Method_6_51E28B5DC2ED8035(::System::Collections::Generic::IEnumerable_1<::RPG::Client::CommonEffectMaterialBlockOne*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::CommonEffectMaterialBlockOne*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_51E28B5DC2ED8035_OFFSET))(this, a1);
		}

		::System::Void Method_6_4BD2BFB48FF90060(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_4BD2BFB48FF90060_OFFSET))(this, a1);
		}

		::System::Void Method_6_C313ED05DF415F39(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C313ED05DF415F39_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C313ED05DF415F39_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C313ED05DF415F39_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_55AF424C73EE0E01(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_55AF424C73EE0E01_OFFSET))(this, a1);
		}

		::System::Void Method_6_AFA8A3948456CE48(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::UnityEngine::MaterialPropertyBlock* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_AFA8A3948456CE48_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_9C08DA5C1FAA2B3E(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_9C08DA5C1FAA2B3E_OFFSET))(this, a1);
		}

		::System::Void Method_6_0986B6F765C6D4BF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0986B6F765C6D4BF_OFFSET))(this, a1);
		}

		::System::Void Method_6_0986B6F765C6D4BF_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0986B6F765C6D4BF_1_OFFSET))(this, a1);
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

		::System::Void Method_6_1FE2B10286A019B7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1FE2B10286A019B7_1_OFFSET))(this);
		}

		::System::Void Method_6_1FE2B10286A019B7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1FE2B10286A019B7_2_OFFSET))(this);
		}

		::System::Void Method_6_8E1350FB77B75FCF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_8E1350FB77B75FCF_OFFSET))(this, a1);
		}

		::System::Void Method_6_2157CED3CDDF8996()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_2157CED3CDDF8996_OFFSET))(this);
		}

		::System::Boolean Method_6_5C8000781A401354(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_5C8000781A401354_OFFSET))(this, a1);
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

		::System::Void set_IsTargetPartMonster(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_ISTARGETPARTMONSTER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSubPlugin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISSUBPLUGIN_OFFSET))(this);
		}

		::System::Void set_IsSubPlugin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_ISSUBPLUGIN_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginCharaEffectBase* get_ParentPlugin()
		{
			return ((::RPG::Client::MonoEffectPluginCharaEffectBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_PARENTPLUGIN_OFFSET))(this);
		}

		::System::Void set_ParentPlugin(::RPG::Client::MonoEffectPluginCharaEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_PARENTPLUGIN_OFFSET))(this, a1);
		}

		::System::Boolean get__IsApply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET__ISAPPLY_OFFSET))(this);
		}

		::System::Void set__IsApply(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET__ISAPPLY_OFFSET))(this, a1);
		}

		::System::Boolean get__IsReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET__ISRESET_OFFSET))(this);
		}

		::System::Void set__IsReset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET__ISRESET_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, a1);
		}
	};
}
