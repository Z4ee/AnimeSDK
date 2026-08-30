#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D808E3F47C1941B7_COMPARETO_OFFSET UNITYSDK_OFFSET(0x16EC3D60)
#define CLASS_1_D808E3F47C1941B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EC3DE0)
#define CLASS_1_D808E3F47C1941B7__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC3DD0)

inline static constexpr unsigned int Class_1_D808E3F47C1941B7_TypeDefinitionIndex = 55832;

class Class_1_D808E3F47C1941B7 : public ::System::Object
{
public:
	static ::Class_1_D808E3F47C1941B7** StaticGet_HGLIFJGHADE()
	{
		return (::Class_1_D808E3F47C1941B7**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D808E3F47C1941B7_TypeDefinitionIndex)->GetStaticField(0x11790);
	}
	::Il2CppArray<::RPG::GameCore::SkillLayoutKey>* HHMKJMFNEPO; // 0x10
	::System::Int32 NALMBOOCCIN; // 0x18
	::System::Boolean EMLCJLOIMDK; // 0x1C
	::System::Boolean NIFCBHHPIGD; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D808E3F47C1941B7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D808E3F47C1941B7__CCTOR_OFFSET))();
	}

	::System::Int32 CompareTo(::Class_1_D808E3F47C1941B7* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D808E3F47C1941B7*))((::PBYTE)hIl2Cpp + CLASS_1_D808E3F47C1941B7_COMPARETO_OFFSET))(this, a1);
	}
};
