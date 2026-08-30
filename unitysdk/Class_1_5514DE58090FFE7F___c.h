#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_5514DE58090FFE7F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F44AA0)
#define CLASS_1_5514DE58090FFE7F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F44AE0)
#define CLASS_1_5514DE58090FFE7F___C__REFRESHTRIALTEAMBUILD_B__1_0_OFFSET UNITYSDK_OFFSET(0x18F44AF0)

inline static constexpr unsigned int Class_1_5514DE58090FFE7F___c_TypeDefinitionIndex = 61984;

class Class_1_5514DE58090FFE7F___c : public ::System::Object
{
public:
	static ::Class_1_5514DE58090FFE7F___c** StaticGet___9()
	{
		return (::Class_1_5514DE58090FFE7F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5514DE58090FFE7F___c_TypeDefinitionIndex)->GetStaticField(0x32C30);
	}
	static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5514DE58090FFE7F___c_TypeDefinitionIndex)->GetStaticField(0x32C38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5514DE58090FFE7F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5514DE58090FFE7F___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _RefreshTrialTeamBuild_b__1_0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_5514DE58090FFE7F___C__REFRESHTRIALTEAMBUILD_B__1_0_OFFSET))(this, a1);
	}
};
