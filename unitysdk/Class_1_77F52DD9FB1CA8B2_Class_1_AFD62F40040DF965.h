#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFixedCameraEntry; }
namespace System { class Action; }

#define CLASS_1_77F52DD9FB1CA8B2_CLASS_1_AFD62F40040DF965_METHOD_1_32C9EB80D87EBB1A_OFFSET UNITYSDK_OFFSET(0x12879380)
#define CLASS_1_77F52DD9FB1CA8B2_CLASS_1_AFD62F40040DF965__CTOR_OFFSET UNITYSDK_OFFSET(0x12879370)

inline static constexpr unsigned int Class_1_77F52DD9FB1CA8B2_Class_1_AFD62F40040DF965_TypeDefinitionIndex = 41273;

class Class_1_77F52DD9FB1CA8B2_Class_1_AFD62F40040DF965 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F52DD9FB1CA8B2_CLASS_1_AFD62F40040DF965__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_32C9EB80D87EBB1A(::MoleMole::Config::ConfigFixedCameraEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFixedCameraEntry*))((::PBYTE)hIl2Cpp + CLASS_1_77F52DD9FB1CA8B2_CLASS_1_AFD62F40040DF965_METHOD_1_32C9EB80D87EBB1A_OFFSET))(this, a1);
	}
};
