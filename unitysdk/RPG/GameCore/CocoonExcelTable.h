#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CocoonRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_COCOONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D9A3FB0)
#define RPG_GAMECORE_COCOONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D9A3E40)
#define RPG_GAMECORE_COCOONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D9A3B30)
#define RPG_GAMECORE_COCOONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D9A3DE0)
#define RPG_GAMECORE_COCOONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D9A4150)
#define RPG_GAMECORE_COCOONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9A3BB0)
#define RPG_GAMECORE_COCOONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9A4190)
#define RPG_GAMECORE_COCOONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9A4360)
#define RPG_GAMECORE_COCOONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D9A4930)
#define RPG_GAMECORE_COCOONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9A4C90)
#define RPG_GAMECORE_COCOONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D9A42C0)
#define RPG_GAMECORE_COCOONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9A4220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CocoonExcelTable_TypeDefinitionIndex = 12474;

	class CocoonExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(CocoonExcelTable_TypeDefinitionIndex)->GetStaticField(0x77E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CocoonExcelTable_TypeDefinitionIndex)->GetStaticField(0x77E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CocoonRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CocoonRow*>**)Il2CppClass::FromTypeDefinitionIndex(CocoonExcelTable_TypeDefinitionIndex)->GetStaticField(0x77F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(CocoonExcelTable_TypeDefinitionIndex)->GetStaticField(0x2050);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CocoonExcelTable_TypeDefinitionIndex)->GetStaticField(0x2051);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CocoonRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CocoonRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CocoonRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CocoonRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::CocoonRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::CocoonRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::CocoonRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CocoonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COCOONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
