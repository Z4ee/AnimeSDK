#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SmellPathGraph; }
namespace RPG::Client { class SpecialVisionSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4FF4F44114B6FC55_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9F9500)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0xB9F9380)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_12395559324BC8AF_OFFSET UNITYSDK_OFFSET(0xB9F9220)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_3C41C8366FDBF4CE_OFFSET UNITYSDK_OFFSET(0xB9F8E10)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_4C7CCCA8D3F1B5F6_OFFSET UNITYSDK_OFFSET(0xB9F8F20)
#define CLASS_1_4FF4F44114B6FC55_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xB9F8FB0)
#define CLASS_1_4FF4F44114B6FC55__CTOR_OFFSET UNITYSDK_OFFSET(0xB9F8DD0)

inline static constexpr unsigned int Class_1_4FF4F44114B6FC55_TypeDefinitionIndex = 61045;

class Class_1_4FF4F44114B6FC55 : public ::System::Object
{
public:
	::RPG::Client::SpecialVisionSystem* CGKCJPPHKPK; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::SmellPathGraph*>* FKJEEFFNHEJ; // 0x18

	::System::Void _ctor(::RPG::Client::SpecialVisionSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SpecialVisionSystem*))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C41C8366FDBF4CE(::RPG::Client::SmellPathGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SmellPathGraph*))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55_METHOD_1_3C41C8366FDBF4CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C7CCCA8D3F1B5F6(::RPG::Client::SmellPathGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SmellPathGraph*))((::PBYTE)hIl2Cpp + CLASS_1_4FF4F44114B6FC55_METHOD_1_4C7CCCA8D3F1B5F6_OFFSET))(this, a1);
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
