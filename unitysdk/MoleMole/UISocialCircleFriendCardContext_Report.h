#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISocialCircleFriendCardContext.h"

class Class_1_B96586FA1613D67F;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISOCIALCIRCLEFRIENDCARDCONTEXT_REPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x12E7E440)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleFriendCardContext_Report_TypeDefinitionIndex = 56991;

	class UISocialCircleFriendCardContext_Report : public ::MoleMole::UISocialCircleFriendCardContext
	{
	public:
		::Class_1_B96586FA1613D67F* ReportData; // 0x70
		::System::Func_2<::System::Int32, ::System::Boolean>* OnClickCheckMark; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEFRIENDCARDCONTEXT_REPORT__CTOR_OFFSET))(this);
		}
	};
}
