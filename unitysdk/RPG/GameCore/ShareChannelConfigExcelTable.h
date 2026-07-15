#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ShareChannelConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1BE31B00)
#define RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BE31990)
#define RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1BE31680)
#define RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1BE31930)
#define RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1BE31C90)
#define RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BE31700)
#define RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1BE31CD0)
#define RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BE31EA0)
#define RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1BE32290)
#define RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE32600)
#define RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1BE31E00)
#define RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BE31D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShareChannelConfigExcelTable_TypeDefinitionIndex = 13911;

	class ShareChannelConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareChannelConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareChannelConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ShareChannelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x26D80);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ShareChannelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x26D88);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ShareChannelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x26D90);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShareChannelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7540);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ShareChannelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7541);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareChannelConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareChannelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareChannelConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareChannelConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ShareChannelConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ShareChannelConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ShareChannelConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ShareChannelConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
