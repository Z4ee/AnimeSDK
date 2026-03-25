#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class String; }

#define CLASS_2_30A981797F9906E7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x115F92E0)
#define CLASS_2_30A981797F9906E7_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x115F9290)
#define CLASS_2_30A981797F9906E7__CTOR_OFFSET UNITYSDK_OFFSET(0x115F9360)

inline static constexpr unsigned int Class_2_30A981797F9906E7_TypeDefinitionIndex = 59675;

class Class_2_30A981797F9906E7 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::RPG::Client::LocalizedText* Field_2_1; // 0x18
	::RPG::Client::LocalizedText* Field_2_0; // 0x20

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
