#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CBD3320)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CBD31F0)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CBD2EE0)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CBD3190)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CBD3470)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CBD2F60)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CBD34B0)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CBD3680)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CBD3E40)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBD4160)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CBD35E0)
#define RPG_GAMECORE_ALLEYEVENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CBD3540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyEventExcelTable_TypeDefinitionIndex = 12517;

	class AlleyEventExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x525A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x525A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x525B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x11170);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x11171);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyEventRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
