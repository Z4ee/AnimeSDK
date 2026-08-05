#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1034E84F369FCA7C_Enum_3_83155513718C038D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_EB84615A56CD66EB_METHOD_1_1EBA5E3E9E5E4AB2_OFFSET UNITYSDK_OFFSET(0x15F01F80)
#define CLASS_1_EB84615A56CD66EB_METHOD_1_1FAF14F480022CEE_OFFSET UNITYSDK_OFFSET(0x15F01C00)
#define CLASS_1_EB84615A56CD66EB_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15F01CF0)
#define CLASS_1_EB84615A56CD66EB_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x15F01E40)
#define CLASS_1_EB84615A56CD66EB_METHOD_1_453FBD30243168C1_OFFSET UNITYSDK_OFFSET(0x15F01F30)
#define CLASS_1_EB84615A56CD66EB_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x15F01D40)
#define CLASS_1_EB84615A56CD66EB_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15F01EF0)
#define CLASS_1_EB84615A56CD66EB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F01EA0)
#define CLASS_1_EB84615A56CD66EB__CTOR_OFFSET UNITYSDK_OFFSET(0x15F01FD0)

inline static constexpr unsigned int Class_1_EB84615A56CD66EB_TypeDefinitionIndex = 78171;

class Class_1_EB84615A56CD66EB : public ::System::Object
{
public:
	::Class_1_1034E84F369FCA7C_Enum_3_83155513718C038D Field_1_5; // 0x10
	::System::Single Field_1_6; // 0x14
	::System::Boolean Field_1_7; // 0x18
	::System::Single Field_1_2; // 0x1C
	::UnityEngine::Vector3 Field_1_1; // 0x20
	::UnityEngine::Vector3 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB84615A56CD66EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1FAF14F480022CEE(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Class_1_1034E84F369FCA7C_Enum_3_83155513718C038D a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Class_1_1034E84F369FCA7C_Enum_3_83155513718C038D, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EB84615A56CD66EB_METHOD_1_1FAF14F480022CEE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB84615A56CD66EB_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB84615A56CD66EB_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EB84615A56CD66EB_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB84615A56CD66EB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB84615A56CD66EB_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_453FBD30243168C1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_EB84615A56CD66EB_METHOD_1_453FBD30243168C1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1EBA5E3E9E5E4AB2(::Class_1_1034E84F369FCA7C_Enum_3_83155513718C038D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1034E84F369FCA7C_Enum_3_83155513718C038D))((::PBYTE)hIl2Cpp + CLASS_1_EB84615A56CD66EB_METHOD_1_1EBA5E3E9E5E4AB2_OFFSET))(this, a1);
	}
};
