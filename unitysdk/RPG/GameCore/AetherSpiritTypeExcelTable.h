#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherSpiritTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AE73270)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AE73100)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AE72DF0)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AE730A0)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AE73400)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AE72E70)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AE73440)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AE73610)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AE73930)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE73CA0)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AE73570)
#define RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AE734D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherSpiritTypeExcelTable_TypeDefinitionIndex = 10570;

	class AetherSpiritTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherSpiritTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DE60);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherSpiritTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DE68);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherSpiritTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherSpiritTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherSpiritTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DE70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherSpiritTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x6870);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherSpiritTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x6871);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherSpiritTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherSpiritTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherSpiritTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherSpiritTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherSpiritTypeRow* GetData(::RPG::GameCore::AetherSpiritType a1)
		{
			return ((::RPG::GameCore::AetherSpiritTypeRow*(*)(::RPG::GameCore::AetherSpiritType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherSpiritTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherSpiritTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
