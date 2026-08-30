#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiniMapIconRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MINIMAPICONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D1A6990)
#define RPG_GAMECORE_MINIMAPICONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D1A6820)
#define RPG_GAMECORE_MINIMAPICONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D1A6510)
#define RPG_GAMECORE_MINIMAPICONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D1A67C0)
#define RPG_GAMECORE_MINIMAPICONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D1A6AE0)
#define RPG_GAMECORE_MINIMAPICONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1A6590)
#define RPG_GAMECORE_MINIMAPICONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1A6B20)
#define RPG_GAMECORE_MINIMAPICONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A6CF0)
#define RPG_GAMECORE_MINIMAPICONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D1A7310)
#define RPG_GAMECORE_MINIMAPICONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1A7630)
#define RPG_GAMECORE_MINIMAPICONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D1A6C50)
#define RPG_GAMECORE_MINIMAPICONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1A6BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniMapIconExcelTable_TypeDefinitionIndex = 12460;

	class MiniMapIconExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MiniMapIconRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MiniMapIconRow*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B990);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B998);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B9A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiniMapIconExcelTable_TypeDefinitionIndex)->GetStaticField(0xF460);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MiniMapIconExcelTable_TypeDefinitionIndex)->GetStaticField(0xF461);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MiniMapIconRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MiniMapIconRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MiniMapIconRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MiniMapIconRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MiniMapIconRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MiniMapIconRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MiniMapIconRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MiniMapIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
