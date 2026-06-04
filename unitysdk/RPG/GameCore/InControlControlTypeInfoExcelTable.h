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

#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1984B0B0)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1984AF40)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1984AC30)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1984AEE0)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1984B260)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1984ACB0)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1984B2A0)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1984B470)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1984B6C0)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1984B9E0)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1984B3D0)
#define RPG_GAMECORE_INCONTROLCONTROLTYPEINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1984B330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlControlTypeInfoExcelTable_TypeDefinitionIndex = 13176;

	class InControlControlTypeInfoExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InControlControlTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x255A0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(InControlControlTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x255A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlControlTypeInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlControlTypeInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(InControlControlTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x255B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InControlControlTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x9360);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(InControlControlTypeInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x9361);
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
