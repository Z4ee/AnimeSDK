#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B4A74ED2BE491B9A_Struct_2_0A1006A3711077C2.h"
#include "unitysdk/RPG/Client/EInflatableFighterSide.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2FF2F7FAA870CDF1;
class Class_1_538C7B5C2BA54916;
class Class_1_73FF716382F12A48;
class Class_1_8676A5D6BF139078;
namespace RPG::Client { class InflatableFighterPuzzleBoard; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class MonoInflatableFighter; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_B4A74ED2BE491B9A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18CF7CD0)
#define CLASS_1_B4A74ED2BE491B9A_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18CF7120)
#define CLASS_1_B4A74ED2BE491B9A_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x18CF8450)
#define CLASS_1_B4A74ED2BE491B9A_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x18CF93C0)
#define CLASS_1_B4A74ED2BE491B9A_METHOD_1_2505E255AC8ECF2D_OFFSET UNITYSDK_OFFSET(0x18CF8F70)
#define CLASS_1_B4A74ED2BE491B9A_METHOD_1_3701C92AC1E55974_OFFSET UNITYSDK_OFFSET(0x18CF9280)
#define CLASS_1_B4A74ED2BE491B9A_METHOD_1_8A3E5DFD7F12342E_OFFSET UNITYSDK_OFFSET(0x18CF91D0)
#define CLASS_1_B4A74ED2BE491B9A_METHOD_1_97AC5E0734B0603A_OFFSET UNITYSDK_OFFSET(0x18CF8500)
#define CLASS_1_B4A74ED2BE491B9A_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x18CF96B0)
#define CLASS_1_B4A74ED2BE491B9A_METHOD_1_C9BE5751944732FF_OFFSET UNITYSDK_OFFSET(0x18CF94F0)
#define CLASS_1_B4A74ED2BE491B9A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18CF7800)
#define CLASS_1_B4A74ED2BE491B9A_METHOD_1_E2412894BC3CB7C9_OFFSET UNITYSDK_OFFSET(0x18CF7E20)
#define CLASS_1_B4A74ED2BE491B9A_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x18CF7570)
#define CLASS_1_B4A74ED2BE491B9A_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x18CF7680)
#define CLASS_1_B4A74ED2BE491B9A_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18CF7130)
#define CLASS_1_B4A74ED2BE491B9A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18CF7850)
#define CLASS_1_B4A74ED2BE491B9A__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF7140)

inline static constexpr unsigned int Class_1_B4A74ED2BE491B9A_TypeDefinitionIndex = 68636;

class Class_1_B4A74ED2BE491B9A : public ::System::Object
{
public:
	static ::Class_1_B4A74ED2BE491B9A** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_B4A74ED2BE491B9A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A74ED2BE491B9A_TypeDefinitionIndex)->GetStaticField(0x656E0);
	}
	::RPG::Client::InflatableFighterPuzzleBoard* CCAHGFIABKE; // 0x10
	::Class_1_8676A5D6BF139078* DAELNGNNOBK; // 0x18
	::RPG::GameCore::GameEntity* IFIADNDCPHH; // 0x20
	::RPG::Client::MonoInflatableFighter* KGPGMDIPFJN; // 0x28
	::Class_1_2FF2F7FAA870CDF1* GNIKBIOOJGH; // 0x30
	::Class_1_8676A5D6BF139078* NNFBICAOPPE; // 0x38
	::RPG::GameCore::GameEntity* NNPJKEFNOMG; // 0x40
	::RPG::GameCore::GameEntity* OGLMLEFKHKN; // 0x48
	::RPG::Client::MonoInflatableFighter* BFGIAGJLMJF; // 0x50
	::Class_1_73FF716382F12A48* BEFPLOOEKCO; // 0x58
	::RPG::Client::MonoEffectManager* KMLMEHCDDMA; // 0x60
	::System::Collections::Generic::Queue_1<::Class_1_B4A74ED2BE491B9A_Struct_2_0A1006A3711077C2>* OKNIOMJENPK; // 0x68
	::Class_1_538C7B5C2BA54916* LGLECMDANCO; // 0x70
	::Class_1_73FF716382F12A48* GMNFMEGKFCK; // 0x78
	::RPG::GameCore::GameEntity* KDAJNFLENID; // 0x80
	::RPG::GameCore::StringHash BBAFILGFPJK; // 0x88
	::System::Int32 HEIKIDKDCJK; // 0x8C
	::System::Int32 OPKPFOJKAIK; // 0x90
	::System::Boolean AGELLGAPADG; // 0x94
	::System::Boolean AOBOGIFBNEJ; // 0x95
	::System::Boolean FPEONIGKCJP; // 0x96
	::System::Boolean PCHMPNFGDKF; // 0x97
	::System::Boolean NJPHNILEEFH; // 0x98
	::System::Single COCJDAKNIAP; // 0x9C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::InflatableFighterPuzzleBoard* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::Client::InflatableFighterPuzzleBoard*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::InflatableFighterPuzzleBoard* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::InflatableFighterPuzzleBoard*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_1_B4A74ED2BE491B9A* get_Instance()
	{
		return ((::Class_1_B4A74ED2BE491B9A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_1_B4A74ED2BE491B9A* a1)
	{
		return ((::System::Void(*)(::Class_1_B4A74ED2BE491B9A*))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_SET_INSTANCE_OFFSET))(a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E2412894BC3CB7C9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_METHOD_1_E2412894BC3CB7C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_97AC5E0734B0603A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_METHOD_1_97AC5E0734B0603A_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_8A3E5DFD7F12342E(::UnityEngine::Vector3 a1, ::RPG::Client::EInflatableFighterSide a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::EInflatableFighterSide, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_METHOD_1_8A3E5DFD7F12342E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_C9BE5751944732FF(::UnityEngine::Vector3 a1, ::RPG::Client::EInflatableFighterSide a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::EInflatableFighterSide, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_METHOD_1_C9BE5751944732FF_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_2505E255AC8ECF2D(::RPG::Client::MonoInflatableFighter* a1, ::RPG::Client::EInflatableFighterSide a2, ::System::Boolean& a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoInflatableFighter*, ::RPG::Client::EInflatableFighterSide, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_METHOD_1_2505E255AC8ECF2D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3701C92AC1E55974(::RPG::Client::EInflatableFighterSide a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EInflatableFighterSide, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_METHOD_1_3701C92AC1E55974_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A74ED2BE491B9A_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}
};
