#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_474A7D1735A205EE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13988AB0)
#define CLASS_3_474A7D1735A205EE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13988DE0)
#define CLASS_3_474A7D1735A205EE_METHOD_3_343D337EA1C47C4A_OFFSET UNITYSDK_OFFSET(0x139891D0)
#define CLASS_3_474A7D1735A205EE_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x13989140)
#define CLASS_3_474A7D1735A205EE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x139890B0)
#define CLASS_3_474A7D1735A205EE__CCTOR_OFFSET UNITYSDK_OFFSET(0x139890A0)
#define CLASS_3_474A7D1735A205EE__CTOR_OFFSET UNITYSDK_OFFSET(0x13989050)

inline static constexpr unsigned int Class_3_474A7D1735A205EE_TypeDefinitionIndex = 56297;

class Class_3_474A7D1735A205EE : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Boolean* StaticGet_Field_3_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_474A7D1735A205EE_TypeDefinitionIndex)->GetStaticField(0x103B0);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_474A7D1735A205EE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_474A7D1735A205EE__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_474A7D1735A205EE_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_474A7D1735A205EE_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_474A7D1735A205EE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_474A7D1735A205EE_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_343D337EA1C47C4A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_474A7D1735A205EE_METHOD_3_343D337EA1C47C4A_OFFSET))(this, a1);
	}
};
