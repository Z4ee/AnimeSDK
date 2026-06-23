#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5474F8DF52FEA038_1.h"
#include "unitysdk/Enum_3_7A1514E0E8DA163E_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_6.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_451601B8BB62C38C_5;
class Class_1_70343D1BCCE5CAC5;
class Class_1_B6CB25C8158EE1DE;
class Class_1_BBA0C4760C992EE0;
class Class_3_DFD5D1FDB9D2A4AC;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole { class CriWareVideoPlayer; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class MonoDirectorBindingReplace; }
namespace MoleMole { class TLStartEndEntityAnimatorParamControl; }
namespace MoleMole { class TimelineData; }
namespace MoleMole { class TimelineDataExtra; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Timeline { class TimelineEndMarker; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MdbComponent; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x14CACD80)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x14CA93E0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x14CA7930)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x14CAA220)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x14CA5E40)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x14CADA90)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0x14C9FCA0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x14CA0ED0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_14AFBA2E8A242644_OFFSET UNITYSDK_OFFSET(0x14CA65E0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x14CA1FE0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_18378026938D76D0_OFFSET UNITYSDK_OFFSET(0x14CA0D00)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x14CABB90)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_2193919A85B4F837_OFFSET UNITYSDK_OFFSET(0x14CA63F0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_24B2CA816EFA1FA5_OFFSET UNITYSDK_OFFSET(0x14C9E920)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_25F90D4C940D48BE_1_OFFSET UNITYSDK_OFFSET(0x14CAF5B0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_25F90D4C940D48BE_OFFSET UNITYSDK_OFFSET(0x14CAAC70)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x14CA85C0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14C9EC00)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_2E4528FBBAEF6EBC_OFFSET UNITYSDK_OFFSET(0x14CA7A20)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14C9ECA0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_396AEDFEBA5C42BC_OFFSET UNITYSDK_OFFSET(0x14CAA000)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x14CAE340)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_3B5DE03DF446D2EE_OFFSET UNITYSDK_OFFSET(0x14CA31B0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_3F8DC0E62FBF27F8_OFFSET UNITYSDK_OFFSET(0x14CA2060)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_4133E4E4A140F845_OFFSET UNITYSDK_OFFSET(0x14CA93D0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_4D7A3E7FA9EADA79_OFFSET UNITYSDK_OFFSET(0x14CA3F90)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_4DB14E9CF0E552EE_OFFSET UNITYSDK_OFFSET(0x14C9E4E0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x14CA1940)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_5252365D12F46224_1_OFFSET UNITYSDK_OFFSET(0x14CA9F60)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_5252365D12F46224_OFFSET UNITYSDK_OFFSET(0x14CA6300)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x14C9E530)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_5C061BFFDACCF2F9_OFFSET UNITYSDK_OFFSET(0x14CA1A10)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_5E6161A9022D3CE0_OFFSET UNITYSDK_OFFSET(0x14CA8070)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x14CA3000)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_655B268C119C4078_1_OFFSET UNITYSDK_OFFSET(0x14CA8DE0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_655B268C119C4078_OFFSET UNITYSDK_OFFSET(0x14CA3880)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_68AB6161C05DE072_OFFSET UNITYSDK_OFFSET(0x14CA3370)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_6BE563BAA9E3F4C6_OFFSET UNITYSDK_OFFSET(0x14CA4570)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_766C37605EF903ED_OFFSET UNITYSDK_OFFSET(0x14CA6A90)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_79395E1500E8D566_OFFSET UNITYSDK_OFFSET(0x14CA82F0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_7A10665530975E77_OFFSET UNITYSDK_OFFSET(0x14CA36B0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_7B4D9E1272526056_OFFSET UNITYSDK_OFFSET(0x14CADD70)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_7F8485F9E3756BFC_OFFSET UNITYSDK_OFFSET(0x14C9E810)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_8162A596D134E24F_OFFSET UNITYSDK_OFFSET(0x14CA8840)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_839190CC918FE165_OFFSET UNITYSDK_OFFSET(0x14CA02D0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x14CA76E0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0x14CA3110)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_8A3D91A38AD395C0_1_OFFSET UNITYSDK_OFFSET(0x14C9F730)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_8A3D91A38AD395C0_OFFSET UNITYSDK_OFFSET(0x14C9F880)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_8ADACB724BF6FDC9_OFFSET UNITYSDK_OFFSET(0x14CA35E0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_8BD8BEB30989812E_OFFSET UNITYSDK_OFFSET(0x14C9E700)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_8E8225D5C438C827_OFFSET UNITYSDK_OFFSET(0x14CB0000)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_949492AA68228DD4_OFFSET UNITYSDK_OFFSET(0x14CA49A0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x14CA6390)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x14CA7260)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x14CA19B0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x14C9F490)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x14CA6030)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x14CA5640)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_A4D9CBB73EED39C8_OFFSET UNITYSDK_OFFSET(0x14C9EA30)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x14CA1160)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x14CA69D0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_AC4C03B335C56849_OFFSET UNITYSDK_OFFSET(0x14C9ED40)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x14CA8D90)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_C13397628F12D974_OFFSET UNITYSDK_OFFSET(0x14CA7FF0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x14CA7920)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x14CA7910)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_C79B9E9DB72DB18C_OFFSET UNITYSDK_OFFSET(0x14CA4340)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_CA1CE8D3891A75F7_OFFSET UNITYSDK_OFFSET(0x14CAB920)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14C9EC60)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x14C9ECF0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x14CAE2F0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x14C9F6C0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14C9E8B0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_CE8D061345066B16_OFFSET UNITYSDK_OFFSET(0x14CAA330)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_D0DF0505F244B465_1_OFFSET UNITYSDK_OFFSET(0x14C9F9D0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_D0DF0505F244B465_OFFSET UNITYSDK_OFFSET(0x14CADAA0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x14CAEB70)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_D33218A492B26449_OFFSET UNITYSDK_OFFSET(0x14CA8620)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_DC035AC557C57E26_OFFSET UNITYSDK_OFFSET(0x14CA4830)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_EEAF30D8AD2AC994_OFFSET UNITYSDK_OFFSET(0x14CA6C50)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_EFFD9041E3B406C9_OFFSET UNITYSDK_OFFSET(0x14CA7E20)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x14CABA60)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x14CABA70)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x14CAEB60)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14CA6020)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_F2863027AF9C04EA_OFFSET UNITYSDK_OFFSET(0x14CA7160)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x14CA4D50)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_F7C490F776DE419B_OFFSET UNITYSDK_OFFSET(0x14CADFC0)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x14CAB930)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_FAADEE08E4E52BA5_OFFSET UNITYSDK_OFFSET(0x14CA1580)
#define CLASS_1_06EBE0E98D90D5E7_METHOD_1_FBD2F13A4C10BA82_OFFSET UNITYSDK_OFFSET(0x14CABA80)
#define CLASS_1_06EBE0E98D90D5E7__CTOR_OFFSET UNITYSDK_OFFSET(0x14CA3800)

inline static constexpr unsigned int Class_1_06EBE0E98D90D5E7_TypeDefinitionIndex = 58210;

class Class_1_06EBE0E98D90D5E7 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_44; // 0x0
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_1_16; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*, ::UnityEngine::Transform*>>* Field_1_38; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::Class_1_BBA0C4760C992EE0*>* Field_1_42; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_46; // 0x28
	::UnityEngine::Transform* Field_1_18; // 0x30
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::MoleMole::EntityHandle>* Field_1_39; // 0x38
	::System::Action_1<::UnityEngine::Transform*>* Field_1_32; // 0x40
	::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>* Field_1_50; // 0x48
	::UnityEngine::GameObject* Field_1_13; // 0x50
	::MoleMole::MonoDirectorBindingReplace* Field_1_17; // 0x58
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* Field_1_3; // 0x60
	::UnityEngine::Transform* Field_1_43; // 0x68
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_5; // 0x70
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::Struct_2_B6A3FA7992F9F37E_6>* Field_1_40; // 0x78
	::System::Action* Field_1_34; // 0x80
	::MoleMole::TimelineData* Field_1_1; // 0x88
	::UnityEngine::Playables::PlayableDirector* Field_1_11; // 0x90
	::System::Action_1<::UnityEngine::Transform*>* Field_1_33; // 0x98
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* Field_1_4; // 0xA0
	::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineEndMarker*>* Field_1_37; // 0xA8
	::Class_1_451601B8BB62C38C_5* Field_1_6; // 0xB0
	::UnityEngine::GameObject* Field_1_12; // 0xB8
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::MoleMole::EntityHandle>* Field_1_41; // 0xC0
	::System::String* Field_1_0; // 0xC8
	::MoleMole::CriWareVideoPlayer* Field_1_31; // 0xD0
	::System::String* Field_1_9; // 0xD8
	::System::Action* Field_1_35; // 0xE0
	::System::Collections::Generic::List_1<::Class_1_70343D1BCCE5CAC5*>* Field_1_36; // 0xE8
	::MoleMole::TimelineDataExtra* Field_1_2; // 0xF0
	::System::String* Field_1_45; // 0xF8
	::Class_1_B6CB25C8158EE1DE* Field_1_51; // 0x100
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::MoleMole::EntityHandle>* Field_1_49; // 0x108
	::UnityEngine::Playables::PlayableDirector* Field_1_14; // 0x110
	::System::Double Field_1_24; // 0x118
	::System::Double Field_1_27; // 0x120
	::System::Boolean Field_1_10; // 0x128
	::System::Boolean Field_1_8; // 0x129
	::System::Boolean Field_1_47; // 0x12A
	::System::Boolean Field_1_29; // 0x12B
	::System::Single Field_1_7; // 0x12C
	::System::Double Field_1_26; // 0x130
	::System::Double Field_1_28; // 0x138
	::System::Boolean Field_1_48; // 0x140
	::System::Boolean Field_1_19; // 0x141
	::System::Boolean Field_1_20; // 0x142
	::System::Boolean Field_1_22; // 0x143
	::System::Boolean Field_1_23; // 0x144
	::System::Boolean Field_1_21; // 0x145
	::System::Boolean Field_1_15; // 0x146
	::System::Boolean Field_1_30; // 0x147
	::System::Double Field_1_25; // 0x148

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4DB14E9CF0E552EE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_4DB14E9CF0E552EE_OFFSET))(this);
	}

	::System::Void Method_1_8BD8BEB30989812E(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_8BD8BEB30989812E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_24B2CA816EFA1FA5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_24B2CA816EFA1FA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_AC4C03B335C56849(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_AC4C03B335C56849_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5C061BFFDACCF2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_5C061BFFDACCF2F9_OFFSET))(this);
	}

	::System::Void Method_1_86D9A88811BF5A61(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_86D9A88811BF5A61_OFFSET))(this, a1);
	}

	::System::Void Method_1_655B268C119C4078()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_655B268C119C4078_OFFSET))(this);
	}

	static ::System::Void Method_1_6BE563BAA9E3F4C6(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_6BE563BAA9E3F4C6_OFFSET))(a1, a2);
	}

	::System::Void Method_1_18378026938D76D0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_18378026938D76D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_1_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_A1C7122184516C18_OFFSET))(this);
	}

	::System::Double Method_1_A4D9CBB73EED39C8(::System::Double a1)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_A4D9CBB73EED39C8_OFFSET))(this, a1);
	}

	::System::Void Method_1_8A3D91A38AD395C0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_8A3D91A38AD395C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A10665530975E77(::MoleMole::TimelineData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TimelineData*))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_7A10665530975E77_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::MoleMole::MonoDirectorBindingReplace* Method_1_4D7A3E7FA9EADA79()
	{
		return ((::MoleMole::MonoDirectorBindingReplace*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_4D7A3E7FA9EADA79_OFFSET))(this);
	}

	::System::Void Method_1_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_1_5252365D12F46224(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_5252365D12F46224_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_2193919A85B4F837(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_2193919A85B4F837_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_766C37605EF903ED(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_766C37605EF903ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F2863027AF9C04EA(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_F2863027AF9C04EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_2E4528FBBAEF6EBC(::Enum_3_7A1514E0E8DA163E_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7A1514E0E8DA163E_1))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_2E4528FBBAEF6EBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_EFFD9041E3B406C9(::System::Double a1, ::System::Double a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_EFFD9041E3B406C9_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Int32 Method_1_C13397628F12D974(::MoleMole::Timeline::TimelineEndMarker* a1, ::MoleMole::Timeline::TimelineEndMarker* a2)
	{
		return ((::System::Int32(*)(::MoleMole::Timeline::TimelineEndMarker*, ::MoleMole::Timeline::TimelineEndMarker*))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_C13397628F12D974_OFFSET))(a1, a2);
	}

	::System::Void Method_1_14AFBA2E8A242644()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_14AFBA2E8A242644_OFFSET))(this);
	}

	::System::Void Method_1_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Double Method_1_79395E1500E8D566()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_79395E1500E8D566_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D33218A492B26449()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_D33218A492B26449_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_1_8162A596D134E24F(::MoleMole::GameplayTag a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_8162A596D134E24F_OFFSET))(this, a1);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_BC46FCF99873D9DD_OFFSET))(this);
	}

	static ::Il2CppArray<::System::Int32>* Method_1_DC035AC557C57E26(::UnityEngine::MdbComponent* a1)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::MdbComponent*))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_DC035AC557C57E26_OFFSET))(a1);
	}

	::System::Void Method_1_8A3D91A38AD395C0_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_8A3D91A38AD395C0_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_655B268C119C4078_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_655B268C119C4078_1_OFFSET))(this);
	}

	::MoleMole::TimelineData* Method_1_4133E4E4A140F845()
	{
		return ((::MoleMole::TimelineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_4133E4E4A140F845_OFFSET))(this);
	}

	::System::Boolean Method_1_3B5DE03DF446D2EE(::MoleMole::TimelineData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TimelineData*))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_3B5DE03DF446D2EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_5252365D12F46224_1(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_5252365D12F46224_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_396AEDFEBA5C42BC(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_396AEDFEBA5C42BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_949492AA68228DD4(::System::Boolean a1, ::MoleMole::GameplayTag a2, ::MoleMole::TLStartEndEntityAnimatorParamControl* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::GameplayTag, ::MoleMole::TLStartEndEntityAnimatorParamControl*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_949492AA68228DD4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_839190CC918FE165()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_839190CC918FE165_OFFSET))(this);
	}

	::System::Void Method_1_EEAF30D8AD2AC994(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_EEAF30D8AD2AC994_OFFSET))(this, a1);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_25F90D4C940D48BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_25F90D4C940D48BE_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::Playables::PlayableDirector* Method_1_CA1CE8D3891A75F7()
	{
		return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_CA1CE8D3891A75F7_OFFSET))(this);
	}

	::System::Void Method_1_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C79B9E9DB72DB18C(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_C79B9E9DB72DB18C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FBD2F13A4C10BA82(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_FBD2F13A4C10BA82_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E6161A9022D3CE0(::System::String* a1, ::MoleMole::GameplayTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_5E6161A9022D3CE0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Double Method_1_7F8485F9E3756BFC(::System::Double a1)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_7F8485F9E3756BFC_OFFSET))(this, a1);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
	}

	::System::Void Method_1_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_1_D0DF0505F244B465()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_D0DF0505F244B465_OFFSET))(this);
	}

	::System::Void Method_1_7B4D9E1272526056(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_7B4D9E1272526056_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_1_8ADACB724BF6FDC9(::MoleMole::TimelineData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TimelineData*))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_8ADACB724BF6FDC9_OFFSET))(this, a1);
	}

	::System::Void Method_1_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_39FD7185C859CEAD_OFFSET))(this);
	}

	::System::Void Method_1_D0DF0505F244B465_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_D0DF0505F244B465_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void Method_1_68AB6161C05DE072(::MoleMole::TimelineData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TimelineData*))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_68AB6161C05DE072_OFFSET))(this, a1);
	}

	::System::Void Method_1_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_1_F7C490F776DE419B(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_F7C490F776DE419B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3F8DC0E62FBF27F8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_3F8DC0E62FBF27F8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void Method_1_25F90D4C940D48BE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_25F90D4C940D48BE_1_OFFSET))(this);
	}

	::System::Void Method_1_FAADEE08E4E52BA5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_FAADEE08E4E52BA5_OFFSET))(this);
	}

	::System::Void Method_1_CE8D061345066B16(::System::Double a1, ::Enum_3_5474F8DF52FEA038_1 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::Enum_3_5474F8DF52FEA038_1))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_CE8D061345066B16_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_1_8E8225D5C438C827(::Class_1_70343D1BCCE5CAC5* a1, ::Class_1_70343D1BCCE5CAC5* a2)
	{
		return ((::System::Int32(*)(::Class_1_70343D1BCCE5CAC5*, ::Class_1_70343D1BCCE5CAC5*))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_8E8225D5C438C827_OFFSET))(a1, a2);
	}

	::System::Void Method_1_1283EC0876EAAACF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7_METHOD_1_1283EC0876EAAACF_OFFSET))(this);
	}
};
