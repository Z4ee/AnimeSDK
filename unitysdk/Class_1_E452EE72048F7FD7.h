#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2DF7D47FE2D82D71;
class Class_1_5DF5F62C68EF718F;
class Class_1_E452EE72048F7FD7_Class_1_0768C4BEC10E6AAD;
class Class_2_4C3F9D9CF221EFEC;
class Class_2_FC72C0D3E1F3C11B;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateOrbitCruiseConfig; }
namespace RPG::Client { class CameraFightStateOrbitCruiseConfigData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E452EE72048F7FD7_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x156C5EE0)
#define CLASS_1_E452EE72048F7FD7_GET_MARKDISABLE_OFFSET UNITYSDK_OFFSET(0x156C32B0)
#define CLASS_1_E452EE72048F7FD7_INIT_OFFSET UNITYSDK_OFFSET(0x156C32D0)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_0CC1EA4372265873_OFFSET UNITYSDK_OFFSET(0x156C3540)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x156C7080)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_40082CAD46FBE80F_OFFSET UNITYSDK_OFFSET(0x156C5DD0)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_4287081A8571B187_OFFSET UNITYSDK_OFFSET(0x156C70E0)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x156C5F30)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_49085A3FC0F13F5E_OFFSET UNITYSDK_OFFSET(0x156C3370)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_5F1978205E005603_OFFSET UNITYSDK_OFFSET(0x156C3A00)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_5F9F5EB6A660BE4E_OFFSET UNITYSDK_OFFSET(0x156C5FA0)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_862ACF0AE239B7AE_OFFSET UNITYSDK_OFFSET(0x156C4B80)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_86B20B986C7816F4_OFFSET UNITYSDK_OFFSET(0x156C49E0)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_920DE8F4A8DAE754_OFFSET UNITYSDK_OFFSET(0x156C4970)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0x156C7270)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_BB4912EB95B8083A_OFFSET UNITYSDK_OFFSET(0x156C7300)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_CC324EA2E7C18FE7_OFFSET UNITYSDK_OFFSET(0x156C3B60)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_DD85D6AC91C1BEA9_OFFSET UNITYSDK_OFFSET(0x156C5640)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_E1C8EBE68635D7A7_OFFSET UNITYSDK_OFFSET(0x156C3A50)
#define CLASS_1_E452EE72048F7FD7_METHOD_1_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0x156C3DB0)
#define CLASS_1_E452EE72048F7FD7_REFRESH_OFFSET UNITYSDK_OFFSET(0x156C3E70)
#define CLASS_1_E452EE72048F7FD7_RESET_OFFSET UNITYSDK_OFFSET(0x156C36E0)
#define CLASS_1_E452EE72048F7FD7_SET_MARKDISABLE_OFFSET UNITYSDK_OFFSET(0x156C32C0)
#define CLASS_1_E452EE72048F7FD7__CTOR_OFFSET UNITYSDK_OFFSET(0x156C75A0)

inline static constexpr unsigned int Class_1_E452EE72048F7FD7_TypeDefinitionIndex = 69600;

class Class_1_E452EE72048F7FD7 : public ::System::Object
{
public:
	static ::RPG::Client::CameraFightStateOrbitCruiseConfig** StaticGet_LJHJGJHBCGK()
	{
		return (::RPG::Client::CameraFightStateOrbitCruiseConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E452EE72048F7FD7_TypeDefinitionIndex)->GetStaticField(0x70170);
	}
	static ::System::Boolean* StaticGet_DBNOGAJNAGM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E452EE72048F7FD7_TypeDefinitionIndex)->GetStaticField(0x15DB0);
	}
	::UnityEngine::AnimationCurve* JLGFJFBAGAM; // 0x10
	::Class_1_E452EE72048F7FD7_Class_1_0768C4BEC10E6AAD* DEMJAICIJED; // 0x18
	::Class_2_4C3F9D9CF221EFEC* LEOGIKABIGF; // 0x20
	::UnityEngine::AnimationCurve* AMJNOIBCKDD; // 0x28
	::UnityEngine::Transform* ONCIGDPDCGB; // 0x30
	::System::String* LAIHAJDPHOM; // 0x38
	::UnityEngine::AnimationCurve* BPAHBKCLOJM; // 0x40
	::Class_1_5DF5F62C68EF718F* DAHGMPIIOLG; // 0x48
	::Class_1_2DF7D47FE2D82D71* FHMHLIKKEHN; // 0x50
	::System::String* MMBFJDEGBAC; // 0x58
	::UnityEngine::Transform* ONKOKFADPEJ; // 0x60
	::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* BLNKMOBDNKE; // 0x70
	::UnityEngine::AnimationCurve* PEFMHBKLOOP; // 0x78
	::System::String* DLHOPOMAGBC; // 0x80
	::UnityEngine::Transform* GIDEPKJMFOL; // 0x88
	::RPG::Client::CameraFightStateOrbitCruiseConfig* MAFIONBKPIE; // 0x90
	::RPG::Client::CameraFightStateOrbitCruiseConfigData* PLGMKBCJCNJ; // 0x98
	::Class_1_2DF7D47FE2D82D71* LINIFIIAPKE; // 0xA0
	::System::Single DOCGDFKCIEP; // 0xA8
	::System::Single KEAIMOAAFHH; // 0xAC
	::RPG::MVector3 FGFBOKEMBOJ; // 0xB0
	::System::Int32 ELPAHJLJFNG; // 0xBC
	::System::Int32 IENFJPHJHKB; // 0xC0
	::System::Single PDBHIPPBDME; // 0xC4
	::System::Boolean IOEGCBCEGKE; // 0xC8
	::System::Boolean GILPCBPJLFH; // 0xC9
	::System::Boolean FIGOAGIKKDP; // 0xCA
	::System::Boolean _MarkDisable_k__BackingField; // 0xCB
	::UnityEngine::Vector3 BNMNCFJIKLL; // 0xCC
	::UnityEngine::Vector3 ODPPOOABDOG; // 0xD8
	::System::Int32 KCINJMBNMLF; // 0xE4
	::UnityEngine::Vector3 LMGAAJFMIHC; // 0xE8
	::System::Single CHKACACHMAN; // 0xF4
	::UnityEngine::Vector3 HNINLJGANBI; // 0xF8
	::UnityEngine::Quaternion BMHLLLDCLJE; // 0x104
	::System::Single DGHNMGPGLGE; // 0x114
	::System::Boolean CIHBLPAAELI; // 0x118
	::System::Boolean LNBIOGEHMCK; // 0x119
	::System::Single ODBLHBMPLHK; // 0x11C
	::RPG::MVector3 BKOABKEHEME; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7__CTOR_OFFSET))(this);
	}

	::System::Boolean get_MarkDisable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_GET_MARKDISABLE_OFFSET))(this);
	}

	::System::Void set_MarkDisable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_SET_MARKDISABLE_OFFSET))(this, a1);
	}

	::System::Void Init(::Class_2_4C3F9D9CF221EFEC* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C3F9D9CF221EFEC*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_49085A3FC0F13F5E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_49085A3FC0F13F5E_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* Method_1_0CC1EA4372265873(::System::String* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_0CC1EA4372265873_OFFSET))(this, a1);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_RESET_OFFSET))(this);
	}

	::System::Void Method_1_5F1978205E005603(::RPG::Client::CameraFightStateOrbitCruiseConfigData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFightStateOrbitCruiseConfigData*))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_5F1978205E005603_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_E1C8EBE68635D7A7()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_E1C8EBE68635D7A7_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_1_CC324EA2E7C18FE7(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_CC324EA2E7C18FE7_OFFSET))(a1, a2);
	}

	::System::Void Method_1_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_ED79705457B92B5C_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_86B20B986C7816F4(::Class_2_FC72C0D3E1F3C11B* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FC72C0D3E1F3C11B*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_86B20B986C7816F4_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_40082CAD46FBE80F(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_40082CAD46FBE80F_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD85D6AC91C1BEA9(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_DD85D6AC91C1BEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_862ACF0AE239B7AE(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_862ACF0AE239B7AE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_5F9F5EB6A660BE4E(::UnityEngine::Camera* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_5F9F5EB6A660BE4E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::CameraFightStateOrbitCruiseConfigData* Method_1_920DE8F4A8DAE754()
	{
		return ((::RPG::Client::CameraFightStateOrbitCruiseConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_920DE8F4A8DAE754_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_4287081A8571B187(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_4287081A8571B187_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_999B8B439422C7E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB4912EB95B8083A(::System::Boolean a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E452EE72048F7FD7_METHOD_1_BB4912EB95B8083A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
