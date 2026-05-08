#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_524;
class Class_1_D65512A83CF70AB7;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define MOLEMOLE_UIMAINCITYCHATPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x163CAF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayContext_TypeDefinitionIndex = 55011;

	class UIMainCityChatPlayContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* ParticipatorMap; // 0x28
		::System::Action_1<::Class_1_D65512A83CF70AB7*>* callback; // 0x30
		::System::Action_1<::Class_1_D65512A83CF70AB7*>* onUICloseCallback; // 0x38
		::Class_0_16E4307DCC419505_524* CameraHandler; // 0x40
		::System::String* replaceTextMapTD; // 0x48
		::System::Int32 id; // 0x50
		::System::Boolean ManualStart; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
