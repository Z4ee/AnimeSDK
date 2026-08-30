#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DecalGameplayConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D01BFE0)
#define RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D01BE70)
#define RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D01BB60)
#define RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D01BE10)
#define RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D01C170)
#define RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D01BBE0)
#define RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D01C1B0)
#define RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D01C380)
#define RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D01C590)
#define RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D01C900)
#define RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D01C2E0)
#define RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D01C240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecalGameplayConfigExcelTable_TypeDefinitionIndex = 13022;

	class DecalGameplayConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DecalGameplayConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x20210);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecalGameplayConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecalGameplayConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(DecalGameplayConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x20218);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DecalGameplayConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x20220);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DecalGameplayConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA8E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DecalGameplayConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA8E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecalGameplayConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecalGameplayConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecalGameplayConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecalGameplayConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DecalGameplayConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DecalGameplayConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DecalGameplayConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DecalGameplayConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALGAMEPLAYCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
