#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazePlaneRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18AD1F10)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18AD1D90)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18AD1A60)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18AD1D30)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18AD2090)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18AD1AE0)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18AD20D0)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AD22B0)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18AD2600)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AD2910)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18AD2210)
#define RPG_GAMECORE_MAZEPLANEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18AD2170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePlaneExcelTable_TypeDefinitionIndex = 13299;

	class MazePlaneExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazePlaneExcelTable_TypeDefinitionIndex)->GetStaticField(0x33130);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePlaneRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePlaneRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazePlaneExcelTable_TypeDefinitionIndex)->GetStaticField(0x33138);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazePlaneExcelTable_TypeDefinitionIndex)->GetStaticField(0x33140);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazePlaneExcelTable_TypeDefinitionIndex)->GetStaticField(0xC700);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazePlaneExcelTable_TypeDefinitionIndex)->GetStaticField(0xC701);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePlaneRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePlaneRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePlaneRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePlaneRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazePlaneRow* GetData(::System::UInt32 PlaneID)
		{
			return ((::RPG::GameCore::MazePlaneRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_GETDATA_OFFSET))(PlaneID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazePlaneRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePlaneRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
