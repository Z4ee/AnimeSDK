#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleSealBuffRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18AA59D0)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18AA5820)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18AA54F0)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18AA57C0)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18AA5BA0)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18AA5570)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18AA5BE0)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AA5DC0)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18AA5F40)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AA62A0)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18AA5D20)
#define RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18AA5C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealBuffExcelTable_TypeDefinitionIndex = 11291;

	class MarbleSealBuffExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleSealBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x33CC0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealBuffRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealBuffRow*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleSealBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x33CC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleSealBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x33CD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MarbleSealBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0xC9D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MarbleSealBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0xC9D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealBuffRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealBuffRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealBuffRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealBuffRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MarbleSealBuffRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MarbleSealBuffRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MarbleSealBuffRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleSealBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
