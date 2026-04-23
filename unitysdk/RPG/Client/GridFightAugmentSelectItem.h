#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_35;
class Class_1_43BD383C98B4C0C5_96;
class Class_1_D1E0AD3915BCCF29_45;
class Class_2_6EC820A6C20B6F37;
class Class_2_ED573AF94AF1D36B;
namespace RPG::Client { class GridFightAugmentConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GETDESCDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0xA4494A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GETUNDERLINEEXTRACOMPILERS_OFFSET UNITYSDK_OFFSET(0xA448FB0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0xA449290)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_DESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xA4491B0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA448F00)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0xA449270)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA449210)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xA448EA0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0xA448E60)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xA449240)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA448ED0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0xA4491E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0xA448E80)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_SET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0xA448E70)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_SET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0xA448E90)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xA449690)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA4493F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA449360)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentSelectItem_TypeDefinitionIndex = 59238;

	class GridFightAugmentSelectItem : public ::System::Object
	{
	public:
		static ::Class_2_ED573AF94AF1D36B** StaticGet__EquipCompiler()
		{
			return (::Class_2_ED573AF94AF1D36B**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentSelectItem_TypeDefinitionIndex)->GetStaticField(0x18220);
		}
		static ::Class_2_6EC820A6C20B6F37** StaticGet__DescCompiler()
		{
			return (::Class_2_6EC820A6C20B6F37**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentSelectItem_TypeDefinitionIndex)->GetStaticField(0x18228);
		}
		::RPG::Client::GridFightAugmentConfig* _Config; // 0x10
		::System::UInt32 _RollTimes_k__BackingField; // 0x18
		::System::UInt32 _MaxRollTimes_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 augmentID, ::System::UInt32 rollTimes)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM__CTOR_OFFSET))(this, augmentID, rollTimes);
		}

		::System::Void _ctor_1(::Class_1_D1E0AD3915BCCF29_45* select)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM__CTOR_1_OFFSET))(this, select);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM__CCTOR_OFFSET))();
		}

		::System::UInt32 get_MaxRollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_MAXROLLTIMES_OFFSET))(this);
		}

		::System::Void set_MaxRollTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_SET_MAXROLLTIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_RollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GET_ROLLTIMES_OFFSET))(this);
		}

		::System::Void set_RollTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_SET_ROLLTIMES_OFFSET))(this, value);
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

		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_96*>* GetUnderLineExtraCompilers()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_96*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTITEM_GETUNDERLINEEXTRACOMPILERS_OFFSET))(this);
		}
	};
}
