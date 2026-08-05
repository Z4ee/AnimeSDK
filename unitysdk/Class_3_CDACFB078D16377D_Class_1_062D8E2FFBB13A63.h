#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CDACFB078D16377D;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_CDACFB078D16377D_CLASS_1_062D8E2FFBB13A63_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16EA24B0)
#define CLASS_3_CDACFB078D16377D_CLASS_1_062D8E2FFBB13A63_METHOD_1_E9FE0359249D252A_OFFSET UNITYSDK_OFFSET(0x16EA2510)
#define CLASS_3_CDACFB078D16377D_CLASS_1_062D8E2FFBB13A63__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA24A0)

inline static constexpr unsigned int Class_3_CDACFB078D16377D_Class_1_062D8E2FFBB13A63_TypeDefinitionIndex = 55601;

class Class_3_CDACFB078D16377D_Class_1_062D8E2FFBB13A63 : public ::System::Object
{
public:
	::Class_3_CDACFB078D16377D* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::IVideoPlayer*>* Field_1_2; // 0x18
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDACFB078D16377D_CLASS_1_062D8E2FFBB13A63__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDACFB078D16377D_CLASS_1_062D8E2FFBB13A63_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_E9FE0359249D252A(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_3_CDACFB078D16377D_CLASS_1_062D8E2FFBB13A63_METHOD_1_E9FE0359249D252A_OFFSET))(this, a1);
	}
};
