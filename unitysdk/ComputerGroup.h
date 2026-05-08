#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ScreenPlayData;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COMPUTERGROUP_GETSCREENDATA_OFFSET UNITYSDK_OFFSET(0x116C7010)
#define COMPUTERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x11703B50)

inline static constexpr unsigned int ComputerGroup_TypeDefinitionIndex = 65793;

class ComputerGroup : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ScreenPlayData*>* group; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPUTERGROUP__CTOR_OFFSET))(this);
	}

	::ScreenPlayData* GetScreenData(::System::Int32 id)
	{
		return ((::ScreenPlayData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COMPUTERGROUP_GETSCREENDATA_OFFSET))(this, id);
	}
};
