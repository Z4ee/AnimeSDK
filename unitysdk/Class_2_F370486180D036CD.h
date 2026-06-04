#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F370486180D036CD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x134F2D90)
#define CLASS_2_F370486180D036CD__CTOR_OFFSET UNITYSDK_OFFSET(0x134F2D10)
#define CLASS_2_F370486180D036CD___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x134F3180)

inline static constexpr unsigned int Class_2_F370486180D036CD_TypeDefinitionIndex = 70229;

class Class_2_F370486180D036CD : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x28

	::System::Void _ctor(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_2_F370486180D036CD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F370486180D036CD_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F370486180D036CD___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
