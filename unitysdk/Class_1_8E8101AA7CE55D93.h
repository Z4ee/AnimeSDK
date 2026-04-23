#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8E8101AA7CE55D93_Class_1_3665D9DF747803CD;
class Class_1_AE54088C838A17D2;
class Class_1_E93F0AA2D7EA238D;
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8E8101AA7CE55D93_METHOD_1_1FF59A52EE8D2650_OFFSET UNITYSDK_OFFSET(0xA078280)
#define CLASS_1_8E8101AA7CE55D93_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0xA078410)
#define CLASS_1_8E8101AA7CE55D93_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA0783D0)
#define CLASS_1_8E8101AA7CE55D93_METHOD_1_579AE8386691F7B8_OFFSET UNITYSDK_OFFSET(0xA078540)
#define CLASS_1_8E8101AA7CE55D93_METHOD_1_6DC814719425E7BF_OFFSET UNITYSDK_OFFSET(0xA078150)
#define CLASS_1_8E8101AA7CE55D93_METHOD_1_802CAF29329DDCDE_OFFSET UNITYSDK_OFFSET(0xA078A30)
#define CLASS_1_8E8101AA7CE55D93_METHOD_1_8A8635214B7141C1_OFFSET UNITYSDK_OFFSET(0xA077D60)
#define CLASS_1_8E8101AA7CE55D93_METHOD_1_8C42645071C0A2F9_OFFSET UNITYSDK_OFFSET(0xA077FF0)
#define CLASS_1_8E8101AA7CE55D93_METHOD_1_C164425458231EE3_OFFSET UNITYSDK_OFFSET(0xA0781F0)
#define CLASS_1_8E8101AA7CE55D93_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xA0780E0)

inline static constexpr unsigned int Class_1_8E8101AA7CE55D93_TypeDefinitionIndex = 68222;

class Class_1_8E8101AA7CE55D93 : public ::System::Object
{
public:
	static ::Class_1_E93F0AA2D7EA238D** StaticGet_Field_1_7()
	{
		return (::Class_1_E93F0AA2D7EA238D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E8101AA7CE55D93_TypeDefinitionIndex)->GetStaticField(0x23770);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_6()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E8101AA7CE55D93_TypeDefinitionIndex)->GetStaticField(0x23778);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E8101AA7CE55D93_TypeDefinitionIndex)->GetStaticField(0x9160);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E8101AA7CE55D93_TypeDefinitionIndex)->GetStaticField(0x9164);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E8101AA7CE55D93_TypeDefinitionIndex)->GetStaticField(0x9168);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E8101AA7CE55D93_TypeDefinitionIndex)->GetStaticField(0x916C);
	}
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E8101AA7CE55D93_TypeDefinitionIndex)->GetStaticField(0x9170);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E8101AA7CE55D93_TypeDefinitionIndex)->GetStaticField(0x9174);
	}

	static ::System::Tuple_3<::System::Int32, ::System::Int32, ::System::Int32>* Method_1_8A8635214B7141C1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Tuple_3<::System::Int32, ::System::Int32, ::System::Int32>*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8E8101AA7CE55D93_METHOD_1_8A8635214B7141C1_OFFSET))(a1);
	}

	static ::System::Void Method_1_8C42645071C0A2F9(::Class_1_E93F0AA2D7EA238D* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::Class_1_E93F0AA2D7EA238D*, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E8101AA7CE55D93_METHOD_1_8C42645071C0A2F9_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E8101AA7CE55D93_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::Class_1_AE54088C838A17D2* Method_1_6DC814719425E7BF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::AlleyPackAnchorType a4)
	{
		return ((::Class_1_AE54088C838A17D2*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_8E8101AA7CE55D93_METHOD_1_6DC814719425E7BF_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_AE54088C838A17D2* Method_1_C164425458231EE3(::UnityEngine::Vector3 a1, ::RPG::GameCore::AlleyPackAnchorType a2)
	{
		return ((::Class_1_AE54088C838A17D2*(*)(::UnityEngine::Vector3, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_8E8101AA7CE55D93_METHOD_1_C164425458231EE3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1FF59A52EE8D2650(::Class_1_AE54088C838A17D2* a1)
	{
		return ((::System::Void(*)(::Class_1_AE54088C838A17D2*))((::PBYTE)hIl2Cpp + CLASS_1_8E8101AA7CE55D93_METHOD_1_1FF59A52EE8D2650_OFFSET))(a1);
	}

	static ::System::Void Method_1_369BB5E7FA6A1768(::Class_1_AE54088C838A17D2* a1)
	{
		return ((::System::Void(*)(::Class_1_AE54088C838A17D2*))((::PBYTE)hIl2Cpp + CLASS_1_8E8101AA7CE55D93_METHOD_1_369BB5E7FA6A1768_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E8101AA7CE55D93_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::Class_1_8E8101AA7CE55D93_Class_1_3665D9DF747803CD* Method_1_579AE8386691F7B8(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1)
	{
		return ((::Class_1_8E8101AA7CE55D93_Class_1_3665D9DF747803CD*(*)(::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + CLASS_1_8E8101AA7CE55D93_METHOD_1_579AE8386691F7B8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_802CAF29329DDCDE(::Class_1_AE54088C838A17D2* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::Class_1_AE54088C838A17D2*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8E8101AA7CE55D93_METHOD_1_802CAF29329DDCDE_OFFSET))(a1, a2, a3);
	}
};
