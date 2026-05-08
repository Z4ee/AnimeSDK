#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UICTRLENUM_GET_CTRLID_OFFSET UNITYSDK_OFFSET(0x1517ADA0)
#define MOLEMOLE_UICTRLENUM_SET_CTRLID_OFFSET UNITYSDK_OFFSET(0x1517ACE0)
#define MOLEMOLE_UICTRLENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1517ACD0)

namespace MoleMole
{
	inline static constexpr unsigned int UICtrlEnum_TypeDefinitionIndex = 47837;

	class UICtrlEnum : public ::System::Object
	{
	public:
		::System::String* _ctrlName; // 0x10

		::System::Void _ctor(::Enum_3_81A3942BCC6E42B5 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_81A3942BCC6E42B5))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM__CTOR_OFFSET))(this, a1);
		}

		::Enum_3_81A3942BCC6E42B5 get_CtrlId()
		{
			return ((::Enum_3_81A3942BCC6E42B5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM_GET_CTRLID_OFFSET))(this);
		}

		::System::Void set_CtrlId(::Enum_3_81A3942BCC6E42B5 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_81A3942BCC6E42B5))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM_SET_CTRLID_OFFSET))(this, a1);
		}
	};
}
