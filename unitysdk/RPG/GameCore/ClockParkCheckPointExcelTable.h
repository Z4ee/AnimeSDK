#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkCheckPointRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x170B8A70)
#define RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x170B88C0)
#define RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x170B8590)
#define RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x170B8860)
#define RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x170B8C40)
#define RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x170B8610)
#define RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x170B8C80)
#define RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170B8E60)
#define RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x170B91F0)
#define RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x170B9550)
#define RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x170B8DC0)
#define RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x170B8D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCheckPointExcelTable_TypeDefinitionIndex = 10447;

	class ClockParkCheckPointExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkCheckPointExcelTable_TypeDefinitionIndex)->GetStaticField(0x27D20);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCheckPointRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCheckPointRow*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkCheckPointExcelTable_TypeDefinitionIndex)->GetStaticField(0x27D28);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkCheckPointExcelTable_TypeDefinitionIndex)->GetStaticField(0x27D30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClockParkCheckPointExcelTable_TypeDefinitionIndex)->GetStaticField(0xD0F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ClockParkCheckPointExcelTable_TypeDefinitionIndex)->GetStaticField(0xD0F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCheckPointRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCheckPointRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCheckPointRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCheckPointRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkCheckPointRow* GetData(::System::UInt32 CheckPointID)
		{
			return ((::RPG::GameCore::ClockParkCheckPointRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE_GETDATA_OFFSET))(CheckPointID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkCheckPointRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkCheckPointRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
