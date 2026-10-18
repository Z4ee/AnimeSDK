#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCBossDecayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D9BCB20)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D9BC9B0)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D9BC6A0)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D9BC950)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D9BCCB0)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9BC720)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9BCCF0)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9BCEC0)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D9BD3E0)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9BD750)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D9BCE20)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9BCD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBossDecayExcelTable_TypeDefinitionIndex = 14788;

	class RogueDLCBossDecayExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBossDecayExcelTable_TypeDefinitionIndex)->GetStaticField(0x2350);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBossDecayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBossDecayRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBossDecayExcelTable_TypeDefinitionIndex)->GetStaticField(0x2358);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBossDecayExcelTable_TypeDefinitionIndex)->GetStaticField(0x2360);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBossDecayExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBossDecayExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBossDecayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBossDecayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBossDecayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBossDecayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCBossDecayRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCBossDecayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCBossDecayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCBossDecayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
