#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MessageLinkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18AE6B90)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18AE69E0)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18AE66B0)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18AE6980)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18AE6D10)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18AE6730)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18AE6D50)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AE6F30)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18AE71E0)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AE74F0)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18AE6E90)
#define RPG_GAMECORE_MESSAGELINKEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18AE6DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageLinkExcelTable_TypeDefinitionIndex = 13670;

	class MessageLinkExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageLinkRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageLinkRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C320);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C328);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C330);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0xD360);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MessageLinkExcelTable_TypeDefinitionIndex)->GetStaticField(0xD361);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageLinkRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageLinkRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageLinkRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageLinkRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageLinkRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MessageLinkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageLinkRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageLinkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
