#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DB0329F2CC933CFA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x152474F0)
#define CLASS_2_DB0329F2CC933CFA__CTOR_OFFSET UNITYSDK_OFFSET(0x15247470)

inline static constexpr unsigned int Class_2_DB0329F2CC933CFA_TypeDefinitionIndex = 75059;

class Class_2_DB0329F2CC933CFA : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* CIPONGCFEJP; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* ODEIMPNDAEF; // 0x28

	::System::Void _ctor(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_2_DB0329F2CC933CFA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB0329F2CC933CFA_ONEXECUTE_OFFSET))(this);
	}
};
