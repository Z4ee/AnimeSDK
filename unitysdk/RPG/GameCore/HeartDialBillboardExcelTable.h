#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeartDialBillboardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17296E40)
#define RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17296C90)
#define RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17296960)
#define RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17296C30)
#define RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17297010)
#define RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x172969E0)
#define RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17297050)
#define RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17297230)
#define RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x172973D0)
#define RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17297730)
#define RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17297190)
#define RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x172970F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialBillboardExcelTable_TypeDefinitionIndex = 12563;

	class HeartDialBillboardExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialBillboardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialBillboardRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeartDialBillboardExcelTable_TypeDefinitionIndex)->GetStaticField(0x235C0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeartDialBillboardExcelTable_TypeDefinitionIndex)->GetStaticField(0x235C8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeartDialBillboardExcelTable_TypeDefinitionIndex)->GetStaticField(0x235D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeartDialBillboardExcelTable_TypeDefinitionIndex)->GetStaticField(0x9390);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeartDialBillboardExcelTable_TypeDefinitionIndex)->GetStaticField(0x9391);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialBillboardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialBillboardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialBillboardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialBillboardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeartDialBillboardRow* GetData(::RPG::GameCore::HeartDialStepType StepType, ::RPG::GameCore::HeartDialEmoType EmoType)
		{
			return ((::RPG::GameCore::HeartDialBillboardRow*(*)(::RPG::GameCore::HeartDialStepType, ::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE_GETDATA_OFFSET))(StepType, EmoType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeartDialBillboardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeartDialBillboardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
