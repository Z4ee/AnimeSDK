#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AB238635C71ABAA0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179A6CE0)
#define CLASS_1_AB238635C71ABAA0_METHOD_1_10B2F8EEF6DA5441_1_OFFSET UNITYSDK_OFFSET(0x179A68E0)
#define CLASS_1_AB238635C71ABAA0_METHOD_1_10B2F8EEF6DA5441_OFFSET UNITYSDK_OFFSET(0x179A6770)
#define CLASS_1_AB238635C71ABAA0_METHOD_1_44D00F4CFC0324C5_1_OFFSET UNITYSDK_OFFSET(0x179A69C0)
#define CLASS_1_AB238635C71ABAA0_METHOD_1_44D00F4CFC0324C5_OFFSET UNITYSDK_OFFSET(0x179A6850)
#define CLASS_1_AB238635C71ABAA0_METHOD_1_9DA796436610DAC6_OFFSET UNITYSDK_OFFSET(0x179A6A50)
#define CLASS_1_AB238635C71ABAA0_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x179A66E0)
#define CLASS_1_AB238635C71ABAA0_METHOD_1_BB63BAD7C175B375_OFFSET UNITYSDK_OFFSET(0x179A6B90)
#define CLASS_1_AB238635C71ABAA0__CTOR_OFFSET UNITYSDK_OFFSET(0x179A6DA0)

inline static constexpr unsigned int Class_1_AB238635C71ABAA0_TypeDefinitionIndex = 68824;

class Class_1_AB238635C71ABAA0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::BaseShaderPropertyTransition*>* COJNEEDEPHJ; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::BaseShaderPropertyTransition*>* EKDNIPLJDGA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB238635C71ABAA0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB238635C71ABAA0_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_10B2F8EEF6DA5441(::RPG::Client::BaseShaderPropertyTransition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + CLASS_1_AB238635C71ABAA0_METHOD_1_10B2F8EEF6DA5441_OFFSET))(this, a1);
	}

	::System::Void Method_1_44D00F4CFC0324C5(::RPG::Client::BaseShaderPropertyTransition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + CLASS_1_AB238635C71ABAA0_METHOD_1_44D00F4CFC0324C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_10B2F8EEF6DA5441_1(::RPG::Client::BaseShaderPropertyTransition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + CLASS_1_AB238635C71ABAA0_METHOD_1_10B2F8EEF6DA5441_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_44D00F4CFC0324C5_1(::RPG::Client::BaseShaderPropertyTransition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + CLASS_1_AB238635C71ABAA0_METHOD_1_44D00F4CFC0324C5_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9DA796436610DAC6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB238635C71ABAA0_METHOD_1_9DA796436610DAC6_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB63BAD7C175B375(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB238635C71ABAA0_METHOD_1_BB63BAD7C175B375_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB238635C71ABAA0_DISPOSE_OFFSET))(this);
	}
};
