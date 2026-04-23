#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_DDDB57AA67C3A9EA;
class Class_2_D798F8FBCDD8B14D;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7CCE1EDB2270143F_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC72ED40)
#define CLASS_2_7CCE1EDB2270143F_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC72EE90)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_05BBB0377D1BC772_OFFSET UNITYSDK_OFFSET(0xC72E220)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_09AB8FC0B8BA1B6E_OFFSET UNITYSDK_OFFSET(0xC72E910)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0xC72D1F0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_2579B977859E46CE_1_OFFSET UNITYSDK_OFFSET(0xC72DC40)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_2579B977859E46CE_OFFSET UNITYSDK_OFFSET(0xC72D380)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_36A43EE474699637_OFFSET UNITYSDK_OFFSET(0xC72E400)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0xC72C4E0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_4AD878BDCD4EC32C_OFFSET UNITYSDK_OFFSET(0xC72D9E0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_525124EFF71D885C_OFFSET UNITYSDK_OFFSET(0xC72D910)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xC72F200)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xC72F140)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5BD63F9A6C66D209_OFFSET UNITYSDK_OFFSET(0xC72DE70)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0xC72CB50)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0xC72CA70)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0xC72C2D0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_6C3C00382FD7383B_OFFSET UNITYSDK_OFFSET(0xC72D580)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_70F9CFE4F7ED39D2_OFFSET UNITYSDK_OFFSET(0xC72CFD0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_7109511B48FA4E9B_OFFSET UNITYSDK_OFFSET(0xC72DF90)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_759A774D823F4596_OFFSET UNITYSDK_OFFSET(0xC72E850)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_8D606B21B7CEC39E_OFFSET UNITYSDK_OFFSET(0xC72DEE0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xC72E4D0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xC72E1D0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xC72EB00)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xC72EBC0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0xC72EC80)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xC72EA40)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xC72E120)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC72C6E0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_B4905F4DB60461E8_OFFSET UNITYSDK_OFFSET(0xC72E720)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_C365440D57901CE0_OFFSET UNITYSDK_OFFSET(0xC72C5B0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0xC72F0D0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC72C840)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_CEE72EAC18ECC163_1_OFFSET UNITYSDK_OFFSET(0xC72C7E0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0xC72C780)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_E651E87D00D2520F_OFFSET UNITYSDK_OFFSET(0xC72E590)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_EDE51B31CB05573F_OFFSET UNITYSDK_OFFSET(0xC72C380)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_FD5A62D86DB6806C_OFFSET UNITYSDK_OFFSET(0xC72D870)
#define CLASS_2_7CCE1EDB2270143F_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC72C3F0)
#define CLASS_2_7CCE1EDB2270143F_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC72C530)
#define CLASS_2_7CCE1EDB2270143F__CTOR_OFFSET UNITYSDK_OFFSET(0xC72EFB0)
#define CLASS_2_7CCE1EDB2270143F__ONBIND_OFFSET UNITYSDK_OFFSET(0xC72C8B0)
#define CLASS_2_7CCE1EDB2270143F__ONTICK_OFFSET UNITYSDK_OFFSET(0xC72D120)
#define CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC72F2D0)
#define CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC72F330)
#define CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xC72F1A0)
#define CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xC72F260)

inline static constexpr unsigned int Class_2_7CCE1EDB2270143F_TypeDefinitionIndex = 65920;

class Class_2_7CCE1EDB2270143F : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_10 = 0x16; // 0x0
	// static const ::System::Int32 Field_2_11 = 0x2; // 0x0
	// static const ::System::Single Field_2_12; // 0x0
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_5; // 0x60
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_14; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70
	::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_16; // 0x78
	::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>* Field_2_0; // 0x80
	::RPG::GameCore::GameEntity* Field_2_13; // 0x88
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_7; // 0x90
	::RPG::Client::PrefabLoadMeta* Field_2_3; // 0x98
	::System::Collections::Generic::List_1<::Class_2_D798F8FBCDD8B14D*>* Field_2_4; // 0xA0
	::UnityEngine::Transform* Field_2_1; // 0xA8
	::System::Int32 Field_2_9; // 0xB0
	::System::Int32 Field_2_8; // 0xB4
	::System::Boolean Field_2_6; // 0xB8
	::System::Boolean Field_2_17; // 0xB9
	::System::Int32 Field_2_15; // 0xBC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_CEE72EAC18ECC163(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_CEE72EAC18ECC163_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CEE72EAC18ECC163_1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_CEE72EAC18ECC163_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Void Method_2_70F9CFE4F7ED39D2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_70F9CFE4F7ED39D2_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2579B977859E46CE(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_2579B977859E46CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD5A62D86DB6806C(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_FD5A62D86DB6806C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4AD878BDCD4EC32C(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_4AD878BDCD4EC32C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2579B977859E46CE_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_2579B977859E46CE_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7109511B48FA4E9B(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_7109511B48FA4E9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE51B31CB05573F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_EDE51B31CB05573F_OFFSET))(this, a1);
	}

	::System::Void Method_2_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_2_525124EFF71D885C(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_525124EFF71D885C_OFFSET))(this, a1);
	}

	::System::Void Method_2_5BD63F9A6C66D209(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_5BD63F9A6C66D209_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6C3C00382FD7383B(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_6C3C00382FD7383B_OFFSET))(this, a1);
	}

	::Class_2_D798F8FBCDD8B14D* Method_2_8D606B21B7CEC39E(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_2_D798F8FBCDD8B14D*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_8D606B21B7CEC39E_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void Method_2_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::Class_2_D798F8FBCDD8B14D* Method_2_05BBB0377D1BC772(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_2_D798F8FBCDD8B14D*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_05BBB0377D1BC772_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Int32 Method_2_B4905F4DB60461E8(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_B4905F4DB60461E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C365440D57901CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_C365440D57901CE0_OFFSET))(this);
	}

	::System::Void Method_2_36A43EE474699637()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_36A43EE474699637_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_759A774D823F4596(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_759A774D823F4596_OFFSET))(this, a1);
	}

	::System::Void Method_2_09AB8FC0B8BA1B6E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_09AB8FC0B8BA1B6E_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_2_E651E87D00D2520F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_E651E87D00D2520F_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
