#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleMatchInfoConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A9F270)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A9F0F0)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A9EE70)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A9F090)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A9F440)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A9EEF0)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A9F480)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A9F660)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A9FBB0)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A9FEC0)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A9F5C0)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A9F520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchInfoConfigExcelTable_TypeDefinitionIndex = 11297;

	class MarbleMatchInfoConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleMatchInfoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x339F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchInfoConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchInfoConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleMatchInfoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x339F8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleMatchInfoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33A00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MarbleMatchInfoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC950);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MarbleMatchInfoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC951);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchInfoConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchInfoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchInfoConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchInfoConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MarbleMatchInfoConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MarbleMatchInfoConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MarbleMatchInfoConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleMatchInfoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
