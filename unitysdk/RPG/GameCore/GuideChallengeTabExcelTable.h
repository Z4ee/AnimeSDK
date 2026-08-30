#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GuideChallengeTabExcelTable_IndexKey.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GuideChallengeTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D3C4F20)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3C4DB0)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D3C4AA0)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D3C4D50)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D3C5060)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3C4B20)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3C50A0)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3C5270)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D3C5620)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3C5AA0)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D3C51D0)
#define RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3C5130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideChallengeTabExcelTable_TypeDefinitionIndex = 13278;

	class GuideChallengeTabExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey, ::RPG::GameCore::GuideChallengeTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey, ::RPG::GameCore::GuideChallengeTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(GuideChallengeTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x27FB0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GuideChallengeTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x27FB8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GuideChallengeTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x27FC0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GuideChallengeTabExcelTable_TypeDefinitionIndex)->GetStaticField(0xBD00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey, ::RPG::GameCore::GuideChallengeTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey, ::RPG::GameCore::GuideChallengeTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey, ::RPG::GameCore::GuideChallengeTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey, ::RPG::GameCore::GuideChallengeTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GuideChallengeTabRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GuideChallengeTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GuideChallengeTabRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GuideChallengeTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
