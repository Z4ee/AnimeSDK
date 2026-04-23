#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarRoleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_238948C201559205_METHOD_1_6920ED5DF09E229E_OFFSET UNITYSDK_OFFSET(0x11853DF0)
#define CLASS_1_238948C201559205_METHOD_1_8E6D29841DAC6C0A_OFFSET UNITYSDK_OFFSET(0x11853C50)
#define CLASS_1_238948C201559205__CTOR_OFFSET UNITYSDK_OFFSET(0x11853E90)

inline static constexpr unsigned int Class_1_238948C201559205_TypeDefinitionIndex = 58216;

class Class_1_238948C201559205 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_238948C201559205__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* Method_1_8E6D29841DAC6C0A()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_238948C201559205_METHOD_1_8E6D29841DAC6C0A_OFFSET))(this);
	}

	::RPG::Client::IAvatarInfoProvider* Method_1_6920ED5DF09E229E(::RPG::Client::AvatarRoleType a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + CLASS_1_238948C201559205_METHOD_1_6920ED5DF09E229E_OFFSET))(this, a1);
	}
};
