#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CelestialBodyType.h"
#include "unitysdk/System/Object.h"

class CelestialBodyData;
class Class_0_16E4307DCC419505_908;
class OrbitData;
class SolarSystemData;
class VisibilityConfig;
namespace RPG::Client { class SolarSystemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E59E664392939D7E_METHOD_1_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0x128121D0)
#define CLASS_1_E59E664392939D7E_METHOD_1_423325F9A06215F6_OFFSET UNITYSDK_OFFSET(0x12811D90)
#define CLASS_1_E59E664392939D7E_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x12812880)
#define CLASS_1_E59E664392939D7E_METHOD_1_7977DF97CE6192D8_OFFSET UNITYSDK_OFFSET(0x128129B0)
#define CLASS_1_E59E664392939D7E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x128120F0)
#define CLASS_1_E59E664392939D7E_METHOD_1_A4E70CB481BCC07A_OFFSET UNITYSDK_OFFSET(0x12812540)
#define CLASS_1_E59E664392939D7E_METHOD_1_BB91A369C8A06304_OFFSET UNITYSDK_OFFSET(0x128123D0)
#define CLASS_1_E59E664392939D7E_METHOD_1_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x12812910)
#define CLASS_1_E59E664392939D7E_METHOD_1_D788A58AD31561C6_OFFSET UNITYSDK_OFFSET(0x12812070)
#define CLASS_1_E59E664392939D7E__CCTOR_OFFSET UNITYSDK_OFFSET(0x12812A30)
#define CLASS_1_E59E664392939D7E__CTOR_OFFSET UNITYSDK_OFFSET(0x12811DA0)

inline static constexpr unsigned int Class_1_E59E664392939D7E_TypeDefinitionIndex = 64328;

class Class_1_E59E664392939D7E : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::CelestialBodyType>** StaticGet_Field_1_10()
	{
		return (::System::Collections::Generic::List_1<::CelestialBodyType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E59E664392939D7E_TypeDefinitionIndex)->GetStaticField(0x18290);
	}
	::System::Collections::Generic::Dictionary_2<::CelestialBodyType, ::Class_0_16E4307DCC419505_908*>* Field_1_9; // 0x10
	::System::String* Field_1_0; // 0x18
	::SolarSystemData* Field_1_4; // 0x20
	::VisibilityConfig* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_908*>* Field_1_8; // 0x30
	::System::Single Field_1_3; // 0x38
	::System::Single Field_1_2; // 0x3C
	::System::Int32 Field_1_6; // 0x40
	::System::Single Field_1_5; // 0x44
	::System::Single Field_1_7; // 0x48

	::System::Void _ctor(::RPG::Client::SolarSystemConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SolarSystemConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E59E664392939D7E__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E59E664392939D7E__CCTOR_OFFSET))();
	}

	::SolarSystemData* Method_1_423325F9A06215F6()
	{
		return ((::SolarSystemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59E664392939D7E_METHOD_1_423325F9A06215F6_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59E664392939D7E_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_3FAAA518D3F433CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59E664392939D7E_METHOD_1_3FAAA518D3F433CC_OFFSET))(this);
	}

	::System::Boolean Method_1_D788A58AD31561C6(::CelestialBodyType a1, ::OrbitData* a2, ::CelestialBodyData* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::CelestialBodyType, ::OrbitData*, ::CelestialBodyData*))((::PBYTE)hIl2Cpp + CLASS_1_E59E664392939D7E_METHOD_1_D788A58AD31561C6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BB91A369C8A06304(::Class_0_16E4307DCC419505_908* a1, ::CelestialBodyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_908*, ::CelestialBodyType))((::PBYTE)hIl2Cpp + CLASS_1_E59E664392939D7E_METHOD_1_BB91A369C8A06304_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A4E70CB481BCC07A(::Class_0_16E4307DCC419505_908* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_908*))((::PBYTE)hIl2Cpp + CLASS_1_E59E664392939D7E_METHOD_1_A4E70CB481BCC07A_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E59E664392939D7E_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E59E664392939D7E_METHOD_1_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_1_7977DF97CE6192D8(::VisibilityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::VisibilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E59E664392939D7E_METHOD_1_7977DF97CE6192D8_OFFSET))(this, a1);
	}
};
