#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_B1197A63FC972D37_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14D405F0)
#define CLASS_3_B1197A63FC972D37_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14D408C0)
#define CLASS_3_B1197A63FC972D37_METHOD_3_043AAF53DC0CD872_OFFSET UNITYSDK_OFFSET(0x14D414E0)
#define CLASS_3_B1197A63FC972D37_METHOD_3_2F2E93838382645A_OFFSET UNITYSDK_OFFSET(0x14D41330)
#define CLASS_3_B1197A63FC972D37_METHOD_3_4569F172D576A48D_1_OFFSET UNITYSDK_OFFSET(0x14D40C60)
#define CLASS_3_B1197A63FC972D37_METHOD_3_4569F172D576A48D_OFFSET UNITYSDK_OFFSET(0x14D40A70)
#define CLASS_3_B1197A63FC972D37_METHOD_3_46EB8F1325291579_OFFSET UNITYSDK_OFFSET(0x14D410D0)
#define CLASS_3_B1197A63FC972D37_METHOD_3_889FA0F0C25ADEE7_OFFSET UNITYSDK_OFFSET(0x14D41240)
#define CLASS_3_B1197A63FC972D37_METHOD_3_B2B838485F76427D_OFFSET UNITYSDK_OFFSET(0x14D40EE0)
#define CLASS_3_B1197A63FC972D37_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x14D40E50)
#define CLASS_3_B1197A63FC972D37_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14D41040)
#define CLASS_3_B1197A63FC972D37__CTOR_OFFSET UNITYSDK_OFFSET(0x14D40A20)

inline static constexpr unsigned int Class_3_B1197A63FC972D37_TypeDefinitionIndex = 66919;

class Class_3_B1197A63FC972D37 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_4569F172D576A48D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_4569F172D576A48D_OFFSET))(a1);
	}

	static ::System::Void Method_3_4569F172D576A48D_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_4569F172D576A48D_1_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_B2B838485F76427D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_B2B838485F76427D_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_46EB8F1325291579(::System::Boolean a1, ::System::Single a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_46EB8F1325291579_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_889FA0F0C25ADEE7(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_889FA0F0C25ADEE7_OFFSET))(a1);
	}

	static ::System::Void Method_3_2F2E93838382645A(::System::Boolean a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Vector2, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_2F2E93838382645A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_043AAF53DC0CD872(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37_METHOD_3_043AAF53DC0CD872_OFFSET))(a1);
	}
};
