#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueBuffTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C4AA650)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4AA520)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C4AA210)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C4AA4C0)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C4AA7A0)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4AA290)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4AA7E0)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4AA9B0)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C4AADE0)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4AB100)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C4AA910)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4AA870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBuffTypeExcelTable_TypeDefinitionIndex = 14149;

	class RogueBuffTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x41610);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x41618);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x41620);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xB0F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xB0F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueBuffTypeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueBuffTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueBuffTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueBuffTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
