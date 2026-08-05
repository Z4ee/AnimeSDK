#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_733;
class Class_2_CEC585D0736F3660;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define MOLEMOLE_UIMAINCITYCHATPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x191399C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayContext_TypeDefinitionIndex = 74137;

	class UIMainCityChatPlayContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::Class_2_CEC585D0736F3660*>* onUICloseCallback; // 0x28
		::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* ParticipatorMap; // 0x30
		::Class_0_16E4307DCC419505_733* CameraHandler; // 0x38
		::System::String* replaceTextMapTD; // 0x40
		::System::Action_1<::Class_2_CEC585D0736F3660*>* callback; // 0x48
		::System::Int32 id; // 0x50
		::System::Boolean ManualStart; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
