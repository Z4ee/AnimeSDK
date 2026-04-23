#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop::CoilPuzzle { class RigCoilPuzzleBoard; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_BD16FADC04F09512_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x11A57C00)
#define CLASS_1_BD16FADC04F09512_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11A57A30)
#define CLASS_1_BD16FADC04F09512_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11A58140)
#define CLASS_1_BD16FADC04F09512_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x11A58030)
#define CLASS_1_BD16FADC04F09512_METHOD_1_54C8654A7A9113B5_OFFSET UNITYSDK_OFFSET(0x11A578E0)
#define CLASS_1_BD16FADC04F09512_METHOD_1_88358F9F42B541FB_OFFSET UNITYSDK_OFFSET(0x11A581C0)
#define CLASS_1_BD16FADC04F09512_METHOD_1_CED7A2E9A352C6FD_OFFSET UNITYSDK_OFFSET(0x11A57C60)
#define CLASS_1_BD16FADC04F09512_METHOD_1_E0FF732BE4F4BEAC_OFFSET UNITYSDK_OFFSET(0x11A57D00)
#define CLASS_1_BD16FADC04F09512_METHOD_1_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x11A58280)
#define CLASS_1_BD16FADC04F09512_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x11A57AF0)
#define CLASS_1_BD16FADC04F09512_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x11A57FD0)
#define CLASS_1_BD16FADC04F09512__CTOR_OFFSET UNITYSDK_OFFSET(0x11A578A0)

inline static constexpr unsigned int Class_1_BD16FADC04F09512_TypeDefinitionIndex = 72474;

class Class_1_BD16FADC04F09512 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_4; // 0x10
	::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard* Field_1_0; // 0x18
	::UnityEngine::GameObject* Field_1_1; // 0x20
	::UnityEngine::Collider* Field_1_2; // 0x28
	::System::Boolean Field_1_6; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x34
	::UnityEngine::Vector3 Field_1_3; // 0x40

	::System::Void _ctor(::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard*, ::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_BD16FADC04F09512__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD16FADC04F09512_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_54C8654A7A9113B5(::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_BD16FADC04F09512_METHOD_1_54C8654A7A9113B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BD16FADC04F09512_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD16FADC04F09512_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_E0FF732BE4F4BEAC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BD16FADC04F09512_METHOD_1_E0FF732BE4F4BEAC_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD16FADC04F09512_METHOD_1_FA662896843C137A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_CED7A2E9A352C6FD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD16FADC04F09512_METHOD_1_CED7A2E9A352C6FD_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD16FADC04F09512_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD16FADC04F09512_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_88358F9F42B541FB(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BD16FADC04F09512_METHOD_1_88358F9F42B541FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD16FADC04F09512_METHOD_1_E69F3DFB7CDFE412_OFFSET))(this);
	}
};
