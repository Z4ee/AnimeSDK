#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_7F489DAFAFC6BD02;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GENERALCHALLENGEINFODIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1161CAC0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralChallengeInfoDialogContext_TypeDefinitionIndex = 64087;

	class GeneralChallengeInfoDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_7F489DAFAFC6BD02*>* CustomInfoData; // 0x28
		::System::String* CustomTitleKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALCHALLENGEINFODIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
