#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcf_AcfDspBusInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_AcfDspBusLinkInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_AcfDspSettingInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_AcfDspSettingSnapshotInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_AcfInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_AisacGraphInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_AisacGraphType.h"
#include "unitysdk/CriWare/CriAtomExAcf_CategoryInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_GlobalAisacInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_SelectorInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_SelectorLabelInfo.h"
#include "unitysdk/CriWare/CriAtomEx_AisacControlInfo.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomExOutputPort; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_FINDBUSNAME_OFFSET UNITYSDK_OFFSET(0x164BA6C0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETACFINFOFROMACFDATA_OFFSET UNITYSDK_OFFSET(0x164BAEA0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETACFINFO_OFFSET UNITYSDK_OFFSET(0x164B9470)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETAISACCONTROLIDBYNAME_OFFSET UNITYSDK_OFFSET(0x164BAA50)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETAISACCONTROLINFO_OFFSET UNITYSDK_OFFSET(0x164B5BB0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETAISACCONTROLNAMEBYID_OFFSET UNITYSDK_OFFSET(0x164BAAF0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETCATEGORYINFOBYID_OFFSET UNITYSDK_OFFSET(0x164B8180)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETCATEGORYINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x164B7EB0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETCATEGORYINFO_OFFSET UNITYSDK_OFFSET(0x164B7A10)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPBUSINFORMATION_OFFSET UNITYSDK_OFFSET(0x164B6FA0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPBUSLINKINFORMATION_OFFSET UNITYSDK_OFFSET(0x164B7310)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPFXNAME_OFFSET UNITYSDK_OFFSET(0x164BAC30)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPFXPARAMETERS_OFFSET UNITYSDK_OFFSET(0x164BACF0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPFXTYPE_OFFSET UNITYSDK_OFFSET(0x164BABB0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGINFORMATION_OFFSET UNITYSDK_OFFSET(0x164B6320)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEXFROMACFDATA_OFFSET UNITYSDK_OFFSET(0x164B6040)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEX_OFFSET UNITYSDK_OFFSET(0x164B5F10)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGSNAPSHOTINFORMATION_OFFSET UNITYSDK_OFFSET(0x164B6A90)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETEXTRAWORKSIZEFORLOADACBDATA_OFFSET UNITYSDK_OFFSET(0x164BA9D0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACGRAPHINFO_OFFSET UNITYSDK_OFFSET(0x164B8EC0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x164B8B40)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACINFO_OFFSET UNITYSDK_OFFSET(0x164B8540)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACVALUE_OFFSET UNITYSDK_OFFSET(0x164B9190)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETMAXBUSESOFDSPBUSSETTINGSFROMACFDATA_OFFSET UNITYSDK_OFFSET(0x164BAFC0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETMAXBUSESOFDSPBUSSETTINGS_OFFSET UNITYSDK_OFFSET(0x164BA570)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMAISACCONTROLS_OFFSET UNITYSDK_OFFSET(0x164B5920)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMBUSESFROMACFDATA_OFFSET UNITYSDK_OFFSET(0x164BAF30)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMBUSES_OFFSET UNITYSDK_OFFSET(0x164BA470)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIESFROMACFDATA_OFFSET UNITYSDK_OFFSET(0x164BAD80)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIESPERPLAYBACKFROMACFDATA_OFFSET UNITYSDK_OFFSET(0x164BAE10)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIESPERPLAYBACK_OFFSET UNITYSDK_OFFSET(0x164B7760)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIES_OFFSET UNITYSDK_OFFSET(0x164B7660)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMDSPSETTINGSFROMACFDATA_OFFSET UNITYSDK_OFFSET(0x164B5DD0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMDSPSETTINGS_OFFSET UNITYSDK_OFFSET(0x164B5CC0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMGLOBALAISACS_OFFSET UNITYSDK_OFFSET(0x164B8290)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMSELECTORS_OFFSET UNITYSDK_OFFSET(0x164B9840)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETOUTPUTPORTHNBYNAME_OFFSET UNITYSDK_OFFSET(0x164BA8B0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETSELECTORINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x164B9AD0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETSELECTORINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x164B9F30)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETSELECTORLABELINFO_OFFSET UNITYSDK_OFFSET(0x164BA2E0)
#define CRIWARE_CRIATOMEXACF_FINDBUSNAME_OFFSET UNITYSDK_OFFSET(0x164BA5F0)
#define CRIWARE_CRIATOMEXACF_GETACFINFO_OFFSET UNITYSDK_OFFSET(0x164B9230)
#define CRIWARE_CRIATOMEXACF_GETAISACCONTROLINFO_OFFSET UNITYSDK_OFFSET(0x164B59A0)
#define CRIWARE_CRIATOMEXACF_GETCATEGORYINFOBYID_OFFSET UNITYSDK_OFFSET(0x164B7F50)
#define CRIWARE_CRIATOMEXACF_GETCATEGORYINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x164B77E0)
#define CRIWARE_CRIATOMEXACF_GETCATEGORYINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x164B7C70)
#define CRIWARE_CRIATOMEXACF_GETDSPBUSINFORMATION_OFFSET UNITYSDK_OFFSET(0x164B6E50)
#define CRIWARE_CRIATOMEXACF_GETDSPBUSLINKINFORMATION_OFFSET UNITYSDK_OFFSET(0x164B70F0)
#define CRIWARE_CRIATOMEXACF_GETDSPSETTINGINFORMATION_OFFSET UNITYSDK_OFFSET(0x164B60D0)
#define CRIWARE_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEX_1_OFFSET UNITYSDK_OFFSET(0x164B5F90)
#define CRIWARE_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEX_OFFSET UNITYSDK_OFFSET(0x164B5E60)
#define CRIWARE_CRIATOMEXACF_GETDSPSETTINGSNAPSHOTINFORMATION_OFFSET UNITYSDK_OFFSET(0x164B6850)
#define CRIWARE_CRIATOMEXACF_GETEXTRAWORKSIZEFORLOADACBDATA_OFFSET UNITYSDK_OFFSET(0x164BA950)
#define CRIWARE_CRIATOMEXACF_GETGLOBALAISACGRAPHINFO_OFFSET UNITYSDK_OFFSET(0x164B8BE0)
#define CRIWARE_CRIATOMEXACF_GETGLOBALAISACINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x164B8310)
#define CRIWARE_CRIATOMEXACF_GETGLOBALAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x164B8900)
#define CRIWARE_CRIATOMEXACF_GETGLOBALAISACVALUE_OFFSET UNITYSDK_OFFSET(0x164B9030)
#define CRIWARE_CRIATOMEXACF_GETMAXBUSESOFDSPBUSSETTINGS_OFFSET UNITYSDK_OFFSET(0x164BA4F0)
#define CRIWARE_CRIATOMEXACF_GETNUMAISACCONTROLS_OFFSET UNITYSDK_OFFSET(0x164B58A0)
#define CRIWARE_CRIATOMEXACF_GETNUMBUSES_OFFSET UNITYSDK_OFFSET(0x164BA3F0)
#define CRIWARE_CRIATOMEXACF_GETNUMCATEGORIESPERPLAYBACK_OFFSET UNITYSDK_OFFSET(0x164B76E0)
#define CRIWARE_CRIATOMEXACF_GETNUMCATEGORIES_OFFSET UNITYSDK_OFFSET(0x164B75E0)
#define CRIWARE_CRIATOMEXACF_GETNUMDSPSETTINGS_1_OFFSET UNITYSDK_OFFSET(0x164B5D40)
#define CRIWARE_CRIATOMEXACF_GETNUMDSPSETTINGS_OFFSET UNITYSDK_OFFSET(0x164B5C40)
#define CRIWARE_CRIATOMEXACF_GETNUMGLOBALAISACS_OFFSET UNITYSDK_OFFSET(0x164B8210)
#define CRIWARE_CRIATOMEXACF_GETNUMSELECTORS_OFFSET UNITYSDK_OFFSET(0x164B97C0)
#define CRIWARE_CRIATOMEXACF_GETOUTPUTPORT_OFFSET UNITYSDK_OFFSET(0x164BA790)
#define CRIWARE_CRIATOMEXACF_GETSELECTORINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x164B98C0)
#define CRIWARE_CRIATOMEXACF_GETSELECTORINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x164B9D00)
#define CRIWARE_CRIATOMEXACF_GETSELECTORLABELINFO_OFFSET UNITYSDK_OFFSET(0x164B9FD0)
#define CRIWARE_CRIATOMEXACF__CTOR_OFFSET UNITYSDK_OFFSET(0x164BB050)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_TypeDefinitionIndex = 38726;

	class CriAtomExAcf : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF__CTOR_OFFSET))(this);
		}

		static ::System::Int32 GetNumAisacControls()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMAISACCONTROLS_OFFSET))();
		}

		static ::System::Boolean GetAisacControlInfo(::System::UInt16 a1, ::CriWare::CriAtomEx_AisacControlInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomEx_AisacControlInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETAISACCONTROLINFO_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetNumDspSettings()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMDSPSETTINGS_OFFSET))();
		}

		static ::System::Int32 GetNumDspSettings_1(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMDSPSETTINGS_1_OFFSET))(a1, a2);
		}

		static ::System::String* GetDspSettingNameByIndex(::System::UInt16 a1)
		{
			return ((::System::String*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEX_OFFSET))(a1);
		}

		static ::System::String* GetDspSettingNameByIndex_1(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt16 a3)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEX_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetDspSettingInformation(::System::String* a1, ::CriWare::CriAtomExAcf_AcfDspSettingInfo& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExAcf_AcfDspSettingInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETDSPSETTINGINFORMATION_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetDspSettingSnapshotInformation(::System::UInt16 a1, ::CriWare::CriAtomExAcf_AcfDspSettingSnapshotInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcf_AcfDspSettingSnapshotInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETDSPSETTINGSNAPSHOTINFORMATION_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetDspBusInformation(::System::UInt16 a1, ::CriWare::CriAtomExAcf_AcfDspBusInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcf_AcfDspBusInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETDSPBUSINFORMATION_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetDspBusLinkInformation(::System::UInt16 a1, ::CriWare::CriAtomExAcf_AcfDspBusLinkInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcf_AcfDspBusLinkInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETDSPBUSLINKINFORMATION_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetNumCategories()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMCATEGORIES_OFFSET))();
		}

		static ::System::Int32 GetNumCategoriesPerPlayback()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMCATEGORIESPERPLAYBACK_OFFSET))();
		}

		static ::System::Boolean GetCategoryInfoByIndex(::System::UInt16 a1, ::CriWare::CriAtomExAcf_CategoryInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcf_CategoryInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETCATEGORYINFOBYINDEX_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetCategoryInfoByName(::System::String* a1, ::CriWare::CriAtomExAcf_CategoryInfo& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExAcf_CategoryInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETCATEGORYINFOBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetCategoryInfoById(::System::UInt32 a1, ::CriWare::CriAtomExAcf_CategoryInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::CriWare::CriAtomExAcf_CategoryInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETCATEGORYINFOBYID_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetNumGlobalAisacs()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMGLOBALAISACS_OFFSET))();
		}

		static ::System::Boolean GetGlobalAisacInfoByIndex(::System::UInt16 a1, ::CriWare::CriAtomExAcf_GlobalAisacInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcf_GlobalAisacInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETGLOBALAISACINFOBYINDEX_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetGlobalAisacInfoByName(::System::String* a1, ::CriWare::CriAtomExAcf_GlobalAisacInfo& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExAcf_GlobalAisacInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETGLOBALAISACINFOBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetGlobalAisacGraphInfo(::CriWare::CriAtomExAcf_GlobalAisacInfo a1, ::System::UInt16 a2, ::CriWare::CriAtomExAcf_AisacGraphInfo& a3)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExAcf_GlobalAisacInfo, ::System::UInt16, ::CriWare::CriAtomExAcf_AisacGraphInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETGLOBALAISACGRAPHINFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetGlobalAisacValue(::CriWare::CriAtomExAcf_GlobalAisacInfo a1, ::System::Single a2, ::CriWare::CriAtomExAcf_AisacGraphType a3, ::System::Single& a4)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExAcf_GlobalAisacInfo, ::System::Single, ::CriWare::CriAtomExAcf_AisacGraphType, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETGLOBALAISACVALUE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetAcfInfo(::CriWare::CriAtomExAcf_AcfInfo& a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExAcf_AcfInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETACFINFO_OFFSET))(a1);
		}

		static ::System::Int32 GetNumSelectors()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMSELECTORS_OFFSET))();
		}

		static ::System::Boolean GetSelectorInfoByIndex(::System::UInt16 a1, ::CriWare::CriAtomExAcf_SelectorInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcf_SelectorInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETSELECTORINFOBYINDEX_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetSelectorInfoByName(::System::String* a1, ::CriWare::CriAtomExAcf_SelectorInfo& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExAcf_SelectorInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETSELECTORINFOBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetSelectorLabelInfo(::CriWare::CriAtomExAcf_SelectorInfo a1, ::System::UInt16 a2, ::CriWare::CriAtomExAcf_SelectorLabelInfo& a3)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExAcf_SelectorInfo, ::System::UInt16, ::CriWare::CriAtomExAcf_SelectorLabelInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETSELECTORLABELINFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetNumBuses()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMBUSES_OFFSET))();
		}

		static ::System::Int32 GetMaxBusesOfDspBusSettings()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETMAXBUSESOFDSPBUSSETTINGS_OFFSET))();
		}

		static ::System::String* FindBusName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_FINDBUSNAME_OFFSET))(a1);
		}

		static ::CriWare::CriAtomExOutputPort* GetOutputPort(::System::String* a1)
		{
			return ((::CriWare::CriAtomExOutputPort*(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETOUTPUTPORT_OFFSET))(a1);
		}

		static ::System::Int32 GetExtraWorkSizeForLoadAcbData()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETEXTRAWORKSIZEFORLOADACBDATA_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetNumAisacControls()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMAISACCONTROLS_OFFSET))();
		}

		static ::System::Boolean criAtomExAcf_GetAisacControlInfo(::System::UInt16 a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETAISACCONTROLINFO_OFFSET))(a1, a2);
		}

		static ::System::UInt32 criAtomExAcf_GetAisacControlIdByName(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETAISACCONTROLIDBYNAME_OFFSET))(a1);
		}

		static ::System::String* criAtomExAcf_GetAisacControlNameById(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETAISACCONTROLNAMEBYID_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExAcf_GetNumDspSettings()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMDSPSETTINGS_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetNumDspSettingsFromAcfData(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMDSPSETTINGSFROMACFDATA_OFFSET))(a1, a2);
		}

		static ::System::IntPtr criAtomExAcf_GetDspSettingNameByIndex(::System::UInt16 a1)
		{
			return ((::System::IntPtr(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEX_OFFSET))(a1);
		}

		static ::System::IntPtr criAtomExAcf_GetDspSettingNameByIndexFromAcfData(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt16 a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEXFROMACFDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExAcf_GetDspSettingInformation(::System::String* a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGINFORMATION_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExAcf_GetDspSettingSnapshotInformation(::System::UInt16 a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGSNAPSHOTINFORMATION_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExAcf_GetDspBusInformation(::System::UInt16 a1, ::CriWare::CriAtomExAcf_AcfDspBusInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcf_AcfDspBusInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPBUSINFORMATION_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetDspFxType(::System::UInt16 a1)
		{
			return ((::System::Int32(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPFXTYPE_OFFSET))(a1);
		}

		static ::System::String* criAtomExAcf_GetDspFxName(::System::UInt16 a1)
		{
			return ((::System::String*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPFXNAME_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExAcf_GetDspFxParameters(::System::UInt16 a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPFXPARAMETERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExAcf_GetDspBusLinkInformation(::System::UInt16 a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPBUSLINKINFORMATION_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetNumCategoriesFromAcfData(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIESFROMACFDATA_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetNumCategories()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIES_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetNumCategoriesPerPlaybackFromAcfData(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIESPERPLAYBACKFROMACFDATA_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetNumCategoriesPerPlayback()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIESPERPLAYBACK_OFFSET))();
		}

		static ::System::Boolean criAtomExAcf_GetCategoryInfo(::System::UInt16 a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETCATEGORYINFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExAcf_GetCategoryInfoByName(::System::String* a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETCATEGORYINFOBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExAcf_GetCategoryInfoById(::System::UInt32 a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETCATEGORYINFOBYID_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetNumGlobalAisacs()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMGLOBALAISACS_OFFSET))();
		}

		static ::System::Boolean criAtomExAcf_GetGlobalAisacInfo(::System::UInt16 a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACINFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExAcf_GetGlobalAisacInfoByName(::System::String* a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACINFOBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExAcf_GetGlobalAisacGraphInfo(::System::IntPtr a1, ::System::UInt16 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACGRAPHINFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExAcf_GetGlobalAisacValue(::System::IntPtr a1, ::System::Single a2, ::CriWare::CriAtomExAcf_AisacGraphType a3, ::System::Single& a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Single, ::CriWare::CriAtomExAcf_AisacGraphType, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACVALUE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean criAtomExAcf_GetAcfInfo(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETACFINFO_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExAcf_GetAcfInfoFromAcfData(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETACFINFOFROMACFDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criAtomExAcf_GetNumSelectors()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMSELECTORS_OFFSET))();
		}

		static ::System::Boolean criAtomExAcf_GetSelectorInfoByIndex(::System::UInt16 a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETSELECTORINFOBYINDEX_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExAcf_GetSelectorInfoByName(::System::String* a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETSELECTORINFOBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExAcf_GetSelectorLabelInfo(::System::IntPtr a1, ::System::UInt16 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETSELECTORLABELINFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criAtomExAcf_GetNumBusesFromAcfData(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMBUSESFROMACFDATA_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetNumBuses()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMBUSES_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetMaxBusesOfDspBusSettingsFromAcfData(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETMAXBUSESOFDSPBUSSETTINGSFROMACFDATA_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetMaxBusesOfDspBusSettings()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETMAXBUSESOFDSPBUSSETTINGS_OFFSET))();
		}

		static ::System::String* criAtomExAcf_FindBusName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_FINDBUSNAME_OFFSET))(a1);
		}

		static ::System::IntPtr criAtomExAcf_GetOutputPortHnByName(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETOUTPUTPORTHNBYNAME_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExAcf_GetExtraWorkSizeForLoadAcbData()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETEXTRAWORKSIZEFORLOADACBDATA_OFFSET))();
		}
	};
}
