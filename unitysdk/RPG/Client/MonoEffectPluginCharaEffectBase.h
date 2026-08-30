#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase_CharaEffectRenderMaterialIndexItem.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase_CharacterEffectEnableReason.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase_RenderHideType.h"
#include "unitysdk/RPG/Client/ReplaceMaterialsBlock.h"

class Class_1_1342B57709FD7AC5;
class Class_1_8C2489600391E2B0;
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

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_COMPAREPRIORITY_OFFSET UNITYSDK_OFFSET(0x1169A490)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_COPYORIGINMATERIALCHARACTERCOMMONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1169A550)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x1169EA30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1169B780)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x1169EA70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETINSTANCEMATERIALS_OFFSET UNITYSDK_OFFSET(0x11699C60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETRENDERINSTANCEDMATERIALMAP_OFFSET UNITYSDK_OFFSET(0x11699E90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GETTARGETRENDERERLIST_OFFSET UNITYSDK_OFFSET(0x11699E40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISAPPLY_OFFSET UNITYSDK_OFFSET(0x1169F790)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISEDITORMODE_OFFSET UNITYSDK_OFFSET(0x1169B760)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISSUBPLUGIN_OFFSET UNITYSDK_OFFSET(0x116A3F50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_ISTARGETPARTMONSTER_OFFSET UNITYSDK_OFFSET(0x116A3F30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET_PARENTPLUGIN_OFFSET UNITYSDK_OFFSET(0x116A3F70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET__ISAPPLY_OFFSET UNITYSDK_OFFSET(0x116A3F90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_GET__ISRESET_OFFSET UNITYSDK_OFFSET(0x116A3FB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x1169B720)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ISCONFLICT_OFFSET UNITYSDK_OFFSET(0x11699FC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_ISTARGETGROUPLEADER_OFFSET UNITYSDK_OFFSET(0x11699EE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0986B6F765C6D4BF_1_OFFSET UNITYSDK_OFFSET(0x116A3C70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0986B6F765C6D4BF_OFFSET UNITYSDK_OFFSET(0x116A3A30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0E549C9E38D0E257_OFFSET UNITYSDK_OFFSET(0x1169A7C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_0F219594B5F172AE_OFFSET UNITYSDK_OFFSET(0x116A1730)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1656A95CE4A48665_1_OFFSET UNITYSDK_OFFSET(0x1169EBF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1656A95CE4A48665_2_OFFSET UNITYSDK_OFFSET(0x1169E730)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1656A95CE4A48665_OFFSET UNITYSDK_OFFSET(0x1169DB00)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x116A3DF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x1169DF80)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1D9EE327BF7D6281_OFFSET UNITYSDK_OFFSET(0x116A2260)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1FE2B10286A019B7_1_OFFSET UNITYSDK_OFFSET(0x116A3E70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1FE2B10286A019B7_2_OFFSET UNITYSDK_OFFSET(0x1169DEC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1FE2B10286A019B7_OFFSET UNITYSDK_OFFSET(0x1169E900)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_20139550C8206D50_OFFSET UNITYSDK_OFFSET(0x1169BEF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x1169C120)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x116A1F40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_30C54FBB113E604B_OFFSET UNITYSDK_OFFSET(0x116A2650)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3D1C0CAD940ED788_OFFSET UNITYSDK_OFFSET(0x116A1270)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_3EBE3F136A41CCD9_OFFSET UNITYSDK_OFFSET(0x1169AB20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_40A4C070BFD1685D_OFFSET UNITYSDK_OFFSET(0x11699A80)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x1169BD70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x116A14D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_494B27899C152C4A_OFFSET UNITYSDK_OFFSET(0x116998A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_4BD2BFB48FF90060_OFFSET UNITYSDK_OFFSET(0x116A27A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_55AF424C73EE0E01_OFFSET UNITYSDK_OFFSET(0x116A2C30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_59002B45D7F4D522_OFFSET UNITYSDK_OFFSET(0x1169C8D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x1169ACD0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_6AE9C0C7D4D137B0_OFFSET UNITYSDK_OFFSET(0x1169AE30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_712E1FA01E5693FE_OFFSET UNITYSDK_OFFSET(0x1169F450)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_714674645EE1CBCA_OFFSET UNITYSDK_OFFSET(0x116A0D70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_7306210DF60C7569_OFFSET UNITYSDK_OFFSET(0x116A0C40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0x116A1B40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_8E1350FB77B75FCF_OFFSET UNITYSDK_OFFSET(0x1169EE80)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_929438D091716485_OFFSET UNITYSDK_OFFSET(0x116A0120)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_946586516B7DFBDB_OFFSET UNITYSDK_OFFSET(0x1169F940)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_96423E189D7E47C7_OFFSET UNITYSDK_OFFSET(0x116A1DD0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x116A1190)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_9C08DA5C1FAA2B3E_OFFSET UNITYSDK_OFFSET(0x116A2D50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_AFA8A3948456CE48_OFFSET UNITYSDK_OFFSET(0x116A2AE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x116A0E50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_B2B7B6D6D6477556_OFFSET UNITYSDK_OFFSET(0x1169F7B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_BF5C484D5D51196F_OFFSET UNITYSDK_OFFSET(0x1169B670)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x1169EDC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C313ED05DF415F39_1_OFFSET UNITYSDK_OFFSET(0x116A31B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C313ED05DF415F39_OFFSET UNITYSDK_OFFSET(0x116A2E90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C9DB39424EE71E5A_OFFSET UNITYSDK_OFFSET(0x116A2710)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_D862EC7E99B62852_OFFSET UNITYSDK_OFFSET(0x1169EF50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_EA1C78EF39610042_OFFSET UNITYSDK_OFFSET(0x1169F0F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_EBC6B21098C341ED_OFFSET UNITYSDK_OFFSET(0x1169F820)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x1169DCD0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x1169C5F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_REMOVESUBPLUGIN_OFFSET UNITYSDK_OFFSET(0x1169AA10)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1169B0A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETCHARAEFFECTENABLE_OFFSET UNITYSDK_OFFSET(0x11677B60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETOTHEREFFECTTARGET_OFFSET UNITYSDK_OFFSET(0x1169ABC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SETSUBPLUGIN_OFFSET UNITYSDK_OFFSET(0x1169A9C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_ISSUBPLUGIN_OFFSET UNITYSDK_OFFSET(0x116A3F60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_ISTARGETPARTMONSTER_OFFSET UNITYSDK_OFFSET(0x116A3F40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET_PARENTPLUGIN_OFFSET UNITYSDK_OFFSET(0x116A3F80)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET__ISAPPLY_OFFSET UNITYSDK_OFFSET(0x116A3FA0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_SET__ISRESET_OFFSET UNITYSDK_OFFSET(0x116A3FC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_TRYCREATESUBPLUGIN_OFFSET UNITYSDK_OFFSET(0x1168C6D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x116A3FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaEffectBase_TypeDefinitionIndex = 69904;

	class MonoEffectPluginCharaEffectBase : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Comparison_1<::RPG::Client::MonoEffectPluginCharaEffectBase*>* MFPGLCINIBC; // 0x28
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
		::Class_1_8C2489600391E2B0* CDLAJACJFDI; // 0xB0
		::System::Boolean __IsApply_k__BackingField; // 0xB8
		::System::Boolean __IsReset_k__BackingField; // 0xB9
		::Class_1_1342B57709FD7AC5* OIDAGBPPNBJ; // 0xC0
		::Il2CppArray<::UnityEngine::Renderer*>* LBCGKJDNKGK; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* NJPGLFMMOKC; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* AGNEFMNHHOL; // 0xD8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* GMGJKKLOAPE; // 0xE0
		::Il2CppArray<::System::Boolean>* KFDMGAKLDPO; // 0xE8
		::Il2CppArray<::System::Boolean>* OPBMOLMPJJM; // 0xF0
		::Il2CppArray<::RPG::Client::MonoEffectPluginCharaMaterialBlock*>* HFCELNDHIIH; // 0xF8
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* DEAOIJPACIB; // 0x100
		::Il2CppArray<::RPG::GameCore::MaterialPropertyAdaptionConfig*>* OFAFKDKDKJD; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* PMAFPFMBANE; // 0x110
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*>* BLKCHHBFAPO; // 0x118
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* GHKBCPCLHOL; // 0x120
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* CMMHOOBHCOJ; // 0x128
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* KOJAKKFLPMG; // 0x130
		::System::Collections::Generic::List_1<::System::UInt32>* HCBLJGLEMJG; // 0x138
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginCharaEffectBase*>* DCCHPICCKPB; // 0x140
		::System::Boolean DGKMCKHNEHF; // 0x148
		::RPG::Client::MonoEffect* AKBDIDBMBLK; // 0x150

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

		::System::Void Method_6_1656A95CE4A48665(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1656A95CE4A48665_OFFSET))(this, a1);
		}

		::System::Void Method_6_494B27899C152C4A(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_494B27899C152C4A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_1656A95CE4A48665_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1656A95CE4A48665_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_40A4C070BFD1685D(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_40A4C070BFD1685D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_1656A95CE4A48665_2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_1656A95CE4A48665_2_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_20139550C8206D50()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_20139550C8206D50_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Method_6_D862EC7E99B62852(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_D862EC7E99B62852_OFFSET))(this, a1);
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

		::System::Void Method_6_F7BA13C72A6B3F58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_F7BA13C72A6B3F58_OFFSET))(this);
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

		::System::Void Method_6_C9DB39424EE71E5A(::System::Collections::Generic::IEnumerable_1<::RPG::Client::CommonEffectMaterialBlockOne*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::CommonEffectMaterialBlockOne*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_METHOD_6_C9DB39424EE71E5A_OFFSET))(this, a1);
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
	};
}
