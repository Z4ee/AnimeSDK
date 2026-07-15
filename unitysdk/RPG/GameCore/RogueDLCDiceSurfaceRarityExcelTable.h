#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCDiceSurfaceRarityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C4BC780)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4BC610)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C4BC300)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C4BC5B0)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C4BC910)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4BC380)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4BC950)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4BCB20)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C4BCCF0)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4BD060)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C4BCA80)
#define RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4BC9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCDiceSurfaceRarityExcelTable_TypeDefinitionIndex = 14161;

	class RogueDLCDiceSurfaceRarityExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCDiceSurfaceRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0x48F20);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCDiceSurfaceRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0x48F28);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCDiceSurfaceRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0x48F30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCDiceSurfaceRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0xCDB0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCDiceSurfaceRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0xCDB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCDiceSurfaceRarityRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCDiceSurfaceRarityRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCDiceSurfaceRarityRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDICESURFACERARITYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
