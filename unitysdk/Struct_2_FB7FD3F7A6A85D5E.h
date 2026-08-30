#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EnviroCharaType.h"
#include "unitysdk/Struct_2_FB7FD3F7A6A85D5E_Struct_2_259EE8EAF7752DD4.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/CRPActor.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CharacterLineLightGroup_Class_1_6B669866A7A95ADE;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { template <typename T> class RefList_1; }
namespace RPG::CustomRP { class CapsuleOcclusion; }
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x8B2B0)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_1D9EE327BF7D6281_OFFSET UNITYSDK_OFFSET(0x8B300)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_26874F67BD92CEC1_OFFSET UNITYSDK_OFFSET(0xBE00260)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0xBDF96D0)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_3848E4903F0CA4C5_OFFSET UNITYSDK_OFFSET(0xBDFA390)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x8B3B0)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_428BD246F5FAAA99_OFFSET UNITYSDK_OFFSET(0x8B390)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_4F3148D4BAAF81F3_OFFSET UNITYSDK_OFFSET(0xBDFA5A0)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x8B2C0)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_77C7045E7324E8B8_OFFSET UNITYSDK_OFFSET(0xBDF9FA0)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_78D5E0A1A0AC9949_OFFSET UNITYSDK_OFFSET(0xBE00750)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_85C81563BC6E2A2E_OFFSET UNITYSDK_OFFSET(0xBDFA910)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x8B2E0)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_89A99D29D0BEDD89_OFFSET UNITYSDK_OFFSET(0x8B2D0)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_9CFA7241D1009D47_OFFSET UNITYSDK_OFFSET(0x8B290)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_AC6B8E73BD3BD222_OFFSET UNITYSDK_OFFSET(0x8B310)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_AFD95DA10D1573F3_OFFSET UNITYSDK_OFFSET(0x8B3A0)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0xBE004F0)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_C0FF32B4D2022F8C_OFFSET UNITYSDK_OFFSET(0xBE005E0)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x8B3C0)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_F5919FB9FE5456D1_OFFSET UNITYSDK_OFFSET(0xBDF9990)
#define STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_F620DD2FD48DDF53_OFFSET UNITYSDK_OFFSET(0x8B2F0)
#define STRUCT_2_FB7FD3F7A6A85D5E__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE01070)
#define STRUCT_2_FB7FD3F7A6A85D5E__CTOR_OFFSET UNITYSDK_OFFSET(0x8B2A0)

inline static constexpr unsigned int Struct_2_FB7FD3F7A6A85D5E_TypeDefinitionIndex = 69743;

struct alignas(8) Struct_2_FB7FD3F7A6A85D5E
{
	static ::UnityEngine::Camera** StaticGet_GOFNJPLABPI()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FB7FD3F7A6A85D5E_TypeDefinitionIndex)->GetStaticField(0x5AAB0);
	}
	static ::RPG::Client::EnvironmentSystem** StaticGet_LKDKHHMECAG()
	{
		return (::RPG::Client::EnvironmentSystem**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FB7FD3F7A6A85D5E_TypeDefinitionIndex)->GetStaticField(0x5AAB8);
	}
	static ::RPG::Client::RefList_1<::Struct_2_FB7FD3F7A6A85D5E>** StaticGet_KEBMBFCNBHN()
	{
		return (::RPG::Client::RefList_1<::Struct_2_FB7FD3F7A6A85D5E>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FB7FD3F7A6A85D5E_TypeDefinitionIndex)->GetStaticField(0x5AAC0);
	}
	static ::System::Single* StaticGet_KOMEOMHBCEC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FB7FD3F7A6A85D5E_TypeDefinitionIndex)->GetStaticField(0x12D00);
	}
	::UnityEngine::GameObject* ALCEFFGNIEL; // 0x10
	::RPG::Client::EnviroCharaType GMPGDEINODK; // 0x18
	::System::Int32 NNAALCLKBCJ; // 0x1C
	::UnityEngine::Vector3 LAADLNFMBCP; // 0x20
	::UnityEngine::Transform* LLJFFDNFBEN; // 0x30
	::System::Boolean BNIILEPNIOP; // 0x38
	::UnityEngine::Transform* NCOMOFEPEOF; // 0x40
	::UnityEngine::Light* CBHFCLPDACC; // 0x48
	::UnityEngine::Transform* GMHNBLOBOGP; // 0x50
	::Struct_2_FB7FD3F7A6A85D5E_Struct_2_259EE8EAF7752DD4 BEDFKMKNBFG; // 0x58
	::Struct_2_FB7FD3F7A6A85D5E_Struct_2_259EE8EAF7752DD4 MMGMKEHDMPM; // 0x78
	::System::Single CCAOGMEFNLB; // 0x98
	::UnityEngine::Vector3 KFEJGBAKKEF; // 0x9C
	::UnityEngine::Rendering::CRPActor KPKKDGFCEPH; // 0xA8
	::RPG::CustomRP::CapsuleOcclusion* JIKEEKLAPCM; // 0xC8
	::UnityEngine::Light* HGOBNLNHFAB; // 0xD0
	::UnityEngine::Bounds DGPCMGOJMOP; // 0xD8
	::UnityEngine::Renderer* OHJAILOGCFK; // 0xF0
	::UnityEngine::Renderer* DHDJOJNFLHF; // 0xF8
	::System::Single BPAIDCADMDO; // 0x100
	::System::Boolean FJMFKJEIOIO; // 0x104
	::System::Boolean BDMLDLPDIIA; // 0x105
	::Struct_2_FB7FD3F7A6A85D5E_Struct_2_259EE8EAF7752DD4 GCNCCBEKFOF; // 0x108
	::Struct_2_FB7FD3F7A6A85D5E_Struct_2_259EE8EAF7752DD4 MBLBLDKIIAM; // 0x128
	::System::Int32 KJMDKNBAGNK; // 0x148
	::RPG::CustomRP::CustomAdditionalLightData* FLFJAKOEHHJ; // 0x150
	::CharacterLineLightGroup_Class_1_6B669866A7A95ADE* PJGDMKFIMHM; // 0x158
	::System::Boolean ABHFNIJELNF; // 0x160
	::Il2CppArray<::UnityEngine::Plane>* IDMFOAFHLEC; // 0x168

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::RPG::Client::EnviroCharaType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::EnviroCharaType, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E__CCTOR_OFFSET))();
	}

	static ::System::Void Method_2_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_2F0F99A12DB93F30_OFFSET))();
	}

	static ::System::Void Method_2_F5919FB9FE5456D1(::UnityEngine::GameObject* a1, ::RPG::Client::EnviroCharaType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::EnviroCharaType, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_F5919FB9FE5456D1_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_2_77C7045E7324E8B8(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_77C7045E7324E8B8_OFFSET))(a1);
	}

	static ::System::Void Method_2_3848E4903F0CA4C5(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_3848E4903F0CA4C5_OFFSET))(a1);
	}

	static ::System::Void Method_2_4F3148D4BAAF81F3(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_4F3148D4BAAF81F3_OFFSET))(a1);
	}

	static ::System::Void Method_2_85C81563BC6E2A2E(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_85C81563BC6E2A2E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_26874F67BD92CEC1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_26874F67BD92CEC1_OFFSET))();
	}

	static ::System::Void Method_2_B799DB9989A18F1D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_B799DB9989A18F1D_OFFSET))();
	}

	static ::System::Boolean Method_2_C0FF32B4D2022F8C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_C0FF32B4D2022F8C_OFFSET))(a1);
	}

	static ::RPG::Client::EnviroCharaType Method_2_78D5E0A1A0AC9949(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::Client::EnviroCharaType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_78D5E0A1A0AC9949_OFFSET))(a1);
	}

	::System::Void Method_2_9CFA7241D1009D47(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_9CFA7241D1009D47_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_89A99D29D0BEDD89(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_89A99D29D0BEDD89_OFFSET))(this, a1);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_2_F620DD2FD48DDF53(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_F620DD2FD48DDF53_OFFSET))(this, a1);
	}

	::System::Void Method_2_1D9EE327BF7D6281(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_1D9EE327BF7D6281_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC6B8E73BD3BD222(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_AC6B8E73BD3BD222_OFFSET))(this, a1);
	}

	::System::Void Method_2_428BD246F5FAAA99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_428BD246F5FAAA99_OFFSET))(this);
	}

	::System::Void Method_2_AFD95DA10D1573F3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_AFD95DA10D1573F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}
};
