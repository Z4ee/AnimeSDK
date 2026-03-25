#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StaminaExchangeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1776F7A0)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1776F5F0)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1776F2C0)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1776F590)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1776F920)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1776F340)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1776F960)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1776FB40)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1776FCF0)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17770000)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1776FAA0)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1776FA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StaminaExchangeExcelTable_TypeDefinitionIndex = 13243;

	class StaminaExchangeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StaminaExchangeExcelTable_TypeDefinitionIndex)->GetStaticField(0x11E30);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StaminaExchangeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StaminaExchangeRow*>**)Il2CppClass::FromTypeDefinitionIndex(StaminaExchangeExcelTable_TypeDefinitionIndex)->GetStaticField(0x11E38);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StaminaExchangeExcelTable_TypeDefinitionIndex)->GetStaticField(0x11E40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StaminaExchangeExcelTable_TypeDefinitionIndex)->GetStaticField(0x5590);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StaminaExchangeExcelTable_TypeDefinitionIndex)->GetStaticField(0x5591);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StaminaExchangeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StaminaExchangeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StaminaExchangeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StaminaExchangeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StaminaExchangeRow* GetData(::System::UInt32 Times)
		{
			return ((::RPG::GameCore::StaminaExchangeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_GETDATA_OFFSET))(Times);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StaminaExchangeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::StaminaExchangeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
