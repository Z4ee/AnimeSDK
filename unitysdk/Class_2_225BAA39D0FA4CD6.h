#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace RPG::Client { class LocalizedTextSDF; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_225BAA39D0FA4CD6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17AA3240)
#define CLASS_2_225BAA39D0FA4CD6_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x17AA31F0)
#define CLASS_2_225BAA39D0FA4CD6__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA32B0)

inline static constexpr unsigned int Class_2_225BAA39D0FA4CD6_TypeDefinitionIndex = 73008;

class Class_2_225BAA39D0FA4CD6 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::Image* FPADKHELMCF; // 0x18
	::RPG::Client::LocalizedTextSDF* KBEPAIAFLHL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_225BAA39D0FA4CD6__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_225BAA39D0FA4CD6_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_225BAA39D0FA4CD6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
