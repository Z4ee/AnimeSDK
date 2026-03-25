#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialGuideGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x178D9CE0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x178D9B60)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x178D9830)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x178D9B00)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x178D9EB0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x178D98B0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x178D9EF0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x178DA0D0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x178DA500)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x178DA810)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x178DA030)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x178D9F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideGroupExcelTable_TypeDefinitionIndex = 14124;

	class TutorialGuideGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E5B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E5B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E5C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x7C00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x7C01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TutorialGuideGroupRow* GetData(::System::UInt32 GroupID)
		{
			return ((::RPG::GameCore::TutorialGuideGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_GETDATA_OFFSET))(GroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TutorialGuideGroupRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TutorialGuideGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
