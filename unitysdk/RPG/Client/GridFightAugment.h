#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_35;
class Class_1_21C7581DFE99F091_41;
class Class_1_355A2207C3B7A99D_35;
class Class_1_43BD383C98B4C0C5_96;
class Class_2_6EC820A6C20B6F37;
class Class_2_AC9B657B830B12C4;
class Class_2_ED573AF94AF1D36B;
namespace RPG::Client { class GridFightAugmentConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENT_CLEANUP_OFFSET UNITYSDK_OFFSET(0xA444920)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0xA444660)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GETDESCDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0xA445BC0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GETNOUNDERLINEEXTRACOMPILERS_OFFSET UNITYSDK_OFFSET(0xA445050)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GETOUTEREXTRACOMPILERS_OFFSET UNITYSDK_OFFSET(0xA445310)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GETUNDERLINEEXTRACOMPILERS_OFFSET UNITYSDK_OFFSET(0xA444C50)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_CHAPTERLIMITLIST_OFFSET UNITYSDK_OFFSET(0xA4455A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0xA445BA0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_DESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xA4456C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA444AC0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0xA445900)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA445760)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ID_OFFSET UNITYSDK_OFFSET(0xA444A10)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISADDDIFFICULT_OFFSET UNITYSDK_OFFSET(0xA4449F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xA445B70)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0xA4449D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0xA4458A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xA4457B0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA444A60)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_NOUNDERLINEDESC_OFFSET UNITYSDK_OFFSET(0xA444F80)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_OUTERDESC_OFFSET UNITYSDK_OFFSET(0xA445240)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0xA445710)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REFTRAITID_OFFSET UNITYSDK_OFFSET(0xA445800)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REFTRAITSCORE_OFFSET UNITYSDK_OFFSET(0xA445850)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REMARK_OFFSET UNITYSDK_OFFSET(0xA444E40)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET__REMARK_OFFSET UNITYSDK_OFFSET(0xA4454E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_SET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0xA445BB0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_SET_ISADDDIFFICULT_OFFSET UNITYSDK_OFFSET(0xA444A00)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_SET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0xA4449E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xA444960)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_WITHCONTEXTDATA_OFFSET UNITYSDK_OFFSET(0xA444770)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_WITHEMPTYVARIABLEPROVIDER_OFFSET UNITYSDK_OFFSET(0xA4447C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA446820)
#define RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA444870)
#define RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4446E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugment_TypeDefinitionIndex = 59229;

	class GridFightAugment : public ::System::Object
	{
	public:
		static ::Class_2_6EC820A6C20B6F37** StaticGet__DescCompiler()
		{
			return (::Class_2_6EC820A6C20B6F37**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugment_TypeDefinitionIndex)->GetStaticField(0x17F60);
		}
		static ::Class_2_ED573AF94AF1D36B** StaticGet__EquipCompiler()
		{
			return (::Class_2_ED573AF94AF1D36B**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugment_TypeDefinitionIndex)->GetStaticField(0x17F68);
		}
		::Class_2_AC9B657B830B12C4* _VariableCompiler; // 0x10
		::RPG::Client::GridFightAugmentConfig* _Config; // 0x18
		::Class_1_075C34D03AFA1215_35* _ContextData_k__BackingField; // 0x20
		::System::Boolean _IsExtra_k__BackingField; // 0x28
		::System::Boolean _IsAddDifficult_k__BackingField; // 0x29

		::System::Void _ctor(::System::UInt32 augmentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_OFFSET))(this, augmentID);
		}

		::System::Void _ctor_1(::Class_1_21C7581DFE99F091_41* augment)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_1_OFFSET))(this, augment);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT__CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightAugment* Create(::System::UInt32 augmentID)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_CREATE_OFFSET))(augmentID);
		}

		::System::Void WithContextData(::Class_1_075C34D03AFA1215_35* contextData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_WITHCONTEXTDATA_OFFSET))(this, contextData);
		}

		::System::Void WithEmptyVariableProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_WITHEMPTYVARIABLEPROVIDER_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_CLEANUP_OFFSET))(this);
		}

		::System::Void Update(::Class_1_355A2207C3B7A99D_35* updateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_UPDATE_OFFSET))(this, updateInfo);
		}

		::System::Boolean get_IsExtra()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISEXTRA_OFFSET))(this);
		}

		::System::Void set_IsExtra(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_SET_ISEXTRA_OFFSET))(this, value);
		}

		::System::Boolean get_IsAddDifficult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISADDDIFFICULT_OFFSET))(this);
		}

		::System::Void set_IsAddDifficult(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_SET_ISADDDIFFICULT_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_DESC_OFFSET))(this);
		}

		::System::String* get_NoUnderLineDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_NOUNDERLINEDESC_OFFSET))(this);
		}

		::System::String* get_OuterDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_OUTERDESC_OFFSET))(this);
		}

		::System::String* get_Remark()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REMARK_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ChapterLimitList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_CHAPTERLIMITLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_DESCPARAMLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightAugmentQuality get_Quality()
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_QUALITY_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_MINIICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RefTraitID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REFTRAITID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RefTraitScore()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REFTRAITSCORE_OFFSET))(this);
		}

		::System::Boolean get_IsOCEffective()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISOCEFFECTIVE_OFFSET))(this);
		}

		::System::Boolean get_HasDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_HASDETAIL_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISEXPIRED_OFFSET))(this);
		}

		::RPG::Client::TextID get__Remark()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET__REMARK_OFFSET))(this);
		}

		::Class_1_075C34D03AFA1215_35* get_ContextData()
		{
			return ((::Class_1_075C34D03AFA1215_35*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_CONTEXTDATA_OFFSET))(this);
		}

		::System::Void set_ContextData(::Class_1_075C34D03AFA1215_35* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_SET_CONTEXTDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetDescDetailObject()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GETDESCDETAILOBJECT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_96*>* GetUnderLineExtraCompilers()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_96*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GETUNDERLINEEXTRACOMPILERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_96*>* GetNoUnderLineExtraCompilers()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_96*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GETNOUNDERLINEEXTRACOMPILERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_96*>* GetOuterExtraCompilers()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_96*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GETOUTEREXTRACOMPILERS_OFFSET))(this);
		}
	};
}
