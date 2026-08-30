#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoBackDynamicControl; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_B49063F7086F3D85_METHOD_2_2B25B1DF8B7BED3F_OFFSET UNITYSDK_OFFSET(0xCCDDCC0)
#define CLASS_2_B49063F7086F3D85_METHOD_2_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0xCCDDD40)
#define CLASS_2_B49063F7086F3D85_METHOD_2_431B41F82025C3EE_OFFSET UNITYSDK_OFFSET(0xCCDF8D0)
#define CLASS_2_B49063F7086F3D85_METHOD_2_78539B7779C6A6EE_OFFSET UNITYSDK_OFFSET(0xCCDF860)
#define CLASS_2_B49063F7086F3D85_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0xCCDE700)
#define CLASS_2_B49063F7086F3D85_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCCDE6C0)
#define CLASS_2_B49063F7086F3D85__CTOR_OFFSET UNITYSDK_OFFSET(0xCCDF900)

inline static constexpr unsigned int Class_2_B49063F7086F3D85_TypeDefinitionIndex = 70331;

class Class_2_B49063F7086F3D85 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single ELJGNKPDIIA; // 0x18
	::System::Single EKCHCNIINGF; // 0x1C
	::System::Single KMNAGAEOEHM; // 0x20
	::System::Single PJILFGCDHLB; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49063F7086F3D85__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2B25B1DF8B7BED3F(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_B49063F7086F3D85_METHOD_2_2B25B1DF8B7BED3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49063F7086F3D85_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49063F7086F3D85_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49063F7086F3D85_METHOD_2_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Single Method_2_431B41F82025C3EE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49063F7086F3D85_METHOD_2_431B41F82025C3EE_OFFSET))(this);
	}

	::RPG::Client::MonoBackDynamicControl* Method_2_78539B7779C6A6EE()
	{
		return ((::RPG::Client::MonoBackDynamicControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49063F7086F3D85_METHOD_2_78539B7779C6A6EE_OFFSET))(this);
	}
};
