#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GachaCeilingConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18938900)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18938750)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18938420)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x189386F0)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18938A90)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x189384A0)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18938AD0)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18938CB0)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18938EC0)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189391D0)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18938C10)
#define RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18938B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaCeilingConfigExcelTable_TypeDefinitionIndex = 12631;

	class GachaCeilingConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GachaCeilingConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x19250);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GachaCeilingConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x19258);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaCeilingConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaCeilingConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(GachaCeilingConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x19260);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GachaCeilingConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6B00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GachaCeilingConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6B01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaCeilingConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaCeilingConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaCeilingConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaCeilingConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GachaCeilingConfigRow* GetData(::RPG::GameCore::GachaType GachaType)
		{
			return ((::RPG::GameCore::GachaCeilingConfigRow*(*)(::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_GETDATA_OFFSET))(GachaType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GachaCeilingConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::GachaCeilingConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
