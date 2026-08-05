#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F5EF0A4754477DAE.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_769471637ABAF003;
namespace System { template <typename T> class Func_1; }

#define CLASS_3_299A633EB91E3B90_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE98A4D0)
#define CLASS_3_299A633EB91E3B90_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE98A480)
#define CLASS_3_299A633EB91E3B90__CTOR_OFFSET UNITYSDK_OFFSET(0xE98A470)

inline static constexpr unsigned int Class_3_299A633EB91E3B90_TypeDefinitionIndex = 53145;

class Class_3_299A633EB91E3B90 : public ::Class_2_F5EF0A4754477DAE
{
public:
	::System::Void _ctor(::Class_1_769471637ABAF003* a1, ::System::Func_1<::System::Boolean>* a2, ::System::Threading::CancellationToken a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_769471637ABAF003*, ::System::Func_1<::System::Boolean>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_299A633EB91E3B90__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_299A633EB91E3B90_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_299A633EB91E3B90_METHOD_3_9681042564541CD6_OFFSET))(this);
	}
};
