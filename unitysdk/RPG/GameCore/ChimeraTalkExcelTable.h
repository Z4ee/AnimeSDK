#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraTalkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHIMERATALKEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x170AB760)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x170AB5B0)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x170AB280)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x170AB550)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x170AB930)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x170AB300)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x170AB970)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170ABB50)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x170ABD70)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x170AC0D0)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x170ABAB0)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x170ABA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalkExcelTable_TypeDefinitionIndex = 11896;

	class ChimeraTalkExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTalkRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTalkRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x27430);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x27438);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x27440);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChimeraTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0xCD50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChimeraTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0xCD51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTalkRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTalkRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTalkRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTalkRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraTalkRow* GetData(::System::UInt32 TalkID)
		{
			return ((::RPG::GameCore::ChimeraTalkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE_GETDATA_OFFSET))(TalkID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChimeraTalkRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraTalkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
