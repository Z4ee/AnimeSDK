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

#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B0B8930)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B0B87C0)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B0B84B0)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B0B8760)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B0B8A80)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B0B8530)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B0B8AC0)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B0B8C90)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B0B8E40)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0B9160)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B0B8BF0)
#define RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B0B8B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StaminaExchangeExcelTable_TypeDefinitionIndex = 13922;

	class StaminaExchangeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StaminaExchangeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3870);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StaminaExchangeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3878);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StaminaExchangeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StaminaExchangeRow*>**)Il2CppClass::FromTypeDefinitionIndex(StaminaExchangeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3880);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StaminaExchangeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2750);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StaminaExchangeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2751);
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

		static ::RPG::GameCore::StaminaExchangeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StaminaExchangeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StaminaExchangeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StaminaExchangeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
