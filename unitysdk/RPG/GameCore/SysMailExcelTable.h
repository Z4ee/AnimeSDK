#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SysMailRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SYSMAILEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DB242F0)
#define RPG_GAMECORE_SYSMAILEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB24180)
#define RPG_GAMECORE_SYSMAILEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DB240A0)
#define RPG_GAMECORE_SYSMAILEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DB24120)
#define RPG_GAMECORE_SYSMAILEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DB23570)
#define RPG_GAMECORE_SYSMAILEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB235B0)
#define RPG_GAMECORE_SYSMAILEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB237E0)
#define RPG_GAMECORE_SYSMAILEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB239B0)
#define RPG_GAMECORE_SYSMAILEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DB23D30)
#define RPG_GAMECORE_SYSMAILEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB24480)
#define RPG_GAMECORE_SYSMAILEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DB23910)
#define RPG_GAMECORE_SYSMAILEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB23870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SysMailExcelTable_TypeDefinitionIndex = 15211;

	class SysMailExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailRow*>**)Il2CppClass::FromTypeDefinitionIndex(SysMailExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E0C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SysMailExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E0C8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SysMailExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E0D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SysMailExcelTable_TypeDefinitionIndex)->GetStaticField(0x6D70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SysMailExcelTable_TypeDefinitionIndex)->GetStaticField(0x6D71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SysMailRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SysMailRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SysMailRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SysMailRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
