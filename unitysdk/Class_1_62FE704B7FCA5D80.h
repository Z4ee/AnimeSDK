#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ModifierBehaviorVisual; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_62FE704B7FCA5D80_METHOD_1_0450332D67FC368F_OFFSET UNITYSDK_OFFSET(0x18AFC770)
#define CLASS_1_62FE704B7FCA5D80_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x18AFC6B0)
#define CLASS_1_62FE704B7FCA5D80_METHOD_1_376ED8B0B7D6A86D_OFFSET UNITYSDK_OFFSET(0x18AFC240)
#define CLASS_1_62FE704B7FCA5D80_METHOD_1_550C40A4BFA54C1C_OFFSET UNITYSDK_OFFSET(0x18AFC110)
#define CLASS_1_62FE704B7FCA5D80__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AFC8E0)
#define CLASS_1_62FE704B7FCA5D80__CTOR_OFFSET UNITYSDK_OFFSET(0x18AFC830)

inline static constexpr unsigned int Class_1_62FE704B7FCA5D80_TypeDefinitionIndex = 51958;

class Class_1_62FE704B7FCA5D80 : public ::System::Object
{
public:
	static ::Class_1_62FE704B7FCA5D80** StaticGet_Field_1_0()
	{
		return (::Class_1_62FE704B7FCA5D80**)Il2CppClass::FromTypeDefinitionIndex(Class_1_62FE704B7FCA5D80_TypeDefinitionIndex)->GetStaticField(0x4E4A0);
	}
	::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorVisual*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FE704B7FCA5D80__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_62FE704B7FCA5D80__CCTOR_OFFSET))();
	}

	::System::Void Method_1_550C40A4BFA54C1C(::Il2CppArray<::RPG::GameCore::ModifierBehaviorVisual*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorVisual*>*))((::PBYTE)hIl2Cpp + CLASS_1_62FE704B7FCA5D80_METHOD_1_550C40A4BFA54C1C_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FE704B7FCA5D80_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::RPG::GameCore::ModifierBehaviorVisual* Method_1_0450332D67FC368F(::System::Int32 a1)
	{
		return ((::RPG::GameCore::ModifierBehaviorVisual*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62FE704B7FCA5D80_METHOD_1_0450332D67FC368F_OFFSET))(this, a1);
	}

	::System::Void Method_1_376ED8B0B7D6A86D(::RPG::GameCore::ModifierBehaviorVisual* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorVisual*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62FE704B7FCA5D80_METHOD_1_376ED8B0B7D6A86D_OFFSET))(this, a1, a2, a3);
	}
};
