#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace Cinemachine { class CinemachineBrain; }
namespace RPG::GameCore { class ActiveVirtualCamera; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraBlend; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5D22D26C61201935_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14544C10)
#define CLASS_2_5D22D26C61201935_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x14544BF0)
#define CLASS_2_5D22D26C61201935_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x14547600)
#define CLASS_2_5D22D26C61201935_METHOD_2_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x14546EB0)
#define CLASS_2_5D22D26C61201935_METHOD_2_524DEE2D6E894C01_OFFSET UNITYSDK_OFFSET(0x145478C0)
#define CLASS_2_5D22D26C61201935_METHOD_2_6562D9334740F852_OFFSET UNITYSDK_OFFSET(0x14547EE0)
#define CLASS_2_5D22D26C61201935_METHOD_2_84C3BE9BB646C7FD_OFFSET UNITYSDK_OFFSET(0x14546570)
#define CLASS_2_5D22D26C61201935_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x14546450)
#define CLASS_2_5D22D26C61201935_METHOD_2_BC46FCF99873D9DD_1_OFFSET UNITYSDK_OFFSET(0x14547EA0)
#define CLASS_2_5D22D26C61201935_METHOD_2_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x14547E60)
#define CLASS_2_5D22D26C61201935_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14547E10)
#define CLASS_2_5D22D26C61201935_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x14544C70)
#define CLASS_2_5D22D26C61201935_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x14547BD0)
#define CLASS_2_5D22D26C61201935_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x14547850)
#define CLASS_2_5D22D26C61201935_ONSKIP_OFFSET UNITYSDK_OFFSET(0x14547980)
#define CLASS_2_5D22D26C61201935_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14544D50)
#define CLASS_2_5D22D26C61201935_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14547760)
#define CLASS_2_5D22D26C61201935_TICK_OFFSET UNITYSDK_OFFSET(0x145477C0)
#define CLASS_2_5D22D26C61201935__CTOR_OFFSET UNITYSDK_OFFSET(0x14544C00)

inline static constexpr unsigned int Class_2_5D22D26C61201935_TypeDefinitionIndex = 54059;

class Class_2_5D22D26C61201935 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Cinemachine::CinemachineBrain* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::System::String* Field_2_3; // 0x30
	::RPG::GameCore::GameEntity* Field_2_4; // 0x38
	::RPG::GameCore::VCameraBlend* Field_2_5; // 0x40
	::RPG::GameCore::TaskContext* Field_2_6; // 0x48
	::System::String* Field_2_7; // 0x50
	::RPG::GameCore::ActiveVirtualCamera* Field_2_8; // 0x58
	::System::String* Field_2_9; // 0x60
	::System::UInt32 Field_2_10; // 0x68
	::System::UInt64 Field_2_11; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveVirtualCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_TICK_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_METHOD_2_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_2_84C3BE9BB646C7FD(::RPG::GameCore::AnchorInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_METHOD_2_84C3BE9BB646C7FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_524DEE2D6E894C01(::RPG::GameCore::VCameraBlend* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_METHOD_2_524DEE2D6E894C01_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_METHOD_2_BC46FCF99873D9DD_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_BC46FCF99873D9DD_1()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_METHOD_2_BC46FCF99873D9DD_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_6562D9334740F852(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D22D26C61201935_METHOD_2_6562D9334740F852_OFFSET))(this, a1, a2);
	}
};
