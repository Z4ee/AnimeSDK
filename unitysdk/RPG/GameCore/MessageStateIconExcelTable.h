#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MessageStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MessageStateIconRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D1A20E0)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D1A1F70)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D1A1C60)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D1A1F10)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D1A2270)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1A1CE0)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1A22B0)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A2480)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D1A2610)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1A2980)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D1A23E0)
#define RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1A2340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageStateIconExcelTable_TypeDefinitionIndex = 14319;

	class MessageStateIconExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageStateIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B7D0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageStateIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B7D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageStateIconRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageStateIconRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageStateIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B7E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageStateIconExcelTable_TypeDefinitionIndex)->GetStaticField(0xF430);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MessageStateIconExcelTable_TypeDefinitionIndex)->GetStaticField(0xF431);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageStateIconRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageStateIconRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageStateIconRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageStateIconRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageStateIconRow* GetData(::RPG::GameCore::MessageStateType a1)
		{
			return ((::RPG::GameCore::MessageStateIconRow*(*)(::RPG::GameCore::MessageStateType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageStateIconRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageStateIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
