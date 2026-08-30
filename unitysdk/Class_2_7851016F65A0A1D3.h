#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LookAtIK; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_2_7851016F65A0A1D3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179FAD70)
#define CLASS_2_7851016F65A0A1D3_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x179FADD0)
#define CLASS_2_7851016F65A0A1D3_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x179FADE0)
#define CLASS_2_7851016F65A0A1D3_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x179FB5E0)
#define CLASS_2_7851016F65A0A1D3_METHOD_2_3A1BC9FEAE4C080B_OFFSET UNITYSDK_OFFSET(0x179FB4D0)
#define CLASS_2_7851016F65A0A1D3_METHOD_2_50F388BA53C37D92_OFFSET UNITYSDK_OFFSET(0x179FB630)
#define CLASS_2_7851016F65A0A1D3_METHOD_2_919C316E090171D7_OFFSET UNITYSDK_OFFSET(0x179FAEB0)
#define CLASS_2_7851016F65A0A1D3_METHOD_2_B892007B9247C983_OFFSET UNITYSDK_OFFSET(0x179FB0E0)
#define CLASS_2_7851016F65A0A1D3_METHOD_2_FCC709676397F1AF_OFFSET UNITYSDK_OFFSET(0x179FB270)
#define CLASS_2_7851016F65A0A1D3_METHOD_2_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x179FAFC0)
#define CLASS_2_7851016F65A0A1D3_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x179FADF0)
#define CLASS_2_7851016F65A0A1D3__CTOR_OFFSET UNITYSDK_OFFSET(0x179FB640)

inline static constexpr unsigned int Class_2_7851016F65A0A1D3_TypeDefinitionIndex = 57316;

class Class_2_7851016F65A0A1D3 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::LookAtIK* FJLAEGFIMCK; // 0x18
	::RPG::Client::EAssemblyNPC DKHKDBJPNJA; // 0x20
	::System::Boolean NNGLMENLECH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7851016F65A0A1D3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7851016F65A0A1D3_DISPOSE_OFFSET))(this);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7851016F65A0A1D3_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7851016F65A0A1D3_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_7851016F65A0A1D3_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void Method_2_919C316E090171D7(::RPG::Client::EAssemblyNPC a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EAssemblyNPC))((::PBYTE)hIl2Cpp + CLASS_2_7851016F65A0A1D3_METHOD_2_919C316E090171D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7851016F65A0A1D3_METHOD_2_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::System::Void Method_2_B892007B9247C983(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7851016F65A0A1D3_METHOD_2_B892007B9247C983_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCC709676397F1AF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7851016F65A0A1D3_METHOD_2_FCC709676397F1AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A1BC9FEAE4C080B(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_7851016F65A0A1D3_METHOD_2_3A1BC9FEAE4C080B_OFFSET))(this, a1);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7851016F65A0A1D3_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::RPG::Client::LookAtIK* Method_2_50F388BA53C37D92()
	{
		return ((::RPG::Client::LookAtIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7851016F65A0A1D3_METHOD_2_50F388BA53C37D92_OFFSET))(this);
	}
};
