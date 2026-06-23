#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_3056A65E74601914;
class Class_1_BE6BF7909AD9D940;
class Class_2_75B55FBF5B9BC90B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_REPORTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDF4C0)

namespace MoleMole
{
	inline static constexpr unsigned int ReportContext_TypeDefinitionIndex = 80328;

	class ReportContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_75B55FBF5B9BC90B* playerForumPostData; // 0x28
		::Class_1_BE6BF7909AD9D940* info; // 0x30
		::Class_1_3056A65E74601914* photoWallNetworkData; // 0x38
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* extraReportTypes; // 0x40
		::System::Boolean isRealPlayer; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REPORTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
