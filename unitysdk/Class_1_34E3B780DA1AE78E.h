#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MaterialBlockEffectBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_34E3B780DA1AE78E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A62C80)
#define CLASS_1_34E3B780DA1AE78E_METHOD_1_15904DCBB6A6F5A8_OFFSET UNITYSDK_OFFSET(0x17A629C0)
#define CLASS_1_34E3B780DA1AE78E_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x17A62950)
#define CLASS_1_34E3B780DA1AE78E_METHOD_1_B69A752AFC37CA5E_OFFSET UNITYSDK_OFFSET(0x17A62AA0)
#define CLASS_1_34E3B780DA1AE78E_METHOD_1_BB63BAD7C175B375_OFFSET UNITYSDK_OFFSET(0x17A62B30)
#define CLASS_1_34E3B780DA1AE78E__CTOR_OFFSET UNITYSDK_OFFSET(0x17A62D10)

inline static constexpr unsigned int Class_1_34E3B780DA1AE78E_TypeDefinitionIndex = 70617;

class Class_1_34E3B780DA1AE78E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::MaterialBlockEffectBase*>* JNEAHOFEENF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34E3B780DA1AE78E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34E3B780DA1AE78E_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_15904DCBB6A6F5A8(::RPG::Client::MaterialBlockEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_34E3B780DA1AE78E_METHOD_1_15904DCBB6A6F5A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_B69A752AFC37CA5E(::RPG::Client::MaterialBlockEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_34E3B780DA1AE78E_METHOD_1_B69A752AFC37CA5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB63BAD7C175B375(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_34E3B780DA1AE78E_METHOD_1_BB63BAD7C175B375_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34E3B780DA1AE78E_DISPOSE_OFFSET))(this);
	}
};
