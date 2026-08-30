#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AutoFightVORow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C583300)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C583190)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C5830B0)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C583130)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C582600)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C582640)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C582870)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C582A40)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C582D90)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C583450)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C5829A0)
#define RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C582900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AutoFightVOExcelTable_TypeDefinitionIndex = 14948;

	class AutoFightVOExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x49B0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x49B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AutoFightVORow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AutoFightVORow*>**)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x49C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x1770);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AutoFightVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x1771);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AutoFightVORow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AutoFightVORow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AutoFightVORow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AutoFightVORow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AutoFightVORow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AutoFightVORow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AutoFightVORow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AutoFightVORow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOFIGHTVOEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
