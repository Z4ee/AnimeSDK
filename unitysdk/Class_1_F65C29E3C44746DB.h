#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F65C29E3C44746DB_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x11BCEE30)
#define CLASS_1_F65C29E3C44746DB_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x11BCEE10)
#define CLASS_1_F65C29E3C44746DB__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCEE00)

inline static constexpr unsigned int Class_1_F65C29E3C44746DB_TypeDefinitionIndex = 57275;

class Class_1_F65C29E3C44746DB : public ::System::Object
{
public:
	::RPG::GameCore::FloorCustomValueConfig* Field_1_1; // 0x10
	::System::Action_1<::System::String*>* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::FloorCustomValueConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F65C29E3C44746DB__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65C29E3C44746DB_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65C29E3C44746DB_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
