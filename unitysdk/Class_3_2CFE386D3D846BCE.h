#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_577338F062DABB28;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_2CFE386D3D846BCE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x11C62AC0)
#define CLASS_3_2CFE386D3D846BCE_METHOD_3_33F6FB16C3F5BFA5_OFFSET UNITYSDK_OFFSET(0x11C635E0)
#define CLASS_3_2CFE386D3D846BCE_METHOD_3_8EE60CDABB282AEA_OFFSET UNITYSDK_OFFSET(0x11C62F10)
#define CLASS_3_2CFE386D3D846BCE_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x11C63930)
#define CLASS_3_2CFE386D3D846BCE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11C62E80)
#define CLASS_3_2CFE386D3D846BCE_METHOD_3_E15012FCEFFB55D4_OFFSET UNITYSDK_OFFSET(0x11C63190)
#define CLASS_3_2CFE386D3D846BCE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11C62CD0)
#define CLASS_3_2CFE386D3D846BCE__CTOR_OFFSET UNITYSDK_OFFSET(0x11C62E30)

inline static constexpr unsigned int Class_3_2CFE386D3D846BCE_TypeDefinitionIndex = 43780;

class Class_3_2CFE386D3D846BCE : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CFE386D3D846BCE__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2CFE386D3D846BCE_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CFE386D3D846BCE_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CFE386D3D846BCE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_8EE60CDABB282AEA(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_2CFE386D3D846BCE_METHOD_3_8EE60CDABB282AEA_OFFSET))(this, a1);
	}

	::System::Void Method_3_E15012FCEFFB55D4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2CFE386D3D846BCE_METHOD_3_E15012FCEFFB55D4_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_33F6FB16C3F5BFA5(::Class_3_577338F062DABB28* a1)
	{
		return ((::System::Void(*)(::Class_3_577338F062DABB28*))((::PBYTE)hIl2Cpp + CLASS_3_2CFE386D3D846BCE_METHOD_3_33F6FB16C3F5BFA5_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2CFE386D3D846BCE_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
