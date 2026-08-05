#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

class Class_3_48A3D3A34C52331D_29;
class Class_3_87492AF8E794E45E_27;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_2EDC66AEC0D0CD99_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xF245EB0)
#define CLASS_2_2EDC66AEC0D0CD99_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xF245C10)
#define CLASS_2_2EDC66AEC0D0CD99_METHOD_2_4F53C9E1A7ADAC7D_OFFSET UNITYSDK_OFFSET(0xF245FD0)
#define CLASS_2_2EDC66AEC0D0CD99_METHOD_2_56BFC37C65A3887F_OFFSET UNITYSDK_OFFSET(0xF245D10)
#define CLASS_2_2EDC66AEC0D0CD99_METHOD_2_BAAAFED74F736DC9_OFFSET UNITYSDK_OFFSET(0xF246E00)
#define CLASS_2_2EDC66AEC0D0CD99_ONSTART_OFFSET UNITYSDK_OFFSET(0xF245CC0)
#define CLASS_2_2EDC66AEC0D0CD99__CTOR_OFFSET UNITYSDK_OFFSET(0xF245D00)

inline static constexpr unsigned int Class_2_2EDC66AEC0D0CD99_TypeDefinitionIndex = 82933;

class Class_2_2EDC66AEC0D0CD99 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EDC66AEC0D0CD99__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EDC66AEC0D0CD99_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EDC66AEC0D0CD99_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_56BFC37C65A3887F(::System::Int32 a1, ::System::Action_1<::Class_3_48A3D3A34C52331D_29*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_3_48A3D3A34C52331D_29*>*))((::PBYTE)hIl2Cpp + CLASS_2_2EDC66AEC0D0CD99_METHOD_2_56BFC37C65A3887F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EDC66AEC0D0CD99_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_4F53C9E1A7ADAC7D(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_2EDC66AEC0D0CD99_METHOD_2_4F53C9E1A7ADAC7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BAAAFED74F736DC9(::Class_3_87492AF8E794E45E_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_87492AF8E794E45E_27*))((::PBYTE)hIl2Cpp + CLASS_2_2EDC66AEC0D0CD99_METHOD_2_BAAAFED74F736DC9_OFFSET))(this, a1);
	}
};
