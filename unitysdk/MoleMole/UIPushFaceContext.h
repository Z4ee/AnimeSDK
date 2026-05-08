#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_88C5C9263D5F0027;

#define MOLEMOLE_UIPUSHFACECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147E8360)

namespace MoleMole
{
	inline static constexpr unsigned int UIPushFaceContext_TypeDefinitionIndex = 60894;

	class UIPushFaceContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_88C5C9263D5F0027* pushFaceHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHFACECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
