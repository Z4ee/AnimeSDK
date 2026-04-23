#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelNodeImplState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FD611945730E269E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x972A540)
#define CLASS_1_FD611945730E269E_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x972A580)
#define CLASS_1_FD611945730E269E_METHOD_1_A0F73B2FE393C684_OFFSET UNITYSDK_OFFSET(0x972A620)
#define CLASS_1_FD611945730E269E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x972A5E0)
#define CLASS_1_FD611945730E269E__CTOR_OFFSET UNITYSDK_OFFSET(0x972A660)

inline static constexpr unsigned int Class_1_FD611945730E269E_TypeDefinitionIndex = 71747;

class Class_1_FD611945730E269E : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraDuelNodeImplState Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD611945730E269E__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD611945730E269E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD611945730E269E_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD611945730E269E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::Prop::ChimeraDuelNodeImplState Method_1_A0F73B2FE393C684()
	{
		return ((::RPG::Client::Prop::ChimeraDuelNodeImplState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD611945730E269E_METHOD_1_A0F73B2FE393C684_OFFSET))(this);
	}
};
