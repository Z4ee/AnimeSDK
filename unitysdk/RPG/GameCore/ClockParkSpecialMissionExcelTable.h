#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkSpecialMissionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1881E5E0)
#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1881E460)
#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1881E130)
#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1881E400)
#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1881E760)
#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1881E1B0)
#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1881E7A0)
#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1881E980)
#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1881ED30)
#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1881F040)
#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1881E8E0)
#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1881E840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkSpecialMissionExcelTable_TypeDefinitionIndex = 10694;

	class ClockParkSpecialMissionExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkSpecialMissionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkSpecialMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkSpecialMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F990);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkSpecialMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F998);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkSpecialMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F9A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClockParkSpecialMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xBEC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ClockParkSpecialMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xBEC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkSpecialMissionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkSpecialMissionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkSpecialMissionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkSpecialMissionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkSpecialMissionRow* GetData(::System::UInt32 SpecialMissionUnlockItemID)
		{
			return ((::RPG::GameCore::ClockParkSpecialMissionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE_GETDATA_OFFSET))(SpecialMissionUnlockItemID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkSpecialMissionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkSpecialMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
