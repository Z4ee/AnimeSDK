#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_01E36AFA5FDDCBCA_METHOD_2_10633FB61A0D692F_OFFSET UNITYSDK_OFFSET(0x16B56720)
#define CLASS_2_01E36AFA5FDDCBCA_METHOD_2_6F8D0E1AE17C99D8_OFFSET UNITYSDK_OFFSET(0x16B56900)
#define CLASS_2_01E36AFA5FDDCBCA__CTOR_OFFSET UNITYSDK_OFFSET(0x16B56990)
#define CLASS_2_01E36AFA5FDDCBCA__ONBIND_OFFSET UNITYSDK_OFFSET(0x16B56520)

inline static constexpr unsigned int Class_2_01E36AFA5FDDCBCA_TypeDefinitionIndex = 72199;

class Class_2_01E36AFA5FDDCBCA : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* JFCMCPFPDFP; // 0x0
	::UnityEngine::Transform* MGKMPLIICNA; // 0x60
	::UnityEngine::Transform* PBAMNMKPJIN; // 0x68
	::UnityEngine::Transform* EHHMNHMEFEB; // 0x70
	::UnityEngine::Transform* IILLJBCGOOJ; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01E36AFA5FDDCBCA__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01E36AFA5FDDCBCA__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_10633FB61A0D692F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_01E36AFA5FDDCBCA_METHOD_2_10633FB61A0D692F_OFFSET))(this, a1);
	}

	::System::Void Method_2_6F8D0E1AE17C99D8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_01E36AFA5FDDCBCA_METHOD_2_6F8D0E1AE17C99D8_OFFSET))(this, a1);
	}
};
