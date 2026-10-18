#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageInvasionBuffRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DB0EFB0)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB0EE80)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DB0EDA0)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DB0EE20)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DB0E450)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB0E490)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB0E6C0)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB0E890)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DB0EA80)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB0F100)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DB0E7F0)
#define RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB0E750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionBuffExcelTable_TypeDefinitionIndex = 15164;

	class StageInvasionBuffExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StageInvasionBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x1BEE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionBuffRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionBuffRow*>**)Il2CppClass::FromTypeDefinitionIndex(StageInvasionBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x1BEE8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StageInvasionBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x1BEF0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StageInvasionBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x6460);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StageInvasionBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x6461);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StageInvasionBuffRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageInvasionBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionBuffRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionBuffRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionBuffRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionBuffRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StageInvasionBuffRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageInvasionBuffRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
