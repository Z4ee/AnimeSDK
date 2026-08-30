#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CelestialBodyType.h"
#include "unitysdk/System/Object.h"

class CelestialBodyData;
class Class_0_16E4307DCC419505_1054;
class OrbitData;
class SolarSystemData;
class VisibilityConfig;
namespace RPG::Client { class SolarSystemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_535E4088B549C341_METHOD_1_21CDF8CB708F194D_OFFSET UNITYSDK_OFFSET(0xC302680)
#define CLASS_1_535E4088B549C341_METHOD_1_2FDC69A366F3E642_OFFSET UNITYSDK_OFFSET(0xC3022E0)
#define CLASS_1_535E4088B549C341_METHOD_1_38780CC309D021B1_OFFSET UNITYSDK_OFFSET(0xC302180)
#define CLASS_1_535E4088B549C341_METHOD_1_423325F9A06215F6_OFFSET UNITYSDK_OFFSET(0xC301EC0)
#define CLASS_1_535E4088B549C341_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xC3029E0)
#define CLASS_1_535E4088B549C341_METHOD_1_7977DF97CE6192D8_OFFSET UNITYSDK_OFFSET(0xC302B10)
#define CLASS_1_535E4088B549C341_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xC302200)
#define CLASS_1_535E4088B549C341_METHOD_1_C7AA2903ACFD6D58_OFFSET UNITYSDK_OFFSET(0xC3024B0)
#define CLASS_1_535E4088B549C341_METHOD_1_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0xC302A70)
#define CLASS_1_535E4088B549C341__CCTOR_OFFSET UNITYSDK_OFFSET(0xC302B90)
#define CLASS_1_535E4088B549C341__CTOR_OFFSET UNITYSDK_OFFSET(0xC301ED0)

inline static constexpr unsigned int Class_1_535E4088B549C341_TypeDefinitionIndex = 69760;

class Class_1_535E4088B549C341 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::CelestialBodyType>** StaticGet_KMJABMECNPF()
	{
		return (::System::Collections::Generic::List_1<::CelestialBodyType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_535E4088B549C341_TypeDefinitionIndex)->GetStaticField(0x38ED0);
	}
	::VisibilityConfig* IBPEICLMMIP; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1054*>* PEGDCBNJFHB; // 0x18
	::System::Collections::Generic::Dictionary_2<::CelestialBodyType, ::Class_0_16E4307DCC419505_1054*>* KBPCEOGIIFK; // 0x20
	::System::String* LGFPILJBFGB; // 0x28
	::SolarSystemData* JHEBNGOMJMA; // 0x30
	::System::Single OLOPGACLCLO; // 0x38
	::System::Single MGHKIPANBID; // 0x3C
	::System::Single HHKFNGHKIJI; // 0x40
	::System::Int32 IINFJDLEBOB; // 0x44
	::System::Single KJGPBILGDHK; // 0x48

	::System::Void _ctor(::RPG::Client::SolarSystemConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SolarSystemConfig*))((::PBYTE)hIl2Cpp + CLASS_1_535E4088B549C341__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_535E4088B549C341__CCTOR_OFFSET))();
	}

	::SolarSystemData* Method_1_423325F9A06215F6()
	{
		return ((::SolarSystemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_535E4088B549C341_METHOD_1_423325F9A06215F6_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_535E4088B549C341_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_2FDC69A366F3E642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_535E4088B549C341_METHOD_1_2FDC69A366F3E642_OFFSET))(this);
	}

	::System::Boolean Method_1_38780CC309D021B1(::CelestialBodyType a1, ::OrbitData* a2, ::CelestialBodyData* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::CelestialBodyType, ::OrbitData*, ::CelestialBodyData*))((::PBYTE)hIl2Cpp + CLASS_1_535E4088B549C341_METHOD_1_38780CC309D021B1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C7AA2903ACFD6D58(::Class_0_16E4307DCC419505_1054* a1, ::CelestialBodyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1054*, ::CelestialBodyType))((::PBYTE)hIl2Cpp + CLASS_1_535E4088B549C341_METHOD_1_C7AA2903ACFD6D58_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_21CDF8CB708F194D(::Class_0_16E4307DCC419505_1054* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1054*))((::PBYTE)hIl2Cpp + CLASS_1_535E4088B549C341_METHOD_1_21CDF8CB708F194D_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_535E4088B549C341_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_535E4088B549C341_METHOD_1_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_1_7977DF97CE6192D8(::VisibilityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::VisibilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_535E4088B549C341_METHOD_1_7977DF97CE6192D8_OFFSET))(this, a1);
	}
};
