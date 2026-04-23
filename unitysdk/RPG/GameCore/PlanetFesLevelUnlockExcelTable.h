#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesLevelUnlockRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18C095F0)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18C09440)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18C09110)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18C093E0)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18C097C0)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C09190)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18C09800)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C099E0)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18C09CD0)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C0A030)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18C09940)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C098A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLevelUnlockExcelTable_TypeDefinitionIndex = 11601;

	class PlanetFesLevelUnlockExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelUnlockExcelTable_TypeDefinitionIndex)->GetStaticField(0x44810);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLevelUnlockRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLevelUnlockRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelUnlockExcelTable_TypeDefinitionIndex)->GetStaticField(0x44818);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelUnlockExcelTable_TypeDefinitionIndex)->GetStaticField(0x44820);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelUnlockExcelTable_TypeDefinitionIndex)->GetStaticField(0xF420);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelUnlockExcelTable_TypeDefinitionIndex)->GetStaticField(0xF421);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLevelUnlockRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLevelUnlockRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLevelUnlockRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLevelUnlockRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesLevelUnlockRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::PlanetFesLevelUnlockRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlanetFesLevelUnlockRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesLevelUnlockRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
