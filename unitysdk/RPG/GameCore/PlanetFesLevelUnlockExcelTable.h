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

#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x174BDFE0)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x174BDBE0)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x174BDB00)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x174BDB80)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x174BE1B0)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x174BDD90)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x174BE1F0)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x174BE3D0)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x174BE6C0)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x174BEA20)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x174BE330)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x174BE290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLevelUnlockExcelTable_TypeDefinitionIndex = 11198;

	class PlanetFesLevelUnlockExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelUnlockExcelTable_TypeDefinitionIndex)->GetStaticField(0x30180);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLevelUnlockRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLevelUnlockRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelUnlockExcelTable_TypeDefinitionIndex)->GetStaticField(0x30188);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelUnlockExcelTable_TypeDefinitionIndex)->GetStaticField(0x30190);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelUnlockExcelTable_TypeDefinitionIndex)->GetStaticField(0xF870);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesLevelUnlockExcelTable_TypeDefinitionIndex)->GetStaticField(0xF871);
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
