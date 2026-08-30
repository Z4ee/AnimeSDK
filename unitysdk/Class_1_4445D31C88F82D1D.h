#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class GamePlayLockTargetFunc; }
namespace RPG::Client { class InputDataController; }

#define CLASS_1_4445D31C88F82D1D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB83AC60)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_2C56AE4A42D6E217_OFFSET UNITYSDK_OFFSET(0xB83A780)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_39E669857F41F800_OFFSET UNITYSDK_OFFSET(0xB839660)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0xB838EE0)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_909FC79222B4A1EB_OFFSET UNITYSDK_OFFSET(0xB839A50)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_90A07D9BC1B409B9_OFFSET UNITYSDK_OFFSET(0xB83A220)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0xB83A060)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_CCB1C92E6A241E7C_OFFSET UNITYSDK_OFFSET(0xB839E10)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0xB83ACF0)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_DF7CEFC0E6C5FD0D_1_OFFSET UNITYSDK_OFFSET(0xB83AED0)
#define CLASS_1_4445D31C88F82D1D_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0xB83AE10)
#define CLASS_1_4445D31C88F82D1D_TICK_OFFSET UNITYSDK_OFFSET(0xB839000)
#define CLASS_1_4445D31C88F82D1D__CTOR_OFFSET UNITYSDK_OFFSET(0xB838E50)

inline static constexpr unsigned int Class_1_4445D31C88F82D1D_TypeDefinitionIndex = 61406;

class Class_1_4445D31C88F82D1D : public ::System::Object
{
public:
	// static const ::System::Single AEPEKAMKMKD; // 0x0
	// static const ::System::Single LBJPDFPHCNF; // 0x0
	::RPG::Client::InputDataController* JHGFHAFJLPC; // 0x10
	::RPG::Client::GamePlayLockTargetFunc* EGCPOEIJPPC; // 0x18
	::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0x20
	::UnityEngine::Vector2 LICNPONDOHP; // 0x28
	::System::UInt32 CJLNNGNNKFL; // 0x30
	::System::Boolean HMOBGJKPHLE; // 0x34
	::System::Boolean FPGNCCFKIHA; // 0x35
	::System::Boolean HJAAPIOGKIO; // 0x36
	::System::UInt32 EGOEPDIGMBH; // 0x38

	::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_39E669857F41F800(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_39E669857F41F800_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_909FC79222B4A1EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_909FC79222B4A1EB_OFFSET))(this);
	}

	::System::Void Method_1_CCB1C92E6A241E7C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_CCB1C92E6A241E7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_90A07D9BC1B409B9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_90A07D9BC1B409B9_OFFSET))(this);
	}

	::System::Void Method_1_2C56AE4A42D6E217(::System::Boolean a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_2C56AE4A42D6E217_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_DF7CEFC0E6C5FD0D_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4445D31C88F82D1D_METHOD_1_ADA85C40A3382050_OFFSET))(this);
	}
};
