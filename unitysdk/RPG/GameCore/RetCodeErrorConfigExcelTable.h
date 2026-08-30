#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RetCodeErrorConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DB9FB60)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB9F9F0)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DB9F6E0)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DB9F990)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DB9FCB0)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB9F760)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB9FCF0)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB9FEC0)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DBA00E0)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBA0400)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DB9FE20)
#define RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB9FD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RetCodeErrorConfigExcelTable_TypeDefinitionIndex = 14492;

	class RetCodeErrorConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RetCodeErrorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xB1B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RetCodeErrorConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RetCodeErrorConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RetCodeErrorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xB1B8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RetCodeErrorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xB1C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RetCodeErrorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2680);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RetCodeErrorConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2681);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RetCodeErrorConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RetCodeErrorConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RetCodeErrorConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RetCodeErrorConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RetCodeErrorConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RetCodeErrorConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RetCodeErrorConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RetCodeErrorConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETCODEERRORCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
