#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_AA6DF3A878195D3F;
namespace MoleMole { class MonoSteer; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_CEA8C3AFEEEB608C_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x18A54730)
#define CLASS_3_CEA8C3AFEEEB608C_METHOD_3_06C39E6456363849_OFFSET UNITYSDK_OFFSET(0x18A55610)
#define CLASS_3_CEA8C3AFEEEB608C_METHOD_3_2E81D208C815874F_OFFSET UNITYSDK_OFFSET(0x18A54910)
#define CLASS_3_CEA8C3AFEEEB608C_METHOD_3_49581DC19BD3C45B_OFFSET UNITYSDK_OFFSET(0x18A55B10)
#define CLASS_3_CEA8C3AFEEEB608C_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x18A55AC0)
#define CLASS_3_CEA8C3AFEEEB608C_METHOD_3_ADF38C7DD3BFD763_OFFSET UNITYSDK_OFFSET(0x18A55050)
#define CLASS_3_CEA8C3AFEEEB608C_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x18A55A30)
#define CLASS_3_CEA8C3AFEEEB608C_METHOD_3_CA9E4638FB7B42DA_OFFSET UNITYSDK_OFFSET(0x18A549E0)
#define CLASS_3_CEA8C3AFEEEB608C_METHOD_3_CF00BC0E3F8A78B8_OFFSET UNITYSDK_OFFSET(0x18A557B0)
#define CLASS_3_CEA8C3AFEEEB608C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A548C0)

inline static constexpr unsigned int Class_3_CEA8C3AFEEEB608C_TypeDefinitionIndex = 70845;

class Class_3_CEA8C3AFEEEB608C : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEA8C3AFEEEB608C__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_CEA8C3AFEEEB608C_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_2E81D208C815874F(::Class_3_AA6DF3A878195D3F* a1, ::MoleMole::MonoSteer* a2)
	{
		return ((::System::Void(*)(::Class_3_AA6DF3A878195D3F*, ::MoleMole::MonoSteer*))((::PBYTE)hIl2Cpp + CLASS_3_CEA8C3AFEEEB608C_METHOD_3_2E81D208C815874F_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_3_CA9E4638FB7B42DA(::Class_3_AA6DF3A878195D3F* a1, ::System::Int32& a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_AA6DF3A878195D3F*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_CEA8C3AFEEEB608C_METHOD_3_CA9E4638FB7B42DA_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_3_ADF38C7DD3BFD763(::Class_3_AA6DF3A878195D3F* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_AA6DF3A878195D3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_CEA8C3AFEEEB608C_METHOD_3_ADF38C7DD3BFD763_OFFSET))(a1, a2);
	}

	::System::Void Method_3_06C39E6456363849(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_CEA8C3AFEEEB608C_METHOD_3_06C39E6456363849_OFFSET))(this, a1);
	}

	::System::Void Method_3_CF00BC0E3F8A78B8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_CEA8C3AFEEEB608C_METHOD_3_CF00BC0E3F8A78B8_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_CEA8C3AFEEEB608C_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_AA6DF3A878195D3F* a1)
	{
		return ((::System::Void(*)(::Class_3_AA6DF3A878195D3F*))((::PBYTE)hIl2Cpp + CLASS_3_CEA8C3AFEEEB608C_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_49581DC19BD3C45B(::Class_3_AA6DF3A878195D3F* a1)
	{
		return ((::System::Boolean(*)(::Class_3_AA6DF3A878195D3F*))((::PBYTE)hIl2Cpp + CLASS_3_CEA8C3AFEEEB608C_METHOD_3_49581DC19BD3C45B_OFFSET))(a1);
	}
};
