#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }

#define CLASS_1_9E90DD5344066353_CLASS_1_A17D49DC6BF19AC2_METHOD_1_7A79A23DAF10E10E_OFFSET UNITYSDK_OFFSET(0x128378B0)
#define CLASS_1_9E90DD5344066353_CLASS_1_A17D49DC6BF19AC2__CTOR_OFFSET UNITYSDK_OFFSET(0x128378A0)

inline static constexpr unsigned int Class_1_9E90DD5344066353_Class_1_A17D49DC6BF19AC2_TypeDefinitionIndex = 41936;

class Class_1_9E90DD5344066353_Class_1_A17D49DC6BF19AC2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E90DD5344066353_CLASS_1_A17D49DC6BF19AC2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7A79A23DAF10E10E(::MoleMole::Config::ConfigHollowChessboard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*))((::PBYTE)hIl2Cpp + CLASS_1_9E90DD5344066353_CLASS_1_A17D49DC6BF19AC2_METHOD_1_7A79A23DAF10E10E_OFFSET))(this, a1);
	}
};
