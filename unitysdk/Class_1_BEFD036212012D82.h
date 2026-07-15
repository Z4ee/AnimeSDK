#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/PauseRegionManagerReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/Struct_2_0116DF2DF707827A.h"
#include "unitysdk/Struct_2_070A00258D76D4EF.h"
#include "unitysdk/Struct_2_85609C8D1B5CE8E3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_C1FC5F79840837FA;
class Class_1_D256EDA05CFBDF64;
class Class_1_DE4C6B309308A230;
class Class_1_E5DE610D10F73677;
namespace RPG::Client { class RegionManagerDebugMono; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRegionCollection; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_BEFD036212012D82_GET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET UNITYSDK_OFFSET(0x1423E310)
#define CLASS_1_BEFD036212012D82_GET_ENABLEGROUPREGIONSTREAMING_OFFSET UNITYSDK_OFFSET(0x1423E2B0)
#define CLASS_1_BEFD036212012D82_GET_HASREGION_OFFSET UNITYSDK_OFFSET(0x1423E290)
#define CLASS_1_BEFD036212012D82_GET_SOURCEDISTUSEREGIONV1_OFFSET UNITYSDK_OFFSET(0x1423E3D0)
#define CLASS_1_BEFD036212012D82_METHOD_1_0623E385C311F5BF_OFFSET UNITYSDK_OFFSET(0x1649E340)
#define CLASS_1_BEFD036212012D82_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x142385C0)
#define CLASS_1_BEFD036212012D82_METHOD_1_0E5012DEE8909536_1_OFFSET UNITYSDK_OFFSET(0x1649EEB0)
#define CLASS_1_BEFD036212012D82_METHOD_1_0E5012DEE8909536_2_OFFSET UNITYSDK_OFFSET(0x1649EF50)
#define CLASS_1_BEFD036212012D82_METHOD_1_0E5012DEE8909536_3_OFFSET UNITYSDK_OFFSET(0x1649EFF0)
#define CLASS_1_BEFD036212012D82_METHOD_1_0E5012DEE8909536_OFFSET UNITYSDK_OFFSET(0x1649EE10)
#define CLASS_1_BEFD036212012D82_METHOD_1_0F277A9D098842CD_OFFSET UNITYSDK_OFFSET(0x1649E980)
#define CLASS_1_BEFD036212012D82_METHOD_1_0FE89573C3FE4978_OFFSET UNITYSDK_OFFSET(0x1423CA00)
#define CLASS_1_BEFD036212012D82_METHOD_1_18EBFF3A190BD0E0_OFFSET UNITYSDK_OFFSET(0x1649FA10)
#define CLASS_1_BEFD036212012D82_METHOD_1_1BA8221723B2A0E3_1_OFFSET UNITYSDK_OFFSET(0x1649F150)
#define CLASS_1_BEFD036212012D82_METHOD_1_1BA8221723B2A0E3_OFFSET UNITYSDK_OFFSET(0x1649F0E0)
#define CLASS_1_BEFD036212012D82_METHOD_1_2044E4C6D20E5CBC_OFFSET UNITYSDK_OFFSET(0x14238630)
#define CLASS_1_BEFD036212012D82_METHOD_1_239FFFA3D9461D78_OFFSET UNITYSDK_OFFSET(0x1649DD10)
#define CLASS_1_BEFD036212012D82_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x1649F090)
#define CLASS_1_BEFD036212012D82_METHOD_1_2568510320BFD1E9_OFFSET UNITYSDK_OFFSET(0x1423C6E0)
#define CLASS_1_BEFD036212012D82_METHOD_1_2581C7C18C4336EC_OFFSET UNITYSDK_OFFSET(0x1423C980)
#define CLASS_1_BEFD036212012D82_METHOD_1_2964439C006AF9F5_OFFSET UNITYSDK_OFFSET(0x1423E160)
#define CLASS_1_BEFD036212012D82_METHOD_1_2FC7B86A7E13D572_OFFSET UNITYSDK_OFFSET(0x1423C130)
#define CLASS_1_BEFD036212012D82_METHOD_1_36199BBD14A68CEC_OFFSET UNITYSDK_OFFSET(0x1423C870)
#define CLASS_1_BEFD036212012D82_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1423E330)
#define CLASS_1_BEFD036212012D82_METHOD_1_394905343968AA47_OFFSET UNITYSDK_OFFSET(0x14236E90)
#define CLASS_1_BEFD036212012D82_METHOD_1_39FA735A5D45A234_OFFSET UNITYSDK_OFFSET(0x1649DD70)
#define CLASS_1_BEFD036212012D82_METHOD_1_4711E70DF272C20C_OFFSET UNITYSDK_OFFSET(0x1423C900)
#define CLASS_1_BEFD036212012D82_METHOD_1_5360F309E4BDB058_OFFSET UNITYSDK_OFFSET(0x1649E200)
#define CLASS_1_BEFD036212012D82_METHOD_1_5C218957A9D887D5_OFFSET UNITYSDK_OFFSET(0x1649F5D0)
#define CLASS_1_BEFD036212012D82_METHOD_1_635C18190F8C291A_OFFSET UNITYSDK_OFFSET(0x1649F750)
#define CLASS_1_BEFD036212012D82_METHOD_1_6E9680175C0D6857_OFFSET UNITYSDK_OFFSET(0x14238870)
#define CLASS_1_BEFD036212012D82_METHOD_1_78A69BBDCB1FA27A_OFFSET UNITYSDK_OFFSET(0x1423C7D0)
#define CLASS_1_BEFD036212012D82_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x1423A110)
#define CLASS_1_BEFD036212012D82_METHOD_1_8159F0067112FF61_OFFSET UNITYSDK_OFFSET(0x1423E380)
#define CLASS_1_BEFD036212012D82_METHOD_1_829B09E994469287_OFFSET UNITYSDK_OFFSET(0x1423E2D0)
#define CLASS_1_BEFD036212012D82_METHOD_1_838255C97B7E8A88_OFFSET UNITYSDK_OFFSET(0x1649E680)
#define CLASS_1_BEFD036212012D82_METHOD_1_83976A321A1E8072_OFFSET UNITYSDK_OFFSET(0x1649DF60)
#define CLASS_1_BEFD036212012D82_METHOD_1_84235ECAEF275FA9_OFFSET UNITYSDK_OFFSET(0x1423C740)
#define CLASS_1_BEFD036212012D82_METHOD_1_995B4AEB9D9468D5_OFFSET UNITYSDK_OFFSET(0x14236D50)
#define CLASS_1_BEFD036212012D82_METHOD_1_A55C38544D359C3B_1_OFFSET UNITYSDK_OFFSET(0x1649F230)
#define CLASS_1_BEFD036212012D82_METHOD_1_A55C38544D359C3B_OFFSET UNITYSDK_OFFSET(0x1649F1C0)
#define CLASS_1_BEFD036212012D82_METHOD_1_A85A5A4F484E8E77_OFFSET UNITYSDK_OFFSET(0x1649E7D0)
#define CLASS_1_BEFD036212012D82_METHOD_1_B03F6D31318CC2B8_OFFSET UNITYSDK_OFFSET(0x1649E450)
#define CLASS_1_BEFD036212012D82_METHOD_1_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x1423AAD0)
#define CLASS_1_BEFD036212012D82_METHOD_1_BA7208D5810564A8_OFFSET UNITYSDK_OFFSET(0x1649EB50)
#define CLASS_1_BEFD036212012D82_METHOD_1_BE1D74FB34792AB9_OFFSET UNITYSDK_OFFSET(0x1649E8E0)
#define CLASS_1_BEFD036212012D82_METHOD_1_C888065D67204F39_OFFSET UNITYSDK_OFFSET(0x1423B830)
#define CLASS_1_BEFD036212012D82_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1423C6A0)
#define CLASS_1_BEFD036212012D82_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14236D10)
#define CLASS_1_BEFD036212012D82_METHOD_1_D7E7B17A71976D23_OFFSET UNITYSDK_OFFSET(0x1649ED90)
#define CLASS_1_BEFD036212012D82_METHOD_1_D80E77267CCBA66A_OFFSET UNITYSDK_OFFSET(0x1423AC90)
#define CLASS_1_BEFD036212012D82_METHOD_1_E3A495C7851A545B_OFFSET UNITYSDK_OFFSET(0x1649F2A0)
#define CLASS_1_BEFD036212012D82_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x142381E0)
#define CLASS_1_BEFD036212012D82_METHOD_1_E6A156CCCF0451F6_OFFSET UNITYSDK_OFFSET(0x1423D0D0)
#define CLASS_1_BEFD036212012D82_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x1649DC80)
#define CLASS_1_BEFD036212012D82_METHOD_1_F1BE9F8DD9A4BA42_OFFSET UNITYSDK_OFFSET(0x1423C650)
#define CLASS_1_BEFD036212012D82_METHOD_1_F232DA5FE2B51D5A_OFFSET UNITYSDK_OFFSET(0x1649E620)
#define CLASS_1_BEFD036212012D82_METHOD_1_F8B73ECE7F883AC1_1_OFFSET UNITYSDK_OFFSET(0x1423E120)
#define CLASS_1_BEFD036212012D82_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1649E790)
#define CLASS_1_BEFD036212012D82_METHOD_1_FC8B0B8D49994334_OFFSET UNITYSDK_OFFSET(0x14237920)
#define CLASS_1_BEFD036212012D82_SET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET UNITYSDK_OFFSET(0x1423E320)
#define CLASS_1_BEFD036212012D82_SET_ENABLEGROUPREGIONSTREAMING_OFFSET UNITYSDK_OFFSET(0x1423E2C0)
#define CLASS_1_BEFD036212012D82_SET_HASREGION_OFFSET UNITYSDK_OFFSET(0x1423E2A0)
#define CLASS_1_BEFD036212012D82_SET_SOURCEDISTUSEREGIONV1_OFFSET UNITYSDK_OFFSET(0x1423E3E0)
#define CLASS_1_BEFD036212012D82__CCTOR_OFFSET UNITYSDK_OFFSET(0x1423E3F0)
#define CLASS_1_BEFD036212012D82__CTOR_OFFSET UNITYSDK_OFFSET(0x14236F30)

inline static constexpr unsigned int Class_1_BEFD036212012D82_TypeDefinitionIndex = 59423;

class Class_1_BEFD036212012D82 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEFD036212012D82_TypeDefinitionIndex)->GetStaticField(0x2D900);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEFD036212012D82_TypeDefinitionIndex)->GetStaticField(0x8020);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEFD036212012D82_TypeDefinitionIndex)->GetStaticField(0x8021);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEFD036212012D82_TypeDefinitionIndex)->GetStaticField(0x8022);
	}
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_4; // 0x10
	::System::Action_1<::Class_1_C1FC5F79840837FA*>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_6; // 0x20
	::Class_1_C1FC5F79840837FA* Field_1_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Action_2<::Class_1_C1FC5F79840837FA*, ::Class_1_C1FC5F79840837FA*>*>* Field_1_8; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_070A00258D76D4EF>* Field_1_9; // 0x38
	::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>* Field_1_10; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C1FC5F79840837FA*>* Field_1_11; // 0x48
	::System::Collections::Generic::List_1<::Class_1_C1FC5F79840837FA*>* Field_1_12; // 0x50
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_1_13; // 0x58
	::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*>* Field_1_14; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_C1FC5F79840837FA*>* Field_1_15; // 0x68
	::System::Action_2<::Class_1_C1FC5F79840837FA*, ::Class_1_C1FC5F79840837FA*>* Field_1_16; // 0x70
	::UnityEngine::GameObject* Field_1_17; // 0x78
	::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>* Field_1_18; // 0x80
	::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>* Field_1_19; // 0x88
	::RPG::GameCore::StageRegionCollection* Field_1_20; // 0x90
	::RPG::Client::RegionManagerDebugMono* Field_1_21; // 0x98
	::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>* Field_1_22; // 0xA0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_D256EDA05CFBDF64*>* Field_1_23; // 0xA8
	::System::Collections::Generic::List_1<::RPG::GameCore::StageRegionVisualState>* Field_1_24; // 0xB0
	::System::Collections::Generic::List_1<::Class_1_C1FC5F79840837FA*>* Field_1_25; // 0xB8
	::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>* Field_1_26; // 0xC0
	::System::Action_1<::Class_1_C1FC5F79840837FA*>* Field_1_27; // 0xC8
	::RPG::Client::Stage* Field_1_28; // 0xD0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _CurrentActiveAndConnectionRegionsIDs_k__BackingField; // 0xD8
	::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>* Field_1_30; // 0xE0
	::System::Collections::Generic::List_1<::Class_1_C1FC5F79840837FA*>* Field_1_31; // 0xE8
	::System::Collections::Generic::List_1<::Class_1_C1FC5F79840837FA*>* Field_1_32; // 0xF0
	::Class_1_E5DE610D10F73677* Field_1_33; // 0xF8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_C1FC5F79840837FA*>* Field_1_34; // 0x100
	::System::Collections::Generic::List_1<::Class_1_C1FC5F79840837FA*>* Field_1_35; // 0x108
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_1_36; // 0x110
	::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>* Field_1_37; // 0x118
	::RPG::Client::ReasonBool_1<::RPG::Client::PauseRegionManagerReason> Field_1_38; // 0x120
	::System::UInt64 Field_1_39; // 0x128
	::System::Boolean Field_1_40; // 0x130
	::System::Boolean _EnableGroupRegionStreaming_k__BackingField; // 0x131
	::System::Boolean Field_1_42; // 0x132
	::System::Boolean _HasRegion_k__BackingField; // 0x133
	::System::Boolean _SourceDistUseRegionV1_k__BackingField; // 0x134
	::System::Boolean Field_1_45; // 0x135
	::System::UInt64 Field_1_46; // 0x138

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82__CCTOR_OFFSET))();
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	static ::System::Boolean Method_1_239FFFA3D9461D78(::RPG::GameCore::RegionBlockVisibilityStatus a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::RegionBlockVisibilityStatus, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_239FFFA3D9461D78_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_39FA735A5D45A234(::Class_1_C1FC5F79840837FA* a1, ::Class_1_303D5A33D1401D59* a2, ::RPG::GameCore::StageRegionVisualState a3, ::System::Boolean a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1FC5F79840837FA*, ::Class_1_303D5A33D1401D59*, ::RPG::GameCore::StageRegionVisualState, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_39FA735A5D45A234_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_83976A321A1E8072(::Class_1_C1FC5F79840837FA* a1, ::Class_1_303D5A33D1401D59* a2, ::RPG::GameCore::RegionBlockVisibilityStatus a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1FC5F79840837FA*, ::Class_1_303D5A33D1401D59*, ::RPG::GameCore::RegionBlockVisibilityStatus, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_83976A321A1E8072_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_5360F309E4BDB058(::Class_1_303D5A33D1401D59* a1, ::RPG::GameCore::StageRegionVisualState a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::GameCore::StageRegionVisualState, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_5360F309E4BDB058_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0623E385C311F5BF(::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_0623E385C311F5BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_F232DA5FE2B51D5A(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_F232DA5FE2B51D5A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_838255C97B7E8A88(::Class_1_303D5A33D1401D59* a1, ::Struct_2_0116DF2DF707827A& a2, ::Struct_2_85609C8D1B5CE8E3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::Struct_2_0116DF2DF707827A&, ::Struct_2_85609C8D1B5CE8E3&))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_838255C97B7E8A88_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B03F6D31318CC2B8(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_B03F6D31318CC2B8_OFFSET))(this, a1);
	}

	::Class_1_C1FC5F79840837FA* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_C1FC5F79840837FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::Class_1_C1FC5F79840837FA* Method_1_A85A5A4F484E8E77(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::Class_1_C1FC5F79840837FA*(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_A85A5A4F484E8E77_OFFSET))(this, a1);
	}

	static ::Class_1_C1FC5F79840837FA* Method_1_0F277A9D098842CD(::System::Collections::Generic::List_1<::Class_1_C1FC5F79840837FA*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_1_C1FC5F79840837FA*(*)(::System::Collections::Generic::List_1<::Class_1_C1FC5F79840837FA*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_0F277A9D098842CD_OFFSET))(a1, a2);
	}

	::Class_1_C1FC5F79840837FA* Method_1_BE1D74FB34792AB9(::UnityEngine::Vector3 a1)
	{
		return ((::Class_1_C1FC5F79840837FA*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_BE1D74FB34792AB9_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA7208D5810564A8(::RPG::GameCore::GameEntity* a1, ::System::Action_2<::Class_1_C1FC5F79840837FA*, ::Class_1_C1FC5F79840837FA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action_2<::Class_1_C1FC5F79840837FA*, ::Class_1_C1FC5F79840837FA*>*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_BA7208D5810564A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D7E7B17A71976D23(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_D7E7B17A71976D23_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E5012DEE8909536(::System::Action_1<::Class_1_C1FC5F79840837FA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_C1FC5F79840837FA*>*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_0E5012DEE8909536_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E5012DEE8909536_1(::System::Action_1<::Class_1_C1FC5F79840837FA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_C1FC5F79840837FA*>*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_0E5012DEE8909536_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E5012DEE8909536_2(::System::Action_1<::Class_1_C1FC5F79840837FA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_C1FC5F79840837FA*>*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_0E5012DEE8909536_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E5012DEE8909536_3(::System::Action_1<::Class_1_C1FC5F79840837FA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_C1FC5F79840837FA*>*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_0E5012DEE8909536_3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_C1FC5F79840837FA*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C1FC5F79840837FA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Void Method_1_1BA8221723B2A0E3(::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_1BA8221723B2A0E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_1BA8221723B2A0E3_1(::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_1BA8221723B2A0E3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A55C38544D359C3B(::System::Action_2<::Class_1_C1FC5F79840837FA*, ::Class_1_C1FC5F79840837FA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_C1FC5F79840837FA*, ::Class_1_C1FC5F79840837FA*>*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_A55C38544D359C3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A55C38544D359C3B_1(::System::Action_2<::Class_1_C1FC5F79840837FA*, ::Class_1_C1FC5F79840837FA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_C1FC5F79840837FA*, ::Class_1_C1FC5F79840837FA*>*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_A55C38544D359C3B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3A495C7851A545B(::System::Action_3<::Class_1_C1FC5F79840837FA*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_C1FC5F79840837FA*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_E3A495C7851A545B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5C218957A9D887D5(::System::Action_3<::Class_1_C1FC5F79840837FA*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_C1FC5F79840837FA*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_5C218957A9D887D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_635C18190F8C291A(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Action* a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_635C18190F8C291A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_18EBFF3A190BD0E0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_18EBFF3A190BD0E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_BEFD036212012D82* Method_1_995B4AEB9D9468D5()
	{
		return ((::Class_1_BEFD036212012D82*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_995B4AEB9D9468D5_OFFSET))();
	}

	static ::RPG::GameCore::StageRegionCollection* Method_1_394905343968AA47(::System::String* a1)
	{
		return ((::RPG::GameCore::StageRegionCollection*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_394905343968AA47_OFFSET))(a1);
	}

	::System::Void Method_1_FC8B0B8D49994334(::RPG::Client::Stage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_FC8B0B8D49994334_OFFSET))(this, a1);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_1_2044E4C6D20E5CBC(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_2044E4C6D20E5CBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_D80E77267CCBA66A(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_D80E77267CCBA66A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_1_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_2568510320BFD1E9(::RPG::Client::PauseRegionManagerReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PauseRegionManagerReason))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_2568510320BFD1E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_84235ECAEF275FA9(::RPG::Client::PauseRegionManagerReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PauseRegionManagerReason))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_84235ECAEF275FA9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_78A69BBDCB1FA27A(::System::UInt32 a1, ::Class_1_C1FC5F79840837FA*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_C1FC5F79840837FA*&))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_78A69BBDCB1FA27A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36199BBD14A68CEC(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_36199BBD14A68CEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E9680175C0D6857(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_6E9680175C0D6857_OFFSET))(this, a1);
	}

	::System::Void Method_1_2FC7B86A7E13D572(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_2FC7B86A7E13D572_OFFSET))(this, a1, a2);
	}

	::System::UInt64 Method_1_0FE89573C3FE4978(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_0FE89573C3FE4978_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_E6A156CCCF0451F6(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_E6A156CCCF0451F6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C888065D67204F39(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::HashSet_1<::Class_1_C1FC5F79840837FA*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_C888065D67204F39_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4711E70DF272C20C(::Class_1_C1FC5F79840837FA* a1, ::Class_1_DE4C6B309308A230* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1FC5F79840837FA*, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_4711E70DF272C20C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2581C7C18C4336EC(::Class_1_C1FC5F79840837FA* a1, ::Class_1_DE4C6B309308A230* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1FC5F79840837FA*, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_2581C7C18C4336EC_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_2964439C006AF9F5()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_2964439C006AF9F5_OFFSET))(this);
	}

	::Class_1_C1FC5F79840837FA* Method_1_F8B73ECE7F883AC1_1()
	{
		return ((::Class_1_C1FC5F79840837FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_F8B73ECE7F883AC1_1_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_C1FC5F79840837FA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1FC5F79840837FA*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Boolean get_HasRegion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_GET_HASREGION_OFFSET))(this);
	}

	::System::Void set_HasRegion(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_SET_HASREGION_OFFSET))(this, a1);
	}

	::System::Boolean get_EnableGroupRegionStreaming()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_GET_ENABLEGROUPREGIONSTREAMING_OFFSET))(this);
	}

	::System::Void set_EnableGroupRegionStreaming(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_SET_ENABLEGROUPREGIONSTREAMING_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_829B09E994469287()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_829B09E994469287_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* get_CurrentActiveAndConnectionRegionsIDs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_GET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET))(this);
	}

	::System::Void set_CurrentActiveAndConnectionRegionsIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_SET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionCollection* Method_1_8159F0067112FF61()
	{
		return ((::RPG::GameCore::StageRegionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_8159F0067112FF61_OFFSET))(this);
	}

	::System::Boolean get_SourceDistUseRegionV1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_GET_SOURCEDISTUSEREGIONV1_OFFSET))(this);
	}

	::System::Void set_SourceDistUseRegionV1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_SET_SOURCEDISTUSEREGIONV1_OFFSET))(this, a1);
	}

	::RPG::Client::Stage* Method_1_F1BE9F8DD9A4BA42()
	{
		return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFD036212012D82_METHOD_1_F1BE9F8DD9A4BA42_OFFSET))(this);
	}
};
