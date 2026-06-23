#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B2439456A8F10441_1_METHOD_1_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x13892870)
#define CLASS_1_B2439456A8F10441_1_METHOD_1_508D4DD02D3DB74E_1_OFFSET UNITYSDK_OFFSET(0x13893160)
#define CLASS_1_B2439456A8F10441_1_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x13892A80)
#define CLASS_1_B2439456A8F10441_1_METHOD_1_7EDBC63FC2BC53F4_OFFSET UNITYSDK_OFFSET(0x13892C10)
#define CLASS_1_B2439456A8F10441_1_METHOD_1_A3054DCC506427D8_OFFSET UNITYSDK_OFFSET(0x13892CB0)
#define CLASS_1_B2439456A8F10441_1_METHOD_1_E3B592547FB706FD_OFFSET UNITYSDK_OFFSET(0x138927F0)
#define CLASS_1_B2439456A8F10441_1__CTOR_OFFSET UNITYSDK_OFFSET(0x138927E0)

inline static constexpr unsigned int Class_1_B2439456A8F10441_1_TypeDefinitionIndex = 53121;

class Class_1_B2439456A8F10441_1 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_5; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x20
	::UnityEngine::Transform* Field_1_1; // 0x28
	::System::String* Field_1_3; // 0x30
	::System::Boolean Field_1_4; // 0x38
	::System::Boolean Field_1_2; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E3B592547FB706FD(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_1_METHOD_1_E3B592547FB706FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_1_METHOD_1_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_1_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_7EDBC63FC2BC53F4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_1_METHOD_1_7EDBC63FC2BC53F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_508D4DD02D3DB74E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_1_METHOD_1_508D4DD02D3DB74E_1_OFFSET))(this);
	}

	::System::Void Method_1_A3054DCC506427D8(::System::String* a1, ::System::Action_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_1_METHOD_1_A3054DCC506427D8_OFFSET))(this, a1, a2);
	}
};
