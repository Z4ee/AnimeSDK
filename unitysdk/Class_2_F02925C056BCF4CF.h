#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3ED45B5689DB5816.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_FA020C2C23A72B3F;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }

#define CLASS_2_F02925C056BCF4CF_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1414C8D0)
#define CLASS_2_F02925C056BCF4CF_METHOD_2_152185847F082CB5_OFFSET UNITYSDK_OFFSET(0x1414CF10)
#define CLASS_2_F02925C056BCF4CF_METHOD_2_6E402C67AE3B312A_OFFSET UNITYSDK_OFFSET(0x1414CD90)
#define CLASS_2_F02925C056BCF4CF_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1414CA50)
#define CLASS_2_F02925C056BCF4CF_METHOD_2_93AF70BB5280038E_OFFSET UNITYSDK_OFFSET(0x1414C930)
#define CLASS_2_F02925C056BCF4CF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1414C8F0)
#define CLASS_2_F02925C056BCF4CF_METHOD_2_E9F03060A73967EC_OFFSET UNITYSDK_OFFSET(0x1414CC00)
#define CLASS_2_F02925C056BCF4CF_METHOD_2_FC31AD8AD76AC017_OFFSET UNITYSDK_OFFSET(0x1414CAE0)
#define CLASS_2_F02925C056BCF4CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1414C8E0)

inline static constexpr unsigned int Class_2_F02925C056BCF4CF_TypeDefinitionIndex = 72601;

class Class_2_F02925C056BCF4CF : public ::Class_1_3ED45B5689DB5816
{
public:
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* Field_2_0; // 0x18

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_2_F02925C056BCF4CF__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F02925C056BCF4CF_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F02925C056BCF4CF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_93AF70BB5280038E(::UnityEngine::Vector2 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F02925C056BCF4CF_METHOD_2_93AF70BB5280038E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6E402C67AE3B312A(::UnityEngine::Vector2 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F02925C056BCF4CF_METHOD_2_6E402C67AE3B312A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_152185847F082CB5(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F02925C056BCF4CF_METHOD_2_152185847F082CB5_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* Method_2_FC31AD8AD76AC017(::System::UInt32 a1)
	{
		return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F02925C056BCF4CF_METHOD_2_FC31AD8AD76AC017_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9F03060A73967EC(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*))((::PBYTE)hIl2Cpp + CLASS_2_F02925C056BCF4CF_METHOD_2_E9F03060A73967EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F02925C056BCF4CF_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}
};
