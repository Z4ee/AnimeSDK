#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441_2.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_5FBB235457C1293C;
class Class_1_BE6BF7909AD9D940;
class Class_2_6DA289675FB59393;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_REPORTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1385EB70)

namespace MoleMole
{
	inline static constexpr unsigned int ReportContext_TypeDefinitionIndex = 84582;

	class ReportContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_6DA289675FB59393* playerForumPostData; // 0x28
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_2>* extraReportTypes; // 0x30
		::Class_1_BE6BF7909AD9D940* info; // 0x38
		::Class_1_5FBB235457C1293C* photoWallNetworkData; // 0x40
		::System::Boolean isRealPlayer; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REPORTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
