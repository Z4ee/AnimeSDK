#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_35;
class Class_1_355A2207C3B7A99D_36;
class Class_1_43BD383C98B4C0C5_107;
class Class_1_6BD41257D23618B4_7;
class Class_2_3A4328378594DDBD;
class Class_2_6EC820A6C20B6F37;
class Class_2_BD853400BAE2A083;
namespace RPG::Client { class GridFightAugmentConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENT_CLEANUP_OFFSET UNITYSDK_OFFSET(0xBAE0D40)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0xBAE0A80)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GETDESCDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0xBAE21F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GETNOUNDERLINEEXTRACOMPILERS_OFFSET UNITYSDK_OFFSET(0xBAE1530)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GETOUTEREXTRACOMPILERS_OFFSET UNITYSDK_OFFSET(0xBAE18A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GETUNDERLINEEXTRACOMPILERS_OFFSET UNITYSDK_OFFSET(0xBAE1080)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_CHAPTERLIMITLIST_OFFSET UNITYSDK_OFFSET(0xBAE1BE0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0xBAE21D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_DESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xBAE1D00)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBAE0EF0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0xBAE1F30)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBAE1DA0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ID_OFFSET UNITYSDK_OFFSET(0xBAE0E30)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISADDDIFFICULT_OFFSET UNITYSDK_OFFSET(0xBAE0E10)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xBAE21A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0xBAE0DF0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0xBAE1EE0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xBAE1DF0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBAE0E80)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_NOUNDERLINEDESC_OFFSET UNITYSDK_OFFSET(0xBAE1460)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_OUTERDESC_OFFSET UNITYSDK_OFFSET(0xBAE17D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0xBAE1D50)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REFTRAITID_OFFSET UNITYSDK_OFFSET(0xBAE1E40)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REFTRAITSCORE_OFFSET UNITYSDK_OFFSET(0xBAE1E90)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REMARK_OFFSET UNITYSDK_OFFSET(0xBAE1320)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET__REMARK_OFFSET UNITYSDK_OFFSET(0xBAE1B10)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_SET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0xBAE21E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_SET_ISADDDIFFICULT_OFFSET UNITYSDK_OFFSET(0xBAE0E20)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_SET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0xBAE0E00)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xBAE0D80)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_WITHCONTEXTDATA_OFFSET UNITYSDK_OFFSET(0xBAE0B90)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_WITHEMPTYVARIABLEPROVIDER_OFFSET UNITYSDK_OFFSET(0xBAE0BE0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xBAE3040)
#define RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBAE0C90)
#define RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE0B00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugment_TypeDefinitionIndex = 60164;

	class GridFightAugment : public ::System::Object
	{
	public:
		static ::Class_2_BD853400BAE2A083** StaticGet__EquipCompiler()
		{
			return (::Class_2_BD853400BAE2A083**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugment_TypeDefinitionIndex)->GetStaticField(0x29550);
		}
		static ::Class_2_6EC820A6C20B6F37** StaticGet__DescCompiler()
		{
			return (::Class_2_6EC820A6C20B6F37**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugment_TypeDefinitionIndex)->GetStaticField(0x29558);
		}
		::Class_1_075C34D03AFA1215_35* _ContextData_k__BackingField; // 0x10
		::Class_2_3A4328378594DDBD* _VariableCompiler; // 0x18
		::RPG::Client::GridFightAugmentConfig* _Config; // 0x20
		::System::Boolean _IsExtra_k__BackingField; // 0x28
		::System::Boolean _IsAddDifficult_k__BackingField; // 0x29

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Class_1_6BD41257D23618B4_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6BD41257D23618B4_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT__CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightAugment* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_CREATE_OFFSET))(a1);
		}

		::System::Void WithContextData(::Class_1_075C34D03AFA1215_35* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_WITHCONTEXTDATA_OFFSET))(this, a1);
		}

		::System::Void WithEmptyVariableProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_WITHEMPTYVARIABLEPROVIDER_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_CLEANUP_OFFSET))(this);
		}

		::System::Void Update(::Class_1_355A2207C3B7A99D_36* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_UPDATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExtra()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISEXTRA_OFFSET))(this);
		}

		::System::Void set_IsExtra(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_SET_ISEXTRA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAddDifficult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISADDDIFFICULT_OFFSET))(this);
		}

		::System::Void set_IsAddDifficult(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_SET_ISADDDIFFICULT_OFFSET))(this, a1);
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

		::System::Void set_ContextData(::Class_1_075C34D03AFA1215_35* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_SET_CONTEXTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetDescDetailObject()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GETDESCDETAILOBJECT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_107*>* GetUnderLineExtraCompilers()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_107*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GETUNDERLINEEXTRACOMPILERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_107*>* GetNoUnderLineExtraCompilers()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_107*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GETNOUNDERLINEEXTRACOMPILERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_107*>* GetOuterExtraCompilers()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_107*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GETOUTEREXTRACOMPILERS_OFFSET))(this);
		}
	};
}
