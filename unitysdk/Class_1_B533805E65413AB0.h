#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIForbiddenAreaTeleportPointChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B533805E65413AB0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1346C110)
#define CLASS_1_B533805E65413AB0_METHOD_1_2F8C1CDF056C52FC_OFFSET UNITYSDK_OFFSET(0x1346C650)
#define CLASS_1_B533805E65413AB0_METHOD_1_57311321788B0D77_OFFSET UNITYSDK_OFFSET(0x1346C7C0)
#define CLASS_1_B533805E65413AB0_METHOD_1_DF7870AF630B4519_OFFSET UNITYSDK_OFFSET(0x1346C180)
#define CLASS_1_B533805E65413AB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1346C020)

inline static constexpr unsigned int Class_1_B533805E65413AB0_TypeDefinitionIndex = 72791;

class Class_1_B533805E65413AB0 : public ::System::Object
{
public:
	static ::Class_1_B533805E65413AB0** StaticGet_Field_1_0()
	{
		return (::Class_1_B533805E65413AB0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B533805E65413AB0_TypeDefinitionIndex)->GetStaticField(0x3D050);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIForbiddenAreaTeleportPointChildWindowController*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::UIForbiddenAreaTeleportPointChildWindowController*>* Field_1_1; // 0x18
	::System::Func_1<::MoleMole::UIForbiddenAreaTeleportPointChildWindowController*>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B533805E65413AB0__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B533805E65413AB0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DF7870AF630B4519(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_B533805E65413AB0_METHOD_1_DF7870AF630B4519_OFFSET))(this, a1);
	}

	static ::Class_1_B533805E65413AB0* Method_1_2F8C1CDF056C52FC()
	{
		return ((::Class_1_B533805E65413AB0*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B533805E65413AB0_METHOD_1_2F8C1CDF056C52FC_OFFSET))();
	}

	::System::Void Method_1_57311321788B0D77(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_B533805E65413AB0_METHOD_1_57311321788B0D77_OFFSET))(this, a1);
	}
};
