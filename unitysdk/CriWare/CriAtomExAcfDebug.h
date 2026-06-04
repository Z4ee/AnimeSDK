#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_AisacControlInfo.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_AisacControlInfoForMarshaling.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_CategoryInfo.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_CategoryInfoForMarshaling.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_DspBusInfo.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_DspBusInfoForMarshaling.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_GlobalAisacInfo.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_GlobalAisacInfoForMarshaling.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_SelectorInfo.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_SelectorInfoForMarshaling.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_SelectorLabelInfo.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_SelectorLabelInfoForMarshaling.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETAISACCONTROLIDBYNAME_OFFSET UNITYSDK_OFFSET(0x14698A80)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETAISACCONTROLINFO_OFFSET UNITYSDK_OFFSET(0x14698910)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETAISACCONTROLNAMEBYID_OFFSET UNITYSDK_OFFSET(0x14698BD0)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETCATEGORYINFOBYID_OFFSET UNITYSDK_OFFSET(0x14698240)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETCATEGORYINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x146980C0)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETCATEGORYINFO_OFFSET UNITYSDK_OFFSET(0x14697EE0)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETDSPBUSINFORMATION_OFFSET UNITYSDK_OFFSET(0x14698590)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETGLOBALAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x14699020)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETGLOBALAISACINFO_OFFSET UNITYSDK_OFFSET(0x14698E30)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMAISACCONTROLS_OFFSET UNITYSDK_OFFSET(0x146987D0)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMBUSES_OFFSET UNITYSDK_OFFSET(0x14698350)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMCATEGORIES_OFFSET UNITYSDK_OFFSET(0x14697D80)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMGLOBALAISACS_OFFSET UNITYSDK_OFFSET(0x14698CD0)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMSELECTORS_OFFSET UNITYSDK_OFFSET(0x14699140)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETSELECTORINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x14699290)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETSELECTORINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x14699450)
#define CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETSELECTORLABELINFO_OFFSET UNITYSDK_OFFSET(0x146995F0)
#define CRIWARE_CRIATOMEXACFDEBUG_GETAISACCONTROLIDBYNAME_OFFSET UNITYSDK_OFFSET(0x146989E0)
#define CRIWARE_CRIATOMEXACFDEBUG_GETAISACCONTROLINFO_OFFSET UNITYSDK_OFFSET(0x14698850)
#define CRIWARE_CRIATOMEXACFDEBUG_GETAISACCONTROLNAMEBYID_OFFSET UNITYSDK_OFFSET(0x14698B20)
#define CRIWARE_CRIATOMEXACFDEBUG_GETCATEGORYINFOBYID_OFFSET UNITYSDK_OFFSET(0x14698160)
#define CRIWARE_CRIATOMEXACFDEBUG_GETCATEGORYINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x14697E00)
#define CRIWARE_CRIATOMEXACFDEBUG_GETCATEGORYINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x14697FC0)
#define CRIWARE_CRIATOMEXACFDEBUG_GETDSPBUSINFORMATION_OFFSET UNITYSDK_OFFSET(0x146983D0)
#define CRIWARE_CRIATOMEXACFDEBUG_GETGLOBALAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x14698F20)
#define CRIWARE_CRIATOMEXACFDEBUG_GETGLOBALAISACINFO_OFFSET UNITYSDK_OFFSET(0x14698D50)
#define CRIWARE_CRIATOMEXACFDEBUG_GETNUMAISACCONTROLS_OFFSET UNITYSDK_OFFSET(0x14698750)
#define CRIWARE_CRIATOMEXACFDEBUG_GETNUMBUSES_OFFSET UNITYSDK_OFFSET(0x146982D0)
#define CRIWARE_CRIATOMEXACFDEBUG_GETNUMCATEGORIES_OFFSET UNITYSDK_OFFSET(0x14697D00)
#define CRIWARE_CRIATOMEXACFDEBUG_GETNUMGLOBALAISACS_OFFSET UNITYSDK_OFFSET(0x14698C50)
#define CRIWARE_CRIATOMEXACFDEBUG_GETNUMSELECTORS_OFFSET UNITYSDK_OFFSET(0x146990C0)
#define CRIWARE_CRIATOMEXACFDEBUG_GETSELECTORINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x146991C0)
#define CRIWARE_CRIATOMEXACFDEBUG_GETSELECTORINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x14699370)
#define CRIWARE_CRIATOMEXACFDEBUG_GETSELECTORLABELINFO_OFFSET UNITYSDK_OFFSET(0x146994F0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcfDebug_TypeDefinitionIndex = 37215;

	class CriAtomExAcfDebug : public ::System::Object
	{
	public:
		static ::System::Int32 GetNumCategories()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETNUMCATEGORIES_OFFSET))();
		}

		static ::System::Boolean GetCategoryInfoByIndex(::System::UInt16 a1, ::CriWare::CriAtomExAcfDebug_CategoryInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_CategoryInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETCATEGORYINFOBYINDEX_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetCategoryInfoByName(::System::String* a1, ::CriWare::CriAtomExAcfDebug_CategoryInfo& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExAcfDebug_CategoryInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETCATEGORYINFOBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetCategoryInfoById(::System::UInt32 a1, ::CriWare::CriAtomExAcfDebug_CategoryInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::CriWare::CriAtomExAcfDebug_CategoryInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETCATEGORYINFOBYID_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetNumBuses()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETNUMBUSES_OFFSET))();
		}

		static ::System::Boolean GetDspBusInformation(::System::UInt16 a1, ::CriWare::CriAtomExAcfDebug_DspBusInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_DspBusInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETDSPBUSINFORMATION_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetNumAisacControls()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETNUMAISACCONTROLS_OFFSET))();
		}

		static ::System::Boolean GetAisacControlInfo(::System::UInt16 a1, ::CriWare::CriAtomExAcfDebug_AisacControlInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_AisacControlInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETAISACCONTROLINFO_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetAisacControlIdByName(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETAISACCONTROLIDBYNAME_OFFSET))(a1);
		}

		static ::System::String* GetAisacControlNameById(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETAISACCONTROLNAMEBYID_OFFSET))(a1);
		}

		static ::System::Int32 GetNumGlobalAisacs()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETNUMGLOBALAISACS_OFFSET))();
		}

		static ::System::Boolean GetGlobalAisacInfo(::System::UInt16 a1, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETGLOBALAISACINFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetGlobalAisacInfoByName(::System::String* a1, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfo& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETGLOBALAISACINFOBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetNumSelectors()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETNUMSELECTORS_OFFSET))();
		}

		static ::System::Boolean GetSelectorInfoByIndex(::System::UInt16 a1, ::CriWare::CriAtomExAcfDebug_SelectorInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_SelectorInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETSELECTORINFOBYINDEX_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetSelectorInfoByName(::System::String* a1, ::CriWare::CriAtomExAcfDebug_SelectorInfo& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExAcfDebug_SelectorInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETSELECTORINFOBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetSelectorLabelInfo(::CriWare::CriAtomExAcfDebug_SelectorInfo& a1, ::System::UInt16 a2, ::CriWare::CriAtomExAcfDebug_SelectorLabelInfo& a3)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExAcfDebug_SelectorInfo&, ::System::UInt16, ::CriWare::CriAtomExAcfDebug_SelectorLabelInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_GETSELECTORLABELINFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criAtomExAcf_GetNumCategories()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMCATEGORIES_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetCategoryInfo(::System::UInt16 a1, ::CriWare::CriAtomExAcfDebug_CategoryInfoForMarshaling& a2)
		{
			return ((::System::Int32(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_CategoryInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETCATEGORYINFO_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetCategoryInfoByName(::System::String* a1, ::CriWare::CriAtomExAcfDebug_CategoryInfoForMarshaling& a2)
		{
			return ((::System::Int32(*)(::System::String*, ::CriWare::CriAtomExAcfDebug_CategoryInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETCATEGORYINFOBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetCategoryInfoById(::System::UInt32 a1, ::CriWare::CriAtomExAcfDebug_CategoryInfoForMarshaling& a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::CriWare::CriAtomExAcfDebug_CategoryInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETCATEGORYINFOBYID_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetNumBuses()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMBUSES_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetDspBusInformation(::System::UInt16 a1, ::CriWare::CriAtomExAcfDebug_DspBusInfoForMarshaling& a2)
		{
			return ((::System::Int32(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_DspBusInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETDSPBUSINFORMATION_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetNumAisacControls()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMAISACCONTROLS_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetAisacControlInfo(::System::UInt16 a1, ::CriWare::CriAtomExAcfDebug_AisacControlInfoForMarshaling& a2)
		{
			return ((::System::Int32(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_AisacControlInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETAISACCONTROLINFO_OFFSET))(a1, a2);
		}

		static ::System::UInt32 criAtomExAcf_GetAisacControlIdByName(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETAISACCONTROLIDBYNAME_OFFSET))(a1);
		}

		static ::System::IntPtr criAtomExAcf_GetAisacControlNameById(::System::UInt32 a1)
		{
			return ((::System::IntPtr(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETAISACCONTROLNAMEBYID_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExAcf_GetNumGlobalAisacs()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMGLOBALAISACS_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetGlobalAisacInfo(::System::UInt16 a1, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfoForMarshaling& a2)
		{
			return ((::System::Int32(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETGLOBALAISACINFO_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetGlobalAisacInfoByName(::System::String* a1, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfoForMarshaling& a2)
		{
			return ((::System::Int32(*)(::System::String*, ::CriWare::CriAtomExAcfDebug_GlobalAisacInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETGLOBALAISACINFOBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetNumSelectors()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETNUMSELECTORS_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetSelectorInfoByIndex(::System::UInt16 a1, ::CriWare::CriAtomExAcfDebug_SelectorInfoForMarshaling& a2)
		{
			return ((::System::Int32(*)(::System::UInt16, ::CriWare::CriAtomExAcfDebug_SelectorInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETSELECTORINFOBYINDEX_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetSelectorInfoByName(::System::String* a1, ::CriWare::CriAtomExAcfDebug_SelectorInfoForMarshaling& a2)
		{
			return ((::System::Int32(*)(::System::String*, ::CriWare::CriAtomExAcfDebug_SelectorInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETSELECTORINFOBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcf_GetSelectorLabelInfo(::CriWare::CriAtomExAcfDebug_SelectorInfoForMarshaling& a1, ::System::UInt16 a2, ::CriWare::CriAtomExAcfDebug_SelectorLabelInfoForMarshaling& a3)
		{
			return ((::System::Int32(*)(::CriWare::CriAtomExAcfDebug_SelectorInfoForMarshaling&, ::System::UInt16, ::CriWare::CriAtomExAcfDebug_SelectorLabelInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_CRIATOMEXACF_GETSELECTORLABELINFO_OFFSET))(a1, a2, a3);
		}
	};
}
