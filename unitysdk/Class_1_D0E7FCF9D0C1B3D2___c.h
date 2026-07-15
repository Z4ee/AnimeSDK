#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_634284739E90CAFA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_D0E7FCF9D0C1B3D2___C__APPLY_B__1_0_OFFSET UNITYSDK_OFFSET(0x16F2A190)
#define CLASS_1_D0E7FCF9D0C1B3D2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F2A140)
#define CLASS_1_D0E7FCF9D0C1B3D2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2A180)

inline static constexpr unsigned int Class_1_D0E7FCF9D0C1B3D2___c_TypeDefinitionIndex = 73896;

class Class_1_D0E7FCF9D0C1B3D2___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_634284739E90CAFA*, ::RPG::GameCore::FixPoint>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_1_634284739E90CAFA*, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0E7FCF9D0C1B3D2___c_TypeDefinitionIndex)->GetStaticField(0x39610);
	}
	static ::Class_1_D0E7FCF9D0C1B3D2___c** StaticGet___9()
	{
		return (::Class_1_D0E7FCF9D0C1B3D2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0E7FCF9D0C1B3D2___c_TypeDefinitionIndex)->GetStaticField(0x39618);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0E7FCF9D0C1B3D2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0E7FCF9D0C1B3D2___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint _Apply_b__1_0(::Class_1_634284739E90CAFA* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_1_634284739E90CAFA*))((::PBYTE)hIl2Cpp + CLASS_1_D0E7FCF9D0C1B3D2___C__APPLY_B__1_0_OFFSET))(this, a1);
	}
};
