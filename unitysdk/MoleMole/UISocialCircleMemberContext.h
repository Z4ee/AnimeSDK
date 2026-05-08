#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_DF2C726EEEEC912D;

#define MOLEMOLE_UISOCIALCIRCLEMEMBERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x154F6610)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMemberContext_TypeDefinitionIndex = 44283;

	class UISocialCircleMemberContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_DF2C726EEEEC912D* CircleData; // 0x28
		::System::Int32 TabIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
