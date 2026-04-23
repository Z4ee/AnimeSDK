#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ModifyDamageDisplayData; }
namespace System { class String; }

#define CLASS_1_BB2DEB5D4328603D_METHOD_1_C736B8250CEA3429_OFFSET UNITYSDK_OFFSET(0x12A98460)
#define CLASS_1_BB2DEB5D4328603D__CTOR_OFFSET UNITYSDK_OFFSET(0x12A98590)

inline static constexpr unsigned int Class_1_BB2DEB5D4328603D_TypeDefinitionIndex = 50204;

class Class_1_BB2DEB5D4328603D : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::RPG::Client::TextID Field_1_2; // 0x18
	::System::Single Field_1_1; // 0x28
	::System::Single Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB2DEB5D4328603D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C736B8250CEA3429(::RPG::GameCore::ModifyDamageDisplayData*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifyDamageDisplayData*&))((::PBYTE)hIl2Cpp + CLASS_1_BB2DEB5D4328603D_METHOD_1_C736B8250CEA3429_OFFSET))(this, a1);
	}
};
