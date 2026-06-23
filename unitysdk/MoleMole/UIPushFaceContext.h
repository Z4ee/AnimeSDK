#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_9F1BE78E0D1155F7;

#define MOLEMOLE_UIPUSHFACECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17177ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPushFaceContext_TypeDefinitionIndex = 43211;

	class UIPushFaceContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_9F1BE78E0D1155F7* pushFaceHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHFACECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
