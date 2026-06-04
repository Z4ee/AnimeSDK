#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherDivideBadgeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19458180)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19458010)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19457D00)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19457FB0)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19458310)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19457D80)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19458350)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19458520)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x194586E0)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19458A50)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19458480)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x194583E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideBadgeExcelTable_TypeDefinitionIndex = 10532;

	class AetherDivideBadgeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideBadgeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideBadgeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideBadgeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2110);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideBadgeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2118);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideBadgeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2120);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideBadgeExcelTable_TypeDefinitionIndex)->GetStaticField(0xCE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideBadgeExcelTable_TypeDefinitionIndex)->GetStaticField(0xCE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideBadgeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideBadgeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideBadgeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideBadgeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideBadgeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AetherDivideBadgeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideBadgeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideBadgeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
