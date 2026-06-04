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

#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1967B560)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1967B3F0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1967B0E0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1967B390)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1967B6F0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1967B160)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1967B730)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1967B900)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1967BB70)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1967BEE0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1967B860)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1967B7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceGameplayNPCConfigExcelTable_TypeDefinitionIndex = 12464;

	class ConvinceGameplayNPCConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConvinceGameplayNPCConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConvinceGameplayNPCConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplayNPCConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6420);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplayNPCConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6428);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplayNPCConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6430);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplayNPCConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3190);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ConvinceGameplayNPCConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3191);
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

		static ::RPG::GameCore::ConvinceGameplayNPCConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ConvinceGameplayNPCConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ConvinceGameplayNPCConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ConvinceGameplayNPCConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
