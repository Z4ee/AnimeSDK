#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MaterialBlockEffectBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2C3C32491495725B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x992E150)
#define CLASS_1_2C3C32491495725B_METHOD_1_6919EC27C0E29021_OFFSET UNITYSDK_OFFSET(0x992E0A0)
#define CLASS_1_2C3C32491495725B_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x992DF10)
#define CLASS_1_2C3C32491495725B_METHOD_1_D23EE412F7372D95_OFFSET UNITYSDK_OFFSET(0x992DF80)
#define CLASS_1_2C3C32491495725B_METHOD_1_F62A3C27547FFCFB_OFFSET UNITYSDK_OFFSET(0x992E010)
#define CLASS_1_2C3C32491495725B__CTOR_OFFSET UNITYSDK_OFFSET(0x992E1C0)

inline static constexpr unsigned int Class_1_2C3C32491495725B_TypeDefinitionIndex = 65142;

class Class_1_2C3C32491495725B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::MaterialBlockEffectBase*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C3C32491495725B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C3C32491495725B_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_D23EE412F7372D95(::RPG::Client::MaterialBlockEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_2C3C32491495725B_METHOD_1_D23EE412F7372D95_OFFSET))(this, a1);
	}

	::System::Void Method_1_F62A3C27547FFCFB(::RPG::Client::MaterialBlockEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_2C3C32491495725B_METHOD_1_F62A3C27547FFCFB_OFFSET))(this, a1);
	}

	::System::Void Method_1_6919EC27C0E29021(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2C3C32491495725B_METHOD_1_6919EC27C0E29021_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C3C32491495725B_DISPOSE_OFFSET))(this);
	}
};
