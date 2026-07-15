#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionOperationSetRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B9FFFD0)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B9FFE60)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B9FFB50)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B9FFE00)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1BA00120)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B9FFBD0)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1BA00160)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAD5DD0)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AAD5F40)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAD6260)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AAD5D30)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BA001F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionOperationSetExcelTable_TypeDefinitionIndex = 13316;

	class ActionOperationSetExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionOperationSetRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionOperationSetRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActionOperationSetExcelTable_TypeDefinitionIndex)->GetStaticField(0x19430);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActionOperationSetExcelTable_TypeDefinitionIndex)->GetStaticField(0x19438);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActionOperationSetExcelTable_TypeDefinitionIndex)->GetStaticField(0x19440);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActionOperationSetExcelTable_TypeDefinitionIndex)->GetStaticField(0x5EA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActionOperationSetExcelTable_TypeDefinitionIndex)->GetStaticField(0x5EA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionOperationSetRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionOperationSetRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionOperationSetRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionOperationSetRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActionOperationSetRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActionOperationSetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActionOperationSetRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActionOperationSetRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
