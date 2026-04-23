#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FarmElementConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x188CB380)
#define RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188CB1D0)
#define RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x188CAEA0)
#define RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x188CB170)
#define RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x188CB590)
#define RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x188CAF20)
#define RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188CB5D0)
#define RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188CB7B0)
#define RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x188CBC70)
#define RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188CC020)
#define RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x188CB710)
#define RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x188CB670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FarmElementConfigExcelTable_TypeDefinitionIndex = 11866;

	class FarmElementConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(FarmElementConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C8C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FarmElementConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FarmElementConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(FarmElementConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C8C8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FarmElementConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C8D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FarmElementConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD620);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(FarmElementConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD621);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FarmElementConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FarmElementConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FarmElementConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FarmElementConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::FarmElementConfigRow* GetData(::System::UInt32 ID, ::System::UInt32 WorldLevel)
		{
			return ((::RPG::GameCore::FarmElementConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE_GETDATA_OFFSET))(ID, WorldLevel);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::FarmElementConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::FarmElementConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMELEMENTCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
