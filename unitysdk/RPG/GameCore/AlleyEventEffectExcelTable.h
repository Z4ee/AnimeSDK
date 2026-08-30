#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyEventEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CE0B3D0)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CE0B260)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CE0AF50)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CE0B200)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CE0B560)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE0AFD0)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE0B5A0)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE0B770)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CE0B9D0)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE0BD40)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CE0B6D0)
#define RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE0B630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyEventEffectExcelTable_TypeDefinitionIndex = 12523;

	class AlleyEventEffectExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyEventEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x35890);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventEffectRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventEffectRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyEventEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x35898);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyEventEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x358A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyEventEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0xDF80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyEventEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0xDF81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventEffectRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventEffectRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventEffectRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyEventEffectRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyEventEffectRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyEventEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyEventEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyEventEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
