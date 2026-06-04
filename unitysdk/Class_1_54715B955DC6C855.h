#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EMovementComputePenetrationResultType.h"
#include "unitysdk/Struct_2_DC0A74F700976E73.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7C730499E6981AF2;
namespace RPG::Client { class MonoCharacterHeadPoint; }
namespace RPG::Client { template <typename T> class ChunkedStructList_1; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_1_54715B955DC6C855_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14615270)
#define CLASS_1_54715B955DC6C855_GET_ALLOWSLIDE_OFFSET UNITYSDK_OFFSET(0xA41ED10)
#define CLASS_1_54715B955DC6C855_GET_CAPSULECOLLIDER_OFFSET UNITYSDK_OFFSET(0x1461C750)
#define CLASS_1_54715B955DC6C855_GET_FORWARDNORMAL_OFFSET UNITYSDK_OFFSET(0x1461C7D0)
#define CLASS_1_54715B955DC6C855_GET_GROUNDNORMAL_OFFSET UNITYSDK_OFFSET(0x1461C790)
#define CLASS_1_54715B955DC6C855_GET_ISTHREAD_OFFSET UNITYSDK_OFFSET(0xA41ED70)
#define CLASS_1_54715B955DC6C855_GET_LASTPOSITION_OFFSET UNITYSDK_OFFSET(0xA41ED30)
#define CLASS_1_54715B955DC6C855_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x1461C770)
#define CLASS_1_54715B955DC6C855_GET_MAX_MOVE_SPEED_OFFSET UNITYSDK_OFFSET(0x14613860)
#define CLASS_1_54715B955DC6C855_GET_MOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1461C990)
#define CLASS_1_54715B955DC6C855_GET_MOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1461C970)
#define CLASS_1_54715B955DC6C855_GET_REALVELOCITY_OFFSET UNITYSDK_OFFSET(0x14615320)
#define CLASS_1_54715B955DC6C855_GET_REQUIRESTANDONGROUND_OFFSET UNITYSDK_OFFSET(0x1461C830)
#define CLASS_1_54715B955DC6C855_GET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1461C730)
#define CLASS_1_54715B955DC6C855_GET_SCENERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1461C9B0)
#define CLASS_1_54715B955DC6C855_GET_SOURCEMOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA41E9B0)
#define CLASS_1_54715B955DC6C855_GET_SOURCEMOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA41E990)
#define CLASS_1_54715B955DC6C855_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x14615300)
#define CLASS_1_54715B955DC6C855_GET_THREADDATA_OFFSET UNITYSDK_OFFSET(0x146152F0)
#define CLASS_1_54715B955DC6C855_GET_UPSTAIRANIMRATIO_OFFSET UNITYSDK_OFFSET(0x1461C810)
#define CLASS_1_54715B955DC6C855_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x14615360)
#define CLASS_1_54715B955DC6C855_GET_WALLHITS_OFFSET UNITYSDK_OFFSET(0xA41E9D0)
#define CLASS_1_54715B955DC6C855_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xA41E9F0)
#define CLASS_1_54715B955DC6C855_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x14614360)
#define CLASS_1_54715B955DC6C855_METHOD_1_09B321C3BEF4C1E5_OFFSET UNITYSDK_OFFSET(0x14614E10)
#define CLASS_1_54715B955DC6C855_METHOD_1_128FE7D4AC6EA392_OFFSET UNITYSDK_OFFSET(0x146174E0)
#define CLASS_1_54715B955DC6C855_METHOD_1_1423343C279235C3_OFFSET UNITYSDK_OFFSET(0x14617340)
#define CLASS_1_54715B955DC6C855_METHOD_1_1BD92CF0F4418517_OFFSET UNITYSDK_OFFSET(0x1461BFE0)
#define CLASS_1_54715B955DC6C855_METHOD_1_230D9D2669935041_OFFSET UNITYSDK_OFFSET(0x146166D0)
#define CLASS_1_54715B955DC6C855_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14613ED0)
#define CLASS_1_54715B955DC6C855_METHOD_1_27592B75ABD7B555_OFFSET UNITYSDK_OFFSET(0x14616580)
#define CLASS_1_54715B955DC6C855_METHOD_1_2CE52CE032F120BC_OFFSET UNITYSDK_OFFSET(0x146151D0)
#define CLASS_1_54715B955DC6C855_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0x14614940)
#define CLASS_1_54715B955DC6C855_METHOD_1_30D1209326FA87FC_2_OFFSET UNITYSDK_OFFSET(0x14616640)
#define CLASS_1_54715B955DC6C855_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x146142B0)
#define CLASS_1_54715B955DC6C855_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x146149E0)
#define CLASS_1_54715B955DC6C855_METHOD_1_37363E5F93B43A3C_OFFSET UNITYSDK_OFFSET(0xA41ED90)
#define CLASS_1_54715B955DC6C855_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x14613BD0)
#define CLASS_1_54715B955DC6C855_METHOD_1_3A9628A1B5EBB7DE_OFFSET UNITYSDK_OFFSET(0x1461A530)
#define CLASS_1_54715B955DC6C855_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x14614230)
#define CLASS_1_54715B955DC6C855_METHOD_1_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x1461C930)
#define CLASS_1_54715B955DC6C855_METHOD_1_42AE49233FE0C940_OFFSET UNITYSDK_OFFSET(0x1461A040)
#define CLASS_1_54715B955DC6C855_METHOD_1_42FCF7EC07DF6708_OFFSET UNITYSDK_OFFSET(0x1461A150)
#define CLASS_1_54715B955DC6C855_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x14614B10)
#define CLASS_1_54715B955DC6C855_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xA41ECA0)
#define CLASS_1_54715B955DC6C855_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14613DB0)
#define CLASS_1_54715B955DC6C855_METHOD_1_49D352C181056F15_OFFSET UNITYSDK_OFFSET(0x14614ED0)
#define CLASS_1_54715B955DC6C855_METHOD_1_4DA758F3A2DC69A1_OFFSET UNITYSDK_OFFSET(0x14617200)
#define CLASS_1_54715B955DC6C855_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x1461C850)
#define CLASS_1_54715B955DC6C855_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x1461C860)
#define CLASS_1_54715B955DC6C855_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1461C840)
#define CLASS_1_54715B955DC6C855_METHOD_1_5626385EF0A3436F_OFFSET UNITYSDK_OFFSET(0x1461A700)
#define CLASS_1_54715B955DC6C855_METHOD_1_5AB860AAA4889394_OFFSET UNITYSDK_OFFSET(0x1461B000)
#define CLASS_1_54715B955DC6C855_METHOD_1_62165C025F5C0B19_OFFSET UNITYSDK_OFFSET(0x14615A80)
#define CLASS_1_54715B955DC6C855_METHOD_1_766FE18F4D52BCD6_OFFSET UNITYSDK_OFFSET(0x1461C720)
#define CLASS_1_54715B955DC6C855_METHOD_1_835AB84E5E01ADE6_OFFSET UNITYSDK_OFFSET(0x146192C0)
#define CLASS_1_54715B955DC6C855_METHOD_1_8507A90D618EA20D_OFFSET UNITYSDK_OFFSET(0x14619740)
#define CLASS_1_54715B955DC6C855_METHOD_1_8EF54F768D3AF0D2_OFFSET UNITYSDK_OFFSET(0x14618FC0)
#define CLASS_1_54715B955DC6C855_METHOD_1_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x14616360)
#define CLASS_1_54715B955DC6C855_METHOD_1_9D9C6981AA740629_OFFSET UNITYSDK_OFFSET(0x14614F60)
#define CLASS_1_54715B955DC6C855_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x14615730)
#define CLASS_1_54715B955DC6C855_METHOD_1_A36150C5DCC8409E_2_OFFSET UNITYSDK_OFFSET(0x1461C870)
#define CLASS_1_54715B955DC6C855_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x146153A0)
#define CLASS_1_54715B955DC6C855_METHOD_1_AAE74561848EA037_OFFSET UNITYSDK_OFFSET(0x14614C40)
#define CLASS_1_54715B955DC6C855_METHOD_1_AB508AA7C4C9D894_OFFSET UNITYSDK_OFFSET(0xA41EDE0)
#define CLASS_1_54715B955DC6C855_METHOD_1_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x14613FC0)
#define CLASS_1_54715B955DC6C855_METHOD_1_B0DA9828F7B4DD90_OFFSET UNITYSDK_OFFSET(0x14618700)
#define CLASS_1_54715B955DC6C855_METHOD_1_B0E9E91A270E75F1_OFFSET UNITYSDK_OFFSET(0x14613E70)
#define CLASS_1_54715B955DC6C855_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x1461C710)
#define CLASS_1_54715B955DC6C855_METHOD_1_B6E7B97471C22120_OFFSET UNITYSDK_OFFSET(0x1461B4C0)
#define CLASS_1_54715B955DC6C855_METHOD_1_BAE5E266E89AB6D3_OFFSET UNITYSDK_OFFSET(0xA41EAC0)
#define CLASS_1_54715B955DC6C855_METHOD_1_C1D3BDE2A17F5C9D_1_OFFSET UNITYSDK_OFFSET(0x146146D0)
#define CLASS_1_54715B955DC6C855_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x14614460)
#define CLASS_1_54715B955DC6C855_METHOD_1_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x1461B0E0)
#define CLASS_1_54715B955DC6C855_METHOD_1_C6A450575DC46B50_OFFSET UNITYSDK_OFFSET(0x14614CB0)
#define CLASS_1_54715B955DC6C855_METHOD_1_C86A8C92DD223A1A_OFFSET UNITYSDK_OFFSET(0x14616B40)
#define CLASS_1_54715B955DC6C855_METHOD_1_C8FB115C72ED7B3B_OFFSET UNITYSDK_OFFSET(0x1461B210)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14613C70)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x14613E20)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x14613F50)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x146148F0)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x14616500)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0x14616540)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_7_OFFSET UNITYSDK_OFFSET(0x14616600)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14613B70)
#define CLASS_1_54715B955DC6C855_METHOD_1_CB74E33F08A8811B_OFFSET UNITYSDK_OFFSET(0x14618640)
#define CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x1461C8F0)
#define CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_2_OFFSET UNITYSDK_OFFSET(0x1461C910)
#define CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_3_OFFSET UNITYSDK_OFFSET(0x1461C950)
#define CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_4_OFFSET UNITYSDK_OFFSET(0xA41ECF0)
#define CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1461C8D0)
#define CLASS_1_54715B955DC6C855_METHOD_1_D43A81E8F419063F_1_OFFSET UNITYSDK_OFFSET(0x1461C510)
#define CLASS_1_54715B955DC6C855_METHOD_1_D43A81E8F419063F_OFFSET UNITYSDK_OFFSET(0x1461B3F0)
#define CLASS_1_54715B955DC6C855_METHOD_1_DAC9219D09D338F5_OFFSET UNITYSDK_OFFSET(0x1461C5B0)
#define CLASS_1_54715B955DC6C855_METHOD_1_DE4DB96AC09EBDE9_OFFSET UNITYSDK_OFFSET(0x14619500)
#define CLASS_1_54715B955DC6C855_METHOD_1_DFF56AD42FD84C0C_OFFSET UNITYSDK_OFFSET(0x1461B770)
#define CLASS_1_54715B955DC6C855_METHOD_1_E65157A486C1DDE5_OFFSET UNITYSDK_OFFSET(0x14613CD0)
#define CLASS_1_54715B955DC6C855_METHOD_1_EF5B2B82CF25C616_OFFSET UNITYSDK_OFFSET(0x1461BDD0)
#define CLASS_1_54715B955DC6C855_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1461C940)
#define CLASS_1_54715B955DC6C855_METHOD_1_F679E8CF4B1A4DCA_OFFSET UNITYSDK_OFFSET(0x1461BB40)
#define CLASS_1_54715B955DC6C855_METHOD_1_FA56DCE292E69C68_OFFSET UNITYSDK_OFFSET(0x14615FE0)
#define CLASS_1_54715B955DC6C855_METHOD_1_FEA241CA014F8043_OFFSET UNITYSDK_OFFSET(0x14614BB0)
#define CLASS_1_54715B955DC6C855_SET_ALLOWSLIDE_OFFSET UNITYSDK_OFFSET(0xA41ED20)
#define CLASS_1_54715B955DC6C855_SET_CAPSULECOLLIDER_OFFSET UNITYSDK_OFFSET(0x1461C760)
#define CLASS_1_54715B955DC6C855_SET_FORWARDNORMAL_OFFSET UNITYSDK_OFFSET(0x1461C7F0)
#define CLASS_1_54715B955DC6C855_SET_GROUNDNORMAL_OFFSET UNITYSDK_OFFSET(0x1461C7B0)
#define CLASS_1_54715B955DC6C855_SET_ISTHREAD_OFFSET UNITYSDK_OFFSET(0xA41ED80)
#define CLASS_1_54715B955DC6C855_SET_LASTPOSITION_OFFSET UNITYSDK_OFFSET(0xA41ED50)
#define CLASS_1_54715B955DC6C855_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x1461C780)
#define CLASS_1_54715B955DC6C855_SET_MOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1461C9A0)
#define CLASS_1_54715B955DC6C855_SET_MOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1461C980)
#define CLASS_1_54715B955DC6C855_SET_REALVELOCITY_OFFSET UNITYSDK_OFFSET(0x14615340)
#define CLASS_1_54715B955DC6C855_SET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1461C740)
#define CLASS_1_54715B955DC6C855_SET_SCENERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA41E980)
#define CLASS_1_54715B955DC6C855_SET_SOURCEMOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA41E9C0)
#define CLASS_1_54715B955DC6C855_SET_SOURCEMOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA41E9A0)
#define CLASS_1_54715B955DC6C855_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x14615310)
#define CLASS_1_54715B955DC6C855_SET_UPSTAIRANIMRATIO_OFFSET UNITYSDK_OFFSET(0x1461C820)
#define CLASS_1_54715B955DC6C855_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x14615380)
#define CLASS_1_54715B955DC6C855_SET_WALLHITS_OFFSET UNITYSDK_OFFSET(0xA41E9E0)
#define CLASS_1_54715B955DC6C855__CCTOR_OFFSET UNITYSDK_OFFSET(0xA41EEE0)
#define CLASS_1_54715B955DC6C855__CTOR_OFFSET UNITYSDK_OFFSET(0x146138A0)

inline static constexpr unsigned int Class_1_54715B955DC6C855_TypeDefinitionIndex = 53332;

class Class_1_54715B955DC6C855 : public ::System::Object
{
public:
	static ::System::Single* StaticGet__MAX_MOVE_SPEED_k__BackingField()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_54715B955DC6C855_TypeDefinitionIndex)->GetStaticField(0x10EF0);
	}
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	::Il2CppArray<::UnityEngine::Collider*>* Field_1_3; // 0x10
	::RPG::GameCore::AdventureCharacterController* Field_1_4; // 0x18
	::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>* _WallHits_k__BackingField; // 0x20
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_1_6; // 0x28
	::UnityEngine::CapsuleCollider* _CapsuleCollider_k__BackingField; // 0x30
	::Class_1_7C730499E6981AF2* _ThreadData_k__BackingField; // 0x38
	::UnityEngine::Rigidbody* _Rigidbody_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_10; // 0x48
	::Struct_2_DC0A74F700976E73 Field_1_11; // 0x50
	::RPG::GameCore::GameEntity* Field_1_12; // 0x88
	::System::Single _UpStairAnimRatio_k__BackingField; // 0x90
	::UnityEngine::Vector3 _ForwardNormal_k__BackingField; // 0x94
	::System::Single Field_1_15; // 0xA0
	::UnityEngine::Vector3 _RealVelocity_k__BackingField; // 0xA4
	::UnityEngine::LayerMask _MoveRaycastLayerMask_k__BackingField; // 0xB0
	::System::Boolean _IsThread_k__BackingField; // 0xB4
	::System::Boolean Field_1_19; // 0xB5
	::System::Boolean Field_1_20; // 0xB6
	::System::Boolean _RequireStandOnGround_k__BackingField; // 0xB7
	::UnityEngine::LayerMask _SourceMoveRaycastLayerMask_k__BackingField; // 0xB8
	::UnityEngine::Vector3 Field_1_23; // 0xBC
	::System::Single _Speed_k__BackingField; // 0xC8
	::UnityEngine::LayerMask _SceneRaycastLayerMask_k__BackingField; // 0xCC
	::UnityEngine::Vector3 Field_1_26; // 0xD0
	::UnityEngine::Vector3 _Velocity_k__BackingField; // 0xDC
	::UnityEngine::Quaternion Field_1_28; // 0xE8
	::System::Single Field_1_29; // 0xF8
	::UnityEngine::Vector3 _GroundNormal_k__BackingField; // 0xFC
	::UnityEngine::LayerMask _SourceMoveCapsuleCastLayerMask_k__BackingField; // 0x108
	::UnityEngine::Vector3 Field_1_32; // 0x10C
	::System::Single Field_1_33; // 0x118
	::System::Boolean _AllowSlide_k__BackingField; // 0x11C
	::UnityEngine::Vector3 Field_1_35; // 0x120
	::UnityEngine::Vector3 Field_1_36; // 0x12C
	::System::Single Field_1_37; // 0x138
	::UnityEngine::LayerMask _MoveCapsuleCastLayerMask_k__BackingField; // 0x13C
	::System::Single _MaxSpeed_k__BackingField; // 0x140
	::UnityEngine::Vector3 Field_1_40; // 0x144
	::UnityEngine::Vector3 _LastPosition_k__BackingField; // 0x150

	::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855__CCTOR_OFFSET))();
	}

	static ::System::Single get_MAX_MOVE_SPEED()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_MAX_MOVE_SPEED_OFFSET))();
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_E65157A486C1DDE5(::UnityEngine::GameObject* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::CapsuleCollider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_E65157A486C1DDE5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_B0E9E91A270E75F1(::RPG::Client::MonoCharacterHeadPoint* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCharacterHeadPoint*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_B0E9E91A270E75F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_54715B955DC6C855* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_54715B955DC6C855*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_C1D3BDE2A17F5C9D_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FEA241CA014F8043(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_FEA241CA014F8043_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_AAE74561848EA037(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_AAE74561848EA037_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C6A450575DC46B50(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_C6A450575DC46B50_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_09B321C3BEF4C1E5(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_09B321C3BEF4C1E5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_49D352C181056F15(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_49D352C181056F15_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9D9C6981AA740629(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_9D9C6981AA740629_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CE52CE032F120BC(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_2CE52CE032F120BC_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_DISPOSE_OFFSET))(this);
	}

	::Class_1_7C730499E6981AF2* get_ThreadData()
	{
		return ((::Class_1_7C730499E6981AF2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_THREADDATA_OFFSET))(this);
	}

	::System::Single get_Speed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_SPEED_OFFSET))(this);
	}

	::System::Void set_Speed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_SPEED_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_RealVelocity()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_REALVELOCITY_OFFSET))(this);
	}

	::System::Void set_RealVelocity(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_REALVELOCITY_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_Velocity()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_VELOCITY_OFFSET))(this);
	}

	::System::Void set_Velocity(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_VELOCITY_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Void Method_1_62165C025F5C0B19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_62165C025F5C0B19_OFFSET))(this);
	}

	::System::Void Method_1_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_6_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_27592B75ABD7B555(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_27592B75ABD7B555_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_7_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_30D1209326FA87FC_2_OFFSET))(this);
	}

	::System::Boolean Method_1_FA56DCE292E69C68(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_FA56DCE292E69C68_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C86A8C92DD223A1A(::UnityEngine::Vector3 a1, ::UnityEngine::LayerMask a2, ::UnityEngine::Vector3& a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::LayerMask, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_C86A8C92DD223A1A_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::EMovementComputePenetrationResultType Method_1_128FE7D4AC6EA392(::UnityEngine::Vector3 a1, ::UnityEngine::LayerMask a2, ::UnityEngine::Vector3& a3, ::System::Single& a4)
	{
		return ((::RPG::GameCore::EMovementComputePenetrationResultType(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::LayerMask, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_128FE7D4AC6EA392_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_CB74E33F08A8811B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CB74E33F08A8811B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_B0DA9828F7B4DD90(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::UnityEngine::LayerMask a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_B0DA9828F7B4DD90_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_8EF54F768D3AF0D2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_8EF54F768D3AF0D2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_230D9D2669935041(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::RaycastHit& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_230D9D2669935041_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::GameCore::EMovementComputePenetrationResultType Method_1_8507A90D618EA20D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::RPG::GameCore::EMovementComputePenetrationResultType(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_8507A90D618EA20D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_42AE49233FE0C940(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::RaycastHit& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_42AE49233FE0C940_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_42FCF7EC07DF6708(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::RaycastHit& a5, ::UnityEngine::LayerMask a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_42FCF7EC07DF6708_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_5626385EF0A3436F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_5626385EF0A3436F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_C3FCFEB83374757C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_C3FCFEB83374757C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D43A81E8F419063F(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_D43A81E8F419063F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_B6E7B97471C22120(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_B6E7B97471C22120_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_DFF56AD42FD84C0C(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::RaycastHit& a5, ::UnityEngine::RaycastHit& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_DFF56AD42FD84C0C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_F679E8CF4B1A4DCA(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4, ::UnityEngine::RaycastHit& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::RaycastHit&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_F679E8CF4B1A4DCA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_1BD92CF0F4418517(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::RaycastHit& a3, ::RPG::GameCore::EMovementComputePenetrationResultType& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::RPG::GameCore::EMovementComputePenetrationResultType&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_1BD92CF0F4418517_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_D43A81E8F419063F_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_D43A81E8F419063F_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_DAC9219D09D338F5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_DAC9219D09D338F5_OFFSET))(this);
	}

	::System::Int32 Method_1_5AB860AAA4889394(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::LayerMask a3)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_5AB860AAA4889394_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_4DA758F3A2DC69A1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::LayerMask a4)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_4DA758F3A2DC69A1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_EF5B2B82CF25C616(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_EF5B2B82CF25C616_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_835AB84E5E01ADE6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::LayerMask a4)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_835AB84E5E01ADE6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_C8FB115C72ED7B3B(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4, ::System::Single a5, ::UnityEngine::LayerMask a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_C8FB115C72ED7B3B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Int32 Method_1_3A9628A1B5EBB7DE(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_3A9628A1B5EBB7DE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_DE4DB96AC09EBDE9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::LayerMask a6)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_DE4DB96AC09EBDE9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_1423343C279235C3(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Collider* a5, ::UnityEngine::Vector3& a6, ::System::Single& a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Collider*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_1423343C279235C3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::AdventureCharacterController* Method_1_766FE18F4D52BCD6()
	{
		return ((::RPG::GameCore::AdventureCharacterController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_766FE18F4D52BCD6_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* get_Rigidbody()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_RIGIDBODY_OFFSET))(this);
	}

	::System::Void set_Rigidbody(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_RIGIDBODY_OFFSET))(this, a1);
	}

	::UnityEngine::CapsuleCollider* get_CapsuleCollider()
	{
		return ((::UnityEngine::CapsuleCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_CAPSULECOLLIDER_OFFSET))(this);
	}

	::System::Void set_CapsuleCollider(::UnityEngine::CapsuleCollider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_CAPSULECOLLIDER_OFFSET))(this, a1);
	}

	::System::Single get_MaxSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_MAXSPEED_OFFSET))(this);
	}

	::System::Void set_MaxSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_MAXSPEED_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_GroundNormal()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_GROUNDNORMAL_OFFSET))(this);
	}

	::System::Void set_GroundNormal(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_GROUNDNORMAL_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_ForwardNormal()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_FORWARDNORMAL_OFFSET))(this);
	}

	::System::Void set_ForwardNormal(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_FORWARDNORMAL_OFFSET))(this, a1);
	}

	::System::Single get_UpStairAnimRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_UPSTAIRANIMRATIO_OFFSET))(this);
	}

	::System::Void set_UpStairAnimRatio(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_UPSTAIRANIMRATIO_OFFSET))(this, a1);
	}

	::System::Boolean get_RequireStandOnGround()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_REQUIRESTANDONGROUND_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_A36150C5DCC8409E_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_2_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_413F493333BF3391_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_3_OFFSET))(this);
	}

	::UnityEngine::LayerMask get_MoveRaycastLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_MOVERAYCASTLAYERMASK_OFFSET))(this);
	}

	::System::Void set_MoveRaycastLayerMask(::UnityEngine::LayerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_MOVERAYCASTLAYERMASK_OFFSET))(this, a1);
	}

	::UnityEngine::LayerMask get_MoveCapsuleCastLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_MOVECAPSULECASTLAYERMASK_OFFSET))(this);
	}

	::System::Void set_MoveCapsuleCastLayerMask(::UnityEngine::LayerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_MOVECAPSULECASTLAYERMASK_OFFSET))(this, a1);
	}

	::UnityEngine::LayerMask get_SceneRaycastLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_SCENERAYCASTLAYERMASK_OFFSET))(this);
	}

	::System::Void set_SceneRaycastLayerMask(::UnityEngine::LayerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_SCENERAYCASTLAYERMASK_OFFSET))(this, a1);
	}

	::UnityEngine::LayerMask get_SourceMoveRaycastLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_SOURCEMOVERAYCASTLAYERMASK_OFFSET))(this);
	}

	::System::Void set_SourceMoveRaycastLayerMask(::UnityEngine::LayerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_SOURCEMOVERAYCASTLAYERMASK_OFFSET))(this, a1);
	}

	::UnityEngine::LayerMask get_SourceMoveCapsuleCastLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_SOURCEMOVECAPSULECASTLAYERMASK_OFFSET))(this);
	}

	::System::Void set_SourceMoveCapsuleCastLayerMask(::UnityEngine::LayerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_SOURCEMOVECAPSULECASTLAYERMASK_OFFSET))(this, a1);
	}

	::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>* get_WallHits()
	{
		return ((::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_WALLHITS_OFFSET))(this);
	}

	::System::Void set_WallHits(::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_WALLHITS_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_BAE5E266E89AB6D3(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_BAE5E266E89AB6D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_4343F372F34C05BF_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_4_OFFSET))(this);
	}

	::System::Boolean get_AllowSlide()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_ALLOWSLIDE_OFFSET))(this);
	}

	::System::Void set_AllowSlide(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_ALLOWSLIDE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_LastPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_LASTPOSITION_OFFSET))(this);
	}

	::System::Void set_LastPosition(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_LASTPOSITION_OFFSET))(this, a1);
	}

	::System::Boolean get_IsThread()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_ISTHREAD_OFFSET))(this);
	}

	::System::Void set_IsThread(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_ISTHREAD_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_37363E5F93B43A3C(::UnityEngine::RaycastHit& a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::RaycastHit&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_37363E5F93B43A3C_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_AB508AA7C4C9D894(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_AB508AA7C4C9D894_OFFSET))(a1, a2, a3, a4);
	}
};
