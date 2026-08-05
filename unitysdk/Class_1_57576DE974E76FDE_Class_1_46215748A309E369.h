#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace System { class Action; }

#define CLASS_1_57576DE974E76FDE_CLASS_1_46215748A309E369_METHOD_1_AAB87AE24ADDECD0_OFFSET UNITYSDK_OFFSET(0x148E7B50)
#define CLASS_1_57576DE974E76FDE_CLASS_1_46215748A309E369__CTOR_OFFSET UNITYSDK_OFFSET(0x148E7B40)

inline static constexpr unsigned int Class_1_57576DE974E76FDE_Class_1_46215748A309E369_TypeDefinitionIndex = 72874;

class Class_1_57576DE974E76FDE_Class_1_46215748A309E369 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57576DE974E76FDE_CLASS_1_46215748A309E369__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AAB87AE24ADDECD0(::MoleMole::Config::ConfigHollowChessboardCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardCamera*))((::PBYTE)hIl2Cpp + CLASS_1_57576DE974E76FDE_CLASS_1_46215748A309E369_METHOD_1_AAB87AE24ADDECD0_OFFSET))(this, a1);
	}
};
