#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDialogueOptionDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D13660)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D134B0)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D13180)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D13450)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D137E0)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D13200)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D13820)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D13A00)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D13C40)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D13F50)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D13960)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D138C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueOptionDisplayExcelTable_TypeDefinitionIndex = 14024;

	class RogueDialogueOptionDisplayExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueOptionDisplayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueOptionDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDialogueOptionDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x44270);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDialogueOptionDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x44278);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDialogueOptionDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x44280);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDialogueOptionDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF300);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDialogueOptionDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF301);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueOptionDisplayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueOptionDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueOptionDisplayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueOptionDisplayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDialogueOptionDisplayRow* GetData(::System::UInt32 OptionDisplayID)
		{
			return ((::RPG::GameCore::RogueDialogueOptionDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE_GETDATA_OFFSET))(OptionDisplayID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDialogueOptionDisplayRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDialogueOptionDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
