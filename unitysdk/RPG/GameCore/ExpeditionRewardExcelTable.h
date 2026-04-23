#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ExpeditionRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x188C7860)
#define RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188C76B0)
#define RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x188C7380)
#define RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x188C7650)
#define RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x188C7AB0)
#define RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x188C7400)
#define RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188C7AF0)
#define RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188C7CD0)
#define RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x188C7F10)
#define RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188C82E0)
#define RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x188C7C30)
#define RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x188C7B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionRewardExcelTable_TypeDefinitionIndex = 12537;

	class ExpeditionRewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C7D0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C7D8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C7E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ExpeditionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xD5F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ExpeditionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xD5F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ExpeditionRewardRow* GetData(::System::UInt32 ExpeditionID, ::System::UInt32 Duration, ::System::UInt32 AvatarNum)
		{
			return ((::RPG::GameCore::ExpeditionRewardRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE_GETDATA_OFFSET))(ExpeditionID, Duration, AvatarNum);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ExpeditionRewardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExpeditionRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONREWARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
