#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class InControlControlTypeInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D218B50)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D2189E0)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D2186D0)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D218980)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D218D00)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D218750)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D218D40)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D218F10)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D219160)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D219480)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D218E70)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D218DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlControlTypeInfoExcelTable_TypeDefinitionIndex = 13715;

	class InControlControlTypeInfoExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlControlTypeInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlControlTypeInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(InControlControlTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B820);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(InControlControlTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B828);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InControlControlTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B830);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InControlControlTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xC8B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(InControlControlTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xC8B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlControlTypeInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlControlTypeInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlControlTypeInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlControlTypeInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::InControlControlTypeInfoRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::InControlControlTypeInfoRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::InControlControlTypeInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::InControlControlTypeInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
