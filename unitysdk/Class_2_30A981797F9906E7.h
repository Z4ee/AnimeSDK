#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class String; }

#define CLASS_2_30A981797F9906E7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBB92410)
#define CLASS_2_30A981797F9906E7_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xBB923C0)
#define CLASS_2_30A981797F9906E7__CTOR_OFFSET UNITYSDK_OFFSET(0xBB92490)

inline static constexpr unsigned int Class_2_30A981797F9906E7_TypeDefinitionIndex = 72728;

class Class_2_30A981797F9906E7 : public ::Class_1_A167209E71412818
{
public:
	::RPG::Client::LocalizedText* KEGANNHEKHA; // 0x18
	::RPG::Client::LocalizedText* MNOHILEHCNB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30A981797F9906E7__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30A981797F9906E7_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30A981797F9906E7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
