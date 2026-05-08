#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_DF2C726EEEEC912D;

#define MOLEMOLE_UISOCIALCIRCLEINVITEROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152369E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleInviteRowContext_TypeDefinitionIndex = 48768;

	class UISocialCircleInviteRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_DF2C726EEEEC912D* CircleData; // 0x28
		::Class_1_BE6BF7909AD9D940* Info; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEINVITEROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
