#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"

class Class_0_16E4307DCC419505_450;
namespace RPG::GameCore { class EntityMoveTrack; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }

#define CLASS_2_3698CD7A7AFEFDC4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EB1E50)
#define CLASS_2_3698CD7A7AFEFDC4_METHOD_2_53993E7C2839A69A_OFFSET UNITYSDK_OFFSET(0x8EB1E90)
#define CLASS_2_3698CD7A7AFEFDC4_METHOD_2_7E3A7035A8240838_OFFSET UNITYSDK_OFFSET(0x8EB1FD0)
#define CLASS_2_3698CD7A7AFEFDC4_TICK_OFFSET UNITYSDK_OFFSET(0x8EB2100)
#define CLASS_2_3698CD7A7AFEFDC4__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB22B0)
#define CLASS_2_3698CD7A7AFEFDC4___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8EB22C0)

inline static constexpr unsigned int Class_2_3698CD7A7AFEFDC4_TypeDefinitionIndex = 46277;

class Class_2_3698CD7A7AFEFDC4 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_0_16E4307DCC419505_450* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3698CD7A7AFEFDC4__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3698CD7A7AFEFDC4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_53993E7C2839A69A(::Il2CppArray<::RPG::GameCore::EntityMoveTrack*>* a1, ::System::Single a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EntityMoveTrack*>*, ::System::Single, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_3698CD7A7AFEFDC4_METHOD_2_53993E7C2839A69A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_7E3A7035A8240838(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3, ::RPG::GameCore::EntityPosAdaptionConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::RPG::GameCore::EntityPosAdaptionConfig*))((::PBYTE)hIl2Cpp + CLASS_2_3698CD7A7AFEFDC4_METHOD_2_7E3A7035A8240838_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3698CD7A7AFEFDC4_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3698CD7A7AFEFDC4___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
