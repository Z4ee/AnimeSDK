#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PlayerMotionProviderCameraMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4AF7185FBAAE5D87;
namespace RPG::Client::Prop { class PuzzleCameraControllerBase; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_40D91EA46AF77B5B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3F77E0)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_169C5280D338BD7B_OFFSET UNITYSDK_OFFSET(0xB3F7A90)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB3F79B0)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_38E590E1037E050D_OFFSET UNITYSDK_OFFSET(0xB3F89A0)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_4863C96DA6A57411_OFFSET UNITYSDK_OFFSET(0xB3F8770)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0xB3F9280)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xB3F7960)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_6BB6CE02731BF170_OFFSET UNITYSDK_OFFSET(0xB3F74A0)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0xB3F8150)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_85F701D146D8871B_OFFSET UNITYSDK_OFFSET(0xB3F7B30)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_A4BB4D3879ACB345_OFFSET UNITYSDK_OFFSET(0xB3F82A0)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_BD5374B599D887C5_OFFSET UNITYSDK_OFFSET(0xB3F7600)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB3F8960)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB3F8920)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB3F8720)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_CEB93A1456C4B99D_OFFSET UNITYSDK_OFFSET(0xB3F8840)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0xB3F9000)
#define CLASS_1_40D91EA46AF77B5B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB3F9290)
#define CLASS_1_40D91EA46AF77B5B__CTOR_OFFSET UNITYSDK_OFFSET(0xB3F7370)

inline static constexpr unsigned int Class_1_40D91EA46AF77B5B_TypeDefinitionIndex = 78800;

class Class_1_40D91EA46AF77B5B : public ::System::Object
{
public:
	::RPG::Client::Prop::PuzzleCameraControllerBase* IJPIHJKEPKE; // 0x10
	::Class_1_4AF7185FBAAE5D87* BECOOHALAFM; // 0x18
	::UnityEngine::GameObject* OLOJPBGPDEJ; // 0x20
	::UnityEngine::Transform* DJMMHJPLLPL; // 0x28
	::UnityEngine::Coroutine* IFPKPHFBBCP; // 0x30
	::UnityEngine::GameObject* OJPPABAMHPL; // 0x38
	::System::Boolean FHEJECEAJOJ; // 0x40
	::UnityEngine::Vector3 NAMGGEJCDMP; // 0x44
	::System::Single ACIGOFBLFJI; // 0x50
	::System::Single PGJDFKOKKHL; // 0x54
	::UnityEngine::Quaternion FEHPAKLCLBF; // 0x58
	::System::Int32 FJNCJHMNBBK; // 0x68
	::System::Single MDIBOEGIJAP; // 0x6C

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_6BB6CE02731BF170(::RPG::Client::Prop::PlayerMotionProviderCameraMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PlayerMotionProviderCameraMode))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_6BB6CE02731BF170_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD5374B599D887C5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_BD5374B599D887C5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_169C5280D338BD7B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_169C5280D338BD7B_OFFSET))(this);
	}

	::System::Void Method_1_85F701D146D8871B(::Class_1_4AF7185FBAAE5D87* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF7185FBAAE5D87*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_85F701D146D8871B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_4AF7185FBAAE5D87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF7185FBAAE5D87*))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_4863C96DA6A57411(::Class_1_4AF7185FBAAE5D87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF7185FBAAE5D87*))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_4863C96DA6A57411_OFFSET))(this, a1);
	}

	::System::Single Method_1_CEB93A1456C4B99D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_CEB93A1456C4B99D_OFFSET))(this);
	}

	::System::Void Method_1_A4BB4D3879ACB345(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_A4BB4D3879ACB345_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_38E590E1037E050D(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_38E590E1037E050D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_4D71BCFB74C16073_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40D91EA46AF77B5B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
