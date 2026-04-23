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

#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18680DA0)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18680BF0)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x186808C0)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18680B90)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18680F70)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18680940)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18680FB0)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18681190)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18681350)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186816B0)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186810F0)
#define RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18681050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideBadgeExcelTable_TypeDefinitionIndex = 10492;

	class AetherDivideBadgeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideBadgeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideBadgeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideBadgeExcelTable_TypeDefinitionIndex)->GetStaticField(0x7C10);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideBadgeExcelTable_TypeDefinitionIndex)->GetStaticField(0x7C18);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideBadgeExcelTable_TypeDefinitionIndex)->GetStaticField(0x7C20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideBadgeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3600);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideBadgeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3601);
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

		static ::RPG::GameCore::AetherDivideBadgeRow* GetData(::System::UInt32 Number)
		{
			return ((::RPG::GameCore::AetherDivideBadgeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE_GETDATA_OFFSET))(Number);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideBadgeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideBadgeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEBADGEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
