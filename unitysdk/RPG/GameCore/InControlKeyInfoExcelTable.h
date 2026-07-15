#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class InControlKeyInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B00C4C0)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B00C350)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B00C040)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B00C2F0)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B00C630)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B00C0C0)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B00C670)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B00C840)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B00CB70)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B00CE90)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B00C7A0)
#define RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B00C700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlKeyInfoExcelTable_TypeDefinitionIndex = 13320;

	class InControlKeyInfoExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(InControlKeyInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x272B0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InControlKeyInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x272B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlKeyInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlKeyInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(InControlKeyInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x272C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InControlKeyInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x7590);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(InControlKeyInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x7591);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlKeyInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlKeyInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlKeyInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlKeyInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::InControlKeyInfoRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::InControlKeyInfoRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::InControlKeyInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::InControlKeyInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
