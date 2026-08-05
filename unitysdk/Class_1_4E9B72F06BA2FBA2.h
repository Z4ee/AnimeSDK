#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/System/Object.h"

class Class_1_2A3859B4230FECE9;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define CLASS_1_4E9B72F06BA2FBA2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x171A80C0)
#define CLASS_1_4E9B72F06BA2FBA2_METHOD_1_04DC58A6E3312864_OFFSET UNITYSDK_OFFSET(0x171A8070)
#define CLASS_1_4E9B72F06BA2FBA2_METHOD_1_381774D493239BC8_OFFSET UNITYSDK_OFFSET(0x171A7DA0)
#define CLASS_1_4E9B72F06BA2FBA2_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x171A8030)
#define CLASS_1_4E9B72F06BA2FBA2_METHOD_1_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x171A7FF0)
#define CLASS_1_4E9B72F06BA2FBA2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x171A7FB0)
#define CLASS_1_4E9B72F06BA2FBA2_METHOD_1_F6AFC74FF9D5F2C2_OFFSET UNITYSDK_OFFSET(0x171A82E0)
#define CLASS_1_4E9B72F06BA2FBA2__CTOR_OFFSET UNITYSDK_OFFSET(0x171A7D60)

inline static constexpr unsigned int Class_1_4E9B72F06BA2FBA2_TypeDefinitionIndex = 73396;

class Class_1_4E9B72F06BA2FBA2 : public ::System::Object
{
public:
	::MoleMole::Cameras::CameraDataAccessor* Field_1_0; // 0x10
	::Class_1_2A3859B4230FECE9* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_2A3859B4230FECE9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A3859B4230FECE9*))((::PBYTE)hIl2Cpp + CLASS_1_4E9B72F06BA2FBA2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E9B72F06BA2FBA2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_1_49AC00594530B714()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E9B72F06BA2FBA2_METHOD_1_49AC00594530B714_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E9B72F06BA2FBA2_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_04DC58A6E3312864(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_1_4E9B72F06BA2FBA2_METHOD_1_04DC58A6E3312864_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E9B72F06BA2FBA2_DISPOSE_OFFSET))(this);
	}

	::MoleMole::CameraModuleAvatarDataConfigExt* Method_1_F6AFC74FF9D5F2C2()
	{
		return ((::MoleMole::CameraModuleAvatarDataConfigExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E9B72F06BA2FBA2_METHOD_1_F6AFC74FF9D5F2C2_OFFSET))(this);
	}

	::System::Void Method_1_381774D493239BC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E9B72F06BA2FBA2_METHOD_1_381774D493239BC8_OFFSET))(this);
	}
};
