#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_764E1B6CF57736C9;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_764E1B6CF57736C9_CLASS_1_062D8E2FFBB13A63_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15E1FC60)
#define CLASS_3_764E1B6CF57736C9_CLASS_1_062D8E2FFBB13A63_METHOD_1_E9FE0359249D252A_OFFSET UNITYSDK_OFFSET(0x15E1FBF0)
#define CLASS_3_764E1B6CF57736C9_CLASS_1_062D8E2FFBB13A63__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1FBE0)

inline static constexpr unsigned int Class_3_764E1B6CF57736C9_Class_1_062D8E2FFBB13A63_TypeDefinitionIndex = 81946;

class Class_3_764E1B6CF57736C9_Class_1_062D8E2FFBB13A63 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::IVideoPlayer*>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::Class_3_764E1B6CF57736C9* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_764E1B6CF57736C9_CLASS_1_062D8E2FFBB13A63__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9FE0359249D252A(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_3_764E1B6CF57736C9_CLASS_1_062D8E2FFBB13A63_METHOD_1_E9FE0359249D252A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_764E1B6CF57736C9_CLASS_1_062D8E2FFBB13A63_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
