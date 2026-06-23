#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5FA9CCDDD9957726;

#define CLASS_1_E0F4C078E2549C40_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17A7C3B0)
#define CLASS_1_E0F4C078E2549C40_METHOD_1_4CB7528418C085FD_OFFSET UNITYSDK_OFFSET(0x17A7C3F0)
#define CLASS_1_E0F4C078E2549C40_METHOD_1_8E9610689EAC3672_OFFSET UNITYSDK_OFFSET(0x17A7C4A0)
#define CLASS_1_E0F4C078E2549C40_METHOD_1_A6C67BEB07B9E683_OFFSET UNITYSDK_OFFSET(0x17A7C1A0)
#define CLASS_1_E0F4C078E2549C40_METHOD_1_B033AB329BD196B6_OFFSET UNITYSDK_OFFSET(0x17A7C5F0)
#define CLASS_1_E0F4C078E2549C40_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17A7C440)
#define CLASS_1_E0F4C078E2549C40__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7C490)

inline static constexpr unsigned int Class_1_E0F4C078E2549C40_TypeDefinitionIndex = 51835;

class Class_1_E0F4C078E2549C40 : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0F4C078E2549C40__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A6C67BEB07B9E683(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E0F4C078E2549C40_METHOD_1_A6C67BEB07B9E683_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0F4C078E2549C40_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_4CB7528418C085FD(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_E0F4C078E2549C40_METHOD_1_4CB7528418C085FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0F4C078E2549C40_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::UInt32 Method_1_8E9610689EAC3672()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0F4C078E2549C40_METHOD_1_8E9610689EAC3672_OFFSET))(this);
	}

	::Class_1_5FA9CCDDD9957726* Method_1_B033AB329BD196B6()
	{
		return ((::Class_1_5FA9CCDDD9957726*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0F4C078E2549C40_METHOD_1_B033AB329BD196B6_OFFSET))(this);
	}
};
