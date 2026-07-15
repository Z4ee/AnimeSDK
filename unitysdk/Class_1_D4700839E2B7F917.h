#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_276321B6B122C69C_4.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicScepterDataItem; }

#define CLASS_1_D4700839E2B7F917_METHOD_1_4CC205CE1D6385B6_OFFSET UNITYSDK_OFFSET(0x15F31E40)
#define CLASS_1_D4700839E2B7F917_METHOD_1_BF427EFFAD6F483A_OFFSET UNITYSDK_OFFSET(0x15F31DA0)
#define CLASS_1_D4700839E2B7F917__CTOR_OFFSET UNITYSDK_OFFSET(0x15F31D90)

inline static constexpr unsigned int Class_1_D4700839E2B7F917_TypeDefinitionIndex = 64252;

class Class_1_D4700839E2B7F917 : public ::System::Object
{
public:
	::RPG::Client::RogueMagicScepterDataItem* Field_1_0; // 0x10
	::Struct_2_276321B6B122C69C_4 Field_1_1; // 0x18

	::System::Void _ctor(::Struct_2_276321B6B122C69C_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_276321B6B122C69C_4))((::PBYTE)hIl2Cpp + CLASS_1_D4700839E2B7F917__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_BF427EFFAD6F483A()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4700839E2B7F917_METHOD_1_BF427EFFAD6F483A_OFFSET))(this);
	}

	::RPG::Client::RogueMagicScepterDataItem* Method_1_4CC205CE1D6385B6()
	{
		return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4700839E2B7F917_METHOD_1_4CC205CE1D6385B6_OFFSET))(this);
	}
};
