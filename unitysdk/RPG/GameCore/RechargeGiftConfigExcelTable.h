#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RechargeGiftConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18C90300)
#define RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18C90110)
#define RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18C8FC90)
#define RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18C90090)
#define RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18C90530)
#define RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C8FDA0)
#define RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18C90590)
#define RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C90810)
#define RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18C90A50)
#define RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C90DB0)
#define RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18C90740)
#define RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C90670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RechargeGiftConfigExcelTable_TypeDefinitionIndex = 13824;

	class RechargeGiftConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33A50);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33A58);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeGiftConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeGiftConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33A60);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC990);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RechargeGiftConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC991);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeGiftConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeGiftConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeGiftConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeGiftConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RechargeGiftConfigRow* GetData(::System::UInt32 GiftType)
		{
			return ((::RPG::GameCore::RechargeGiftConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE_GETDATA_OFFSET))(GiftType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RechargeGiftConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RechargeGiftConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
