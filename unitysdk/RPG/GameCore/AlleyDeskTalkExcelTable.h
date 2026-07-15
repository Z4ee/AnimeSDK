#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyDeskTalkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AE755D0)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AE75460)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AE75150)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AE75400)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AE75760)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AE751D0)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AE757A0)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AE75970)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AE75C40)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE75FB0)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AE758D0)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AE75830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyDeskTalkExcelTable_TypeDefinitionIndex = 12154;

	class AlleyDeskTalkExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyDeskTalkRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyDeskTalkRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyDeskTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DEB0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyDeskTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DEB8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyDeskTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DEC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyDeskTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x68A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyDeskTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x68A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyDeskTalkRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyDeskTalkRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyDeskTalkRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyDeskTalkRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyDeskTalkRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyDeskTalkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyDeskTalkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyDeskTalkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
