#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A561ECB6A41879A;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceSupportIndicatorMonoView; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F754EC2F24C8D04D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18707DD0)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x18708280)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_0CADEA47024A0255_OFFSET UNITYSDK_OFFSET(0x18707EE0)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x18707A60)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_1F5E0226DAD91587_OFFSET UNITYSDK_OFFSET(0x187079C0)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_2D0BCE0D36736E0C_OFFSET UNITYSDK_OFFSET(0x18708AF0)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_585E2EA201FDE7ED_OFFSET UNITYSDK_OFFSET(0x18708230)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x187082F0)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x18708D40)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0x18708A50)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x18707960)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_A1F9BFB7EBB25DAC_OFFSET UNITYSDK_OFFSET(0x18707F40)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_AFDE0DA2DAB302EA_OFFSET UNITYSDK_OFFSET(0x18708930)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0x18707BF0)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_DCCF63B007FEBD16_OFFSET UNITYSDK_OFFSET(0x18708C10)
#define CLASS_1_F754EC2F24C8D04D_METHOD_1_ECD1AD675584F751_OFFSET UNITYSDK_OFFSET(0x187088C0)
#define CLASS_1_F754EC2F24C8D04D__CTOR_OFFSET UNITYSDK_OFFSET(0x18707A50)

inline static constexpr unsigned int Class_1_F754EC2F24C8D04D_TypeDefinitionIndex = 74092;

class Class_1_F754EC2F24C8D04D : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* Field_1_3; // 0x10
	::UnityEngine::Transform* Field_1_4; // 0x18
	::RPG::Client::LittleGame::CakeRace::CakeRaceSupportIndicatorMonoView* Field_1_5; // 0x20
	::Class_3_FA020C2C23A72B3F* Field_1_6; // 0x28
	::System::Single Field_1_7; // 0x30
	::System::Single Field_1_8; // 0x34
	::System::Single Field_1_9; // 0x38
	::System::Boolean Field_1_10; // 0x3C
	::System::Single Field_1_11; // 0x40

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D__CTOR_OFFSET))(this, a1);
	}

	::Class_1_8A561ECB6A41879A* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_8A561ECB6A41879A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	static ::Class_1_F754EC2F24C8D04D* Method_1_1F5E0226DAD91587(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::Class_1_F754EC2F24C8D04D*(*)(::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_1F5E0226DAD91587_OFFSET))(a1);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_B00A1D822E6F5C31_OFFSET))(this);
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

	::System::Void Method_1_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F754EC2F24C8D04D_METHOD_1_0869E1192F8E01DF_OFFSET))(this);
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
