#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueImageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEIMAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19B40220)
#define RPG_GAMECORE_ROGUEIMAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19B400F0)
#define RPG_GAMECORE_ROGUEIMAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19B3FDE0)
#define RPG_GAMECORE_ROGUEIMAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19B40090)
#define RPG_GAMECORE_ROGUEIMAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19B40370)
#define RPG_GAMECORE_ROGUEIMAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19B3FE60)
#define RPG_GAMECORE_ROGUEIMAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19B403B0)
#define RPG_GAMECORE_ROGUEIMAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B40580)
#define RPG_GAMECORE_ROGUEIMAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19B40800)
#define RPG_GAMECORE_ROGUEIMAGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B40B20)
#define RPG_GAMECORE_ROGUEIMAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19B404E0)
#define RPG_GAMECORE_ROGUEIMAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19B40440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueImageExcelTable_TypeDefinitionIndex = 14082;

	class RogueImageExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F790);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F798);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImageRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F7A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x9EF0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x9EF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMAGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueImageRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueImageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMAGEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMAGEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueImageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMAGEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
