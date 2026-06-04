#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesAvatarRarityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19A188F0)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19A18780)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19A18470)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19A18720)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19A18A80)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19A184F0)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19A18AC0)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A18C90)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19A18FA0)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A19310)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19A18BF0)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19A18B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarRarityExcelTable_TypeDefinitionIndex = 11622;

	class PlanetFesAvatarRarityExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRarityRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRarityRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0x14CB0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0x14CB8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0x14CC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0x7C80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0x7C81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRarityRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRarityRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRarityRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRarityRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesAvatarRarityRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesAvatarRarityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlanetFesAvatarRarityRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesAvatarRarityRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
