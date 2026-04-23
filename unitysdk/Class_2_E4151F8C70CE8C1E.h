#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/ModelFlipOption.h"
#include "unitysdk/RPG/Client/PositionFollowOption.h"
#include "unitysdk/RPG/Client/RotationFollowOption.h"
#include "unitysdk/RPG/Client/ScaleFollowOption.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_523C55AEA55804D8;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class Effect_AfterImageNew; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x10ACA680)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_0278C58BA5A6AE4B_OFFSET UNITYSDK_OFFSET(0x10ACA8B0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x10AC6DF0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_08FFEF4D9AFC80E9_OFFSET UNITYSDK_OFFSET(0x10AC7960)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_0A6D544248F11F3A_OFFSET UNITYSDK_OFFSET(0x10ACA030)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x10AC2580)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_14F96CE90F77CBB9_OFFSET UNITYSDK_OFFSET(0x10AC6960)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_17820CA3EEBFB6BE_OFFSET UNITYSDK_OFFSET(0x10ACAB90)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_23B9605F2F8322B7_OFFSET UNITYSDK_OFFSET(0x10AC5E50)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_2FF79950A677C64B_OFFSET UNITYSDK_OFFSET(0x10AC6C00)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_3C0F7658751C32B0_OFFSET UNITYSDK_OFFSET(0x10AC8440)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_3D9F24E92E34F265_OFFSET UNITYSDK_OFFSET(0x10AC98F0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10AC22F0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_44E1C4BA1123578B_OFFSET UNITYSDK_OFFSET(0x10ACA920)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0x10AC11D0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_47B46C40CF547193_OFFSET UNITYSDK_OFFSET(0x10AC84E0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_55ABF44F8A6F5F3E_OFFSET UNITYSDK_OFFSET(0x10AC8160)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_5B2DBD7227D80209_OFFSET UNITYSDK_OFFSET(0x10AC23E0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x10AC1A60)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_73F0F3D9A8276768_OFFSET UNITYSDK_OFFSET(0x10AC9CA0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_7AB000B2DA3DF7D1_OFFSET UNITYSDK_OFFSET(0x10AC9DF0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_7D7AA2DF949AC657_OFFSET UNITYSDK_OFFSET(0x10AC8610)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_7FD3F31F3302F376_OFFSET UNITYSDK_OFFSET(0x10AC1020)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_88741C1A51414A3C_OFFSET UNITYSDK_OFFSET(0x10AC0F10)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x10ACACA0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_95CDF48BEFEBA001_OFFSET UNITYSDK_OFFSET(0x10AC8B00)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10AC60B0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_9E330D7B0B62EC19_OFFSET UNITYSDK_OFFSET(0x10AC2050)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x10AC8A80)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B0091B0E1DC92674_OFFSET UNITYSDK_OFFSET(0x10ACA160)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B08F45C7106CDB82_OFFSET UNITYSDK_OFFSET(0x10AC9320)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0x10AC7560)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10AC1DD0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x10AC1600)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x10AC64F0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x10AC1500)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B9BFE724809472F9_OFFSET UNITYSDK_OFFSET(0x10AC8730)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x10AC6170)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_C2984542C0604D2C_OFFSET UNITYSDK_OFFSET(0x10AC9AB0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_CD49AD78BC19D569_OFFSET UNITYSDK_OFFSET(0x10AC6630)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_D15F52B395531E3F_OFFSET UNITYSDK_OFFSET(0x10AC1110)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_D5C60D4BCF120194_OFFSET UNITYSDK_OFFSET(0x10AC9F20)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_DA5597481994D152_OFFSET UNITYSDK_OFFSET(0x10AC1E80)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x10AC7CC0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x10AC1670)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x10AC64A0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_F9BEB44328A0ACF6_OFFSET UNITYSDK_OFFSET(0x10ACA260)
#define CLASS_2_E4151F8C70CE8C1E__CTOR_OFFSET UNITYSDK_OFFSET(0x10ACABE0)

inline static constexpr unsigned int Class_2_E4151F8C70CE8C1E_TypeDefinitionIndex = 64410;

class Class_2_E4151F8C70CE8C1E : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::Client::NotifyHandler* Field_2_30; // 0x18
	::RPG::GameCore::TransformComponent* Field_2_6; // 0x20
	::Class_2_523C55AEA55804D8* Field_2_5; // 0x28
	::UnityEngine::Rigidbody* Field_2_8; // 0x30
	::UnityEngine::Transform* Field_2_11; // 0x38
	::RPG::GameCore::CharacterModelComponent* Field_2_7; // 0x40
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_3; // 0x48
	::UnityEngine::Transform* Field_2_12; // 0x50
	::Il2CppArray<::RPG::Client::Effect_AfterImageNew*>* Field_2_28; // 0x58
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_4; // 0x60
	::RPG::Client::NotifyHandler* Field_2_31; // 0x68
	::UnityEngine::Transform* Field_2_10; // 0x70
	::RPG::Client::AttachPointMapping* Field_2_9; // 0x78
	::RPG::GameCore::GameEntity* Field_2_1; // 0x80
	::System::Single Field_2_14; // 0x88
	::UnityEngine::Vector3 Field_2_22; // 0x8C
	::RPG::Client::ModelFlipOption Field_2_26; // 0x98
	::UnityEngine::Vector3 Field_2_16; // 0x9C
	::UnityEngine::Vector3 Field_2_2; // 0xA8
	::UnityEngine::Vector3 Field_2_17; // 0xB4
	::UnityEngine::Vector3 Field_2_20; // 0xC0
	::System::Int32 Field_2_15; // 0xCC
	::UnityEngine::Vector3 Field_2_29; // 0xD0
	::System::Single Field_2_21; // 0xDC
	::System::Boolean Field_2_27; // 0xE0
	::System::Boolean Field_2_0; // 0xE1
	::RPG::Client::RotationFollowOption Field_2_24; // 0xE4
	::UnityEngine::Vector3 Field_2_19; // 0xE8
	::RPG::Client::ScaleFollowOption Field_2_25; // 0xF4
	::RPG::Client::PositionFollowOption Field_2_23; // 0xF8
	::System::Single Field_2_13; // 0xFC
	::System::Single Field_2_18; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_88741C1A51414A3C(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_88741C1A51414A3C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D15F52B395531E3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_D15F52B395531E3F_OFFSET))(this);
	}

	::System::Void Method_2_7FD3F31F3302F376()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_7FD3F31F3302F376_OFFSET))(this);
	}

	::System::Void Method_2_464F9487BF0D77F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_464F9487BF0D77F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_F5B4708E7805566C_OFFSET))(this);
	}

	::System::Void Method_2_9E330D7B0B62EC19(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_9E330D7B0B62EC19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5B2DBD7227D80209()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_5B2DBD7227D80209_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_2_CD49AD78BC19D569(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_CD49AD78BC19D569_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Boolean Method_2_14F96CE90F77CBB9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_14F96CE90F77CBB9_OFFSET))(this);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_2_3C0F7658751C32B0(::UnityEngine::ParticleSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_3C0F7658751C32B0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_47B46C40CF547193(::UnityEngine::ParticleSystem* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_47B46C40CF547193_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7D7AA2DF949AC657(::UnityEngine::ParticleSystem_MinMaxCurve a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_7D7AA2DF949AC657_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_2_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Void Method_2_F9BEB44328A0ACF6(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_F9BEB44328A0ACF6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_0278C58BA5A6AE4B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_0278C58BA5A6AE4B_OFFSET))(this, a1);
	}

	::System::Void Method_2_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_55ABF44F8A6F5F3E(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_55ABF44F8A6F5F3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_08FFEF4D9AFC80E9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_08FFEF4D9AFC80E9_OFFSET))(this, a1);
	}

	::System::Void Method_2_23B9605F2F8322B7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_23B9605F2F8322B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_95CDF48BEFEBA001(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_95CDF48BEFEBA001_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B08F45C7106CDB82(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_B08F45C7106CDB82_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_73F0F3D9A8276768(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_73F0F3D9A8276768_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_3D9F24E92E34F265()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_3D9F24E92E34F265_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C2984542C0604D2C()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_C2984542C0604D2C_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_B9BFE724809472F9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_B9BFE724809472F9_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_44E1C4BA1123578B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_44E1C4BA1123578B_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7AB000B2DA3DF7D1(::UnityEngine::Camera* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_7AB000B2DA3DF7D1_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_D5C60D4BCF120194(::UnityEngine::Camera* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_D5C60D4BCF120194_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_0A6D544248F11F3A(::UnityEngine::Camera* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_0A6D544248F11F3A_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_B0091B0E1DC92674(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_B0091B0E1DC92674_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::MonoEffectPluginFollow* Method_2_17820CA3EEBFB6BE()
	{
		return ((::RPG::Client::MonoEffectPluginFollow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_17820CA3EEBFB6BE_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_2FF79950A677C64B()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_2FF79950A677C64B_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_DA5597481994D152()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_DA5597481994D152_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
