#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5B4E40DAD70EEBA6_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1676CA90)
#define CLASS_2_5B4E40DAD70EEBA6__CTOR_OFFSET UNITYSDK_OFFSET(0x1676CA10)

inline static constexpr unsigned int Class_2_5B4E40DAD70EEBA6_TypeDefinitionIndex = 71752;

class Class_2_5B4E40DAD70EEBA6 : public ::Class_1_3713064DEE761936
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x20
	::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* Field_2_1; // 0x28

	::System::Void _ctor(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_2_5B4E40DAD70EEBA6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B4E40DAD70EEBA6_ONEXECUTE_OFFSET))(this);
	}
};
