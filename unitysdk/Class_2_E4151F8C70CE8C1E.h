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

#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x117539D0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_0278C58BA5A6AE4B_OFFSET UNITYSDK_OFFSET(0x11753C00)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x11750090)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_08FFEF4D9AFC80E9_OFFSET UNITYSDK_OFFSET(0x11750C00)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_0A6D544248F11F3A_OFFSET UNITYSDK_OFFSET(0x11753380)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_14F96CE90F77CBB9_OFFSET UNITYSDK_OFFSET(0x1174FC00)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_17820CA3EEBFB6BE_OFFSET UNITYSDK_OFFSET(0x11753EE0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_23B9605F2F8322B7_OFFSET UNITYSDK_OFFSET(0x1174F0F0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_2FF79950A677C64B_OFFSET UNITYSDK_OFFSET(0x1174FEA0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_3C0F7658751C32B0_OFFSET UNITYSDK_OFFSET(0x11751790)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_3D9F24E92E34F265_OFFSET UNITYSDK_OFFSET(0x11752C40)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1174B520)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_44E1C4BA1123578B_OFFSET UNITYSDK_OFFSET(0x11753C70)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0x1174A5F0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_47B46C40CF547193_OFFSET UNITYSDK_OFFSET(0x11751830)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_5B2DBD7227D80209_OFFSET UNITYSDK_OFFSET(0x1174B610)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x1174AC90)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_73F0F3D9A8276768_OFFSET UNITYSDK_OFFSET(0x11752FF0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_7AB000B2DA3DF7D1_OFFSET UNITYSDK_OFFSET(0x11753140)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_7D7AA2DF949AC657_OFFSET UNITYSDK_OFFSET(0x11751960)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_7FD3F31F3302F376_OFFSET UNITYSDK_OFFSET(0x1174A440)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_88741C1A51414A3C_OFFSET UNITYSDK_OFFSET(0x1174A330)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x11753FF0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_95CDF48BEFEBA001_OFFSET UNITYSDK_OFFSET(0x11751E50)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x1174B7B0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1174F350)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_9E330D7B0B62EC19_OFFSET UNITYSDK_OFFSET(0x1174B280)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x11751DD0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B0091B0E1DC92674_OFFSET UNITYSDK_OFFSET(0x117534B0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B08F45C7106CDB82_OFFSET UNITYSDK_OFFSET(0x11752670)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0x11750800)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1174B000)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x1174AA10)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1174F790)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x1174A910)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_B9BFE724809472F9_OFFSET UNITYSDK_OFFSET(0x11751A80)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x1174F410)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_C2984542C0604D2C_OFFSET UNITYSDK_OFFSET(0x11752E00)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_CD49AD78BC19D569_OFFSET UNITYSDK_OFFSET(0x1174F8D0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_D15F52B395531E3F_OFFSET UNITYSDK_OFFSET(0x1174A530)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_D5C60D4BCF120194_OFFSET UNITYSDK_OFFSET(0x11753270)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_DA5597481994D152_OFFSET UNITYSDK_OFFSET(0x1174B0B0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x11750F60)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x1174AA80)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x1174F740)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_F9BEB44328A0ACF6_OFFSET UNITYSDK_OFFSET(0x117535B0)
#define CLASS_2_E4151F8C70CE8C1E_METHOD_2_FC5DD04EF996966E_OFFSET UNITYSDK_OFFSET(0x11751400)
#define CLASS_2_E4151F8C70CE8C1E__CTOR_OFFSET UNITYSDK_OFFSET(0x11753F30)

inline static constexpr unsigned int Class_2_E4151F8C70CE8C1E_TypeDefinitionIndex = 57158;

class Class_2_E4151F8C70CE8C1E : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::GameCore::CharacterModelComponent* Field_2_7; // 0x18
	::UnityEngine::Transform* Field_2_11; // 0x20
	::UnityEngine::Transform* Field_2_10; // 0x28
	::RPG::GameCore::TransformComponent* Field_2_6; // 0x30
	::UnityEngine::Rigidbody* Field_2_8; // 0x38
	::UnityEngine::Transform* Field_2_12; // 0x40
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_3; // 0x48
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_4; // 0x50
	::Class_2_523C55AEA55804D8* Field_2_5; // 0x58
	::Il2CppArray<::RPG::Client::Effect_AfterImageNew*>* Field_2_28; // 0x60
	::RPG::GameCore::GameEntity* Field_2_1; // 0x68
	::RPG::Client::NotifyHandler* Field_2_30; // 0x70
	::RPG::Client::AttachPointMapping* Field_2_9; // 0x78
	::RPG::Client::NotifyHandler* Field_2_31; // 0x80
	::UnityEngine::Vector3 Field_2_17; // 0x88
	::System::Single Field_2_18; // 0x94
	::UnityEngine::Vector3 Field_2_29; // 0x98
	::RPG::Client::ScaleFollowOption Field_2_25; // 0xA4
	::UnityEngine::Vector3 Field_2_16; // 0xA8
	::RPG::Client::ModelFlipOption Field_2_26; // 0xB4
	::System::Single Field_2_14; // 0xB8
	::System::Single Field_2_13; // 0xBC
	::System::Int32 Field_2_15; // 0xC0
	::System::Single Field_2_21; // 0xC4
	::UnityEngine::Vector3 Field_2_2; // 0xC8
	::UnityEngine::Vector3 Field_2_19; // 0xD4
	::RPG::Client::PositionFollowOption Field_2_23; // 0xE0
	::UnityEngine::Vector3 Field_2_20; // 0xE4
	::RPG::Client::RotationFollowOption Field_2_24; // 0xF0
	::UnityEngine::Vector3 Field_2_22; // 0xF4
	::System::Boolean Field_2_27; // 0x100
	::System::Boolean Field_2_0; // 0x101

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

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_F206290BA342BA13_OFFSET))(this);
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

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_96189EDEF38976A6_OFFSET))(this);
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

	::System::Void Method_2_FC5DD04EF996966E(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_E4151F8C70CE8C1E_METHOD_2_FC5DD04EF996966E_OFFSET))(this, a1);
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
