#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLineMap; }
namespace System { class Action; }

#define CLASS_1_2EF8DEBC271BC4FB_CLASS_1_805713A70248C085_METHOD_1_6D489A1D016F8150_OFFSET UNITYSDK_OFFSET(0x1226E180)
#define CLASS_1_2EF8DEBC271BC4FB_CLASS_1_805713A70248C085__CTOR_OFFSET UNITYSDK_OFFSET(0x1226E170)

inline static constexpr unsigned int Class_1_2EF8DEBC271BC4FB_Class_1_805713A70248C085_TypeDefinitionIndex = 70039;

class Class_1_2EF8DEBC271BC4FB_Class_1_805713A70248C085 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EF8DEBC271BC4FB_CLASS_1_805713A70248C085__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6D489A1D016F8150(::MoleMole::Config::ConfigZipLineMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZipLineMap*))((::PBYTE)hIl2Cpp + CLASS_1_2EF8DEBC271BC4FB_CLASS_1_805713A70248C085_METHOD_1_6D489A1D016F8150_OFFSET))(this, a1);
	}
};
