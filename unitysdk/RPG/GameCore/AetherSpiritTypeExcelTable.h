#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherSpiritTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F6CA90)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F6C8E0)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F6C5B0)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F6C880)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F6CC60)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F6C630)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F6CCA0)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F6CE80)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F6D1A0)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F6D500)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F6CDE0)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F6CD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherSpiritTypeExcelTable_TypeDefinitionIndex = 10257;

	class AetherSpiritTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherSpiritTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherSpiritTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherSpiritTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EEC0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherSpiritTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EEC8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherSpiritTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EED0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherSpiritTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x7F60);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherSpiritTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x7F61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherSpiritTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherSpiritTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherSpiritTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherSpiritTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherSpiritTypeRow* GetData(::RPG::GameCore::AetherSpiritType SpiritType)
		{
			return ((::RPG::GameCore::AetherSpiritTypeRow*(*)(::RPG::GameCore::AetherSpiritType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_GETDATA_OFFSET))(SpiritType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherSpiritTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherSpiritTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
