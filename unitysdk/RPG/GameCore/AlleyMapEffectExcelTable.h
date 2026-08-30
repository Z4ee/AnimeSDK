#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyMapEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C55E7A0)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C55E630)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C55E320)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C55E5D0)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C55E930)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C55E3A0)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C55E970)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C55EB40)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C55EE70)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C55F1E0)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C55EAA0)
#define RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C55EA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMapEffectExcelTable_TypeDefinitionIndex = 12513;

	class AlleyMapEffectExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapEffectRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapEffectRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMapEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D30);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMapEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D38);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMapEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyMapEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x9D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyMapEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x9D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapEffectRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapEffectRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapEffectRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapEffectRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyMapEffectRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyMapEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyMapEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyMapEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
