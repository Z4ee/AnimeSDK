#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace System { class String; }

#define CHECKENUMFLAG_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EB6A630)
#define CHECKENUMFLAG_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EB6A6A0)
#define CHECKENUMFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6A790)

inline static constexpr unsigned int CheckEnumFlag_TypeDefinitionIndex = 31345;

class CheckEnumFlag : public ::NodeCanvas::Framework::ConditionTask
{
public:
	::NodeCanvas::Framework::Internal::BBObjectParameter* Flag; // 0x60
	::NodeCanvas::Framework::Internal::BBObjectParameter* Variable; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHECKENUMFLAG__CTOR_OFFSET))(this);
	}

	::System::String* get_info()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHECKENUMFLAG_GET_INFO_OFFSET))(this);
	}

	::System::Boolean OnCheck()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHECKENUMFLAG_ONCHECK_OFFSET))(this);
	}
};
