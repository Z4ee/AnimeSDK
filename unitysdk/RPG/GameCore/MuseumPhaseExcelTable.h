#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MuseumPhaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18B6E9F0)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B6E870)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18B6E540)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18B6E810)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18B6EB70)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B6E5C0)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18B6EBB0)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B6ED90)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18B6F150)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B6F460)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18B6ECF0)
#define RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B6EC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumPhaseExcelTable_TypeDefinitionIndex = 13470;

	class MuseumPhaseExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x40010);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseRow*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x40018);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x40020);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MuseumPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0xE610);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MuseumPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0xE611);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MuseumPhaseRow* GetData(::System::UInt32 MuseumPhaseID)
		{
			return ((::RPG::GameCore::MuseumPhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_GETDATA_OFFSET))(MuseumPhaseID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MuseumPhaseRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
