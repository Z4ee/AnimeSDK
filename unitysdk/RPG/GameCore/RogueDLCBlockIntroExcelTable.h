#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCBlockIntroRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175F7D90)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175F7BE0)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175F78B0)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175F7B80)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175F7F60)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x175F7930)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175F7FA0)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175F8180)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x175F8580)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x175F88E0)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175F80E0)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175F8040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBlockIntroExcelTable_TypeDefinitionIndex = 13514;

	class RogueDLCBlockIntroExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockIntroExcelTable_TypeDefinitionIndex)->GetStaticField(0x34BC0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockIntroExcelTable_TypeDefinitionIndex)->GetStaticField(0x34BC8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockIntroRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockIntroRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockIntroExcelTable_TypeDefinitionIndex)->GetStaticField(0x34BD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockIntroExcelTable_TypeDefinitionIndex)->GetStaticField(0x107B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockIntroExcelTable_TypeDefinitionIndex)->GetStaticField(0x107B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockIntroRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockIntroRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockIntroRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockIntroRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCBlockIntroRow* GetData(::System::UInt32 BlockIntroID)
		{
			return ((::RPG::GameCore::RogueDLCBlockIntroRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_GETDATA_OFFSET))(BlockIntroID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCBlockIntroRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCBlockIntroRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
