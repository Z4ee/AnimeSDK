#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace System { class String; }

#define SETENUMFLAG_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1CC50780)
#define SETENUMFLAG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1CC50820)
#define SETENUMFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC50AB0)

inline static constexpr unsigned int SetEnumFlag_TypeDefinitionIndex = 30895;

class SetEnumFlag : public ::NodeCanvas::Framework::ActionTask
{
public:
	::NodeCanvas::Framework::Internal::BBObjectParameter* Variable; // 0x60
	::NodeCanvas::Framework::Internal::BBObjectParameter* Flag; // 0x68
	::NodeCanvas::Framework::BBParameter_1<::System::Boolean>* Clear; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETENUMFLAG__CTOR_OFFSET))(this);
	}

	::System::String* get_info()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SETENUMFLAG_GET_INFO_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETENUMFLAG_ONEXECUTE_OFFSET))(this);
	}
};
