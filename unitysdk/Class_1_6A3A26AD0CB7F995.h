#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_6A3A26AD0CB7F995_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x142FEA40)
#define CLASS_1_6A3A26AD0CB7F995__CTOR_OFFSET UNITYSDK_OFFSET(0x142FEA90)

inline static constexpr unsigned int Class_1_6A3A26AD0CB7F995_TypeDefinitionIndex = 68714;

class Class_1_6A3A26AD0CB7F995 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_4; // 0x10
	::System::String* Field_1_7; // 0x18
	::MoleMole::Config::BaseProperty Field_1_0; // 0x20
	::System::Double Field_1_6; // 0x28
	::System::Double Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A3A26AD0CB7F995__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A3A26AD0CB7F995_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
