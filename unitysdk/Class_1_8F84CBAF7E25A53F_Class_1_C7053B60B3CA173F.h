#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NewConfigUICommon; }
namespace System { class Action; }

#define CLASS_1_8F84CBAF7E25A53F_CLASS_1_C7053B60B3CA173F_METHOD_1_FD19510E37590296_OFFSET UNITYSDK_OFFSET(0x1508ACD0)
#define CLASS_1_8F84CBAF7E25A53F_CLASS_1_C7053B60B3CA173F__CTOR_OFFSET UNITYSDK_OFFSET(0x1508ACC0)

inline static constexpr unsigned int Class_1_8F84CBAF7E25A53F_Class_1_C7053B60B3CA173F_TypeDefinitionIndex = 81894;

class Class_1_8F84CBAF7E25A53F_Class_1_C7053B60B3CA173F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_CLASS_1_C7053B60B3CA173F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FD19510E37590296(::MoleMole::NewConfigUICommon* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NewConfigUICommon*))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_CLASS_1_C7053B60B3CA173F_METHOD_1_FD19510E37590296_OFFSET))(this, a1);
	}
};
