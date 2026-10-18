#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/CraftProgressAttrPipeline/MechCraftPerfUnitType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_121;
class Class_0_16E4307DCC419505_1492;
class Class_1_0AAC2AA1059B9FB9;
class Class_1_351B5A4C31F993D8;
class Class_1_351B5A4C31F993D8_Class_1_30EDA1B5FA8A966C;
class Class_1_3CFD07DFD0180CDE;
class Class_1_6241E1C44338E6DB;
class Class_1_CC3D59C36CF212FC_Class_3_37704591509EA55A;
class Class_1_D3359DF62696519E;
class Class_1_F9FBCC956DFCF137_31;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftCraftProgressAttrRadarViewModel; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_0_16E4307DCC419505_399;

#define CLASS_1_CC3D59C36CF212FC_ADD_HANDLEGETTARGETREACHEDDURATION_OFFSET UNITYSDK_OFFSET(0xDFE2560)
#define CLASS_1_CC3D59C36CF212FC_ADD_HANDLEGETTARGETREACHINGDURATION_OFFSET UNITYSDK_OFFSET(0xDFE24A0)
#define CLASS_1_CC3D59C36CF212FC_ADD_HANDLEPLAYTARGETREACHING_OFFSET UNITYSDK_OFFSET(0xDFE2620)
#define CLASS_1_CC3D59C36CF212FC_GET_RADAR_OFFSET UNITYSDK_OFFSET(0xDFE2480)
#define CLASS_1_CC3D59C36CF212FC_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xDFE2460)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_0762847F97165F6D_OFFSET UNITYSDK_OFFSET(0xDFE2E00)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_750623E724D03017_OFFSET UNITYSDK_OFFSET(0xDFE3070)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_7B3711015280C5D2_OFFSET UNITYSDK_OFFSET(0xDFE30C0)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_AD76026B70822B9B_OFFSET UNITYSDK_OFFSET(0xDFE2FF0)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_C3CF60C7118A64E3_OFFSET UNITYSDK_OFFSET(0xDFE2720)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_C7BFD80E65DE9B66_OFFSET UNITYSDK_OFFSET(0xDFE3230)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_DA9023C6799113EF_OFFSET UNITYSDK_OFFSET(0xDFE2950)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_DE4511C94CB4D265_OFFSET UNITYSDK_OFFSET(0xDFE2ED0)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_DEEEF4BF9126B815_OFFSET UNITYSDK_OFFSET(0xDFE2E60)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_E10B4092FFA54980_1_OFFSET UNITYSDK_OFFSET(0xDFE2C60)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_E10B4092FFA54980_2_OFFSET UNITYSDK_OFFSET(0xDFE2CD0)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_E10B4092FFA54980_OFFSET UNITYSDK_OFFSET(0xDFE2BF0)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_EBEE0D0A222A8264_1_OFFSET UNITYSDK_OFFSET(0xDFE2DA0)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xDFE2D40)
#define CLASS_1_CC3D59C36CF212FC_METHOD_1_F919D4649D2FC4AC_OFFSET UNITYSDK_OFFSET(0xDFE3120)
#define CLASS_1_CC3D59C36CF212FC_REMOVE_HANDLEGETTARGETREACHEDDURATION_OFFSET UNITYSDK_OFFSET(0xDFE25C0)
#define CLASS_1_CC3D59C36CF212FC_REMOVE_HANDLEGETTARGETREACHINGDURATION_OFFSET UNITYSDK_OFFSET(0xDFE2500)
#define CLASS_1_CC3D59C36CF212FC_REMOVE_HANDLEPLAYTARGETREACHING_OFFSET UNITYSDK_OFFSET(0xDFE26A0)
#define CLASS_1_CC3D59C36CF212FC_SET_RADAR_OFFSET UNITYSDK_OFFSET(0xDFE2490)
#define CLASS_1_CC3D59C36CF212FC_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xDFE2470)
#define CLASS_1_CC3D59C36CF212FC__CTOR_OFFSET UNITYSDK_OFFSET(0xDFE2800)
#define CLASS_1_CC3D59C36CF212FC___CREATESNAPSHOT_B__31_0_OFFSET UNITYSDK_OFFSET(0xDFE3300)

inline static constexpr unsigned int Class_1_CC3D59C36CF212FC_TypeDefinitionIndex = 79552;

class Class_1_CC3D59C36CF212FC : public ::System::Object
{
public:
	::Class_1_6241E1C44338E6DB* JOKBAPFCJFM; // 0x10
	::Class_1_0AAC2AA1059B9FB9* BJCHCAIMLFE; // 0x18
	::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel* _Radar_k__BackingField; // 0x20
	::Class_1_CC3D59C36CF212FC_Class_3_37704591509EA55A* HandlePlayTargetReaching; // 0x28
	::System::Func_1<::System::Single>* HandleGetTargetReachingDuration; // 0x30
	::Class_1_D3359DF62696519E* _Target_k__BackingField; // 0x38
	::Class_1_351B5A4C31F993D8* ELJHDJJEOEK; // 0x40
	::System::Func_1<::System::Single>* HandleGetTargetReachedDuration; // 0x48
	::Class_0_16E4307DCC419505_399<::System::Single>* CKFENALECAO; // 0x50

	::System::Void _ctor(::Class_1_6241E1C44338E6DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6241E1C44338E6DB*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC__CTOR_OFFSET))(this, a1);
	}

	::Class_1_D3359DF62696519E* get_Target()
	{
		return ((::Class_1_D3359DF62696519E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_GET_TARGET_OFFSET))(this);
	}

	::System::Void set_Target(::Class_1_D3359DF62696519E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D3359DF62696519E*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_SET_TARGET_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel* get_Radar()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_GET_RADAR_OFFSET))(this);
	}

	::System::Void set_Radar(::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_SET_RADAR_OFFSET))(this, a1);
	}

	::System::Void add_HandleGetTargetReachingDuration(::System::Func_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_ADD_HANDLEGETTARGETREACHINGDURATION_OFFSET))(this, a1);
	}

	::System::Void remove_HandleGetTargetReachingDuration(::System::Func_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_REMOVE_HANDLEGETTARGETREACHINGDURATION_OFFSET))(this, a1);
	}

	::System::Void add_HandleGetTargetReachedDuration(::System::Func_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_ADD_HANDLEGETTARGETREACHEDDURATION_OFFSET))(this, a1);
	}

	::System::Void remove_HandleGetTargetReachedDuration(::System::Func_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_REMOVE_HANDLEGETTARGETREACHEDDURATION_OFFSET))(this, a1);
	}

	::System::Void add_HandlePlayTargetReaching(::Class_1_CC3D59C36CF212FC_Class_3_37704591509EA55A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC3D59C36CF212FC_Class_3_37704591509EA55A*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_ADD_HANDLEPLAYTARGETREACHING_OFFSET))(this, a1);
	}

	::System::Void remove_HandlePlayTargetReaching(::Class_1_CC3D59C36CF212FC_Class_3_37704591509EA55A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC3D59C36CF212FC_Class_3_37704591509EA55A*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_REMOVE_HANDLEPLAYTARGETREACHING_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_399<::System::Single>* Method_1_C3CF60C7118A64E3()
	{
		return ((::Class_0_16E4307DCC419505_399<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_C3CF60C7118A64E3_OFFSET))(this);
	}

	::System::Void Method_1_E10B4092FFA54980(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_E10B4092FFA54980_OFFSET))(this, a1);
	}

	::System::Void Method_1_E10B4092FFA54980_1(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_E10B4092FFA54980_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E10B4092FFA54980_2(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_E10B4092FFA54980_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_EBEE0D0A222A8264_1_OFFSET))(this);
	}

	::Class_1_351B5A4C31F993D8_Class_1_30EDA1B5FA8A966C* Method_1_DA9023C6799113EF()
	{
		return ((::Class_1_351B5A4C31F993D8_Class_1_30EDA1B5FA8A966C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_DA9023C6799113EF_OFFSET))(this);
	}

	::System::Void Method_1_0762847F97165F6D(::Class_0_16E4307DCC419505_121* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_121*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_0762847F97165F6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DEEEF4BF9126B815(::RPG::Client::MechCraft::MechCraftAttributeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_DEEEF4BF9126B815_OFFSET))(this, a1);
	}

	::System::Action* Method_1_DE4511C94CB4D265(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::Class_1_3CFD07DFD0180CDE* a2)
	{
		return ((::System::Action*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_DE4511C94CB4D265_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AD76026B70822B9B(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::Class_0_16E4307DCC419505_121* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::Class_0_16E4307DCC419505_121*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_AD76026B70822B9B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_750623E724D03017(::RPG::Client::MechCraft::MechCraftAttributeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_750623E724D03017_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B3711015280C5D2(::Class_0_16E4307DCC419505_121* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_121*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_7B3711015280C5D2_OFFSET))(this, a1);
	}

	::System::Single Method_1_F919D4649D2FC4AC(::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_F919D4649D2FC4AC_OFFSET))(this, a1);
	}

	::System::Action* Method_1_C7BFD80E65DE9B66(::Class_1_F9FBCC956DFCF137_31* a1, ::Class_0_16E4307DCC419505_1492* a2)
	{
		return ((::System::Action*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_31*, ::Class_0_16E4307DCC419505_1492*))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC_METHOD_1_C7BFD80E65DE9B66_OFFSET))(this, a1, a2);
	}

	::System::Boolean __CreateSnapshot_b__31_0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_CC3D59C36CF212FC___CREATESNAPSHOT_B__31_0_OFFSET))(this, a1);
	}
};
