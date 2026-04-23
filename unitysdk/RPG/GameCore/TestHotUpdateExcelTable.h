#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TestHotUpdateRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19094750)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x190945A0)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19094270)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19094540)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19094920)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x190942F0)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19094960)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19094B40)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19094CC0)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19095020)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19094AA0)
#define RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19094A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TestHotUpdateExcelTable_TypeDefinitionIndex = 14480;

	class TestHotUpdateExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TestHotUpdateExcelTable_TypeDefinitionIndex)->GetStaticField(0xCDB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TestHotUpdateRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TestHotUpdateRow*>**)Il2CppClass::FromTypeDefinitionIndex(TestHotUpdateExcelTable_TypeDefinitionIndex)->GetStaticField(0xCDB8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TestHotUpdateExcelTable_TypeDefinitionIndex)->GetStaticField(0xCDC0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TestHotUpdateExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TestHotUpdateExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TestHotUpdateRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TestHotUpdateRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TestHotUpdateRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TestHotUpdateRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TestHotUpdateRow* GetData(::System::UInt32 AvatarID)
		{
			return ((::RPG::GameCore::TestHotUpdateRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_GETDATA_OFFSET))(AvatarID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TestHotUpdateRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TestHotUpdateRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
