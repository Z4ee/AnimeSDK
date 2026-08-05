#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_2CC23FE9C9AEC1B7.h"

class Class_2_742C838C9195275D;
namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UIRABHUDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF1A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABHudContext_TypeDefinitionIndex = 48519;

	class UIRABHudContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_2CC23FE9C9AEC1B7 hudData; // 0x28
		::Class_2_742C838C9195275D* slot; // 0x48
		::UnityEngine::Canvas* root; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
