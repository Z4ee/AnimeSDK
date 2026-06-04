#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LoopCGConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x198B0800)
#define RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x198B0690)
#define RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x198B05B0)
#define RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x198B0630)
#define RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x198AFC40)
#define RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x198AFC80)
#define RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x198AFEB0)
#define RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x198B0080)
#define RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x198B0290)
#define RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x198B0950)
#define RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x198AFFE0)
#define RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x198AFF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopCGConfigExcelTable_TypeDefinitionIndex = 14652;

	class LoopCGConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(LoopCGConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x295E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LoopCGConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x295E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoopCGConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoopCGConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(LoopCGConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x295F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LoopCGConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x98C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(LoopCGConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x98C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::LoopCGConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::LoopCGConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoopCGConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoopCGConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoopCGConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoopCGConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::LoopCGConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LoopCGConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
