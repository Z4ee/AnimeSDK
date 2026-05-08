#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_C23204F946E9ABC3;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class Transform; }

#define CLASS_3_57CB95959F269863_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xF28CFE0)
#define CLASS_3_57CB95959F269863_METHOD_3_284AF9FC95C99488_OFFSET UNITYSDK_OFFSET(0xF28D630)
#define CLASS_3_57CB95959F269863_METHOD_3_359CFB6A8DDAD95A_OFFSET UNITYSDK_OFFSET(0xF28D3A0)
#define CLASS_3_57CB95959F269863_METHOD_3_566C2E8654887332_OFFSET UNITYSDK_OFFSET(0xF28D1C0)
#define CLASS_3_57CB95959F269863_METHOD_3_67386DC1A43C1CE7_OFFSET UNITYSDK_OFFSET(0xF28D210)
#define CLASS_3_57CB95959F269863_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xF28D5A0)
#define CLASS_3_57CB95959F269863__CTOR_OFFSET UNITYSDK_OFFSET(0xF28D170)

inline static constexpr unsigned int Class_3_57CB95959F269863_TypeDefinitionIndex = 60424;

class Class_3_57CB95959F269863 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57CB95959F269863__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_57CB95959F269863_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_566C2E8654887332(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_57CB95959F269863_METHOD_3_566C2E8654887332_OFFSET))(a1, a2);
	}

	::System::Void Method_3_67386DC1A43C1CE7(::Class_3_C23204F946E9ABC3* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C23204F946E9ABC3*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_57CB95959F269863_METHOD_3_67386DC1A43C1CE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_359CFB6A8DDAD95A(::MoleMole::Battle::Entity* a1, ::Class_3_C23204F946E9ABC3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_C23204F946E9ABC3*))((::PBYTE)hIl2Cpp + CLASS_3_57CB95959F269863_METHOD_3_359CFB6A8DDAD95A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_57CB95959F269863_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_284AF9FC95C99488(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_57CB95959F269863_METHOD_3_284AF9FC95C99488_OFFSET))(this, a1);
	}
};
