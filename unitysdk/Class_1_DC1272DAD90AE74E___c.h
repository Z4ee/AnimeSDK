#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Photo { class BoneSocketConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_DC1272DAD90AE74E___C_METHOD_1_2E82EFA7E417AB10_OFFSET UNITYSDK_OFFSET(0x165896A0)
#define CLASS_1_DC1272DAD90AE74E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16589650)
#define CLASS_1_DC1272DAD90AE74E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16589690)

inline static constexpr unsigned int Class_1_DC1272DAD90AE74E___c_TypeDefinitionIndex = 56407;

class Class_1_DC1272DAD90AE74E___c : public ::System::Object
{
public:
	static ::Class_1_DC1272DAD90AE74E___c** StaticGet___9()
	{
		return (::Class_1_DC1272DAD90AE74E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC1272DAD90AE74E___c_TypeDefinitionIndex)->GetStaticField(0x2F140);
	}
	static ::System::Func_2<::MoleMole::Photo::BoneSocketConfig*, ::MoleMole::Photo::BoneSocketConfig*>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::MoleMole::Photo::BoneSocketConfig*, ::MoleMole::Photo::BoneSocketConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC1272DAD90AE74E___c_TypeDefinitionIndex)->GetStaticField(0x2F148);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DC1272DAD90AE74E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1272DAD90AE74E___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Photo::BoneSocketConfig* Method_1_2E82EFA7E417AB10(::MoleMole::Photo::BoneSocketConfig* a1)
	{
		return ((::MoleMole::Photo::BoneSocketConfig*(*)(::PVOID, ::MoleMole::Photo::BoneSocketConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DC1272DAD90AE74E___C_METHOD_1_2E82EFA7E417AB10_OFFSET))(this, a1);
	}
};
