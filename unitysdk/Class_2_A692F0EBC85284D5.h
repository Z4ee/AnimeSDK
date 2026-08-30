#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace RPG::Client { class MonoAboveSwitch; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_A692F0EBC85284D5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x172871F0)
#define CLASS_2_A692F0EBC85284D5_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x172871A0)
#define CLASS_2_A692F0EBC85284D5__CTOR_OFFSET UNITYSDK_OFFSET(0x17287270)

inline static constexpr unsigned int Class_2_A692F0EBC85284D5_TypeDefinitionIndex = 73010;

class Class_2_A692F0EBC85284D5 : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::Image* FPADKHELMCF; // 0x18
	::RPG::Client::MonoAboveSwitch* KFEAFKFADDM; // 0x20

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
