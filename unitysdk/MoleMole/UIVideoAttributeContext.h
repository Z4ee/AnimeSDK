#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_474;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIVIDEOATTRIBUTECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x188B61A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoAttributeContext_TypeDefinitionIndex = 47584;

	class UIVideoAttributeContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::Class_2_208CC9941471731A_474*>* selectPropertyHandle; // 0x28
		::System::Int32 defaultSelectPropertyID; // 0x30
		::System::Int32 selectPosition; // 0x34
		::System::Int32 itemID; // 0x38
		::System::Int32 costNum; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
