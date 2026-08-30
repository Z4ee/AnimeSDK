#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkBuffRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CFDD5D0)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CFDD460)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CFDD150)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CFDD400)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CFDD760)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFDD1D0)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFDD7A0)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFDD970)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CFDDD80)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFDE0F0)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CFDD8D0)
#define RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFDD830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkBuffExcelTable_TypeDefinitionIndex = 11169;

	class ClockParkBuffExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B9D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffRow*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B9D8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B9E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ClockParkBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x9870);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClockParkBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x9871);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkBuffRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ClockParkBuffRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkBuffRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
