#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUISound; }
namespace System { class Action; }

#define CLASS_1_0669FA8E7DDEB6AA_CLASS_1_5593D3B41110D4FD_METHOD_1_CC7BCB3F953367A7_OFFSET UNITYSDK_OFFSET(0x17519EE0)
#define CLASS_1_0669FA8E7DDEB6AA_CLASS_1_5593D3B41110D4FD__CTOR_OFFSET UNITYSDK_OFFSET(0x17519ED0)

inline static constexpr unsigned int Class_1_0669FA8E7DDEB6AA_Class_1_5593D3B41110D4FD_TypeDefinitionIndex = 56974;

class Class_1_0669FA8E7DDEB6AA_Class_1_5593D3B41110D4FD : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0669FA8E7DDEB6AA_CLASS_1_5593D3B41110D4FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CC7BCB3F953367A7(::MoleMole::ConfigUISound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUISound*))((::PBYTE)hIl2Cpp + CLASS_1_0669FA8E7DDEB6AA_CLASS_1_5593D3B41110D4FD_METHOD_1_CC7BCB3F953367A7_OFFSET))(this, a1);
	}
};
