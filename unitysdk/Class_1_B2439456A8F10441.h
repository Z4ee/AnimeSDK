#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_70950A2F43B07012;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B2439456A8F10441_METHOD_1_15CAEDC2DB4E7912_OFFSET UNITYSDK_OFFSET(0x14DBF080)
#define CLASS_1_B2439456A8F10441_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x14DBE5C0)
#define CLASS_1_B2439456A8F10441_METHOD_1_7EDBC63FC2BC53F4_OFFSET UNITYSDK_OFFSET(0x14DBF1A0)
#define CLASS_1_B2439456A8F10441_METHOD_1_826D78AFC3A54C43_OFFSET UNITYSDK_OFFSET(0x14DBE970)
#define CLASS_1_B2439456A8F10441_METHOD_1_A3054DCC506427D8_OFFSET UNITYSDK_OFFSET(0x14DBEBB0)
#define CLASS_1_B2439456A8F10441_METHOD_1_D78E7E5921B8B1C4_OFFSET UNITYSDK_OFFSET(0x14DBEB50)
#define CLASS_1_B2439456A8F10441_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x14DBE750)
#define CLASS_1_B2439456A8F10441__CTOR_OFFSET UNITYSDK_OFFSET(0x14DBE5B0)

inline static constexpr unsigned int Class_1_B2439456A8F10441_TypeDefinitionIndex = 43670;

class Class_1_B2439456A8F10441 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_2; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18
	::System::String* Field_1_4; // 0x20
	::MoleMole::EntityHandle Field_1_6; // 0x28
	::Class_1_70950A2F43B07012* Field_1_0; // 0x38
	::System::Boolean Field_1_3; // 0x40
	::System::Boolean Field_1_5; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_826D78AFC3A54C43(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_METHOD_1_826D78AFC3A54C43_OFFSET))(this, a1);
	}

	::System::Void Method_1_D78E7E5921B8B1C4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_METHOD_1_D78E7E5921B8B1C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3054DCC506427D8(::System::String* a1, ::System::Action_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_METHOD_1_A3054DCC506427D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_15CAEDC2DB4E7912(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_METHOD_1_15CAEDC2DB4E7912_OFFSET))(this, a1);
	}

	::System::Void Method_1_7EDBC63FC2BC53F4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_METHOD_1_7EDBC63FC2BC53F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}
};
