#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D7C881F1CEF46C0D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8845310)
#define CLASS_1_D7C881F1CEF46C0D_METHOD_1_0190BA75FF339E40_OFFSET UNITYSDK_OFFSET(0x88451B0)
#define CLASS_1_D7C881F1CEF46C0D_METHOD_1_4D85CE65FBF7F57C_1_OFFSET UNITYSDK_OFFSET(0x8845090)
#define CLASS_1_D7C881F1CEF46C0D_METHOD_1_4D85CE65FBF7F57C_OFFSET UNITYSDK_OFFSET(0x8844F70)
#define CLASS_1_D7C881F1CEF46C0D_METHOD_1_5D73DD09E870C018_1_OFFSET UNITYSDK_OFFSET(0x8845120)
#define CLASS_1_D7C881F1CEF46C0D_METHOD_1_5D73DD09E870C018_OFFSET UNITYSDK_OFFSET(0x8845000)
#define CLASS_1_D7C881F1CEF46C0D_METHOD_1_6919EC27C0E29021_OFFSET UNITYSDK_OFFSET(0x8845260)
#define CLASS_1_D7C881F1CEF46C0D_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x8844EE0)
#define CLASS_1_D7C881F1CEF46C0D__CTOR_OFFSET UNITYSDK_OFFSET(0x88453B0)

inline static constexpr unsigned int Class_1_D7C881F1CEF46C0D_TypeDefinitionIndex = 56254;

class Class_1_D7C881F1CEF46C0D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::BaseShaderPropertyTransition*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::BaseShaderPropertyTransition*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C881F1CEF46C0D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C881F1CEF46C0D_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_4D85CE65FBF7F57C(::RPG::Client::BaseShaderPropertyTransition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + CLASS_1_D7C881F1CEF46C0D_METHOD_1_4D85CE65FBF7F57C_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D73DD09E870C018(::RPG::Client::BaseShaderPropertyTransition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + CLASS_1_D7C881F1CEF46C0D_METHOD_1_5D73DD09E870C018_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D85CE65FBF7F57C_1(::RPG::Client::BaseShaderPropertyTransition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + CLASS_1_D7C881F1CEF46C0D_METHOD_1_4D85CE65FBF7F57C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D73DD09E870C018_1(::RPG::Client::BaseShaderPropertyTransition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + CLASS_1_D7C881F1CEF46C0D_METHOD_1_5D73DD09E870C018_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0190BA75FF339E40(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7C881F1CEF46C0D_METHOD_1_0190BA75FF339E40_OFFSET))(this, a1);
	}

	::System::Void Method_1_6919EC27C0E29021(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D7C881F1CEF46C0D_METHOD_1_6919EC27C0E29021_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C881F1CEF46C0D_DISPOSE_OFFSET))(this);
	}
};
