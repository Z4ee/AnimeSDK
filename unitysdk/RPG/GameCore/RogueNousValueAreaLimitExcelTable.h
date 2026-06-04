#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousValueAreaLimitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19BAC340)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19BAC1D0)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19BABEC0)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19BAC170)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19BAC4D0)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BABF40)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19BAC510)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BAC6E0)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19BAC8E0)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BACC50)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19BAC640)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BAC5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousValueAreaLimitExcelTable_TypeDefinitionIndex = 14185;

	class RogueNousValueAreaLimitExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousValueAreaLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x47030);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousValueAreaLimitRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousValueAreaLimitRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousValueAreaLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x47038);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousValueAreaLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x47040);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousValueAreaLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0xCE80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousValueAreaLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0xCE81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousValueAreaLimitRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousValueAreaLimitRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousValueAreaLimitRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousValueAreaLimitRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousValueAreaLimitRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousValueAreaLimitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousValueAreaLimitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousValueAreaLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
