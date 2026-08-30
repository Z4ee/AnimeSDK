#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherDivideGymInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CBC5880)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CBC5750)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CBC5440)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CBC56F0)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CBC5A10)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CBC54C0)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CBC5A50)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CBC5C20)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CBC61F0)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBC6510)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CBC5B80)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CBC5AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideGymInfoExcelTable_TypeDefinitionIndex = 10903;

	class AetherDivideGymInfoExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideGymInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x51800);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideGymInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x51808);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideGymInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x51810);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideGymInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x10F50);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideGymInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x10F51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideGymInfoRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AetherDivideGymInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideGymInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideGymInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
