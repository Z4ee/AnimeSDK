#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConstValueRogueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17132560)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x171323B0)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GETUINTVALUE_OFFSET UNITYSDK_OFFSET(0x17132DA0)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17132080)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17132350)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17132710)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17132100)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17132750)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17132930)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17132A90)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17132E80)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17132890)
#define RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x171327F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstValueRogueExcelTable_TypeDefinitionIndex = 13448;

	class ConstValueRogueExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueRogueRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueRogueRow*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueRogueExcelTable_TypeDefinitionIndex)->GetStaticField(0x28F70);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueRogueExcelTable_TypeDefinitionIndex)->GetStaticField(0x28F78);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ConstValueRogueExcelTable_TypeDefinitionIndex)->GetStaticField(0x28F80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConstValueRogueExcelTable_TypeDefinitionIndex)->GetStaticField(0xD7C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ConstValueRogueExcelTable_TypeDefinitionIndex)->GetStaticField(0xD7C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueRogueRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueRogueRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueRogueRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueRogueRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ConstValueRogueRow* GetData(::System::String* ConstRogueName)
		{
			return ((::RPG::GameCore::ConstValueRogueRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GETDATA_OFFSET))(ConstRogueName);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ConstValueRogueRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ConstValueRogueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::UInt32 GetUIntValue(::System::String* constValueName)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUEROGUEEXCELTABLE_GETUINTVALUE_OFFSET))(constValueName);
		}
	};
}
