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

#define CLASS_2_7CCE1EDB2270143F_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13A0F680)
#define CLASS_2_7CCE1EDB2270143F_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13A0F820)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_17AD5C48212F5F49_OFFSET UNITYSDK_OFFSET(0x13A0E820)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_2779D76E9C9FA4B9_OFFSET UNITYSDK_OFFSET(0x13A0CB10)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x13A0D020)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x13A0EA20)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13A0CDD0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_43B6A22D5BDA77C3_OFFSET UNITYSDK_OFFSET(0x13A0E750)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x13A0ED90)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x13A0CA40)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13A0FBD0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13A0FB10)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5BD63F9A6C66D209_OFFSET UNITYSDK_OFFSET(0x13A0E6E0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5C3D695332368211_OFFSET UNITYSDK_OFFSET(0x13A0EB30)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x13A0FAB0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_681D94C021D5718B_OFFSET UNITYSDK_OFFSET(0x13A0D670)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x13A0C830)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_6C3C00382FD7383B_OFFSET UNITYSDK_OFFSET(0x13A0DC20)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_759A774D823F4596_OFFSET UNITYSDK_OFFSET(0x13A0F230)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x13A0EE90)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13A0EAE0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x13A0F4A0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x13A0F540)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x13A0F5E0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x13A0F400)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_ADAF3D8E40C25A96_OFFSET UNITYSDK_OFFSET(0x13A0F2F0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_AE26C11CBE96CD41_OFFSET UNITYSDK_OFFSET(0x13A0DA20)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_AFF05BB6B39A1949_OFFSET UNITYSDK_OFFSET(0x13A0EF50)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13A0CC70)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_B4905F4DB60461E8_OFFSET UNITYSDK_OFFSET(0x13A0F100)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_CBDE47B36085125D_OFFSET UNITYSDK_OFFSET(0x13A0DFA0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_CEE72EAC18ECC163_1_OFFSET UNITYSDK_OFFSET(0x13A0CD70)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0x13A0CD10)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_D5DFDF3E6CAE51D3_OFFSET UNITYSDK_OFFSET(0x13A0E150)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x13A0D130)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_DD5254EBB951A5C3_OFFSET UNITYSDK_OFFSET(0x13A0E430)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_EDE51B31CB05573F_OFFSET UNITYSDK_OFFSET(0x13A0C8E0)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x13A0D880)
#define CLASS_2_7CCE1EDB2270143F_METHOD_2_FD5A62D86DB6806C_OFFSET UNITYSDK_OFFSET(0x13A0DF00)
#define CLASS_2_7CCE1EDB2270143F_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x13A0C950)
#define CLASS_2_7CCE1EDB2270143F_ONRETURN_OFFSET UNITYSDK_OFFSET(0x13A0CA90)
#define CLASS_2_7CCE1EDB2270143F__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0F990)
#define CLASS_2_7CCE1EDB2270143F__ONBIND_OFFSET UNITYSDK_OFFSET(0x13A0CE60)
#define CLASS_2_7CCE1EDB2270143F__ONTICK_OFFSET UNITYSDK_OFFSET(0x13A0D7B0)
#define CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13A0FC90)
#define CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13A0FCF0)
#define CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13A0FB70)
#define CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x13A0FC30)

inline static constexpr unsigned int Class_2_7CCE1EDB2270143F_TypeDefinitionIndex = 66853;

class Class_2_7CCE1EDB2270143F : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_0 = 0x16; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x2; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	::RPG::GameCore::GameEntity* Field_2_3; // 0x60
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_4; // 0x68
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_5; // 0x70
	::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>* Field_2_6; // 0x78
	::RPG::Client::PrefabLoadMeta* Field_2_7; // 0x80
	::UnityEngine::Transform* Field_2_8; // 0x88
	::System::Collections::Generic::List_1<::Class_2_D798F8FBCDD8B14D*>* Field_2_9; // 0x90
	::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_10; // 0x98
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_11; // 0xA0
	::UnityEngine::Transform* Field_2_12; // 0xA8
	::System::Int32 Field_2_13; // 0xB0
	::System::Int32 Field_2_14; // 0xB4
	::System::Int32 Field_2_15; // 0xB8
	::System::Boolean Field_2_16; // 0xBC
	::System::Boolean Field_2_17; // 0xBD

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

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_5587AE4B03E68C58_OFFSET))(this);
	}

	::System::Void Method_2_681D94C021D5718B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_681D94C021D5718B_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE26C11CBE96CD41(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_AE26C11CBE96CD41_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD5A62D86DB6806C(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_FD5A62D86DB6806C_OFFSET))(this, a1);
	}

	::System::Void Method_2_D5DFDF3E6CAE51D3(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_D5DFDF3E6CAE51D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD5254EBB951A5C3(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_DD5254EBB951A5C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_17AD5C48212F5F49(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_17AD5C48212F5F49_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE51B31CB05573F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_EDE51B31CB05573F_OFFSET))(this, a1);
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_2_CBDE47B36085125D(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_CBDE47B36085125D_OFFSET))(this, a1);
	}

	::System::Void Method_2_5BD63F9A6C66D209(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_5BD63F9A6C66D209_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6C3C00382FD7383B(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_6C3C00382FD7383B_OFFSET))(this, a1);
	}

	::Class_2_D798F8FBCDD8B14D* Method_2_43B6A22D5BDA77C3(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_2_D798F8FBCDD8B14D*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_43B6A22D5BDA77C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::Class_2_D798F8FBCDD8B14D* Method_2_5C3D695332368211(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_2_D798F8FBCDD8B14D*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_5C3D695332368211_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Int32 Method_2_B4905F4DB60461E8(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_B4905F4DB60461E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2779D76E9C9FA4B9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_2779D76E9C9FA4B9_OFFSET))(this);
	}

	::System::Void Method_2_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_51AC7912135C5E23_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_759A774D823F4596(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_759A774D823F4596_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADAF3D8E40C25A96(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_ADAF3D8E40C25A96_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_2_AFF05BB6B39A1949(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_AFF05BB6B39A1949_OFFSET))(this, a1);
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

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
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

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7CCE1EDB2270143F___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
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
