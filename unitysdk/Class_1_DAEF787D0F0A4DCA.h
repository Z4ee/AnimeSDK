#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0974AE3A8361F22E;
class Class_1_FE36FFEA87DC93BA;
namespace System { class Action; }

#define CLASS_1_DAEF787D0F0A4DCA_METHOD_1_0A042327BBD71029_OFFSET UNITYSDK_OFFSET(0x14A5FF10)
#define CLASS_1_DAEF787D0F0A4DCA_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x14A60120)
#define CLASS_1_DAEF787D0F0A4DCA_METHOD_1_42927762A7D26079_OFFSET UNITYSDK_OFFSET(0x14A5FB60)
#define CLASS_1_DAEF787D0F0A4DCA__CTOR_OFFSET UNITYSDK_OFFSET(0x14A60070)

inline static constexpr unsigned int Class_1_DAEF787D0F0A4DCA_TypeDefinitionIndex = 44152;

class Class_1_DAEF787D0F0A4DCA : public ::System::Object
{
public:
	::Class_1_0974AE3A8361F22E* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAEF787D0F0A4DCA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_42927762A7D26079(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DAEF787D0F0A4DCA_METHOD_1_42927762A7D26079_OFFSET))(this, a1);
	}

	::Class_1_0974AE3A8361F22E* Method_1_24748FC20F375725()
	{
		return ((::Class_1_0974AE3A8361F22E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAEF787D0F0A4DCA_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_0A042327BBD71029(::Class_1_FE36FFEA87DC93BA* a1, ::Class_1_0974AE3A8361F22E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE36FFEA87DC93BA*, ::Class_1_0974AE3A8361F22E*))((::PBYTE)hIl2Cpp + CLASS_1_DAEF787D0F0A4DCA_METHOD_1_0A042327BBD71029_OFFSET))(this, a1, a2);
	}
};
