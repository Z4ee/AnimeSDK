#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelMasterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1709F1E0)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1709F280)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1709F060)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1709ED30)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1709F000)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1709F400)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1709EDB0)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1709F440)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1709F620)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x170A0000)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x170A0310)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1709F580)
#define RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1709F4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelMasterExcelTable_TypeDefinitionIndex = 10398;

	class ChimeraDuelMasterExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterExcelTable_TypeDefinitionIndex)->GetStaticField(0x26FA0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterExcelTable_TypeDefinitionIndex)->GetStaticField(0x26FA8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterExcelTable_TypeDefinitionIndex)->GetStaticField(0x26FB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterExcelTable_TypeDefinitionIndex)->GetStaticField(0xCB50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterExcelTable_TypeDefinitionIndex)->GetStaticField(0xCB51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterRow*>, ::RPG::GameCore::ChimeraDuelMasterRow*> AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterRow*>, ::RPG::GameCore::ChimeraDuelMasterRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelMasterRow* GetData(::System::UInt32 MasterID)
		{
			return ((::RPG::GameCore::ChimeraDuelMasterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_GETDATA_OFFSET))(MasterID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChimeraDuelMasterRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelMasterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTEREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
