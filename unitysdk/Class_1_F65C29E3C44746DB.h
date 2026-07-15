#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F65C29E3C44746DB_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x140CDA30)
#define CLASS_1_F65C29E3C44746DB_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x140CD9E0)
#define CLASS_1_F65C29E3C44746DB__CTOR_OFFSET UNITYSDK_OFFSET(0x140CD9D0)

inline static constexpr unsigned int Class_1_F65C29E3C44746DB_TypeDefinitionIndex = 59331;

class Class_1_F65C29E3C44746DB : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* Field_1_0; // 0x10
	::RPG::GameCore::FloorCustomValueConfig* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::FloorCustomValueConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F65C29E3C44746DB__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65C29E3C44746DB_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65C29E3C44746DB_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
