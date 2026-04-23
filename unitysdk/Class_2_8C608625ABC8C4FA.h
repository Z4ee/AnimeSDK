#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_2_6313984181A582D7;
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_2_8C608625ABC8C4FA_GETLITTLEGAMECONFIGMATCHER_OFFSET UNITYSDK_OFFSET(0x17C6E5F0)
#define CLASS_2_8C608625ABC8C4FA_GETREPLICATEDMATCHER_OFFSET UNITYSDK_OFFSET(0x17C6E800)
#define CLASS_2_8C608625ABC8C4FA_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x17C6E8C0)
#define CLASS_2_8C608625ABC8C4FA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C6E980)

inline static constexpr unsigned int Class_2_8C608625ABC8C4FA_TypeDefinitionIndex = 34528;

class Class_2_8C608625ABC8C4FA : public ::Entitas::Context_1<::Class_2_6313984181A582D7*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_6313984181A582D7*>* GetLittleGameConfigMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_6313984181A582D7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_GETLITTLEGAMECONFIGMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_6313984181A582D7*>* GetReplicatedMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_6313984181A582D7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_GETREPLICATEDMATCHER_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_6313984181A582D7*>* GetTransformMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_6313984181A582D7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_GETTRANSFORMMATCHER_OFFSET))(this);
	}
};
