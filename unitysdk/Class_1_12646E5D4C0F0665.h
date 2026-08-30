#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinDeckRecommendTiming.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_12646E5D4C0F0665_METHOD_1_5A9446C22EB45706_OFFSET UNITYSDK_OFFSET(0x1CECB200)
#define CLASS_1_12646E5D4C0F0665__CTOR_OFFSET UNITYSDK_OFFSET(0x1CECB3F0)

inline static constexpr unsigned int Class_1_12646E5D4C0F0665_TypeDefinitionIndex = 11533;

class Class_1_12646E5D4C0F0665 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* OFIGPIFELHJ; // 0x10
	::Il2CppArray<::System::UInt32>* NJBEMAEAEIL; // 0x18
	::RPG::GameCore::FateRinDeckRecommendTiming JGAKLKBOPEG; // 0x20
	::RPG::GameCore::FateRinHouguOwnerType LOALOLNACOA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12646E5D4C0F0665__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5A9446C22EB45706(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_12646E5D4C0F0665*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_12646E5D4C0F0665*&))((::PBYTE)hIl2Cpp + CLASS_1_12646E5D4C0F0665_METHOD_1_5A9446C22EB45706_OFFSET))(a1, a2);
	}
};
