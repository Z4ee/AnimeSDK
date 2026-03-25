#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MessageContactRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGECONTACTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x173CFCD0)
#define RPG_GAMECORE_MESSAGECONTACTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173CFB20)
#define RPG_GAMECORE_MESSAGECONTACTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x173CF7F0)
#define RPG_GAMECORE_MESSAGECONTACTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x173CFAC0)
#define RPG_GAMECORE_MESSAGECONTACTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x173CFE50)
#define RPG_GAMECORE_MESSAGECONTACTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173CF870)
#define RPG_GAMECORE_MESSAGECONTACTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x173CFE90)
#define RPG_GAMECORE_MESSAGECONTACTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173D0070)
#define RPG_GAMECORE_MESSAGECONTACTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x173D0370)
#define RPG_GAMECORE_MESSAGECONTACTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173D0680)
#define RPG_GAMECORE_MESSAGECONTACTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173CFFD0)
#define RPG_GAMECORE_MESSAGECONTACTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x173CFF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageContactExcelTable_TypeDefinitionIndex = 13194;

	class MessageContactExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageContactExcelTable_TypeDefinitionIndex)->GetStaticField(0x29580);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageContactExcelTable_TypeDefinitionIndex)->GetStaticField(0x29588);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageContactExcelTable_TypeDefinitionIndex)->GetStaticField(0x29590);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageContactExcelTable_TypeDefinitionIndex)->GetStaticField(0xD9E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MessageContactExcelTable_TypeDefinitionIndex)->GetStaticField(0xD9E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageContactRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageContactRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MessageContactRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageContactRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageContactRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
