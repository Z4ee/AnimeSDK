#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_6313984181A582D7_2;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_8C608625ABC8C4FA_4_GETLITTLEGAMECONFIGMATCHER_OFFSET UNITYSDK_OFFSET(0x17C0E3E0)
#define CLASS_2_8C608625ABC8C4FA_4_GETPREDICATEMATCHER_OFFSET UNITYSDK_OFFSET(0x17C0E4A0)
#define CLASS_2_8C608625ABC8C4FA_4_GETREPLICATEDMATCHER_OFFSET UNITYSDK_OFFSET(0x17C0E560)
#define CLASS_2_8C608625ABC8C4FA_4_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x17C0E620)
#define CLASS_2_8C608625ABC8C4FA_4__CTOR_OFFSET UNITYSDK_OFFSET(0x17C097B0)

inline static constexpr unsigned int Class_2_8C608625ABC8C4FA_4_TypeDefinitionIndex = 34526;

class Class_2_8C608625ABC8C4FA_4 : public ::Entitas::Context_1<::Class_2_6313984181A582D7_2*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_4__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_6313984181A582D7_2*>* GetLittleGameConfigMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_6313984181A582D7_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_4_GETLITTLEGAMECONFIGMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_6313984181A582D7_2*>* GetPredicateMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_6313984181A582D7_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_4_GETPREDICATEMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_6313984181A582D7_2*>* GetReplicatedMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_6313984181A582D7_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_4_GETREPLICATEDMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_6313984181A582D7_2*>* GetTransformMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_6313984181A582D7_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_4_GETTRANSFORMMATCHER_OFFSET))(this);
	}
};
