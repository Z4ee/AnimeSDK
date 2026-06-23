#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class UIHollowChessPieceParticle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B56AEEA9EF6A2890_METHOD_1_E8AB4741BCF48DBE_1_OFFSET UNITYSDK_OFFSET(0x12A67A50)
#define CLASS_1_B56AEEA9EF6A2890_METHOD_1_E8AB4741BCF48DBE_OFFSET UNITYSDK_OFFSET(0x12A678C0)
#define CLASS_1_B56AEEA9EF6A2890__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A67880)
#define CLASS_1_B56AEEA9EF6A2890__CTOR_OFFSET UNITYSDK_OFFSET(0x12A67740)

inline static constexpr unsigned int Class_1_B56AEEA9EF6A2890_TypeDefinitionIndex = 40894;

class Class_1_B56AEEA9EF6A2890 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B56AEEA9EF6A2890_TypeDefinitionIndex)->GetStaticField(0xCF10);
	}
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_2; // 0x10
	::UnityEngine::Color Field_1_0; // 0x18
	::UnityEngine::Color Field_1_1; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* a1, ::UnityEngine::Color a2, ::UnityEngine::Color a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_B56AEEA9EF6A2890__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B56AEEA9EF6A2890__CCTOR_OFFSET))();
	}

	::System::Void Method_1_E8AB4741BCF48DBE(::MoleMole::UIHollowChessPieceParticle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessPieceParticle*))((::PBYTE)hIl2Cpp + CLASS_1_B56AEEA9EF6A2890_METHOD_1_E8AB4741BCF48DBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_E8AB4741BCF48DBE_1(::MoleMole::UIHollowChessPieceParticle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessPieceParticle*))((::PBYTE)hIl2Cpp + CLASS_1_B56AEEA9EF6A2890_METHOD_1_E8AB4741BCF48DBE_1_OFFSET))(this, a1);
	}
};
