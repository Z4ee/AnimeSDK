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

#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x190DFB80)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x190DF9D0)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x190DF6A0)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x190DF970)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x190DFD70)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x190DF720)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x190DFDB0)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190DFF90)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x190E0110)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x190E0470)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x190DFEF0)
#define RPG_GAMECORE_UIPAGEBGMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x190DFE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIPageBGMExcelTable_TypeDefinitionIndex = 14611;

	class UIPageBGMExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(UIPageBGMExcelTable_TypeDefinitionIndex)->GetStaticField(0x110A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIPageBGMRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIPageBGMRow*>**)Il2CppClass::FromTypeDefinitionIndex(UIPageBGMExcelTable_TypeDefinitionIndex)->GetStaticField(0x110A8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIPageBGMExcelTable_TypeDefinitionIndex)->GetStaticField(0x110B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIPageBGMExcelTable_TypeDefinitionIndex)->GetStaticField(0x5340);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(UIPageBGMExcelTable_TypeDefinitionIndex)->GetStaticField(0x5341);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE__CCTOR_OFFSET))();
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

		static ::RPG::GameCore::UIPageBGMRow* GetData(::System::String* PagePrefab)
		{
			return ((::RPG::GameCore::UIPageBGMRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE_GETDATA_OFFSET))(PagePrefab);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::UIPageBGMRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::UIPageBGMRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPAGEBGMEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
