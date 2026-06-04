#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_35;
class Class_1_43BD383C98B4C0C5_107;
class Class_1_D1E0AD3915BCCF29_47;
class Class_2_6EC820A6C20B6F37;
class Class_2_BD853400BAE2A083;
namespace RPG::Client { class GridFightAugmentConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GETDESCDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0xBAE61F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GETUNDERLINEEXTRACOMPILERS_OFFSET UNITYSDK_OFFSET(0xBAE5C60)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0xBAE5FE0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_DESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xBAE5F00)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBAE5BB0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0xBAE5FC0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBAE5F60)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xBAE5B40)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0xBAE5B00)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xBAE5F90)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBAE5B70)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0xBAE5F30)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0xBAE5B20)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_SET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0xBAE5B10)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_SET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0xBAE5B30)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xBAE6410)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBAE6140)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE60B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentSelectItem_TypeDefinitionIndex = 60173;

	class GridFightAugmentSelectItem : public ::System::Object
	{
	public:
		static ::Class_2_6EC820A6C20B6F37** StaticGet__DescCompiler()
		{
			return (::Class_2_6EC820A6C20B6F37**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentSelectItem_TypeDefinitionIndex)->GetStaticField(0x296F0);
		}
		static ::Class_2_BD853400BAE2A083** StaticGet__EquipCompiler()
		{
			return (::Class_2_BD853400BAE2A083**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentSelectItem_TypeDefinitionIndex)->GetStaticField(0x296F8);
		}
		::RPG::Client::GridFightAugmentConfig* _Config; // 0x10
		::System::UInt32 _MaxRollTimes_k__BackingField; // 0x18
		::System::UInt32 _RollTimes_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Class_1_D1E0AD3915BCCF29_47* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_47*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM__CCTOR_OFFSET))();
		}

		::System::UInt32 get_MaxRollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_MAXROLLTIMES_OFFSET))(this);
		}

		::System::Void set_MaxRollTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_SET_MAXROLLTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_RollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ROLLTIMES_OFFSET))(this);
		}

		::System::Void set_RollTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_SET_ROLLTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_DESCPARAMLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightAugmentQuality get_Quality()
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_QUALITY_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::Boolean get_HasDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_HASDETAIL_OFFSET))(this);
		}

		::Class_1_075C34D03AFA1215_35* get_ContextData()
		{
			return ((::Class_1_075C34D03AFA1215_35*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_CONTEXTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetDescDetailObject()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GETDESCDETAILOBJECT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_107*>* GetUnderLineExtraCompilers()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_107*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GETUNDERLINEEXTRACOMPILERS_OFFSET))(this);
		}
	};
}
