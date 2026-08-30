#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EffectConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64A9C64835CF029E;
class Class_2_F3F43255EC92B83B;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginCharaMaterialBlock; }
namespace RPG::Client::ParkourGame { class MonoParkourEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D55F09DAAE2EA440_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177F1700)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_0EA1C2C81EA6BD45_OFFSET UNITYSDK_OFFSET(0x177F0A70)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_12EF4ADA55729541_1_OFFSET UNITYSDK_OFFSET(0x177F20E0)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_12EF4ADA55729541_OFFSET UNITYSDK_OFFSET(0x177F2030)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_1AEA15D00CF01743_OFFSET UNITYSDK_OFFSET(0x177F13B0)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_3D5CD6722D41518E_OFFSET UNITYSDK_OFFSET(0x177F1070)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_464B80C09A37526F_1_OFFSET UNITYSDK_OFFSET(0x177F2510)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x177F2240)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_7016EAFC5B348A80_OFFSET UNITYSDK_OFFSET(0x177F1D80)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_7A22DB61D1E07C2B_OFFSET UNITYSDK_OFFSET(0x177F2580)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_8D8A1D3919CE653E_OFFSET UNITYSDK_OFFSET(0x177F1860)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_8E816772B3F6C832_OFFSET UNITYSDK_OFFSET(0x177F26D0)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_98A538006458D938_1_OFFSET UNITYSDK_OFFSET(0x177F2460)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_98A538006458D938_OFFSET UNITYSDK_OFFSET(0x177F2190)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_C796A0B42720FBD3_OFFSET UNITYSDK_OFFSET(0x177F11A0)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_E1F757521DE6C7D7_OFFSET UNITYSDK_OFFSET(0x177F22B0)
#define CLASS_1_D55F09DAAE2EA440__CCTOR_OFFSET UNITYSDK_OFFSET(0x177F2C70)
#define CLASS_1_D55F09DAAE2EA440__CTOR_OFFSET UNITYSDK_OFFSET(0x177F1690)

inline static constexpr unsigned int Class_1_D55F09DAAE2EA440_TypeDefinitionIndex = 74089;

class Class_1_D55F09DAAE2EA440 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_NFLGONJHPBB()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D55F09DAAE2EA440_TypeDefinitionIndex)->GetStaticField(0x57160);
	}
	::System::Collections::Generic::List_1<::Class_1_64A9C64835CF029E*>* APPIAANONPF; // 0x10
	::RPG::Client::AttachPointMapping* KHJHNEEFBKL; // 0x18
	::RPG::Client::MonoEffectPluginCharaMaterialBlock* KIMKBICIOLN; // 0x20
	::RPG::Client::ParkourGame::MonoParkourEffect* HECGJKBHOMI; // 0x28
	::Class_2_F3F43255EC92B83B* CFKHNPGEAJA; // 0x30
	::RPG::Client::MonoEffectPluginCharaMaterialBlock* JOMNCDLEPND; // 0x38
	::RPG::Client::MonoEffectPluginCharaMaterialBlock* CBLCKEJELCF; // 0x40

	::System::Void _ctor(::Class_2_F3F43255EC92B83B* a1, ::RPG::Client::AttachPointMapping* a2, ::RPG::Client::ParkourGame::MonoParkourEffect* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3F43255EC92B83B*, ::RPG::Client::AttachPointMapping*, ::RPG::Client::ParkourGame::MonoParkourEffect*))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0EA1C2C81EA6BD45(::UnityEngine::Transform* a1, ::RPG::Client::ParkourGame::EffectConfig a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::RPG::Client::ParkourGame::EffectConfig, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_0EA1C2C81EA6BD45_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3D5CD6722D41518E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_3D5CD6722D41518E_OFFSET))(a1);
	}

	static ::System::Void Method_1_C796A0B42720FBD3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_C796A0B42720FBD3_OFFSET))();
	}

	static ::System::Void Method_1_1AEA15D00CF01743(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_1AEA15D00CF01743_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_1_8D8A1D3919CE653E()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_8D8A1D3919CE653E_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_1_12EF4ADA55729541(::System::Func_1<::System::Boolean>* a1)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_12EF4ADA55729541_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffect* Method_1_12EF4ADA55729541_1(::System::Func_1<::System::Boolean>* a1)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_12EF4ADA55729541_1_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffect* Method_1_98A538006458D938()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_98A538006458D938_OFFSET))(this);
	}

	::System::Void Method_1_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_464B80C09A37526F_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_1_98A538006458D938_1()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_98A538006458D938_1_OFFSET))(this);
	}

	::System::Void Method_1_464B80C09A37526F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_464B80C09A37526F_1_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_1_7016EAFC5B348A80(::System::String* a1, ::RPG::Client::ParkourGame::EffectConfig a2, ::System::Func_1<::System::Boolean>* a3)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::RPG::Client::ParkourGame::EffectConfig, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_7016EAFC5B348A80_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E1F757521DE6C7D7(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_E1F757521DE6C7D7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8E816772B3F6C832(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_8E816772B3F6C832_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_7A22DB61D1E07C2B(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_7A22DB61D1E07C2B_OFFSET))(this, a1);
	}
};
