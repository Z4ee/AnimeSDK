#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFORGEUPDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8C5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIForgeUPDetailContext_TypeDefinitionIndex = 60603;

	class UIForgeUPDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Il2CppArray<::System::Int32>* upItemIds; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Int32>* upItemIds)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORGEUPDETAILCONTEXT__CTOR_OFFSET))(this, upItemIds);
		}
	};
}
