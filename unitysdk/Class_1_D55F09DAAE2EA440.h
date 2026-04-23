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

#define CLASS_1_D55F09DAAE2EA440_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A791E0)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_0EA1C2C81EA6BD45_OFFSET UNITYSDK_OFFSET(0x12A78580)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_12EF4ADA55729541_1_OFFSET UNITYSDK_OFFSET(0x12A79AE0)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_12EF4ADA55729541_OFFSET UNITYSDK_OFFSET(0x12A79A30)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_1AEA15D00CF01743_OFFSET UNITYSDK_OFFSET(0x12A78E80)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_3D5CD6722D41518E_OFFSET UNITYSDK_OFFSET(0x12A78B30)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_7016EAFC5B348A80_OFFSET UNITYSDK_OFFSET(0x12A797E0)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_95034815258775C9_OFFSET UNITYSDK_OFFSET(0x12A79F50)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_988D426B878EF143_OFFSET UNITYSDK_OFFSET(0x12A79CB0)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_98A538006458D938_1_OFFSET UNITYSDK_OFFSET(0x12A79E30)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_98A538006458D938_OFFSET UNITYSDK_OFFSET(0x12A79B90)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_A77146FFE812D4CF_OFFSET UNITYSDK_OFFSET(0x12A7A090)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_B7DBA98857FA30C7_OFFSET UNITYSDK_OFFSET(0x12A79370)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_F7BA13C72A6B3F58_1_OFFSET UNITYSDK_OFFSET(0x12A79EE0)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x12A79C40)
#define CLASS_1_D55F09DAAE2EA440_METHOD_1_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x12A78C60)
#define CLASS_1_D55F09DAAE2EA440__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A7A5F0)
#define CLASS_1_D55F09DAAE2EA440__CTOR_OFFSET UNITYSDK_OFFSET(0x12A79170)

inline static constexpr unsigned int Class_1_D55F09DAAE2EA440_TypeDefinitionIndex = 68295;

class Class_1_D55F09DAAE2EA440 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D55F09DAAE2EA440_TypeDefinitionIndex)->GetStaticField(0x40950);
	}
	::RPG::Client::MonoEffectPluginCharaMaterialBlock* Field_1_6; // 0x10
	::RPG::Client::ParkourGame::MonoParkourEffect* Field_1_3; // 0x18
	::RPG::Client::MonoEffectPluginCharaMaterialBlock* Field_1_7; // 0x20
	::RPG::Client::AttachPointMapping* Field_1_2; // 0x28
	::RPG::Client::MonoEffectPluginCharaMaterialBlock* Field_1_5; // 0x30
	::Class_2_F3F43255EC92B83B* Field_1_1; // 0x38
	::System::Collections::Generic::List_1<::Class_1_64A9C64835CF029E*>* Field_1_4; // 0x40

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

	static ::System::Void Method_1_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_FD6692A5F6B0AC0C_OFFSET))();
	}

	static ::System::Void Method_1_1AEA15D00CF01743(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_1AEA15D00CF01743_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_1_B7DBA98857FA30C7()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_B7DBA98857FA30C7_OFFSET))(this);
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

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_1_98A538006458D938_1()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_98A538006458D938_1_OFFSET))(this);
	}

	::System::Void Method_1_F7BA13C72A6B3F58_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_F7BA13C72A6B3F58_1_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_1_7016EAFC5B348A80(::System::String* a1, ::RPG::Client::ParkourGame::EffectConfig a2, ::System::Func_1<::System::Boolean>* a3)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::RPG::Client::ParkourGame::EffectConfig, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_7016EAFC5B348A80_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_988D426B878EF143(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_988D426B878EF143_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A77146FFE812D4CF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_A77146FFE812D4CF_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95034815258775C9(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D55F09DAAE2EA440_METHOD_1_95034815258775C9_OFFSET))(this, a1);
	}
};
