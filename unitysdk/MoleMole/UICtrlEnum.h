#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UICTRLENUM_GET_CTRLID_OFFSET UNITYSDK_OFFSET(0x17618130)
#define MOLEMOLE_UICTRLENUM_SET_CTRLID_OFFSET UNITYSDK_OFFSET(0x17618070)
#define MOLEMOLE_UICTRLENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x17618060)

namespace MoleMole
{
	inline static constexpr unsigned int UICtrlEnum_TypeDefinitionIndex = 61732;

	class UICtrlEnum : public ::System::Object
	{
	public:
		::System::String* _ctrlName; // 0x10

		::System::Void _ctor(::Enum_3_7A4252233BCEB3A9 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7A4252233BCEB3A9))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM__CTOR_OFFSET))(this, a1);
		}

		::Enum_3_7A4252233BCEB3A9 get_CtrlId()
		{
			return ((::Enum_3_7A4252233BCEB3A9(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM_GET_CTRLID_OFFSET))(this);
		}

		::System::Void set_CtrlId(::Enum_3_7A4252233BCEB3A9 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7A4252233BCEB3A9))((::PBYTE)hIl2Cpp + MOLEMOLE_UICTRLENUM_SET_CTRLID_OFFSET))(this, a1);
		}
	};
}
