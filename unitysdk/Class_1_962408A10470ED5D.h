#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_22EF00D60ECEA4CD;
namespace RPG::Client { class VoracityInvasionProgressBuffData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_962408A10470ED5D_METHOD_1_441F531870511607_OFFSET UNITYSDK_OFFSET(0x13A2A090)
#define CLASS_1_962408A10470ED5D__CTOR_OFFSET UNITYSDK_OFFSET(0x13A2A410)

inline static constexpr unsigned int Class_1_962408A10470ED5D_TypeDefinitionIndex = 68268;

class Class_1_962408A10470ED5D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionProgressBuffData*>* DDKMNBAGDDB; // 0x10
	::Class_1_22EF00D60ECEA4CD* CEFLLELKFOP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_962408A10470ED5D__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionProgressBuffData*>* Method_1_441F531870511607()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionProgressBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_962408A10470ED5D_METHOD_1_441F531870511607_OFFSET))(this);
	}
};
