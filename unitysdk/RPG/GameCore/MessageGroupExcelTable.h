#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MessageGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x199107B0)
#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19910680)
#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_GETGROUPBYSECTION_OFFSET UNITYSDK_OFFSET(0x19911120)
#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19910370)
#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19910620)
#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19910900)
#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199103F0)
#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x19911090)
#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19910940)
#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19910B10)
#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19910D70)
#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19911590)
#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19910A70)
#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199109D0)
#define RPG_GAMECORE_MESSAGEGROUPEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x199111A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageGroupExcelTable_TypeDefinitionIndex = 13727;

	class MessageGroupExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CC30);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CC38);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__SectionToGroup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MessageGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CC40);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CC48);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x9C40);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x9C41);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MessageGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x9C42);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageGroupRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MessageGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::UInt32 GetGroupBySection(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE_GETGROUPBYSECTION_OFFSET))(a1);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}
	};
}
