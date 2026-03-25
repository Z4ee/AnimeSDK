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

#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16E9B2A0)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16E9B0F0)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16E9ADC0)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16E9B090)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16E9B420)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16E9AE40)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16E9B460)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E9B640)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16E9B7B0)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E9BAC0)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16E9B5A0)
#define RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16E9B500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionOperationSetExcelTable_TypeDefinitionIndex = 12618;

	class ActionOperationSetExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActionOperationSetExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E9A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionOperationSetRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionOperationSetRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActionOperationSetExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E9A8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActionOperationSetExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E9B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActionOperationSetExcelTable_TypeDefinitionIndex)->GetStaticField(0x7D30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActionOperationSetExcelTable_TypeDefinitionIndex)->GetStaticField(0x7D31);
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

		static ::RPG::GameCore::ActionOperationSetRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::ActionOperationSetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE_GETDATA_OFFSET))(ID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActionOperationSetRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActionOperationSetRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
