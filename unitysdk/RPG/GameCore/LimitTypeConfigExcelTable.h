#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/LimitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LimitTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1734F3E0)
#define RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1734F230)
#define RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1734EF00)
#define RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1734F1D0)
#define RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1734F570)
#define RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1734EF80)
#define RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1734F5B0)
#define RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1734F790)
#define RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1734F9E0)
#define RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1734FCF0)
#define RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1734F6F0)
#define RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1734F650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimitTypeConfigExcelTable_TypeDefinitionIndex = 13842;

	class LimitTypeConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LimitTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25BF0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(LimitTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25BF8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimitTypeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimitTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(LimitTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(LimitTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC330);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LimitTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC331);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimitTypeConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimitTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimitTypeConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimitTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::LimitTypeConfigRow* GetData(::RPG::GameCore::LimitType LimitType)
		{
			return ((::RPG::GameCore::LimitTypeConfigRow*(*)(::RPG::GameCore::LimitType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE_GETDATA_OFFSET))(LimitType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::LimitTypeConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::LimitTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
