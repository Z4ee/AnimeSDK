#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialGuideTalkDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x178DC1A0)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x178DBFF0)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x178DBCC0)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x178DBF90)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x178DC370)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x178DBD40)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x178DC3B0)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x178DC590)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x178DC7A0)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x178DCB00)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x178DC4F0)
#define RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x178DC450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideTalkDataExcelTable_TypeDefinitionIndex = 14126;

	class TutorialGuideTalkDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideTalkDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E610);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideTalkDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideTalkDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideTalkDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E618);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideTalkDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E620);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideTalkDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x7C20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideTalkDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x7C21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideTalkDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideTalkDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideTalkDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialGuideTalkDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TutorialGuideTalkDataRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::TutorialGuideTalkDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TutorialGuideTalkDataRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TutorialGuideTalkDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKDATAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
