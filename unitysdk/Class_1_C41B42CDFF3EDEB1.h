#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52AE8D741A62A8F4;
class Class_1_FA4F4A67B1C04320_143;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_C41B42CDFF3EDEB1_METHOD_1_37AF1CBD74B61AAA_OFFSET UNITYSDK_OFFSET(0xEA74FB0)
#define CLASS_1_C41B42CDFF3EDEB1_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xEA75000)
#define CLASS_1_C41B42CDFF3EDEB1__CTOR_OFFSET UNITYSDK_OFFSET(0xEA74F80)

inline static constexpr unsigned int Class_1_C41B42CDFF3EDEB1_TypeDefinitionIndex = 51228;

class Class_1_C41B42CDFF3EDEB1 : public ::System::Object
{
public:
	::RPG::Client::IAvatarInfoProvider* Field_1_1; // 0x10
	::Class_1_FA4F4A67B1C04320_143* Field_1_2; // 0x18
	::Class_1_52AE8D741A62A8F4* Field_1_3; // 0x20
	::System::UInt32 Field_1_0; // 0x28

	::System::Void _ctor(::System::UInt32 a1, ::Class_1_FA4F4A67B1C04320_143* a2, ::Class_1_52AE8D741A62A8F4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_FA4F4A67B1C04320_143*, ::Class_1_52AE8D741A62A8F4*))((::PBYTE)hIl2Cpp + CLASS_1_C41B42CDFF3EDEB1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::IAvatarInfoProvider* Method_1_37AF1CBD74B61AAA()
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C41B42CDFF3EDEB1_METHOD_1_37AF1CBD74B61AAA_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C41B42CDFF3EDEB1_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}
};
