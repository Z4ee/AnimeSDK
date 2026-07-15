#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class UIPageBGMRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B87D9E0)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B87D870)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B87D790)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B87D810)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B87CE60)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B87CEA0)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B87D0D0)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B87D2A0)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B87D420)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B87DB90)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B87D200)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B87D160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIPageBGMExcelTable_TypeDefinitionIndex = 14794;

	class UIPageBGMExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIPageBGMRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIPageBGMRow*>**)Il2CppClass::FromTypeDefinitionIndex(UIPageBGMExcelTable_TypeDefinitionIndex)->GetStaticField(0xF360);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIPageBGMExcelTable_TypeDefinitionIndex)->GetStaticField(0xF368);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(UIPageBGMExcelTable_TypeDefinitionIndex)->GetStaticField(0xF370);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(UIPageBGMExcelTable_TypeDefinitionIndex)->GetStaticField(0x5220);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPageBGMExcelTable_TypeDefinitionIndex)->GetStaticField(0x5221);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::UIPageBGMRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::UIPageBGMRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIPageBGMRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIPageBGMRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIPageBGMRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIPageBGMRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::UIPageBGMRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::UIPageBGMRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
