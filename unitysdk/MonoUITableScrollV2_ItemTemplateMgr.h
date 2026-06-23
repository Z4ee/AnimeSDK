#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FC34C7AD15A42B48.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2_TemplateData;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_CLEAR_OFFSET UNITYSDK_OFFSET(0x1384F590)
#define MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_CREATESCROLLVIEWITEM_OFFSET UNITYSDK_OFFSET(0x1384ECA0)
#define MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET UNITYSDK_OFFSET(0x1384F350)
#define MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_GETTEMPLATEDATA_OFFSET UNITYSDK_OFFSET(0x1384F010)
#define MONOUITABLESCROLLV2_ITEMTEMPLATEMGR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1384EC00)
#define MONOUITABLESCROLLV2_ITEMTEMPLATEMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x1384EB70)

inline static constexpr unsigned int MonoUITableScrollV2_ItemTemplateMgr_TypeDefinitionIndex = 69971;

class MonoUITableScrollV2_ItemTemplateMgr : public ::System::Object
{
public:
	::System::Func_2<::System::Int32, ::MoleMole::ScrollViewItemWidgetController*>* _templateCreateFuncByIndex; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_FC34C7AD15A42B48, ::MonoUITableScrollV2_TemplateData*>* _templateDataDic; // 0x18
	::System::Collections::Generic::List_1<::MonoUITableScrollV2_TemplateData*>* _templateDatas; // 0x20
	::System::Func_2<::System::Int32, ::System::Int32>* _getTemplateIndexFromData; // 0x28
	::System::Func_2<::System::Int32, ::Struct_2_FC34C7AD15A42B48>* _getTemplateCacheKey; // 0x30

	::System::Void _ctor(::System::Func_2<::System::Int32, ::System::Int32>* getTemplateIndexFromData, ::System::Collections::Generic::List_1<::MonoUITableScrollV2_TemplateData*>* templateDatas)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::List_1<::MonoUITableScrollV2_TemplateData*>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_ITEMTEMPLATEMGR__CTOR_OFFSET))(this, getTemplateIndexFromData, templateDatas);
	}

	::System::Void _ctor_1(::System::Func_2<::System::Int32, ::Struct_2_FC34C7AD15A42B48>* getTemplateCacheKey, ::System::Func_2<::System::Int32, ::MoleMole::ScrollViewItemWidgetController*>* templateCreateFunc)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::Struct_2_FC34C7AD15A42B48>*, ::System::Func_2<::System::Int32, ::MoleMole::ScrollViewItemWidgetController*>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_ITEMTEMPLATEMGR__CTOR_1_OFFSET))(this, getTemplateCacheKey, templateCreateFunc);
	}

	::MoleMole::ScrollViewItemWidgetController* CreateScrollViewItem(::System::Int32 dataIndex)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_CREATESCROLLVIEWITEM_OFFSET))(this, dataIndex);
	}

	::MonoUITableScrollV2_TemplateData* GetTemplateData(::System::Int32 dataIndex)
	{
		return ((::MonoUITableScrollV2_TemplateData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_GETTEMPLATEDATA_OFFSET))(this, dataIndex);
	}

	::System::Void FlushAllTempRecycleItemToRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_FLUSHALLTEMPRECYCLEITEMTORECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_ITEMTEMPLATEMGR_CLEAR_OFFSET))(this);
	}
};
