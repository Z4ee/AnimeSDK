#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MuseumAreaConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18B69C20)
#define RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B69A70)
#define RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18B69740)
#define RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18B69A10)
#define RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18B69DF0)
#define RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B697C0)
#define RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18B69E30)
#define RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B6A010)
#define RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18B6A340)
#define RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B6A6A0)
#define RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18B69F70)
#define RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B69ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumAreaConfigExcelTable_TypeDefinitionIndex = 13472;

	class MuseumAreaConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FEA0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FEA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FEB0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE590);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE591);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MuseumAreaConfigRow* GetData(::System::UInt32 AreaID)
		{
			return ((::RPG::GameCore::MuseumAreaConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE_GETDATA_OFFSET))(AreaID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MuseumAreaConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumAreaConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
