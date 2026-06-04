#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace RPG::Client { class LocalizedTextSDF; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_225BAA39D0FA4CD6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA6DA030)
#define CLASS_2_225BAA39D0FA4CD6_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA6D9FE0)
#define CLASS_2_225BAA39D0FA4CD6__CTOR_OFFSET UNITYSDK_OFFSET(0xA6DA0A0)

inline static constexpr unsigned int Class_2_225BAA39D0FA4CD6_TypeDefinitionIndex = 68261;

class Class_2_225BAA39D0FA4CD6 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::UnityEngine::UI::Image* Field_2_0; // 0x18
	::RPG::Client::LocalizedTextSDF* Field_2_1; // 0x20

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
