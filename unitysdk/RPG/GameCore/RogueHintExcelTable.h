#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueHintRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1D935E30)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D935EB0)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D935CC0)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D9359B0)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D935C60)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D936000)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D935A30)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D936040)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D936210)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D9363C0)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9366E0)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D936170)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9360D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHintExcelTable_TypeDefinitionIndex = 14525;

	class RogueHintExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueHintExcelTable_TypeDefinitionIndex)->GetStaticField(0xE1E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueHintExcelTable_TypeDefinitionIndex)->GetStaticField(0xE1E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueHintExcelTable_TypeDefinitionIndex)->GetStaticField(0xE1F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueHintExcelTable_TypeDefinitionIndex)->GetStaticField(0x4460);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueHintExcelTable_TypeDefinitionIndex)->GetStaticField(0x4461);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*>, ::RPG::GameCore::RogueHintRow*> AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*>, ::RPG::GameCore::RogueHintRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::RogueHintRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueHintRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueHintRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueHintRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
