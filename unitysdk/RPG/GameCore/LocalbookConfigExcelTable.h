#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LocalbookConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1BCCC7D0)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BCCC6A0)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1BCCC390)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1BCCC640)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1BCCC920)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BCCC410)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1BCCC960)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BCCCB30)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1BCCCE90)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCCD1B0)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1BCCCA90)
#define RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BCCC9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LocalbookConfigExcelTable_TypeDefinitionIndex = 12411;

	class LocalbookConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(LocalbookConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D530);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LocalbookConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LocalbookConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(LocalbookConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D538);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LocalbookConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D540);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(LocalbookConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA370);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LocalbookConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA371);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LocalbookConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LocalbookConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LocalbookConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LocalbookConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::LocalbookConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LocalbookConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::LocalbookConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::LocalbookConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
