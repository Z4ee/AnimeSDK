#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D1E36A18B0B6134C;
class Class_3_4875884AB352B34E;
class Class_3_5A31296F1BCE68DD;
class Class_3_D6DA183EF60F02C8;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_BD12FF8BFA888E84_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1430B7E0)
#define CLASS_3_BD12FF8BFA888E84_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1430BB80)
#define CLASS_3_BD12FF8BFA888E84_METHOD_3_3EEFC99826635903_OFFSET UNITYSDK_OFFSET(0x1430C060)
#define CLASS_3_BD12FF8BFA888E84_METHOD_3_4585497DA4AAA148_OFFSET UNITYSDK_OFFSET(0x1430E4F0)
#define CLASS_3_BD12FF8BFA888E84_METHOD_3_575A4B17257752F2_OFFSET UNITYSDK_OFFSET(0x1430D620)
#define CLASS_3_BD12FF8BFA888E84_METHOD_3_76C0DA1722226A12_OFFSET UNITYSDK_OFFSET(0x1430CCE0)
#define CLASS_3_BD12FF8BFA888E84_METHOD_3_9730B29A129ACD76_OFFSET UNITYSDK_OFFSET(0x1430F030)
#define CLASS_3_BD12FF8BFA888E84_METHOD_3_AD826B25465D0838_OFFSET UNITYSDK_OFFSET(0x1430E0C0)
#define CLASS_3_BD12FF8BFA888E84_METHOD_3_B298CA29795F1733_OFFSET UNITYSDK_OFFSET(0x1430BDC0)
#define CLASS_3_BD12FF8BFA888E84_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1430F740)
#define CLASS_3_BD12FF8BFA888E84_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1430F6B0)
#define CLASS_3_BD12FF8BFA888E84_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1430BD30)
#define CLASS_3_BD12FF8BFA888E84_METHOD_3_CE17C6AC3E6AB1F1_OFFSET UNITYSDK_OFFSET(0x1430F7D0)
#define CLASS_3_BD12FF8BFA888E84_METHOD_3_D7325ACD7C7433D1_OFFSET UNITYSDK_OFFSET(0x1430C710)
#define CLASS_3_BD12FF8BFA888E84_METHOD_3_E34CD12B7397C94F_OFFSET UNITYSDK_OFFSET(0x1430EE90)
#define CLASS_3_BD12FF8BFA888E84_UPDATE_OFFSET UNITYSDK_OFFSET(0x1430BA20)
#define CLASS_3_BD12FF8BFA888E84__CTOR_OFFSET UNITYSDK_OFFSET(0x1430BCE0)

inline static constexpr unsigned int Class_3_BD12FF8BFA888E84_TypeDefinitionIndex = 66977;

class Class_3_BD12FF8BFA888E84 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_B298CA29795F1733(::Class_3_5A31296F1BCE68DD* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_5A31296F1BCE68DD*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_METHOD_3_B298CA29795F1733_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3EEFC99826635903(::Class_3_5A31296F1BCE68DD* a1, ::Class_3_D6DA183EF60F02C8* a2, ::Class_3_4875884AB352B34E* a3, ::Class_1_D1E36A18B0B6134C* a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::Class_3_5A31296F1BCE68DD*, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*, ::Class_1_D1E36A18B0B6134C*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_METHOD_3_3EEFC99826635903_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_575A4B17257752F2(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_METHOD_3_575A4B17257752F2_OFFSET))(this, a1);
	}

	::System::Void Method_3_AD826B25465D0838(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_METHOD_3_AD826B25465D0838_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_3_E34CD12B7397C94F(::Class_3_4875884AB352B34E* a1, ::Class_3_D6DA183EF60F02C8* a2, ::Class_3_5A31296F1BCE68DD* a3)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_4875884AB352B34E*, ::Class_3_D6DA183EF60F02C8*, ::Class_3_5A31296F1BCE68DD*))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_METHOD_3_E34CD12B7397C94F_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_3_9730B29A129ACD76(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::UnityEngine::Transform*& a3)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_METHOD_3_9730B29A129ACD76_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_3_76C0DA1722226A12(::Class_3_5A31296F1BCE68DD* a1, ::Class_3_D6DA183EF60F02C8* a2, ::Class_3_4875884AB352B34E* a3, ::System::Int32 a4, ::Class_1_D1E36A18B0B6134C* a5, ::System::Boolean a6)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_5A31296F1BCE68DD*, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*, ::System::Int32, ::Class_1_D1E36A18B0B6134C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_METHOD_3_76C0DA1722226A12_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_4585497DA4AAA148(::Class_3_5A31296F1BCE68DD* a1, ::Class_3_D6DA183EF60F02C8* a2, ::Class_3_4875884AB352B34E* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_5A31296F1BCE68DD*, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_METHOD_3_4585497DA4AAA148_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_3_D7325ACD7C7433D1(::Class_3_5A31296F1BCE68DD* a1, ::Class_3_D6DA183EF60F02C8* a2, ::Class_3_4875884AB352B34E* a3, ::System::Int32 a4, ::Class_1_D1E36A18B0B6134C* a5, ::System::Boolean a6)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_5A31296F1BCE68DD*, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*, ::System::Int32, ::Class_1_D1E36A18B0B6134C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_METHOD_3_D7325ACD7C7433D1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_CE17C6AC3E6AB1F1(::Class_3_5A31296F1BCE68DD* a1, ::Class_3_D6DA183EF60F02C8* a2, ::Class_3_4875884AB352B34E* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_5A31296F1BCE68DD*, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_METHOD_3_CE17C6AC3E6AB1F1_OFFSET))(a1, a2, a3, a4);
	}
};
