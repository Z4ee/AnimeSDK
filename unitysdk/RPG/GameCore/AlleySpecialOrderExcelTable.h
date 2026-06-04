#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleySpecialOrderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19472820)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x194726B0)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x194723A0)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19472650)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19472970)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19472420)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x194729B0)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19472B80)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19472F60)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19473280)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19472AE0)
#define RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19472A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleySpecialOrderExcelTable_TypeDefinitionIndex = 12013;

	class AlleySpecialOrderExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleySpecialOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BE0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleySpecialOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BE8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleySpecialOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleySpecialOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x1180);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleySpecialOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x1181);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleySpecialOrderRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleySpecialOrderRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleySpecialOrderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleySpecialOrderRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleySpecialOrderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
