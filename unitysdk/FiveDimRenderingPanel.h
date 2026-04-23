#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FiveDimPrototype.h"
#include "unitysdk/FiveDimRenderingPanel_SerializedInstanceData.h"
#include "unitysdk/FiveDimRenderingPanel_Struct_2_D8BB6C9D99A08606.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_929E979D9ED7139E;
class Class_1_9CBC71DC5240DC00;
class Class_1_B044F82CBFAD3D4B;
class FDRIMatStateOperation;
class FiveDimRenderingItem;
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define FIVEDIMRENDERINGPANEL_BUILDINSTANCESFROMSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0x11889330)
#define FIVEDIMRENDERINGPANEL_CLEARSERIALIZEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x1188CD40)
#define FIVEDIMRENDERINGPANEL_COLLECTSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0x1188C340)
#define FIVEDIMRENDERINGPANEL_DELETEDISABLEDITEMS_OFFSET UNITYSDK_OFFSET(0x1188CF50)
#define FIVEDIMRENDERINGPANEL_GETPROTOTYPEREGISTED_OFFSET UNITYSDK_OFFSET(0x11888210)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDSCENTER_OFFSET UNITYSDK_OFFSET(0x11888D00)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDSSIZE_OFFSET UNITYSDK_OFFSET(0x11888DD0)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x11888B40)
#define FIVEDIMRENDERINGPANEL_GET_CLIPSPACE_OFFSET UNITYSDK_OFFSET(0x11888A50)
#define FIVEDIMRENDERINGPANEL_GET_DITHERALPHA_OFFSET UNITYSDK_OFFSET(0x11888BE0)
#define FIVEDIMRENDERINGPANEL_GET_HASBOUNDCLIP_OFFSET UNITYSDK_OFFSET(0x11888A40)
#define FIVEDIMRENDERINGPANEL_GET_INVERTBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x11888EA0)
#define FIVEDIMRENDERINGPANEL_GET_ITEMCUSTOMHIZTEST_OFFSET UNITYSDK_OFFSET(0x11888FE0)
#define FIVEDIMRENDERINGPANEL_GET_LIGHTDIR_OFFSET UNITYSDK_OFFSET(0x11888F10)
#define FIVEDIMRENDERINGPANEL_GET_USEBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x11888C90)
#define FIVEDIMRENDERINGPANEL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1188A120)
#define FIVEDIMRENDERINGPANEL_MARKRENDERERDITHER_OFFSET UNITYSDK_OFFSET(0x1188D680)
#define FIVEDIMRENDERINGPANEL_METHOD_5_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0x1188CA20)
#define FIVEDIMRENDERINGPANEL_METHOD_5_159CB55E631AFCB9_OFFSET UNITYSDK_OFFSET(0x1188A320)
#define FIVEDIMRENDERINGPANEL_METHOD_5_348674E9BAD074BA_OFFSET UNITYSDK_OFFSET(0x1188BFF0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x1188B010)
#define FIVEDIMRENDERINGPANEL_METHOD_5_47680E2642F37A1B_OFFSET UNITYSDK_OFFSET(0x1188A710)
#define FIVEDIMRENDERINGPANEL_METHOD_5_55B783EC124E0B75_OFFSET UNITYSDK_OFFSET(0x1188B740)
#define FIVEDIMRENDERINGPANEL_METHOD_5_60E1F7F58CCF739F_1_OFFSET UNITYSDK_OFFSET(0x1188CE00)
#define FIVEDIMRENDERINGPANEL_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1188CBF0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_649C3F0ABF636A99_OFFSET UNITYSDK_OFFSET(0x1188A910)
#define FIVEDIMRENDERINGPANEL_METHOD_5_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x1188B510)
#define FIVEDIMRENDERINGPANEL_METHOD_5_8AEB5733A19A9052_OFFSET UNITYSDK_OFFSET(0x1188BCE0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x11889B10)
#define FIVEDIMRENDERINGPANEL_METHOD_5_92DABAB408A309F5_OFFSET UNITYSDK_OFFSET(0x1188B2B0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_9A6D1D47E588E644_OFFSET UNITYSDK_OFFSET(0x1188B9C0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x1188BC60)
#define FIVEDIMRENDERINGPANEL_METHOD_5_A74F1CF3E25BC135_OFFSET UNITYSDK_OFFSET(0x1188ADF0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1188A220)
#define FIVEDIMRENDERINGPANEL_METHOD_5_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x118890F0)
#define FIVEDIMRENDERINGPANEL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1188A2D0)
#define FIVEDIMRENDERINGPANEL_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1188DD40)
#define FIVEDIMRENDERINGPANEL_ONECLICKCOLLECTANDBUILDANDDISABLE_OFFSET UNITYSDK_OFFSET(0x1188CB90)
#define FIVEDIMRENDERINGPANEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x118890A0)
#define FIVEDIMRENDERINGPANEL_PREPARE_OFFSET UNITYSDK_OFFSET(0x11889190)
#define FIVEDIMRENDERINGPANEL_REGISTERITEMCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1188D910)
#define FIVEDIMRENDERINGPANEL_REGISTERITEMDITHER_OFFSET UNITYSDK_OFFSET(0x11887A90)
#define FIVEDIMRENDERINGPANEL_REGISTERRENDERER_1_OFFSET UNITYSDK_OFFSET(0x1188D390)
#define FIVEDIMRENDERINGPANEL_REGISTERRENDERER_OFFSET UNITYSDK_OFFSET(0x1188D220)
#define FIVEDIMRENDERINGPANEL_REGISTITEM_OFFSET UNITYSDK_OFFSET(0x118864D0)
#define FIVEDIMRENDERINGPANEL_SETPROTOTYPEMATPARAM_OFFSET UNITYSDK_OFFSET(0x11888320)
#define FIVEDIMRENDERINGPANEL_SETRENDERERDITHER_OFFSET UNITYSDK_OFFSET(0x1188D500)
#define FIVEDIMRENDERINGPANEL_SET_BOUNDSCENTER_OFFSET UNITYSDK_OFFSET(0x11888D20)
#define FIVEDIMRENDERINGPANEL_SET_BOUNDSSIZE_OFFSET UNITYSDK_OFFSET(0x11888DF0)
#define FIVEDIMRENDERINGPANEL_SET_DITHERALPHA_OFFSET UNITYSDK_OFFSET(0x11888BF0)
#define FIVEDIMRENDERINGPANEL_SET_INVERTBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x11888EB0)
#define FIVEDIMRENDERINGPANEL_SET_ITEMCUSTOMHIZTEST_OFFSET UNITYSDK_OFFSET(0x11889040)
#define FIVEDIMRENDERINGPANEL_SET_LIGHTDIR_OFFSET UNITYSDK_OFFSET(0x11888F30)
#define FIVEDIMRENDERINGPANEL_SET_USEBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x11888CA0)
#define FIVEDIMRENDERINGPANEL_TICKRENDER_OFFSET UNITYSDK_OFFSET(0x1188A1B0)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEMCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1188DB00)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEMDITHER_OFFSET UNITYSDK_OFFSET(0x11887C30)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEM_OFFSET UNITYSDK_OFFSET(0x11886DA0)
#define FIVEDIMRENDERINGPANEL_UNREGISTERRENDERER_OFFSET UNITYSDK_OFFSET(0x1188D7D0)
#define FIVEDIMRENDERINGPANEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1188E350)
#define FIVEDIMRENDERINGPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1188E070)

inline static constexpr unsigned int FiveDimRenderingPanel_TypeDefinitionIndex = 43923;

class FiveDimRenderingPanel : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_Field_5_31()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x6B50);
	}
	static ::System::Int32* StaticGet_Field_5_35()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x6B54);
	}
	static ::System::Int32* StaticGet_Field_5_33()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x6B58);
	}
	static ::System::Int32* StaticGet_Field_5_30()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x6B5C);
	}
	static ::System::Int32* StaticGet_Field_5_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x6B60);
	}
	static ::System::Int32* StaticGet_Field_5_37()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x6B64);
	}
	static ::System::Int32* StaticGet_Field_5_36()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x6B68);
	}
	static ::System::Int32* StaticGet_Field_5_38()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x6B6C);
	}
	static ::System::Int32* StaticGet_Field_5_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x6B70);
	}
	static ::System::Int32* StaticGet_Field_5_34()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x6B74);
	}
	static ::System::Int32* StaticGet_Field_5_32()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0x6B78);
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
	::Class_1_B044F82CBFAD3D4B* Field_5_11; // 0x60
	::System::Collections::Generic::List_1<::RPG::Client::LiteInstancedItem::ItemPrototype*>* Field_5_12; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_5_13; // 0x70
	::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* Field_5_14; // 0x78
	::System::Collections::Generic::List_1<::System::UInt64>* Field_5_15; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FiveDimRenderingPanel_Struct_2_D8BB6C9D99A08606>* Field_5_16; // 0x88
	::System::Boolean externalDrivenRender; // 0x90
	::System::Boolean externalDrivenUpdate; // 0x91
	::System::Boolean panelPosDirty; // 0x92
	::System::Boolean clipDirty; // 0x93
	::System::Boolean lightingDirty; // 0x94
	::System::Boolean RegisterChildWhenEnable; // 0x95
	::UnityEngine::Transform* Field_5_23; // 0x98
	::System::Boolean useSerializedData; // 0xA0
	::System::Collections::Generic::List_1<::RPG::Client::LiteInstancedItem::ItemPrototype*>* serializedPrototypes; // 0xA8
	::System::Collections::Generic::List_1<::FiveDimRenderingPanel_SerializedInstanceData>* serializedInstances; // 0xB0
	::System::Collections::Generic::List_1<::Class_1_929E979D9ED7139E*>* Field_5_27; // 0xB8

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

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONENABLE_OFFSET))(this);
	}

	::System::Void Method_5_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_LATEUPDATE_OFFSET))(this);
	}

	::System::Void TickRender()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_TICKRENDER_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_5_159CB55E631AFCB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_159CB55E631AFCB9_OFFSET))(this);
	}

	::System::Void Prepare()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_PREPARE_OFFSET))(this);
	}

	::System::Void Method_5_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_5_47680E2642F37A1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_47680E2642F37A1B_OFFSET))(this);
	}

	::System::Void Method_5_A74F1CF3E25BC135()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_A74F1CF3E25BC135_OFFSET))(this);
	}

	::System::Void Method_5_92DABAB408A309F5(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_92DABAB408A309F5_OFFSET))(this, a1);
	}

	::System::Void Method_5_6DFEF4918C679AF0(::Class_1_9CBC71DC5240DC00* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CBC71DC5240DC00*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_5_55B783EC124E0B75(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_55B783EC124E0B75_OFFSET))(this, a1);
	}

	::System::Void Method_5_9A6D1D47E588E644(::Class_1_9CBC71DC5240DC00* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CBC71DC5240DC00*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_9A6D1D47E588E644_OFFSET))(this, a1);
	}

	::System::Void Method_5_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void Method_5_8AEB5733A19A9052(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_8AEB5733A19A9052_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_348674E9BAD074BA(::Class_1_9CBC71DC5240DC00* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CBC71DC5240DC00*, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_348674E9BAD074BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_649C3F0ABF636A99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_649C3F0ABF636A99_OFFSET))(this);
	}

	::System::Void CollectSerializedData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_COLLECTSERIALIZEDDATA_OFFSET))(this);
	}

	::System::Void BuildInstancesFromSerializedData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_BUILDINSTANCESFROMSERIALIZEDDATA_OFFSET))(this);
	}

	::System::Void Method_5_14014646206E49EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_14014646206E49EF_OFFSET))(this);
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

	::System::Boolean Method_5_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Void SetPrototypeMatParam(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::LiteInstancedItem::ItemPrototype* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SETPROTOTYPEMATPARAM_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}
};
