#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournHexData; }

#define CLASS_1_3B8DF55CBD033134_METHOD_1_437F4E7068FC1E74_OFFSET UNITYSDK_OFFSET(0x19F9A2D0)
#define CLASS_1_3B8DF55CBD033134_METHOD_1_BF427EFFAD6F483A_OFFSET UNITYSDK_OFFSET(0x19F9A240)
#define CLASS_1_3B8DF55CBD033134__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9A230)

inline static constexpr unsigned int Class_1_3B8DF55CBD033134_TypeDefinitionIndex = 67251;

class Class_1_3B8DF55CBD033134 : public ::System::Object
{
public:
	::RPG::Client::RogueTournHexData* NOHFFHLEGPO; // 0x10
	::Struct_2_FD0368737CBF6F9B_3 LNPLJMDCPEP; // 0x18

	::System::Void _ctor(::Struct_2_FD0368737CBF6F9B_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FD0368737CBF6F9B_3))((::PBYTE)hIl2Cpp + CLASS_1_3B8DF55CBD033134__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_BF427EFFAD6F483A()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B8DF55CBD033134_METHOD_1_BF427EFFAD6F483A_OFFSET))(this);
	}

	::RPG::Client::RogueTournHexData* Method_1_437F4E7068FC1E74()
	{
		return ((::RPG::Client::RogueTournHexData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B8DF55CBD033134_METHOD_1_437F4E7068FC1E74_OFFSET))(this);
	}
};
