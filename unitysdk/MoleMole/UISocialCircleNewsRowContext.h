#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_27DB1968BCF5D736;
class Class_2_CAF7806674A7A8B7;

#define MOLEMOLE_UISOCIALCIRCLENEWSROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x154F6A80)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleNewsRowContext_TypeDefinitionIndex = 78722;

	class UISocialCircleNewsRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_CAF7806674A7A8B7* NewsData; // 0x28
		::Class_2_27DB1968BCF5D736* LogData; // 0x30
		::System::Int32 Day; // 0x38
		::System::Boolean IsTimeTitle; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLENEWSROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
