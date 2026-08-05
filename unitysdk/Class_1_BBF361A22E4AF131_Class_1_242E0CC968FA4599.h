#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardInteract; }
namespace System { class Action; }

#define CLASS_1_BBF361A22E4AF131_CLASS_1_242E0CC968FA4599_METHOD_1_161161E78F380E33_OFFSET UNITYSDK_OFFSET(0x18C40950)
#define CLASS_1_BBF361A22E4AF131_CLASS_1_242E0CC968FA4599__CTOR_OFFSET UNITYSDK_OFFSET(0x18C408E0)

inline static constexpr unsigned int Class_1_BBF361A22E4AF131_Class_1_242E0CC968FA4599_TypeDefinitionIndex = 78622;

class Class_1_BBF361A22E4AF131_Class_1_242E0CC968FA4599 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBF361A22E4AF131_CLASS_1_242E0CC968FA4599__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_161161E78F380E33(::MoleMole::Config::ConfigHollowChessboardInteract* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardInteract*))((::PBYTE)hIl2Cpp + CLASS_1_BBF361A22E4AF131_CLASS_1_242E0CC968FA4599_METHOD_1_161161E78F380E33_OFFSET))(this, a1);
	}
};
