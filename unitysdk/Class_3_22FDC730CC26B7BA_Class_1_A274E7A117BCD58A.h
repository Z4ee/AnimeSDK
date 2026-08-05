#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_22FDC730CC26B7BA_CLASS_1_A274E7A117BCD58A_METHOD_1_75BD73F8DD02595C_OFFSET UNITYSDK_OFFSET(0x13783620)
#define CLASS_3_22FDC730CC26B7BA_CLASS_1_A274E7A117BCD58A_METHOD_1_E05EBED2EFB81B7C_OFFSET UNITYSDK_OFFSET(0x13783470)
#define CLASS_3_22FDC730CC26B7BA_CLASS_1_A274E7A117BCD58A_METHOD_1_F2D191B2BC09993F_OFFSET UNITYSDK_OFFSET(0x13783540)
#define CLASS_3_22FDC730CC26B7BA_CLASS_1_A274E7A117BCD58A__CTOR_OFFSET UNITYSDK_OFFSET(0x13783460)

inline static constexpr unsigned int Class_3_22FDC730CC26B7BA_Class_1_A274E7A117BCD58A_TypeDefinitionIndex = 74561;

class Class_3_22FDC730CC26B7BA_Class_1_A274E7A117BCD58A : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_1; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_A274E7A117BCD58A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E05EBED2EFB81B7C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_A274E7A117BCD58A_METHOD_1_E05EBED2EFB81B7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_F2D191B2BC09993F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_A274E7A117BCD58A_METHOD_1_F2D191B2BC09993F_OFFSET))(this, a1);
	}

	::System::Void Method_1_75BD73F8DD02595C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_A274E7A117BCD58A_METHOD_1_75BD73F8DD02595C_OFFSET))(this, a1);
	}
};
