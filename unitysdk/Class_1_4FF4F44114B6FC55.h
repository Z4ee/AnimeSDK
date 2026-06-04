#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SmellPathGraph; }
namespace RPG::Client { class SpecialVisionSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4FF4F44114B6FC55_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA706060)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0xA705EE0)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_12395559324BC8AF_OFFSET UNITYSDK_OFFSET(0xA705D80)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_404DFAD5E7E17EB2_OFFSET UNITYSDK_OFFSET(0xA7058F0)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_64E4B9936512B265_OFFSET UNITYSDK_OFFSET(0xA705A80)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xA705B10)
#define CLASS_1_4FF4F44114B6FC55__CTOR_OFFSET UNITYSDK_OFFSET(0xA7058B0)

inline static constexpr unsigned int Class_1_4FF4F44114B6FC55_TypeDefinitionIndex = 56971;

class Class_1_4FF4F44114B6FC55 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::SmellPathGraph*>* Field_1_0; // 0x10
	::RPG::Client::SpecialVisionSystem* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::SpecialVisionSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SpecialVisionSystem*))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_404DFAD5E7E17EB2(::RPG::Client::SmellPathGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SmellPathGraph*))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55_METHOD_1_404DFAD5E7E17EB2_OFFSET))(this, a1);
	}

	::System::Void Method_1_64E4B9936512B265(::RPG::Client::SmellPathGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SmellPathGraph*))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55_METHOD_1_64E4B9936512B265_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_1_12395559324BC8AF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55_METHOD_1_12395559324BC8AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55_METHOD_1_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55_DISPOSE_OFFSET))(this);
	}
};
