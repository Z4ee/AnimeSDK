#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_79F789DF1A08B53B;
class Class_3_626F93E2306641CC;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceSupportIndicatorMonoView; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F754EC2F24C8D04D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96A7F80)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_0CADEA47024A0255_OFFSET UNITYSDK_OFFSET(0x96A8070)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x96A7C40)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_1F5E0226DAD91587_OFFSET UNITYSDK_OFFSET(0x96A7BA0)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_2D0BCE0D36736E0C_OFFSET UNITYSDK_OFFSET(0x96A8C40)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x96A7DC0)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_585E2EA201FDE7ED_OFFSET UNITYSDK_OFFSET(0x969A280)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x96A8430)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x96A8E90)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0x96A8BA0)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x96A7B40)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_A1F9BFB7EBB25DAC_OFFSET UNITYSDK_OFFSET(0x96A80D0)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_AFDE0DA2DAB302EA_OFFSET UNITYSDK_OFFSET(0x96A8A80)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_DCCF63B007FEBD16_OFFSET UNITYSDK_OFFSET(0x96A8D60)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_ECD1AD675584F751_OFFSET UNITYSDK_OFFSET(0x96A8A10)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x96A83C0)
#define CLASS_1_F754EC2F24C8D04D__CTOR_OFFSET UNITYSDK_OFFSET(0x96A7C30)

inline static constexpr unsigned int Class_1_F754EC2F24C8D04D_TypeDefinitionIndex = 71545;

class Class_1_F754EC2F24C8D04D : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	::UnityEngine::Transform* Field_1_10; // 0x10
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* Field_1_9; // 0x18
	::Class_3_626F93E2306641CC* Field_1_3; // 0x20
	::RPG::Client::LittleGame::CakeRace::CakeRaceSupportIndicatorMonoView* Field_1_11; // 0x28
	::System::Single Field_1_5; // 0x30
	::System::Single Field_1_4; // 0x34
	::System::Single Field_1_7; // 0x38
	::System::Boolean Field_1_8; // 0x3C
	::System::Single Field_1_6; // 0x40

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D__CTOR_OFFSET))(this, a1);
	}

	::Class_1_79F789DF1A08B53B* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_79F789DF1A08B53B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	static ::Class_1_F754EC2F24C8D04D* Method_1_1F5E0226DAD91587(::Class_3_626F93E2306641CC* a1)
	{
		return ((::Class_1_F754EC2F24C8D04D*(*)(::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_1F5E0226DAD91587_OFFSET))(a1);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_0CADEA47024A0255(::RPG::Client::LittleGame::CakeRace::CakeRaceSupportIndicatorMonoView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceSupportIndicatorMonoView*))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_0CADEA47024A0255_OFFSET))(this, a1);
	}

	::System::Void Method_1_585E2EA201FDE7ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_585E2EA201FDE7ED_OFFSET))(this);
	}

	::System::Void Method_1_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_1_ECD1AD675584F751(::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_ECD1AD675584F751_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1F9BFB7EBB25DAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_A1F9BFB7EBB25DAC_OFFSET))(this);
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_AFDE0DA2DAB302EA(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_AFDE0DA2DAB302EA_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_2D0BCE0D36736E0C(::System::Single a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_2D0BCE0D36736E0C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8723A000853037DA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_8723A000853037DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_1_DCCF63B007FEBD16(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_DCCF63B007FEBD16_OFFSET))(this, a1);
	}
};
