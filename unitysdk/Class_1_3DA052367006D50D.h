#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ExpeditionBattleBuff; }

#define CLASS_1_3DA052367006D50D_METHOD_1_7BE77B545ECCD192_OFFSET UNITYSDK_OFFSET(0x1705BD70)
#define CLASS_1_3DA052367006D50D__CTOR_OFFSET UNITYSDK_OFFSET(0x1705BF50)

inline static constexpr unsigned int Class_1_3DA052367006D50D_TypeDefinitionIndex = 63924;

class Class_1_3DA052367006D50D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA052367006D50D__CTOR_OFFSET))(this);
	}

	::RPG::Client::ExpeditionBattleBuff* Method_1_7BE77B545ECCD192(::System::UInt32 a1)
	{
		return ((::RPG::Client::ExpeditionBattleBuff*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3DA052367006D50D_METHOD_1_7BE77B545ECCD192_OFFSET))(this, a1);
	}
};
