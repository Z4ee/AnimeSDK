#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AmphoreusCurioUIConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186A33E0)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186A3230)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x186A2F00)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x186A31D0)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x186A35B0)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x186A2F80)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186A35F0)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x186A37D0)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x186A3C00)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186A3F60)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186A3730)
#define RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x186A3690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AmphoreusCurioUIConfigExcelTable_TypeDefinitionIndex = 11411;

	class AmphoreusCurioUIConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AmphoreusCurioUIConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25D30);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AmphoreusCurioUIConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25D38);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AmphoreusCurioUIConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AmphoreusCurioUIConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(AmphoreusCurioUIConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25D40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AmphoreusCurioUIConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9EF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AmphoreusCurioUIConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9EF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AmphoreusCurioUIConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AmphoreusCurioUIConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AmphoreusCurioUIConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AmphoreusCurioUIConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AmphoreusCurioUIConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::AmphoreusCurioUIConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AmphoreusCurioUIConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AmphoreusCurioUIConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AMPHOREUSCURIOUICONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
