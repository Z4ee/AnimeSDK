#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F2C8887B356DAA8E.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_360;
class Class_1_16115E538AB9E928;
class Class_1_65F0290E6742FF82;
class Class_1_EAF7984A8FAD6BE4;
class Class_2_247D189FCF5AF516;
class Class_2_409B0D1663D08CF3;
class SceneLightVolume;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }

#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_004D492964181CB5_OFFSET UNITYSDK_OFFSET(0x1920C6E0)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x1920DA90)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_37D3D9A3F3244B90_OFFSET UNITYSDK_OFFSET(0x1920CDB0)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0x1920DC10)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0x1920C600)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_82362A03E1ACCEFE_OFFSET UNITYSDK_OFFSET(0x1920E3C0)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1920D440)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_A1A21AF3DC45B174_OFFSET UNITYSDK_OFFSET(0x1920CE30)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_A29466E9A74DBFC5_OFFSET UNITYSDK_OFFSET(0x1920E1B0)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x1920E250)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_C21BA8CA687DD55E_OFFSET UNITYSDK_OFFSET(0x1920CA10)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1920E570)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1920E170)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x1920C260)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1920C390)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_D1E92C7899FA570C_1_OFFSET UNITYSDK_OFFSET(0x1920E840)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_D1E92C7899FA570C_OFFSET UNITYSDK_OFFSET(0x1920E610)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_D8E6DC0B27699F85_OFFSET UNITYSDK_OFFSET(0x1920D240)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x1920C4E0)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1920C2C0)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_F0191D1D76E0C589_OFFSET UNITYSDK_OFFSET(0x1920D4E0)
#define CLASS_3_BC5A8D236BEA30C1_METHOD_3_F827F8E66E32DC46_OFFSET UNITYSDK_OFFSET(0x1920CC80)
#define CLASS_3_BC5A8D236BEA30C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1920EA70)
#define CLASS_3_BC5A8D236BEA30C1__POSTINIT_B__32_0_OFFSET UNITYSDK_OFFSET(0x1920EAF0)

inline static constexpr unsigned int Class_3_BC5A8D236BEA30C1_TypeDefinitionIndex = 47486;

class Class_3_BC5A8D236BEA30C1 : public ::Class_2_F2C8887B356DAA8E
{
public:
	::Class_2_409B0D1663D08CF3* Field_3_0; // 0x58
	::System::String* Field_3_1; // 0x60
	::System::String* Field_3_2; // 0x68
	::Il2CppArray<::SceneLightVolume*>* Field_3_3; // 0x70
	::Class_2_247D189FCF5AF516* Field_3_4; // 0x78
	::System::Collections::Generic::List_1<::SceneLightVolume*>* Field_3_5; // 0x80
	::Class_1_16115E538AB9E928* Field_3_6; // 0x88
	::System::Int32 Field_3_7; // 0x90
	::System::Int32 Field_3_8; // 0x94
	::System::Single Field_3_9; // 0x98
	::UnityEngine::Vector3 Field_3_10; // 0x9C
	::System::Int32 Field_3_11; // 0xA8
	::EnviromentSystemV2Space::OutputType Field_3_12; // 0xAC
	::System::Boolean Field_3_13; // 0xB0
	::System::Boolean Field_3_14; // 0xB1

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Void Method_3_004D492964181CB5(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_004D492964181CB5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C21BA8CA687DD55E(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_C21BA8CA687DD55E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F827F8E66E32DC46(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_F827F8E66E32DC46_OFFSET))(this, a1);
	}

	::System::Void Method_3_37D3D9A3F3244B90()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_37D3D9A3F3244B90_OFFSET))(this);
	}

	::System::Void Method_3_D8E6DC0B27699F85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_D8E6DC0B27699F85_OFFSET))(this);
	}

	::System::Void Method_3_6D71CC7A9DF62322()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_6D71CC7A9DF62322_OFFSET))(this);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	static ::Class_1_65F0290E6742FF82* Method_3_F0191D1D76E0C589(::System::String* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5)
	{
		return ((::Class_1_65F0290E6742FF82*(*)(::System::String*, ::RPG::GameCore::BlockNodeConfig*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_F0191D1D76E0C589_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_52C18C0DA8AC23E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_52C18C0DA8AC23E5_OFFSET))(this);
	}

	::SceneLightVolume* Method_3_A1A21AF3DC45B174()
	{
		return ((::SceneLightVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_A1A21AF3DC45B174_OFFSET))(this);
	}

	::System::Void Method_3_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_A29466E9A74DBFC5(::EnviromentSystemV2Space::OutputType a1, ::Class_0_16E4307DCC419505_360* a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_360*))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_A29466E9A74DBFC5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Void Method_3_82362A03E1ACCEFE(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_82362A03E1ACCEFE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::UnityEngine::Light* Method_3_D1E92C7899FA570C(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_D1E92C7899FA570C_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_3_D1E92C7899FA570C_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1_METHOD_3_D1E92C7899FA570C_1_OFFSET))(this, a1);
	}

	::System::Void _PostInit_b__32_0(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_3_BC5A8D236BEA30C1__POSTINIT_B__32_0_OFFSET))(this, a1);
	}
};
