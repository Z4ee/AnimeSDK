#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace System { class Action; }

#define CLASS_1_57576DE974E76FDE_CLASS_1_7FBAE7B014AA74DC_METHOD_1_866D2E9A1E7245E9_OFFSET UNITYSDK_OFFSET(0xF96F6F0)
#define CLASS_1_57576DE974E76FDE_CLASS_1_7FBAE7B014AA74DC__CTOR_OFFSET UNITYSDK_OFFSET(0xF96F6E0)

inline static constexpr unsigned int Class_1_57576DE974E76FDE_Class_1_7FBAE7B014AA74DC_TypeDefinitionIndex = 79618;

class Class_1_57576DE974E76FDE_Class_1_7FBAE7B014AA74DC : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57576DE974E76FDE_CLASS_1_7FBAE7B014AA74DC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_866D2E9A1E7245E9(::MoleMole::Config::ConfigHollowChessboardCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardCamera*))((::PBYTE)hIl2Cpp + CLASS_1_57576DE974E76FDE_CLASS_1_7FBAE7B014AA74DC_METHOD_1_866D2E9A1E7245E9_OFFSET))(this, a1);
	}
};
