#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ToastManagerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DB8B4D0)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB8B360)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DB8B280)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DB8B300)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DB8A920)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB8A960)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB8AB90)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB8AD60)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DB8AF60)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB8B640)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DB8ACC0)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB8AC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToastManagerExcelTable_TypeDefinitionIndex = 15306;

	class ToastManagerExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ToastManagerRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ToastManagerRow*>**)Il2CppClass::FromTypeDefinitionIndex(ToastManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D1F0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ToastManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D1F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ToastManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D200);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ToastManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x9300);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ToastManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x9301);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ToastManagerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ToastManagerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ToastManagerRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ToastManagerRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ToastManagerRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ToastManagerRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ToastManagerRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::ToastManagerRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
