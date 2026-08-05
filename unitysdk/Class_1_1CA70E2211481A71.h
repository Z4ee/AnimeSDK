#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

class Class_2_5C38134D4169B6E0;
class Class_3_E27FF972D6A12E8E_5;
namespace System { class EventArgs; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_1CA70E2211481A71_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F5B050)
#define CLASS_1_1CA70E2211481A71_METHOD_1_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0x10F5B360)
#define CLASS_1_1CA70E2211481A71_METHOD_1_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x10F5B2C0)
#define CLASS_1_1CA70E2211481A71_METHOD_1_8FC6DF53B079D6C5_OFFSET UNITYSDK_OFFSET(0x10F5B280)
#define CLASS_1_1CA70E2211481A71_METHOD_1_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x10F5BAC0)
#define CLASS_1_1CA70E2211481A71_METHOD_1_CC7B836A0122EB68_OFFSET UNITYSDK_OFFSET(0x10F5B780)
#define CLASS_1_1CA70E2211481A71_METHOD_1_FED3DFA8643F2D27_OFFSET UNITYSDK_OFFSET(0x10F5B310)
#define CLASS_1_1CA70E2211481A71__CTOR_OFFSET UNITYSDK_OFFSET(0x10F5A8C0)

inline static constexpr unsigned int Class_1_1CA70E2211481A71_TypeDefinitionIndex = 41598;

class Class_1_1CA70E2211481A71 : public ::System::Object
{
public:
	::Class_2_5C38134D4169B6E0* Field_1_7; // 0x10
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20
	::Foundation::ViewObject::GroupMemberIdentifier Field_1_3; // 0x24
	::System::Int32 Field_1_2; // 0x2C

	::System::Void _ctor(::Class_3_E27FF972D6A12E8E_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E27FF972D6A12E8E_5*))((::PBYTE)hIl2Cpp + CLASS_1_1CA70E2211481A71__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA70E2211481A71_DISPOSE_OFFSET))(this);
	}

	::System::UInt64 Method_1_8FC6DF53B079D6C5()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA70E2211481A71_METHOD_1_8FC6DF53B079D6C5_OFFSET))(this);
	}

	::System::Void Method_1_6B6AE2B3E1C3264F(::Class_3_E27FF972D6A12E8E_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E27FF972D6A12E8E_5*))((::PBYTE)hIl2Cpp + CLASS_1_1CA70E2211481A71_METHOD_1_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Void Method_1_FED3DFA8643F2D27(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_1CA70E2211481A71_METHOD_1_FED3DFA8643F2D27_OFFSET))(this, a1);
	}

	::System::Void Method_1_00DC6C482249EA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA70E2211481A71_METHOD_1_00DC6C482249EA10_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_CC7B836A0122EB68()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA70E2211481A71_METHOD_1_CC7B836A0122EB68_OFFSET))(this);
	}

	::System::Void Method_1_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA70E2211481A71_METHOD_1_9DE87B16AD0A605E_OFFSET))(this);
	}
};
