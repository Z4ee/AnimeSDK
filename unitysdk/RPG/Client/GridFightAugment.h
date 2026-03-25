#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_2341347423DFDC46_1;
class Class_1_43BD383C98B4C0C5_135;
class Class_1_6E708EAB438EC183_31;
class Class_1_C3C5C0E033C47270_9;
class Class_2_C7FD1C569151CC59;
class Class_2_E8071608D176AB59;
class Class_2_ED573AF94AF1D36B;
namespace RPG::Client { class GridFightAugmentConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENT_CLEANUP_OFFSET UNITYSDK_OFFSET(0x97CC1D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x97CBF10)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GETDESCDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0x97CD1B0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GETNOUNDERLINEEXTRACOMPILERS_OFFSET UNITYSDK_OFFSET(0x97CC8F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GETUNDERLINEEXTRACOMPILERS_OFFSET UNITYSDK_OFFSET(0x97CC4F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_CHAPTERLIMITLIST_OFFSET UNITYSDK_OFFSET(0x97CCBA0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x97CD190)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_DESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0x97CCCC0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_DESC_OFFSET UNITYSDK_OFFSET(0x97CC360)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0x97CCEF0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x97CCD60)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ID_OFFSET UNITYSDK_OFFSET(0x97CC2A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x97CD160)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0x97CC280)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0x97CCEA0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x97CCDB0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x97CC2F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_NOUNDERLINEDESC_OFFSET UNITYSDK_OFFSET(0x97CC820)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x97CCD10)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REFTRAITID_OFFSET UNITYSDK_OFFSET(0x97CCE00)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REFTRAITSCORE_OFFSET UNITYSDK_OFFSET(0x97CCE50)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET_REMARK_OFFSET UNITYSDK_OFFSET(0x97CC6E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_GET__REMARK_OFFSET UNITYSDK_OFFSET(0x97CCAE0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_SET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x97CD1A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_SET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0x97CC290)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x97CC210)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_WITHCONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x97CC020)
#define RPG_CLIENT_GRIDFIGHTAUGMENT_WITHEMPTYVARIABLEPROVIDER_OFFSET UNITYSDK_OFFSET(0x97CC070)
#define RPG_CLIENT_GRIDFIGHTAUGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x97CDE10)
#define RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x97CC120)
#define RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x97CBF90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugment_TypeDefinitionIndex = 52277;

	class GridFightAugment : public ::System::Object
	{
	public:
		static ::Class_2_C7FD1C569151CC59** StaticGet__DescCompiler()
		{
			return (::Class_2_C7FD1C569151CC59**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugment_TypeDefinitionIndex)->GetStaticField(0x12350);
		}
		static ::Class_2_ED573AF94AF1D36B** StaticGet__EquipCompiler()
		{
			return (::Class_2_ED573AF94AF1D36B**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugment_TypeDefinitionIndex)->GetStaticField(0x12358);
		}
		::Class_2_E8071608D176AB59* _VariableCompiler; // 0x10
		::RPG::Client::GridFightAugmentConfig* _Config; // 0x18
		::Class_1_6E708EAB438EC183_31* _ContextData_k__BackingField; // 0x20
		::System::Boolean _IsExtra_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 augmentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_OFFSET))(this, augmentID);
		}

		::System::Void _ctor_1(::Class_1_2341347423DFDC46_1* augment)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2341347423DFDC46_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT__CTOR_1_OFFSET))(this, augment);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT__CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightAugment* Create(::System::UInt32 augmentID)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_CREATE_OFFSET))(augmentID);
		}

		::System::Void WithContextData(::Class_1_6E708EAB438EC183_31* contextData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_WITHCONTEXTDATA_OFFSET))(this, contextData);
		}

		::System::Void WithEmptyVariableProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_WITHEMPTYVARIABLEPROVIDER_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_CLEANUP_OFFSET))(this);
		}

		::System::Void Update(::Class_1_C3C5C0E033C47270_9* updateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_UPDATE_OFFSET))(this, updateInfo);
		}

		::System::Boolean get_IsExtra()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_ISEXTRA_OFFSET))(this);
		}

		::System::Void set_IsExtra(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_SET_ISEXTRA_OFFSET))(this, value);
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

		::Class_1_6E708EAB438EC183_31* get_ContextData()
		{
			return ((::Class_1_6E708EAB438EC183_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GET_CONTEXTDATA_OFFSET))(this);
		}

		::System::Void set_ContextData(::Class_1_6E708EAB438EC183_31* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_SET_CONTEXTDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetDescDetailObject()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GETDESCDETAILOBJECT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_135*>* GetUnderLineExtraCompilers()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_135*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GETUNDERLINEEXTRACOMPILERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_135*>* GetNoUnderLineExtraCompilers()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_135*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENT_GETNOUNDERLINEEXTRACOMPILERS_OFFSET))(this);
		}
	};
}
