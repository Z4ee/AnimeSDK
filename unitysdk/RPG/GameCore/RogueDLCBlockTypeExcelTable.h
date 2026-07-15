#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCBlockTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C4B83A0)
#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4B8230)
#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C4B7F20)
#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C4B81D0)
#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C4B8530)
#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4B7FA0)
#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4B8570)
#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4B8740)
#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C4B8A20)
#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4B8D90)
#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C4B86A0)
#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4B8600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBlockTypeExcelTable_TypeDefinitionIndex = 14197;

	class RogueDLCBlockTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D8B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D8B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D8C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xDCC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xDCC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCBlockTypeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCBlockTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCBlockTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCBlockTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
