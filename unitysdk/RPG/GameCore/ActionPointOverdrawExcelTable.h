#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionPointOverdrawRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AAD6840)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AAD66D0)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AAD63C0)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AAD6670)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AAD69D0)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AAD6440)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AAD6A10)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAD6BE0)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AAD6D80)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAD70F0)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AAD6B40)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AAD6AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionPointOverdrawExcelTable_TypeDefinitionIndex = 14205;

	class ActionPointOverdrawExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActionPointOverdrawExcelTable_TypeDefinitionIndex)->GetStaticField(0x19AD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionPointOverdrawRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionPointOverdrawRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActionPointOverdrawExcelTable_TypeDefinitionIndex)->GetStaticField(0x19AD8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActionPointOverdrawExcelTable_TypeDefinitionIndex)->GetStaticField(0x19AE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActionPointOverdrawExcelTable_TypeDefinitionIndex)->GetStaticField(0x6020);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActionPointOverdrawExcelTable_TypeDefinitionIndex)->GetStaticField(0x6021);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionPointOverdrawRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionPointOverdrawRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionPointOverdrawRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionPointOverdrawRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActionPointOverdrawRow* GetData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ActionPointOverdrawRow*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActionPointOverdrawRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActionPointOverdrawRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
