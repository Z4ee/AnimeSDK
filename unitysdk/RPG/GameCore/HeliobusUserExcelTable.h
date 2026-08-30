#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusUserRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D3DDD80)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3DDC10)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D3DD900)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D3DDBB0)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D3DDF10)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3DD980)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3DDF50)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3DE120)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D3DE340)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3DE6B0)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D3DE080)
#define RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3DDFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusUserExcelTable_TypeDefinitionIndex = 13635;

	class HeliobusUserExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusUserRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusUserRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusUserExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A050);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusUserExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A058);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusUserExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A060);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusUserExcelTable_TypeDefinitionIndex)->GetStaticField(0xC570);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusUserExcelTable_TypeDefinitionIndex)->GetStaticField(0xC571);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusUserRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusUserRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusUserRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusUserRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusUserRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeliobusUserRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusUserRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusUserRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
