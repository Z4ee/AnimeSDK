#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_225F859A4891E6CB_FiveDimRenderingPanelBoundsGroup.h"
#include "unitysdk/Class_1_225F859A4891E6CB_Struct_2_668FCC16C4E6026D.h"
#include "unitysdk/Class_1_225F859A4891E6CB_Struct_2_E3CB1F13E62545A6.h"
#include "unitysdk/FiveDimPrototype.h"
#include "unitysdk/FiveDimRenderingPanel_SerializedInstanceData.h"
#include "unitysdk/FiveDimRenderingPanel_Struct_2_D8BB6C9D99A08606.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_1342B57709FD7AC5;
class Class_1_929E979D9ED7139E;
class Class_1_B044F82CBFAD3D4B;
class FDRIMatStateOperation;
class FiveDimRenderingItem;
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define FIVEDIMRENDERINGPANEL_APPENDBOUNDSJOBINPUTS_OFFSET UNITYSDK_OFFSET(0x1911BE00)
#define FIVEDIMRENDERINGPANEL_APPLYDYNAMICINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1911CAE0)
#define FIVEDIMRENDERINGPANEL_APPLYINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1911CCA0)
#define FIVEDIMRENDERINGPANEL_APPLYSTATICINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1911CB60)
#define FIVEDIMRENDERINGPANEL_AWAKE_OFFSET UNITYSDK_OFFSET(0x19116DE0)
#define FIVEDIMRENDERINGPANEL_BUILDINSTANCESFROMSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0x19117250)
#define FIVEDIMRENDERINGPANEL_CLEARDYNAMICINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1911CBE0)
#define FIVEDIMRENDERINGPANEL_CLEARSERIALIZEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x1911D850)
#define FIVEDIMRENDERINGPANEL_CLEARSTATICINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1911CC40)
#define FIVEDIMRENDERINGPANEL_COLLECTSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0x1911CD40)
#define FIVEDIMRENDERINGPANEL_CULLINSTANCEDITEM_OFFSET UNITYSDK_OFFSET(0x19118420)
#define FIVEDIMRENDERINGPANEL_DELETEDISABLEDITEMS_OFFSET UNITYSDK_OFFSET(0x1911DA40)
#define FIVEDIMRENDERINGPANEL_ESTIMATEUPDATEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1911BCD0)
#define FIVEDIMRENDERINGPANEL_GETPROTOTYPEREGISTED_OFFSET UNITYSDK_OFFSET(0x19115C90)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDSCENTER_OFFSET UNITYSDK_OFFSET(0x19116700)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDSSIZE_OFFSET UNITYSDK_OFFSET(0x191167E0)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x19116530)
#define FIVEDIMRENDERINGPANEL_GET_CLIPSPACE_OFFSET UNITYSDK_OFFSET(0x19116440)
#define FIVEDIMRENDERINGPANEL_GET_CUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x19116B80)
#define FIVEDIMRENDERINGPANEL_GET_DITHERALPHA_OFFSET UNITYSDK_OFFSET(0x191165D0)
#define FIVEDIMRENDERINGPANEL_GET_FORCEPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x19116C40)
#define FIVEDIMRENDERINGPANEL_GET_HASBOUNDCLIP_OFFSET UNITYSDK_OFFSET(0x19116430)
#define FIVEDIMRENDERINGPANEL_GET_INVERTBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x191168C0)
#define FIVEDIMRENDERINGPANEL_GET_ISAVAILABLEFOREXTERNALRENDERING_OFFSET UNITYSDK_OFFSET(0x19116E30)
#define FIVEDIMRENDERINGPANEL_GET_ITEMCUSTOMHIZTEST_OFFSET UNITYSDK_OFFSET(0x19116A00)
#define FIVEDIMRENDERINGPANEL_GET_ITEMISCPUCULLED_OFFSET UNITYSDK_OFFSET(0x19116D00)
#define FIVEDIMRENDERINGPANEL_GET_ITEMRENDERERAVAILABLE_OFFSET UNITYSDK_OFFSET(0x19116DC0)
#define FIVEDIMRENDERINGPANEL_GET_LASTUPDATEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x19116DD0)
#define FIVEDIMRENDERINGPANEL_GET_LIGHTDIR_OFFSET UNITYSDK_OFFSET(0x19116930)
#define FIVEDIMRENDERINGPANEL_GET_USEBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x19116690)
#define FIVEDIMRENDERINGPANEL_GET_USECUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x19116AC0)
#define FIVEDIMRENDERINGPANEL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x191180D0)
#define FIVEDIMRENDERINGPANEL_MARKRENDERERDITHER_OFFSET UNITYSDK_OFFSET(0x1911E1A0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_22A8385B7DC493A0_OFFSET UNITYSDK_OFFSET(0x1911BA20)
#define FIVEDIMRENDERINGPANEL_METHOD_5_257DBA76628F63BF_OFFSET UNITYSDK_OFFSET(0x1911AFE0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1911E960)
#define FIVEDIMRENDERINGPANEL_METHOD_5_348674E9BAD074BA_OFFSET UNITYSDK_OFFSET(0x1911A9C0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_4DC99A0E8033A1A2_OFFSET UNITYSDK_OFFSET(0x1911D540)
#define FIVEDIMRENDERINGPANEL_METHOD_5_4F7871DB44A26231_1_OFFSET UNITYSDK_OFFSET(0x191191C0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_4F7871DB44A26231_OFFSET UNITYSDK_OFFSET(0x19118980)
#define FIVEDIMRENDERINGPANEL_METHOD_5_55B783EC124E0B75_OFFSET UNITYSDK_OFFSET(0x1911A100)
#define FIVEDIMRENDERINGPANEL_METHOD_5_60E1F7F58CCF739F_1_OFFSET UNITYSDK_OFFSET(0x1911D8F0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1911D700)
#define FIVEDIMRENDERINGPANEL_METHOD_5_65F245AE21264E80_OFFSET UNITYSDK_OFFSET(0x1911B840)
#define FIVEDIMRENDERINGPANEL_METHOD_5_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x19119ED0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x19118B50)
#define FIVEDIMRENDERINGPANEL_METHOD_5_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x19116FF0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x19117AF0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_92DABAB408A309F5_OFFSET UNITYSDK_OFFSET(0x19119C70)
#define FIVEDIMRENDERINGPANEL_METHOD_5_986D61F33E690877_OFFSET UNITYSDK_OFFSET(0x1911AD10)
#define FIVEDIMRENDERINGPANEL_METHOD_5_9A6D1D47E588E644_OFFSET UNITYSDK_OFFSET(0x1911A380)
#define FIVEDIMRENDERINGPANEL_METHOD_5_A2B9571D01B8827A_OFFSET UNITYSDK_OFFSET(0x1911A6B0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x191188D0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x191197C0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_C2D94B542F8BDBB0_OFFSET UNITYSDK_OFFSET(0x1911A620)
#define FIVEDIMRENDERINGPANEL_METHOD_5_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x191193B0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_EA99B9F8B3C8C2A8_OFFSET UNITYSDK_OFFSET(0x1911BD80)
#define FIVEDIMRENDERINGPANEL_METHOD_5_F5EDD6D7D90054D2_OFFSET UNITYSDK_OFFSET(0x1911B410)
#define FIVEDIMRENDERINGPANEL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19119680)
#define FIVEDIMRENDERINGPANEL_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1911EE20)
#define FIVEDIMRENDERINGPANEL_ONECLICKCOLLECTANDBUILDANDDISABLE_OFFSET UNITYSDK_OFFSET(0x1911D6A0)
#define FIVEDIMRENDERINGPANEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19116EB0)
#define FIVEDIMRENDERINGPANEL_PREPARE_OFFSET UNITYSDK_OFFSET(0x19117090)
#define FIVEDIMRENDERINGPANEL_REGISTERITEMCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1911E410)
#define FIVEDIMRENDERINGPANEL_REGISTERITEMDITHER_OFFSET UNITYSDK_OFFSET(0x191154F0)
#define FIVEDIMRENDERINGPANEL_REGISTERRENDERER_1_OFFSET UNITYSDK_OFFSET(0x1911DEC0)
#define FIVEDIMRENDERINGPANEL_REGISTERRENDERER_OFFSET UNITYSDK_OFFSET(0x1911DD50)
#define FIVEDIMRENDERINGPANEL_REGISTITEM_OFFSET UNITYSDK_OFFSET(0x19114230)
#define FIVEDIMRENDERINGPANEL_RESETLASTUPDATECOUNT_OFFSET UNITYSDK_OFFSET(0x1911BC80)
#define FIVEDIMRENDERINGPANEL_SETPROTOTYPEMATPARAM_OFFSET UNITYSDK_OFFSET(0x19115E20)
#define FIVEDIMRENDERINGPANEL_SETRENDERERDITHER_OFFSET UNITYSDK_OFFSET(0x1911E030)
#define FIVEDIMRENDERINGPANEL_SET_BOUNDSCENTER_OFFSET UNITYSDK_OFFSET(0x19116720)
#define FIVEDIMRENDERINGPANEL_SET_BOUNDSSIZE_OFFSET UNITYSDK_OFFSET(0x19116800)
#define FIVEDIMRENDERINGPANEL_SET_CUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x19116BE0)
#define FIVEDIMRENDERINGPANEL_SET_DITHERALPHA_OFFSET UNITYSDK_OFFSET(0x191165E0)
#define FIVEDIMRENDERINGPANEL_SET_FORCEPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x19116CA0)
#define FIVEDIMRENDERINGPANEL_SET_INVERTBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x191168D0)
#define FIVEDIMRENDERINGPANEL_SET_ITEMCUSTOMHIZTEST_OFFSET UNITYSDK_OFFSET(0x19116A60)
#define FIVEDIMRENDERINGPANEL_SET_ITEMISCPUCULLED_OFFSET UNITYSDK_OFFSET(0x19116D60)
#define FIVEDIMRENDERINGPANEL_SET_LIGHTDIR_OFFSET UNITYSDK_OFFSET(0x19116950)
#define FIVEDIMRENDERINGPANEL_SET_USEBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x191166A0)
#define FIVEDIMRENDERINGPANEL_SET_USECUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x19116B20)
#define FIVEDIMRENDERINGPANEL_TICKRENDERPHASE1_OFFSET UNITYSDK_OFFSET(0x19118340)
#define FIVEDIMRENDERINGPANEL_TICKRENDERPHASE2_OFFSET UNITYSDK_OFFSET(0x191187D0)
#define FIVEDIMRENDERINGPANEL_TICKRENDER_OFFSET UNITYSDK_OFFSET(0x19118860)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEMCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1911E6B0)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEMDITHER_OFFSET UNITYSDK_OFFSET(0x191156D0)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEM_OFFSET UNITYSDK_OFFSET(0x19114D10)
#define FIVEDIMRENDERINGPANEL_UNREGISTERRENDERER_OFFSET UNITYSDK_OFFSET(0x1911E2E0)
#define FIVEDIMRENDERINGPANEL_UPDATEINSTANCEDITEMBOUNDSIFNEEDED_OFFSET UNITYSDK_OFFSET(0x191183B0)
#define FIVEDIMRENDERINGPANEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1911F910)
#define FIVEDIMRENDERINGPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1911F4B0)

inline static constexpr unsigned int FiveDimRenderingPanel_TypeDefinitionIndex = 47580;

class FiveDimRenderingPanel : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_IMIDNKBAMNI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x87C0);
	}
	static ::System::Int32* StaticGet_LIGICMLEABF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x87C4);
	}
	static ::System::Int32* StaticGet_JBJPBPIFJDF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x87C8);
	}
	static ::System::Int32* StaticGet_CKIDJOPJMBP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x87CC);
	}
	static ::System::Int32* StaticGet_CBJHNGBICBN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x87D0);
	}
	static ::System::Int32* StaticGet_HHAEIDMBAHE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x87D4);
	}
	static ::System::Int32* StaticGet_ADLFKLLDPBJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x87D8);
	}
	static ::System::Int32* StaticGet_FAONCHMBCBB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x87DC);
	}
	static ::System::Int32* StaticGet_KPIDPJBKJII()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x87E0);
	}
	static ::System::Int32* StaticGet_DEHOEOFPEIK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x87E4);
	}
	static ::System::Int32* StaticGet_NLNJLMAEGKI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x87E8);
	}
	::UnityEngine::Vector4 PanelScaleTilling; // 0x18
	::System::Single _ditherAlpha; // 0x28
	::System::Boolean _useBoundsClip; // 0x2C
	::System::Boolean _InvertBoundsClip; // 0x2D
	::UnityEngine::Vector3 _boundsCenter; // 0x30
	::UnityEngine::Vector3 _boundsSize; // 0x3C
	::System::Boolean OverrideLight; // 0x48
	::System::Boolean OverrideByCamera; // 0x49
	::UnityEngine::Vector3 _LightDir; // 0x4C
	::System::Boolean UsePrototypeExpand; // 0x58
	::System::Single PrototypeExpandScale; // 0x5C
	::Class_1_B044F82CBFAD3D4B* EBILLBOENIN; // 0x60
	::System::Collections::Generic::List_1<::RPG::Client::LiteInstancedItem::ItemPrototype*>* BHGBOPDEKMG; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* HCIFKCELOPO; // 0x70
	::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* BJBEIKLJMAH; // 0x78
	::System::Collections::Generic::List_1<::System::UInt64>* CJJONHINAAE; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FiveDimRenderingPanel_Struct_2_D8BB6C9D99A08606>* NDOMNPPIALJ; // 0x88
	::System::Collections::Generic::List_1<::System::Boolean>* MFMAJFBLBFI; // 0x90
	::System::Boolean KGBFBPIODLK; // 0x98
	::System::Boolean externalDrivenRender; // 0x99
	::System::Boolean externalDrivenUpdate; // 0x9A
	::System::Boolean panelPosDirty; // 0x9B
	::System::Boolean clipDirty; // 0x9C
	::System::Boolean lightingDirty; // 0x9D
	::System::Boolean RegisterChildWhenEnable; // 0x9E
	::UnityEngine::Transform* GOFNJPLABPI; // 0xA0
	::System::Boolean panelCpuCulled; // 0xA8
	::System::Int32 boundsCalculateCount; // 0xAC
	::System::Boolean instancedBoundsDirty; // 0xB0
	::System::Boolean dynamicInstancedBoundsDirty; // 0xB1
	::System::Boolean staticInstancedBoundsDirty; // 0xB2
	::System::Boolean KBKFLFAFFOP; // 0xB3
	::System::Boolean CCCKNHLOICO; // 0xB4
	::System::Boolean OGHNDHLKGMA; // 0xB5
	::UnityEngine::Bounds ABLHIPGJBHK; // 0xB8
	::UnityEngine::Bounds JEIMHEJCOOI; // 0xD0
	::UnityEngine::Bounds IKEICAMDFDF; // 0xE8
	::System::Int32 POMCOCJGFHF; // 0x100
	::System::Collections::Generic::HashSet_1<::FiveDimRenderingItem*>* JCLDKIHILDK; // 0x108
	::System::Collections::Generic::HashSet_1<::FiveDimRenderingItem*>* IKLKKLKPGFP; // 0x110
	::System::Boolean useSerializedData; // 0x118
	::System::Collections::Generic::List_1<::RPG::Client::LiteInstancedItem::ItemPrototype*>* serializedPrototypes; // 0x120
	::System::Collections::Generic::List_1<::FiveDimRenderingPanel_SerializedInstanceData>* serializedInstances; // 0x128
	::System::Collections::Generic::List_1<::Class_1_929E979D9ED7139E*>* DHNHEELELLE; // 0x130
	::UnityEngine::GameObject* BHDAOCBFPOG; // 0x138

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL__CCTOR_OFFSET))();
	}

	::System::Boolean get_HasBoundClip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_HASBOUNDCLIP_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 get_ClipSpace()
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_CLIPSPACE_OFFSET))(this);
	}

	::UnityEngine::Bounds get_Bounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_BOUNDS_OFFSET))(this);
	}

	::System::Single get_DitherAlpha()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_DITHERALPHA_OFFSET))(this);
	}

	::System::Void set_DitherAlpha(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_DITHERALPHA_OFFSET))(this, a1);
	}

	::System::Boolean get_useBoundsClip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_USEBOUNDSCLIP_OFFSET))(this);
	}

	::System::Void set_useBoundsClip(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_USEBOUNDSCLIP_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_boundsCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_BOUNDSCENTER_OFFSET))(this);
	}

	::System::Void set_boundsCenter(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_BOUNDSCENTER_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_boundsSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_BOUNDSSIZE_OFFSET))(this);
	}

	::System::Void set_boundsSize(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_BOUNDSSIZE_OFFSET))(this, a1);
	}

	::System::Boolean get_InvertBoundsClip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_INVERTBOUNDSCLIP_OFFSET))(this);
	}

	::System::Void set_InvertBoundsClip(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_INVERTBOUNDSCLIP_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_LightDir()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_LIGHTDIR_OFFSET))(this);
	}

	::System::Void set_LightDir(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_LIGHTDIR_OFFSET))(this, a1);
	}

	::System::Boolean get_ItemCustomHizTest()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_ITEMCUSTOMHIZTEST_OFFSET))(this);
	}

	::System::Void set_ItemCustomHizTest(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_ITEMCUSTOMHIZTEST_OFFSET))(this, a1);
	}

	::System::Boolean get_UseCustomDrawLayer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_USECUSTOMDRAWLAYER_OFFSET))(this);
	}

	::System::Void set_UseCustomDrawLayer(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_USECUSTOMDRAWLAYER_OFFSET))(this, a1);
	}

	::System::Int32 get_CustomDrawLayer()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_CUSTOMDRAWLAYER_OFFSET))(this);
	}

	::System::Void set_CustomDrawLayer(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_CUSTOMDRAWLAYER_OFFSET))(this, a1);
	}

	::System::Boolean get_ForcePreviewMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_FORCEPREVIEWMODE_OFFSET))(this);
	}

	::System::Void set_ForcePreviewMode(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_FORCEPREVIEWMODE_OFFSET))(this, a1);
	}

	::System::Boolean get_ItemIsCPUCulled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_ITEMISCPUCULLED_OFFSET))(this);
	}

	::System::Void set_ItemIsCPUCulled(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_ITEMISCPUCULLED_OFFSET))(this, a1);
	}

	::System::Boolean get_ItemRendererAvailable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_ITEMRENDERERAVAILABLE_OFFSET))(this);
	}

	::System::Int32 get_LastUpdateItemCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_LASTUPDATEITEMCOUNT_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_AWAKE_OFFSET))(this);
	}

	::System::Boolean get_IsAvailableForExternalRendering()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_ISAVAILABLEFOREXTERNALRENDERING_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONENABLE_OFFSET))(this);
	}

	::System::Void Method_5_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_LATEUPDATE_OFFSET))(this);
	}

	::System::Void TickRender()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_TICKRENDER_OFFSET))(this);
	}

	::System::Void TickRenderPhase1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_TICKRENDERPHASE1_OFFSET))(this);
	}

	::System::Void TickRenderPhase2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_TICKRENDERPHASE2_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_5_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Prepare()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_PREPARE_OFFSET))(this);
	}

	::System::Void Method_5_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_5_4F7871DB44A26231()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_4F7871DB44A26231_OFFSET))(this);
	}

	::System::Void Method_5_4F7871DB44A26231_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_4F7871DB44A26231_1_OFFSET))(this);
	}

	::System::Void Method_5_92DABAB408A309F5(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_92DABAB408A309F5_OFFSET))(this, a1);
	}

	::System::Void Method_5_6DFEF4918C679AF0(::Class_1_1342B57709FD7AC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_5_55B783EC124E0B75(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_55B783EC124E0B75_OFFSET))(this, a1);
	}

	::System::Void Method_5_9A6D1D47E588E644(::Class_1_1342B57709FD7AC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_9A6D1D47E588E644_OFFSET))(this, a1);
	}

	::System::Void Method_5_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_D155D4917B3D2C6A_OFFSET))(this);
	}

	::System::Void Method_5_A2B9571D01B8827A(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_A2B9571D01B8827A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_348674E9BAD074BA(::Class_1_1342B57709FD7AC5* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_348674E9BAD074BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Boolean Method_5_986D61F33E690877(::FiveDimRenderingItem* a1, ::UnityEngine::Bounds& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::FiveDimRenderingItem*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_986D61F33E690877_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_257DBA76628F63BF(::System::Collections::Generic::HashSet_1<::FiveDimRenderingItem*>* a1, ::UnityEngine::Bounds& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::FiveDimRenderingItem*>*, ::UnityEngine::Bounds&, ::System::Int32&))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_257DBA76628F63BF_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_5_F5EDD6D7D90054D2(::System::Collections::Generic::List_1<::Class_1_929E979D9ED7139E*>* a1, ::UnityEngine::Bounds& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_929E979D9ED7139E*>*, ::UnityEngine::Bounds&, ::System::Int32&))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_F5EDD6D7D90054D2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_5_65F245AE21264E80(::UnityEngine::Bounds& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_65F245AE21264E80_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_22A8385B7DC493A0(::UnityEngine::Bounds& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_22A8385B7DC493A0_OFFSET))(this, a1);
	}

	::System::Void ResetLastUpdateCount()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_RESETLASTUPDATECOUNT_OFFSET))(this);
	}

	::System::Int32 EstimateUpdateItemCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ESTIMATEUPDATEITEMCOUNT_OFFSET))(this);
	}

	::System::Void UpdateInstancedItemBoundsIfNeeded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_UPDATEINSTANCEDITEMBOUNDSIFNEEDED_OFFSET))(this);
	}

	::System::Boolean CullInstancedItem()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_CULLINSTANCEDITEM_OFFSET))(this);
	}

	::System::Boolean Method_5_EA99B9F8B3C8C2A8(::UnityEngine::Bounds& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_EA99B9F8B3C8C2A8_OFFSET))(this, a1);
	}

	::System::Void AppendBoundsJobInputs(::System::Collections::Generic::List_1<::Class_1_225F859A4891E6CB_Struct_2_668FCC16C4E6026D>* a1, ::System::Int32 a2, ::Class_1_225F859A4891E6CB_FiveDimRenderingPanelBoundsGroup a3, ::Class_1_225F859A4891E6CB_Struct_2_E3CB1F13E62545A6& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_225F859A4891E6CB_Struct_2_668FCC16C4E6026D>*, ::System::Int32, ::Class_1_225F859A4891E6CB_FiveDimRenderingPanelBoundsGroup, ::Class_1_225F859A4891E6CB_Struct_2_E3CB1F13E62545A6&))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_APPENDBOUNDSJOBINPUTS_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void ApplyDynamicInstancedItemsLocalBounds(::UnityEngine::Bounds a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_APPLYDYNAMICINSTANCEDITEMSLOCALBOUNDS_OFFSET))(this, a1);
	}

	::System::Void ApplyStaticInstancedItemsLocalBounds(::UnityEngine::Bounds a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_APPLYSTATICINSTANCEDITEMSLOCALBOUNDS_OFFSET))(this, a1);
	}

	::System::Void ClearDynamicInstancedItemsLocalBounds()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_CLEARDYNAMICINSTANCEDITEMSLOCALBOUNDS_OFFSET))(this);
	}

	::System::Void ClearStaticInstancedItemsLocalBounds()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_CLEARSTATICINSTANCEDITEMSLOCALBOUNDS_OFFSET))(this);
	}

	::System::Void ApplyInstancedItemsLocalBounds()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_APPLYINSTANCEDITEMSLOCALBOUNDS_OFFSET))(this);
	}

	::System::Void CollectSerializedData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_COLLECTSERIALIZEDDATA_OFFSET))(this);
	}

	::System::Void BuildInstancesFromSerializedData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_BUILDINSTANCESFROMSERIALIZEDDATA_OFFSET))(this);
	}

	::System::Void Method_5_4DC99A0E8033A1A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_4DC99A0E8033A1A2_OFFSET))(this);
	}

	::System::Void OneClickCollectAndBuildAndDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONECLICKCOLLECTANDBUILDANDDISABLE_OFFSET))(this);
	}

	::System::Void ClearSerializedInstances()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_CLEARSERIALIZEDINSTANCES_OFFSET))(this);
	}

	::System::Void DeleteDisabledItems()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_DELETEDISABLEDITEMS_OFFSET))(this);
	}

	::System::Void Method_5_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_5_60E1F7F58CCF739F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_60E1F7F58CCF739F_1_OFFSET))(this);
	}

	::System::Void Method_5_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void RegisterRenderer(::UnityEngine::SkinnedMeshRenderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTERRENDERER_OFFSET))(this, a1);
	}

	::System::Void RegisterRenderer_1(::UnityEngine::MeshRenderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTERRENDERER_1_OFFSET))(this, a1);
	}

	::System::Void SetRendererDither(::UnityEngine::Renderer* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SETRENDERERDITHER_OFFSET))(this, a1, a2);
	}

	::System::Void MarkRendererDither(::UnityEngine::Renderer* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_MARKRENDERERDITHER_OFFSET))(this, a1, a2);
	}

	::System::Void UnRegisterRenderer(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_UNREGISTERRENDERER_OFFSET))(this, a1);
	}

	::RPG::Client::LiteInstancedItem::ItemPrototype* GetPrototypeRegisted(::FiveDimPrototype a1)
	{
		return ((::RPG::Client::LiteInstancedItem::ItemPrototype*(*)(::PVOID, ::FiveDimPrototype))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GETPROTOTYPEREGISTED_OFFSET))(this, a1);
	}

	::System::Boolean RegistItem(::FiveDimRenderingItem* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTITEM_OFFSET))(this, a1);
	}

	::System::Void UnRegisterItem(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_UNREGISTERITEM_OFFSET))(this, a1);
	}

	::System::Boolean RegisterItemCustomData(::FiveDimPrototype a1, ::FDRIMatStateOperation* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::FiveDimPrototype, ::FDRIMatStateOperation*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTERITEMCUSTOMDATA_OFFSET))(this, a1, a2);
	}

	::System::Boolean UnRegisterItemCustomData(::FiveDimPrototype a1, ::FDRIMatStateOperation* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::FiveDimPrototype, ::FDRIMatStateOperation*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_UNREGISTERITEMCUSTOMDATA_OFFSET))(this, a1, a2);
	}

	::System::Boolean RegisterItemDither(::FiveDimPrototype a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FiveDimPrototype))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTERITEMDITHER_OFFSET))(this, a1);
	}

	::System::Boolean UnRegisterItemDither(::FiveDimPrototype a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FiveDimPrototype))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_UNREGISTERITEMDITHER_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_C2D94B542F8BDBB0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_C2D94B542F8BDBB0_OFFSET))(this, a1);
	}

	::System::Void SetPrototypeMatParam(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::LiteInstancedItem::ItemPrototype* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SETPROTOTYPEMATPARAM_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}
};
