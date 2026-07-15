#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AreaMapMenuIconRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1A05A590)
#define RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A05A420)
#define RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1A05A110)
#define RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1A05A3C0)
#define RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1A05A720)
#define RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1A05A190)
#define RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1A05A760)
#define RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A05A930)
#define RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1A05AAB0)
#define RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A05AE20)
#define RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1A05A890)
#define RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1A05A7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AreaMapMenuIconExcelTable_TypeDefinitionIndex = 13485;

	class AreaMapMenuIconExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AreaMapMenuIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C00);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AreaMapMenuIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C08);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AreaMapMenuIconRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AreaMapMenuIconRow*>**)Il2CppClass::FromTypeDefinitionIndex(AreaMapMenuIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C10);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AreaMapMenuIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x2870);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AreaMapMenuIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x2871);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AreaMapMenuIconRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AreaMapMenuIconRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AreaMapMenuIconRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AreaMapMenuIconRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AreaMapMenuIconRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AreaMapMenuIconRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AreaMapMenuIconRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AreaMapMenuIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPMENUICONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
