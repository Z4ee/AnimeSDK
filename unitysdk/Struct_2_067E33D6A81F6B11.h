#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EnviroCharaType.h"
#include "unitysdk/Struct_2_067E33D6A81F6B11_Struct_2_259EE8EAF7752DD4.h"
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

#define STRUCT_2_067E33D6A81F6B11_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x1422FE0)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_1D9EE327BF7D6281_OFFSET UNITYSDK_OFFSET(0x1423030)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_26874F67BD92CEC1_OFFSET UNITYSDK_OFFSET(0x104C59E0)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x104BF950)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_3848E4903F0CA4C5_OFFSET UNITYSDK_OFFSET(0x104C0570)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_47C3094B9BEBAE50_OFFSET UNITYSDK_OFFSET(0x14230C0)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_4F3148D4BAAF81F3_OFFSET UNITYSDK_OFFSET(0x104C0780)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x14230E0)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x1422FF0)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_77C7045E7324E8B8_OFFSET UNITYSDK_OFFSET(0x104C0180)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_85C81563BC6E2A2E_OFFSET UNITYSDK_OFFSET(0x104C0AF0)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x1423010)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_89A99D29D0BEDD89_OFFSET UNITYSDK_OFFSET(0x1423000)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_9CFA7241D1009D47_OFFSET UNITYSDK_OFFSET(0x1422FC0)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_AC6B8E73BD3BD222_OFFSET UNITYSDK_OFFSET(0x1423040)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0x104C5C70)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_B9686AC129B559BC_OFFSET UNITYSDK_OFFSET(0x14230D0)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_C0FF32B4D2022F8C_OFFSET UNITYSDK_OFFSET(0x104C5D60)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_C4459EF0FA9AC615_OFFSET UNITYSDK_OFFSET(0x104BFC20)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x14230F0)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_F151D5B81568C792_OFFSET UNITYSDK_OFFSET(0x104C5ED0)
#define STRUCT_2_067E33D6A81F6B11_METHOD_2_F620DD2FD48DDF53_OFFSET UNITYSDK_OFFSET(0x1423020)
#define STRUCT_2_067E33D6A81F6B11__CCTOR_OFFSET UNITYSDK_OFFSET(0x104C6830)
#define STRUCT_2_067E33D6A81F6B11__CTOR_OFFSET UNITYSDK_OFFSET(0x1422FD0)

inline static constexpr unsigned int Struct_2_067E33D6A81F6B11_TypeDefinitionIndex = 57063;

struct alignas(8) Struct_2_067E33D6A81F6B11
{
	static ::RPG::Client::EnvironmentSystem** StaticGet_Field_2_29()
	{
		return (::RPG::Client::EnvironmentSystem**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_067E33D6A81F6B11_TypeDefinitionIndex)->GetStaticField(0x13FB0);
	}
	static ::RPG::Client::RefList_1<::Struct_2_067E33D6A81F6B11>** StaticGet_Field_2_31()
	{
		return (::RPG::Client::RefList_1<::Struct_2_067E33D6A81F6B11>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_067E33D6A81F6B11_TypeDefinitionIndex)->GetStaticField(0x13FB8);
	}
	static ::UnityEngine::Camera** StaticGet_Field_2_20()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_067E33D6A81F6B11_TypeDefinitionIndex)->GetStaticField(0x13FC0);
	}
	static ::System::Single* StaticGet_Field_2_12()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_067E33D6A81F6B11_TypeDefinitionIndex)->GetStaticField(0x5DA0);
	}
	::UnityEngine::GameObject* Field_2_0; // 0x10
	::RPG::Client::EnviroCharaType Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::UnityEngine::Vector3 Field_2_3; // 0x20
	::UnityEngine::Transform* Field_2_4; // 0x30
	::System::Boolean Field_2_5; // 0x38
	::UnityEngine::Transform* Field_2_6; // 0x40
	::UnityEngine::Light* Field_2_7; // 0x48
	::UnityEngine::Transform* Field_2_8; // 0x50
	::Struct_2_067E33D6A81F6B11_Struct_2_259EE8EAF7752DD4 Field_2_9; // 0x58
	::Struct_2_067E33D6A81F6B11_Struct_2_259EE8EAF7752DD4 Field_2_10; // 0x78
	::System::Single Field_2_11; // 0x98
	::UnityEngine::Vector3 Field_2_13; // 0x9C
	::UnityEngine::Rendering::CRPActor Field_2_14; // 0xA8
	::RPG::CustomRP::CapsuleOcclusion* Field_2_15; // 0xC8
	::UnityEngine::Light* Field_2_16; // 0xD0
	::UnityEngine::Bounds Field_2_17; // 0xD8
	::UnityEngine::Renderer* Field_2_18; // 0xF0
	::UnityEngine::Renderer* Field_2_19; // 0xF8
	::System::Single Field_2_21; // 0x100
	::System::Boolean Field_2_22; // 0x104
	::System::Boolean Field_2_23; // 0x105
	::Struct_2_067E33D6A81F6B11_Struct_2_259EE8EAF7752DD4 Field_2_24; // 0x108
	::Struct_2_067E33D6A81F6B11_Struct_2_259EE8EAF7752DD4 Field_2_25; // 0x128
	::System::Int32 Field_2_26; // 0x148
	::RPG::CustomRP::CustomAdditionalLightData* Field_2_27; // 0x150
	::CharacterLineLightGroup_Class_1_6B669866A7A95ADE* Field_2_28; // 0x158
	::System::Boolean Field_2_30; // 0x160
	::Il2CppArray<::UnityEngine::Plane>* Field_2_32; // 0x168

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::RPG::Client::EnviroCharaType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::EnviroCharaType, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11__CCTOR_OFFSET))();
	}

	static ::System::Void Method_2_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_2F0F99A12DB93F30_OFFSET))();
	}

	static ::System::Void Method_2_C4459EF0FA9AC615(::UnityEngine::GameObject* a1, ::RPG::Client::EnviroCharaType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::EnviroCharaType, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_C4459EF0FA9AC615_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_2_77C7045E7324E8B8(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_77C7045E7324E8B8_OFFSET))(a1);
	}

	static ::System::Void Method_2_3848E4903F0CA4C5(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_3848E4903F0CA4C5_OFFSET))(a1);
	}

	static ::System::Void Method_2_4F3148D4BAAF81F3(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_4F3148D4BAAF81F3_OFFSET))(a1);
	}

	static ::System::Void Method_2_85C81563BC6E2A2E(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_85C81563BC6E2A2E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_26874F67BD92CEC1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_26874F67BD92CEC1_OFFSET))();
	}

	static ::System::Void Method_2_B799DB9989A18F1D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_B799DB9989A18F1D_OFFSET))();
	}

	static ::System::Boolean Method_2_C0FF32B4D2022F8C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_C0FF32B4D2022F8C_OFFSET))(a1);
	}

	static ::RPG::Client::EnviroCharaType Method_2_F151D5B81568C792(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::Client::EnviroCharaType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_F151D5B81568C792_OFFSET))(a1);
	}

	::System::Void Method_2_9CFA7241D1009D47(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_9CFA7241D1009D47_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_89A99D29D0BEDD89(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_89A99D29D0BEDD89_OFFSET))(this, a1);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_2_F620DD2FD48DDF53(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_F620DD2FD48DDF53_OFFSET))(this, a1);
	}

	::System::Void Method_2_1D9EE327BF7D6281(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_1D9EE327BF7D6281_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC6B8E73BD3BD222(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_AC6B8E73BD3BD222_OFFSET))(this, a1);
	}

	::System::Void Method_2_47C3094B9BEBAE50()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_47C3094B9BEBAE50_OFFSET))(this);
	}

	::System::Void Method_2_B9686AC129B559BC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_B9686AC129B559BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}
};
