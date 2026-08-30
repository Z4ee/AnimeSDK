#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueMiracleIdentifier.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }

#define CLASS_1_2D441118ED4608C7_METHOD_1_6BAEE180803E4244_OFFSET UNITYSDK_OFFSET(0xC1470B0)
#define CLASS_1_2D441118ED4608C7_METHOD_1_9BD82D5B883ABACD_OFFSET UNITYSDK_OFFSET(0xC146F30)
#define CLASS_1_2D441118ED4608C7__CTOR_OFFSET UNITYSDK_OFFSET(0xC146F20)

inline static constexpr unsigned int Class_1_2D441118ED4608C7_TypeDefinitionIndex = 67259;

class Class_1_2D441118ED4608C7 : public ::System::Object
{
public:
	::RPG::Client::IRogueMiracle* IOOJDBPIGPB; // 0x10
	::RPG::Client::RogueMiracleIdentifier LNPLJMDCPEP; // 0x18

	::System::Void _ctor(::RPG::Client::RogueMiracleIdentifier a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleIdentifier))((::PBYTE)hIl2Cpp + CLASS_1_2D441118ED4608C7__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_9BD82D5B883ABACD()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D441118ED4608C7_METHOD_1_9BD82D5B883ABACD_OFFSET))(this);
	}

	::RPG::Client::IRogueMiracle* Method_1_6BAEE180803E4244()
	{
		return ((::RPG::Client::IRogueMiracle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D441118ED4608C7_METHOD_1_6BAEE180803E4244_OFFSET))(this);
	}
};
