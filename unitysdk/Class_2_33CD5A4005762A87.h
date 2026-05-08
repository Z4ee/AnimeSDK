#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A9CCF2F4C9D162AF.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_156BE44D1D984E46;
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_2_33CD5A4005762A87_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10F98550)
#define CLASS_2_33CD5A4005762A87_METHOD_2_2E2DC98B50F3CCB1_OFFSET UNITYSDK_OFFSET(0x10F986A0)
#define CLASS_2_33CD5A4005762A87_METHOD_2_765F20AE50A3938C_OFFSET UNITYSDK_OFFSET(0x10F98500)
#define CLASS_2_33CD5A4005762A87_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10F985B0)
#define CLASS_2_33CD5A4005762A87_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10F98470)
#define CLASS_2_33CD5A4005762A87_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x10F984B0)
#define CLASS_2_33CD5A4005762A87_METHOD_2_ECA703745FE28665_OFFSET UNITYSDK_OFFSET(0x10F985F0)
#define CLASS_2_33CD5A4005762A87_ONDRAG_OFFSET UNITYSDK_OFFSET(0x10F98650)
#define CLASS_2_33CD5A4005762A87__CTOR_OFFSET UNITYSDK_OFFSET(0x10F98700)

inline static constexpr unsigned int Class_2_33CD5A4005762A87_TypeDefinitionIndex = 74619;

class Class_2_33CD5A4005762A87 : public ::Class_1_A9CCF2F4C9D162AF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33CD5A4005762A87__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33CD5A4005762A87_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_156BE44D1D984E46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_156BE44D1D984E46*))((::PBYTE)hIl2Cpp + CLASS_2_33CD5A4005762A87_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_765F20AE50A3938C(::MoleMole::Config::PhotoCameraModeOverride* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + CLASS_2_33CD5A4005762A87_METHOD_2_765F20AE50A3938C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_33CD5A4005762A87_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33CD5A4005762A87_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_ECA703745FE28665(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_33CD5A4005762A87_METHOD_2_ECA703745FE28665_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_33CD5A4005762A87_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2E2DC98B50F3CCB1(::UnityEngine::EventSystems::PointerEventData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_33CD5A4005762A87_METHOD_2_2E2DC98B50F3CCB1_OFFSET))(this, a1, a2);
	}
};
