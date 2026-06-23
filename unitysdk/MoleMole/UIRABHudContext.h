#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_2CC23FE9C9AEC1B7.h"

class Class_2_8CE3622A05CA8724;
namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UIRABHUDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F28130)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABHudContext_TypeDefinitionIndex = 54751;

	class UIRABHudContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_8CE3622A05CA8724* slot; // 0x28
		::Struct_2_2CC23FE9C9AEC1B7 hudData; // 0x30
		::UnityEngine::Canvas* root; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
