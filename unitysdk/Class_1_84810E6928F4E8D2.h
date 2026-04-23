#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class AnchorInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_84810E6928F4E8D2_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xB00E7E0)
#define CLASS_1_84810E6928F4E8D2_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB00E270)
#define CLASS_1_84810E6928F4E8D2_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0xB00E570)
#define CLASS_1_84810E6928F4E8D2_METHOD_1_7244B72D2B0B3D10_OFFSET UNITYSDK_OFFSET(0xB00E440)
#define CLASS_1_84810E6928F4E8D2_METHOD_1_A424F98CD0840362_OFFSET UNITYSDK_OFFSET(0xB00E690)
#define CLASS_1_84810E6928F4E8D2_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0xB00E2D0)
#define CLASS_1_84810E6928F4E8D2__CTOR_OFFSET UNITYSDK_OFFSET(0xB00F0C0)

inline static constexpr unsigned int Class_1_84810E6928F4E8D2_TypeDefinitionIndex = 68079;

class Class_1_84810E6928F4E8D2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::RPG::GameCore::AnchorInfo* Field_1_1; // 0x20
	::System::Action* Field_1_8; // 0x28
	::UnityEngine::Vector3 Field_1_5; // 0x30
	::UnityEngine::Vector3 Field_1_6; // 0x3C
	::System::Single Field_1_3; // 0x48
	::UnityEngine::Vector3 Field_1_7; // 0x4C
	::System::Single Field_1_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84810E6928F4E8D2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84810E6928F4E8D2_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84810E6928F4E8D2_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_1_7244B72D2B0B3D10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84810E6928F4E8D2_METHOD_1_7244B72D2B0B3D10_OFFSET))(this);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84810E6928F4E8D2_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Void Method_1_A424F98CD0840362(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_84810E6928F4E8D2_METHOD_1_A424F98CD0840362_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84810E6928F4E8D2_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}
};
