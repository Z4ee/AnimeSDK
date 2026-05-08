#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_COMMONNEWBIEDISPLAYMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x17D0F770)
#define MOLEMOLE_COMMONNEWBIEDISPLAYMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x17D0F780)
#define MOLEMOLE_COMMONNEWBIEDISPLAYMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0F720)

namespace MoleMole
{
	inline static constexpr unsigned int CommonNewbieDisplayMessage_TypeDefinitionIndex = 51676;

	class CommonNewbieDisplayMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Func_1<::System::Boolean>* m_processCondition; // 0x28
		::System::Int32 m_id; // 0x30

		::System::Void _ctor(::System::Int32 mID, ::Enum_3_205B03D40B9BD873 page, ::System::Func_1<::System::Boolean>* processCondition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_205B03D40B9BD873, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONNEWBIEDISPLAYMESSAGE__CTOR_OFFSET))(this, mID, page, processCondition);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONNEWBIEDISPLAYMESSAGE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONNEWBIEDISPLAYMESSAGE_ONPROCESS_OFFSET))(this);
		}
	};
}
