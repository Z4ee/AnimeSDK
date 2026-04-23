#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ModifierBehaviorVisual; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_62FE704B7FCA5D80_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x952E760)
#define CLASS_1_62FE704B7FCA5D80_METHOD_1_23191EDF2C3906CA_OFFSET UNITYSDK_OFFSET(0x952E1D0)
#define CLASS_1_62FE704B7FCA5D80_METHOD_1_376ED8B0B7D6A86D_OFFSET UNITYSDK_OFFSET(0x952E2F0)
#define CLASS_1_62FE704B7FCA5D80_METHOD_1_D1669592F0E0A83D_OFFSET UNITYSDK_OFFSET(0x952E840)
#define CLASS_1_62FE704B7FCA5D80__CCTOR_OFFSET UNITYSDK_OFFSET(0x952E9A0)
#define CLASS_1_62FE704B7FCA5D80__CTOR_OFFSET UNITYSDK_OFFSET(0x952E900)

inline static constexpr unsigned int Class_1_62FE704B7FCA5D80_TypeDefinitionIndex = 50207;

class Class_1_62FE704B7FCA5D80 : public ::System::Object
{
public:
	static ::Class_1_62FE704B7FCA5D80** StaticGet_Field_1_0()
	{
		return (::Class_1_62FE704B7FCA5D80**)Il2CppClass::FromTypeDefinitionIndex(Class_1_62FE704B7FCA5D80_TypeDefinitionIndex)->GetStaticField(0x3E670);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorVisual*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FE704B7FCA5D80__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_62FE704B7FCA5D80__CCTOR_OFFSET))();
	}

	::System::Void Method_1_23191EDF2C3906CA(::Il2CppArray<::RPG::GameCore::ModifierBehaviorVisual*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorVisual*>*))((::PBYTE)hIl2Cpp + CLASS_1_62FE704B7FCA5D80_METHOD_1_23191EDF2C3906CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FE704B7FCA5D80_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::RPG::GameCore::ModifierBehaviorVisual* Method_1_D1669592F0E0A83D(::System::Int32 a1)
	{
		return ((::RPG::GameCore::ModifierBehaviorVisual*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62FE704B7FCA5D80_METHOD_1_D1669592F0E0A83D_OFFSET))(this, a1);
	}

	::System::Void Method_1_376ED8B0B7D6A86D(::RPG::GameCore::ModifierBehaviorVisual* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorVisual*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62FE704B7FCA5D80_METHOD_1_376ED8B0B7D6A86D_OFFSET))(this, a1, a2, a3);
	}
};
