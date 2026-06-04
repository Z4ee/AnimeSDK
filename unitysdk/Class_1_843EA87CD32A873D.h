#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1BD9A352EF1010C8;
class Class_1_C47576BEFCFAD595;
class Class_2_55373297DA27393D;
class Class_2_F3F43255EC92B83B;
namespace RPG::Client::ParkourGame { class MonoParkourProjectile; }
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Fire; }
namespace UnityEngine { class Transform; }

#define CLASS_1_843EA87CD32A873D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8AB1C0)
#define CLASS_1_843EA87CD32A873D_METHOD_1_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0xA8ABC00)
#define CLASS_1_843EA87CD32A873D_METHOD_1_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0xA8AB150)
#define CLASS_1_843EA87CD32A873D_METHOD_1_AB7031FBF32F59B5_OFFSET UNITYSDK_OFFSET(0xA8ABC80)
#define CLASS_1_843EA87CD32A873D_METHOD_1_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0xA8AB240)
#define CLASS_1_843EA87CD32A873D_METHOD_1_C6B687B7DECD24D2_OFFSET UNITYSDK_OFFSET(0xA8AB0F0)
#define CLASS_1_843EA87CD32A873D_METHOD_1_DFD71AA0FC97E79E_OFFSET UNITYSDK_OFFSET(0xA8ABD10)
#define CLASS_1_843EA87CD32A873D_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xA8ABA20)
#define CLASS_1_843EA87CD32A873D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA8ABD20)
#define CLASS_1_843EA87CD32A873D__CTOR_OFFSET UNITYSDK_OFFSET(0xA8AAE20)

inline static constexpr unsigned int Class_1_843EA87CD32A873D_TypeDefinitionIndex = 69298;

class Class_1_843EA87CD32A873D : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::UnityEngine::Transform* Field_1_2; // 0x10
	::Class_1_C47576BEFCFAD595* Field_1_3; // 0x18
	::Class_1_1BD9A352EF1010C8* Field_1_4; // 0x20
	::Class_2_F3F43255EC92B83B* Field_1_5; // 0x28
	::RPG::Client::ParkourGame::MonoParkourProjectile* Field_1_6; // 0x30
	::System::Single Field_1_7; // 0x38
	::System::Boolean Field_1_8; // 0x3C

	::System::Void _ctor(::Class_1_C47576BEFCFAD595* a1, ::Class_2_F3F43255EC92B83B* a2, ::Class_1_1BD9A352EF1010C8* a3, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47576BEFCFAD595*, ::Class_2_F3F43255EC92B83B*, ::Class_1_1BD9A352EF1010C8*, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire*))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Transform* Method_1_C6B687B7DECD24D2()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_C6B687B7DECD24D2_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_AF2CFBAAD2629B3B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_AF2CFBAAD2629B3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_1_3C8305164A0C9B06(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB7031FBF32F59B5(::Class_2_55373297DA27393D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_55373297DA27393D*))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_AB7031FBF32F59B5_OFFSET))(this, a1);
	}

	::RPG::Client::ParkourGame::MonoParkourProjectile* Method_1_DFD71AA0FC97E79E()
	{
		return ((::RPG::Client::ParkourGame::MonoParkourProjectile*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_DFD71AA0FC97E79E_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
