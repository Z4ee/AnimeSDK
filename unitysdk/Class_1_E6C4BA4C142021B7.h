#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/FollowState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_523C55AEA55804D8;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_E6C4BA4C142021B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB928810)
#define CLASS_1_E6C4BA4C142021B7_GET_INSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0xB9287F0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xB928500)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xB928250)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_2E58B43123215F9C_OFFSET UNITYSDK_OFFSET(0xB927130)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_3B2051C60621D523_1_OFFSET UNITYSDK_OFFSET(0xB9283C0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0xB9273F0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0xB929340)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xB9287A0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_41222BE43C0D6E56_OFFSET UNITYSDK_OFFSET(0xB9280D0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_510C3C62CAC002C3_1_OFFSET UNITYSDK_OFFSET(0xB928460)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0xB927EA0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_5757B3ADFA1F6ECF_OFFSET UNITYSDK_OFFSET(0xB928AF0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0xB927700)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_71456C0B214E6DAC_OFFSET UNITYSDK_OFFSET(0xB927C30)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_71912DBB0D113575_OFFSET UNITYSDK_OFFSET(0xB927490)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0xB9288D0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0xB9277E0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0xB927F40)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0xB928170)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xB9286E0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xB928620)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0xB928950)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB929390)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB929300)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_CEDFBBF689E64233_OFFSET UNITYSDK_OFFSET(0xB9293E0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB929A80)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0xB928020)
#define CLASS_1_E6C4BA4C142021B7_SET_INSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0xB928800)
#define CLASS_1_E6C4BA4C142021B7__CCTOR_OFFSET UNITYSDK_OFFSET(0xB929A90)
#define CLASS_1_E6C4BA4C142021B7__CTOR_OFFSET UNITYSDK_OFFSET(0xB927090)

inline static constexpr unsigned int Class_1_E6C4BA4C142021B7_TypeDefinitionIndex = 52685;

class Class_1_E6C4BA4C142021B7 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_DLDNGCLHAJL()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E6C4BA4C142021B7_TypeDefinitionIndex)->GetStaticField(0xB800);
	}
	::Class_2_523C55AEA55804D8* OMDENPENMKE; // 0x10
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x18
	::RPG::GameCore::TransformComponent* AHLEHJFOMCF; // 0x20
	::RPG::GameCore::AdventureCharacterController* COCFMJKINOP; // 0x28
	::RPG::GameCore::AdventureCharacterController* ICKHCACDNCA; // 0x30
	::RPG::GameCore::GameEntity* BCCAEHCKGEI; // 0x38
	::RPG::GameCore::TransformComponent* DPPIHOCPIFH; // 0x40
	::Class_2_A0580152EB393340* JCHMONHBIFJ; // 0x48
	::System::Single PBIAELMHHIH; // 0x50
	::System::Boolean NMDOFJMPPKE; // 0x54
	::System::Single JHIGHBAOJHJ; // 0x58
	::System::Single IOHKLBJDLKA; // 0x5C
	::System::Boolean IMEAHGMOIJK; // 0x60
	::System::Boolean _InSpecialState_k__BackingField; // 0x61
	::System::Boolean NNCBEADHMPG; // 0x62
	::System::Boolean FFDNNGBJCDN; // 0x63
	::System::Boolean HAIIJPPJGNK; // 0x64
	::System::Boolean LPDOCBAGHJD; // 0x65
	::System::Boolean BHKFCAAFOIF; // 0x66
	::System::Boolean DHMLHNKKOFB; // 0x67
	::RPG::GameCore::CharacterMotionFlag KMKPGPIDKJF; // 0x68
	::System::Single NOKGBLAOICJ; // 0x6C
	::System::Single GFEJNOIBCED; // 0x70
	::System::Single NPDIOOGKENJ; // 0x74
	::RPG::GameCore::FollowState OJLELGFBAFL; // 0x78

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7__CCTOR_OFFSET))();
	}

	::System::Void Method_1_2E58B43123215F9C(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_2E58B43123215F9C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_1_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_3B2051C60621D523_OFFSET))(this);
	}

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_1_41222BE43C0D6E56(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_41222BE43C0D6E56_OFFSET))(this, a1);
	}

	::System::Void Method_1_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_1_3B2051C60621D523_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_3B2051C60621D523_1_OFFSET))(this);
	}

	::System::Void Method_1_510C3C62CAC002C3_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_510C3C62CAC002C3_1_OFFSET))(this);
	}

	::System::Void Method_1_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_71912DBB0D113575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_71912DBB0D113575_OFFSET))(this);
	}

	::System::Void Method_1_71456C0B214E6DAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_71456C0B214E6DAC_OFFSET))(this);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean get_InSpecialState()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_GET_INSPECIALSTATE_OFFSET))(this);
	}

	::System::Void set_InSpecialState(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_SET_INSPECIALSTATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5757B3ADFA1F6ECF(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_5757B3ADFA1F6ECF_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_CEDFBBF689E64233(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_CEDFBBF689E64233_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
