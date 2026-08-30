#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherDivideConstCommonRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CBC4AA0)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CBC4930)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CBC4620)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CBC48D0)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CBC4C10)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CBC46A0)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CBC4C50)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CBC4E20)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CBC4FC0)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBC52E0)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CBC4D80)
#define RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CBC4CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideConstCommonExcelTable_TypeDefinitionIndex = 10907;

	class AetherDivideConstCommonExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideConstCommonExcelTable_TypeDefinitionIndex)->GetStaticField(0x516D0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideConstCommonExcelTable_TypeDefinitionIndex)->GetStaticField(0x516D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideConstCommonRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideConstCommonRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideConstCommonExcelTable_TypeDefinitionIndex)->GetStaticField(0x516E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideConstCommonExcelTable_TypeDefinitionIndex)->GetStaticField(0x10F20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideConstCommonExcelTable_TypeDefinitionIndex)->GetStaticField(0x10F21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideConstCommonRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideConstCommonRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideConstCommonRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideConstCommonRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideConstCommonRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::AetherDivideConstCommonRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideConstCommonRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideConstCommonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECONSTCOMMONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
