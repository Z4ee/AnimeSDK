#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherDivideSpiritPromotionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1868A000)
#define RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18689E50)
#define RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18689B20)
#define RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18689DF0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1868A1D0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18689BA0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1868A210)
#define RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1868A3F0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1868A9F0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1868AD50)
#define RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1868A350)
#define RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1868A2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritPromotionExcelTable_TypeDefinitionIndex = 10462;

	class AetherDivideSpiritPromotionExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritPromotionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritPromotionRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x24E80);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x24E88);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x24E90);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x9AC0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x9AC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritPromotionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritPromotionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritPromotionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritPromotionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideSpiritPromotionRow* GetData(::System::UInt32 AvatarID, ::System::UInt32 Promotion)
		{
			return ((::RPG::GameCore::AetherDivideSpiritPromotionRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE_GETDATA_OFFSET))(AvatarID, Promotion);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideSpiritPromotionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideSpiritPromotionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
