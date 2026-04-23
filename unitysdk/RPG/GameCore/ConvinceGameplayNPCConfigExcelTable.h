#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConvinceGameplayNPCConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1883BE90)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1883BCE0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1883B9B0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1883BC80)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1883C060)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1883BA30)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1883C0A0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1883C280)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1883C4F0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1883C850)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1883C1E0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1883C140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceGameplayNPCConfigExcelTable_TypeDefinitionIndex = 12376;

	class ConvinceGameplayNPCConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplayNPCConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x30BB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConvinceGameplayNPCConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConvinceGameplayNPCConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplayNPCConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x30BB8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplayNPCConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x30BC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplayNPCConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC430);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplayNPCConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC431);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConvinceGameplayNPCConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConvinceGameplayNPCConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConvinceGameplayNPCConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConvinceGameplayNPCConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ConvinceGameplayNPCConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::ConvinceGameplayNPCConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ConvinceGameplayNPCConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ConvinceGameplayNPCConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
