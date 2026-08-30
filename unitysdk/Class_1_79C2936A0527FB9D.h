#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_79C2936A0527FB9D_METHOD_1_975B9AC31CF05C24_OFFSET UNITYSDK_OFFSET(0x1C7565A0)
#define CLASS_1_79C2936A0527FB9D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7566D0)

inline static constexpr unsigned int Class_1_79C2936A0527FB9D_TypeDefinitionIndex = 11537;

class Class_1_79C2936A0527FB9D : public ::System::Object
{
public:
	::RPG::GameCore::FateRinHouguOwnerType PHFMCACHFIJ; // 0x10
	::System::UInt32 KFFNBKGCCKO; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79C2936A0527FB9D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_975B9AC31CF05C24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_79C2936A0527FB9D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_79C2936A0527FB9D*&))((::PBYTE)hIl2Cpp + CLASS_1_79C2936A0527FB9D_METHOD_1_975B9AC31CF05C24_OFFSET))(a1, a2);
	}
};
