#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x122DE970)

namespace MoleMole
{
	inline static constexpr unsigned int UrbanMapBangkovScrollViewContext_TypeDefinitionIndex = 58140;

	class UrbanMapBangkovScrollViewContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_3<::System::Boolean, ::System::Boolean, ::System::Action_2<::System::Boolean, ::System::Boolean>*>* OnSetExpand; // 0x28
		::System::Boolean DefaultExpand; // 0x30
		::System::Boolean EnableExpand; // 0x31
		::System::Int32 InitIndex; // 0x34
		::System::Single OtherHeight; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
