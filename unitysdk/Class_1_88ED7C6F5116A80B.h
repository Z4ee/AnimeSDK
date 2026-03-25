#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EB076DF04E71EFEA;
class Class_2_15E317187C4E8254;
class Class_2_7BDDD3E2B6D1C8EC;
class Class_3_626F93E2306641CC;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceTrapMonoView; }
namespace UnityEngine { class Animator; }

#define CLASS_1_88ED7C6F5116A80B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8905430)
#define CLASS_1_88ED7C6F5116A80B_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8905370)
#define CLASS_1_88ED7C6F5116A80B_METHOD_1_091AF5D63D57D134_OFFSET UNITYSDK_OFFSET(0x8905D50)
#define CLASS_1_88ED7C6F5116A80B_METHOD_1_09732CB72EAAFC26_OFFSET UNITYSDK_OFFSET(0x8906D90)
#define CLASS_1_88ED7C6F5116A80B_METHOD_1_1CDA2E56D4BCB87D_OFFSET UNITYSDK_OFFSET(0x89066B0)
#define CLASS_1_88ED7C6F5116A80B_METHOD_1_28693131CDCECD7C_OFFSET UNITYSDK_OFFSET(0x89052F0)
#define CLASS_1_88ED7C6F5116A80B_METHOD_1_327150EAB7E6F478_OFFSET UNITYSDK_OFFSET(0x8906770)
#define CLASS_1_88ED7C6F5116A80B_METHOD_1_46F246ED70ED34E8_OFFSET UNITYSDK_OFFSET(0x89077D0)
#define CLASS_1_88ED7C6F5116A80B_METHOD_1_5E60BD4BBD880D2A_OFFSET UNITYSDK_OFFSET(0x8907980)
#define CLASS_1_88ED7C6F5116A80B_METHOD_1_67E0E4338F40B924_OFFSET UNITYSDK_OFFSET(0x8907400)
#define CLASS_1_88ED7C6F5116A80B_METHOD_1_81483EC470411B74_OFFSET UNITYSDK_OFFSET(0x8905B80)
#define CLASS_1_88ED7C6F5116A80B_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x8907370)
#define CLASS_1_88ED7C6F5116A80B_METHOD_1_EAB4FEBD22533B26_OFFSET UNITYSDK_OFFSET(0x8907860)
#define CLASS_1_88ED7C6F5116A80B_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x8907330)
#define CLASS_1_88ED7C6F5116A80B__CCTOR_OFFSET UNITYSDK_OFFSET(0x8907EB0)
#define CLASS_1_88ED7C6F5116A80B__CTOR_OFFSET UNITYSDK_OFFSET(0x8905360)

inline static constexpr unsigned int Class_1_88ED7C6F5116A80B_TypeDefinitionIndex = 63591;

class Class_1_88ED7C6F5116A80B : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88ED7C6F5116A80B_TypeDefinitionIndex)->GetStaticField(0x13060);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88ED7C6F5116A80B_TypeDefinitionIndex)->GetStaticField(0x13064);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88ED7C6F5116A80B_TypeDefinitionIndex)->GetStaticField(0x13068);
	}
	::Class_3_626F93E2306641CC* Field_1_0; // 0x10

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B__CCTOR_OFFSET))();
	}

	static ::Class_1_88ED7C6F5116A80B* Method_1_28693131CDCECD7C(::Class_3_626F93E2306641CC* a1)
	{
		return ((::Class_1_88ED7C6F5116A80B*(*)(::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B_METHOD_1_28693131CDCECD7C_OFFSET))(a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_81483EC470411B74(::Class_1_EB076DF04E71EFEA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB076DF04E71EFEA*))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B_METHOD_1_81483EC470411B74_OFFSET))(this, a1);
	}

	::System::Void Method_1_09732CB72EAAFC26(::Class_2_7BDDD3E2B6D1C8EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7BDDD3E2B6D1C8EC*))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B_METHOD_1_09732CB72EAAFC26_OFFSET))(this, a1);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_67E0E4338F40B924(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B_METHOD_1_67E0E4338F40B924_OFFSET))(this, a1);
	}

	::System::Void Method_1_091AF5D63D57D134(::Class_2_15E317187C4E8254* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B_METHOD_1_091AF5D63D57D134_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1CDA2E56D4BCB87D(::Class_2_15E317187C4E8254* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView*))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B_METHOD_1_1CDA2E56D4BCB87D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EAB4FEBD22533B26(::UnityEngine::Animator* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B_METHOD_1_EAB4FEBD22533B26_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_327150EAB7E6F478(::Class_2_15E317187C4E8254* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B_METHOD_1_327150EAB7E6F478_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5E60BD4BBD880D2A(::Class_2_15E317187C4E8254* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView*))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B_METHOD_1_5E60BD4BBD880D2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_46F246ED70ED34E8(::UnityEngine::Animator* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88ED7C6F5116A80B_METHOD_1_46F246ED70ED34E8_OFFSET))(this, a1, a2);
	}
};
