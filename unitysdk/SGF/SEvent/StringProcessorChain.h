#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/DelegateChain_2.h"

namespace System { class Delegate; }
namespace System { class String; }

#define SGF_SEVENT_STRINGPROCESSORCHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CF090)

namespace SGF::SEvent
{
	inline static constexpr unsigned int StringProcessorChain_TypeDefinitionIndex = 7902;

	class StringProcessorChain : public ::SGF::SEvent::DelegateChain_2<::System::Delegate*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_STRINGPROCESSORCHAIN__CTOR_OFFSET))(this);
		}
	};
}
