#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_DF73794ED874FFFB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALTEXTITEMDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18816900)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTextItemDetailContext_TypeDefinitionIndex = 59708;

	class UIGeneralTextItemDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_DF73794ED874FFFB* graph; // 0x28
		::System::String* TipsKey; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* ItemConfigIdList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTEXTITEMDETAILCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
