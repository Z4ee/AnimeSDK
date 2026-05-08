#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_8459E51EACDDD3EF;
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_1_3DF236F531F5694C;

#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW03CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1275F280)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftTastListRow03Context_TypeDefinitionIndex = 46532;

	class UIUrbanMapLeftTastListRow03Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_3DF236F531F5694C<::Class_1_8459E51EACDDD3EF*>* CollectDatas; // 0x28
		::System::Action_1<::MoleMole::UIUrbanMapLeftTastListRow03Context*>* OnClick; // 0x30
		::System::Int32 MapAreaId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW03CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
