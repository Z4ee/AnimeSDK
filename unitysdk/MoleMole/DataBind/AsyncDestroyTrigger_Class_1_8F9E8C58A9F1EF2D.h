#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::DataBind { class AsyncDestroyTrigger; }

#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_CLASS_1_8F9E8C58A9F1EF2D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D925940)
#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_CLASS_1_8F9E8C58A9F1EF2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D925840)

namespace MoleMole::DataBind
{
	inline static constexpr unsigned int AsyncDestroyTrigger_Class_1_8F9E8C58A9F1EF2D_TypeDefinitionIndex = 35253;

	class AsyncDestroyTrigger_Class_1_8F9E8C58A9F1EF2D : public ::System::Object
	{
	public:
		::MoleMole::DataBind::AsyncDestroyTrigger* Field_1_0; // 0x10

		::System::Void _ctor(::MoleMole::DataBind::AsyncDestroyTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::DataBind::AsyncDestroyTrigger*))((::PBYTE)hIl2Cpp + MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_CLASS_1_8F9E8C58A9F1EF2D__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_CLASS_1_8F9E8C58A9F1EF2D_MOVENEXT_OFFSET))(this);
		}
	};
}
