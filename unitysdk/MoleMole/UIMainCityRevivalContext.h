#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_CAE257BB30FFAD12;

#define MOLEMOLE_UIMAINCITYREVIVALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1483C850)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalContext_TypeDefinitionIndex = 57172;

	class UIMainCityRevivalContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_CAE257BB30FFAD12* progress; // 0x28
		::System::Int32 landID; // 0x30

		::System::Void _ctor(::System::Int32 landID, ::Class_3_CAE257BB30FFAD12* progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_CAE257BB30FFAD12*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALCONTEXT__CTOR_OFFSET))(this, landID, progress);
		}
	};
}
