#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_95F1424C154A1551_METHOD_1_6C48DDE725FE7AF8_OFFSET UNITYSDK_OFFSET(0x11432B70)
#define CLASS_1_95F1424C154A1551__CTOR_OFFSET UNITYSDK_OFFSET(0x11432BC0)

inline static constexpr unsigned int Class_1_95F1424C154A1551_TypeDefinitionIndex = 52938;

class Class_1_95F1424C154A1551 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95F1424C154A1551__CTOR_OFFSET))(this);
	}

	::RPG::Client::IAvatarInfoProvider* Method_1_6C48DDE725FE7AF8(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_95F1424C154A1551_METHOD_1_6C48DDE725FE7AF8_OFFSET))(this, a1);
	}
};
