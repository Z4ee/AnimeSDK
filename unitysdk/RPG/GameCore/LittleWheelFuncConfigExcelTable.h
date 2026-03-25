#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/ShortCutWheelGotoType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleWheelFuncConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17361C00)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17361A50)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17361720)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x173619F0)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17361DD0)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173617A0)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17361E10)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17361FF0)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x173621D0)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17362530)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17361F50)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17361EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleWheelFuncConfigExcelTable_TypeDefinitionIndex = 12169;

	class LittleWheelFuncConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(LittleWheelFuncConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x26800);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LittleWheelFuncConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LittleWheelFuncConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(LittleWheelFuncConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x26808);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LittleWheelFuncConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x26810);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(LittleWheelFuncConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC8F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LittleWheelFuncConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC8F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LittleWheelFuncConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LittleWheelFuncConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LittleWheelFuncConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LittleWheelFuncConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::LittleWheelFuncConfigRow* GetData(::RPG::GameCore::ShortCutWheelGotoType LittleWheelFuncID)
		{
			return ((::RPG::GameCore::LittleWheelFuncConfigRow*(*)(::RPG::GameCore::ShortCutWheelGotoType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_GETDATA_OFFSET))(LittleWheelFuncID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::LittleWheelFuncConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::LittleWheelFuncConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
