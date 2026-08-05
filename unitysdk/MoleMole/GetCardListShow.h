#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GETCARDLISTSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x129A75A0)
#define MOLEMOLE_GETCARDLISTSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x129A75F0)
#define MOLEMOLE_GETCARDLISTSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x129A75B0)

namespace MoleMole
{
	inline static constexpr unsigned int GetCardListShow_TypeDefinitionIndex = 42410;

	class GetCardListShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items; // 0x28

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* itemDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETCARDLISTSHOW__CTOR_OFFSET))(this, itemDatas);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETCARDLISTSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETCARDLISTSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
