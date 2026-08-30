#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousAeonRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D3FF780)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3FF650)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D3FF340)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D3FF5F0)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D3FF910)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3FF3C0)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3FF950)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3FFB20)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D3FFEE0)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D400200)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D3FFA80)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3FF9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousAeonExcelTable_TypeDefinitionIndex = 14755;

	class RogueNousAeonExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x102B0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x102B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x102C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x7420);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x7421);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousAeonRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousAeonRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousAeonRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
