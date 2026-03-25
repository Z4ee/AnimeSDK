#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherDivideSpiritRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F66450)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F662D0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F65FA0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F66270)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F665D0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F66020)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F66610)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F667F0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F672E0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F67600)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F66750)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F666B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritExcelTable_TypeDefinitionIndex = 10235;

	class AetherDivideSpiritExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritExcelTable_TypeDefinitionIndex)->GetStaticField(0x1ECF0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritExcelTable_TypeDefinitionIndex)->GetStaticField(0x1ECF8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritExcelTable_TypeDefinitionIndex)->GetStaticField(0x1ED00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritExcelTable_TypeDefinitionIndex)->GetStaticField(0x7ED0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritExcelTable_TypeDefinitionIndex)->GetStaticField(0x7ED1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideSpiritRow* GetData(::System::UInt32 AvatarID)
		{
			return ((::RPG::GameCore::AetherDivideSpiritRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_GETDATA_OFFSET))(AvatarID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideSpiritRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideSpiritRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
