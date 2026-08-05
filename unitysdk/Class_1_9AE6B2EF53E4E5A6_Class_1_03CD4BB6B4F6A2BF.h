#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelGlobalCounterstrokeConfig; }
namespace System { class Action; }

#define CLASS_1_9AE6B2EF53E4E5A6_CLASS_1_03CD4BB6B4F6A2BF_METHOD_1_4C2F6CDF358A02D1_OFFSET UNITYSDK_OFFSET(0x11FC5490)
#define CLASS_1_9AE6B2EF53E4E5A6_CLASS_1_03CD4BB6B4F6A2BF__CTOR_OFFSET UNITYSDK_OFFSET(0x11FC5390)

inline static constexpr unsigned int Class_1_9AE6B2EF53E4E5A6_Class_1_03CD4BB6B4F6A2BF_TypeDefinitionIndex = 51399;

class Class_1_9AE6B2EF53E4E5A6_Class_1_03CD4BB6B4F6A2BF : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AE6B2EF53E4E5A6_CLASS_1_03CD4BB6B4F6A2BF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4C2F6CDF358A02D1(::MoleMole::Config::LevelGlobalCounterstrokeConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelGlobalCounterstrokeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9AE6B2EF53E4E5A6_CLASS_1_03CD4BB6B4F6A2BF_METHOD_1_4C2F6CDF358A02D1_OFFSET))(this, a1);
	}
};
