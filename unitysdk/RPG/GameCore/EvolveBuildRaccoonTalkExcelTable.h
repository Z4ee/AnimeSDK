#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RaccoonStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EvolveBuildRaccoonTalkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D7D18F0)
#define RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D7D1780)
#define RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D7D1470)
#define RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D7D1720)
#define RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D7D1AD0)
#define RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D7D14F0)
#define RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D7D1B10)
#define RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7D1CE0)
#define RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D7D1F10)
#define RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7D22B0)
#define RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D7D1C40)
#define RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D7D1BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRaccoonTalkExcelTable_TypeDefinitionIndex = 11403;

	class EvolveBuildRaccoonTalkExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRaccoonTalkRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRaccoonTalkRow*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildRaccoonTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x276F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildRaccoonTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x276F8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildRaccoonTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x27700);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildRaccoonTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0xBAB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildRaccoonTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0xBAB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRaccoonTalkRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRaccoonTalkRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRaccoonTalkRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRaccoonTalkRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EvolveBuildRaccoonTalkRow* GetData(::RPG::GameCore::RaccoonStateType a1, ::RPG::GameCore::EvolveBuildSeason a2)
		{
			return ((::RPG::GameCore::EvolveBuildRaccoonTalkRow*(*)(::RPG::GameCore::RaccoonStateType, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EvolveBuildRaccoonTalkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EvolveBuildRaccoonTalkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDRACCOONTALKEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
