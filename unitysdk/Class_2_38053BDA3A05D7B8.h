#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BoomerangProjectileData; }

#define CLASS_2_38053BDA3A05D7B8_METHOD_2_49AA86D9F19FB057_OFFSET UNITYSDK_OFFSET(0xBEA0FA0)
#define CLASS_2_38053BDA3A05D7B8_METHOD_2_5B35ABB5DACF382C_OFFSET UNITYSDK_OFFSET(0xBEA10E0)
#define CLASS_2_38053BDA3A05D7B8_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xBEA0DC0)
#define CLASS_2_38053BDA3A05D7B8_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xBEA1710)
#define CLASS_2_38053BDA3A05D7B8__CTOR_OFFSET UNITYSDK_OFFSET(0xBEA0BC0)

inline static constexpr unsigned int Class_2_38053BDA3A05D7B8_TypeDefinitionIndex = 54946;

class Class_2_38053BDA3A05D7B8 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::BoomerangProjectileData* FPGPHIEOMFL; // 0x48
	::System::Single OFBOHEOLCCE; // 0x50
	::UnityEngine::Vector3 OOECFAKCPIL; // 0x54
	::System::Single HKNNPAFJAAO; // 0x60

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_38053BDA3A05D7B8__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38053BDA3A05D7B8_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Void Method_2_49AA86D9F19FB057(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_38053BDA3A05D7B8_METHOD_2_49AA86D9F19FB057_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B35ABB5DACF382C(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_38053BDA3A05D7B8_METHOD_2_5B35ABB5DACF382C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38053BDA3A05D7B8_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}
};
