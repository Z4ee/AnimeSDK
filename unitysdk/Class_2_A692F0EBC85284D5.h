#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace RPG::Client { class MonoAboveSwitch; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_A692F0EBC85284D5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1192F080)
#define CLASS_2_A692F0EBC85284D5_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1192F030)
#define CLASS_2_A692F0EBC85284D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1192F100)

inline static constexpr unsigned int Class_2_A692F0EBC85284D5_TypeDefinitionIndex = 67311;

class Class_2_A692F0EBC85284D5 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::RPG::Client::MonoAboveSwitch* Field_2_1; // 0x18
	::UnityEngine::UI::Image* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A692F0EBC85284D5__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A692F0EBC85284D5_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A692F0EBC85284D5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
