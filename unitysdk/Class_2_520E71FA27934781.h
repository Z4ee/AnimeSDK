#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_35D50070BC469EAB.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_520E71FA27934781_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18E05FD0)
#define CLASS_2_520E71FA27934781_METHOD_2_46D5C4F0EA172C6A_OFFSET UNITYSDK_OFFSET(0x18E060F0)
#define CLASS_2_520E71FA27934781_METHOD_2_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x18E05BB0)
#define CLASS_2_520E71FA27934781_METHOD_2_B528ED68D0F47B0F_OFFSET UNITYSDK_OFFSET(0x18E05570)
#define CLASS_2_520E71FA27934781_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18E06140)
#define CLASS_2_520E71FA27934781_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18E060B0)
#define CLASS_2_520E71FA27934781_METHOD_2_CB210D3CDDB106B2_OFFSET UNITYSDK_OFFSET(0x18E05F80)
#define CLASS_2_520E71FA27934781_METHOD_2_EAB5B4908F81B4DF_OFFSET UNITYSDK_OFFSET(0x18E05660)
#define CLASS_2_520E71FA27934781__CTOR_OFFSET UNITYSDK_OFFSET(0x18E05550)

inline static constexpr unsigned int Class_2_520E71FA27934781_TypeDefinitionIndex = 39718;

class Class_2_520E71FA27934781 : public ::Class_1_35D50070BC469EAB
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x50
	::System::Single Field_2_5; // 0x58
	::System::UInt32 Field_2_8; // 0x5C
	::UnityEngine::Vector2 Field_2_6; // 0x60
	::System::Boolean Field_2_2; // 0x68
	::System::Boolean Field_2_1; // 0x69
	::UnityEngine::Vector3 Field_2_3; // 0x6C
	::System::Single Field_2_4; // 0x78
	::System::UInt32 Field_2_7; // 0x7C

	::System::Void _ctor(::MoleMole::Config::InteractEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + CLASS_2_520E71FA27934781__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B528ED68D0F47B0F(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_520E71FA27934781_METHOD_2_B528ED68D0F47B0F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_520E71FA27934781_METHOD_2_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_2_CB210D3CDDB106B2(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_520E71FA27934781_METHOD_2_CB210D3CDDB106B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_520E71FA27934781_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_EAB5B4908F81B4DF(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_520E71FA27934781_METHOD_2_EAB5B4908F81B4DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_520E71FA27934781_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_46D5C4F0EA172C6A(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_520E71FA27934781_METHOD_2_46D5C4F0EA172C6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_520E71FA27934781_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
