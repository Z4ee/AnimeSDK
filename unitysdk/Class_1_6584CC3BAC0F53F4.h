#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_867B6CE75953535A_1;
class Class_3_D6E9A038FA23103A;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }

#define CLASS_1_6584CC3BAC0F53F4_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8DED800)
#define CLASS_1_6584CC3BAC0F53F4_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8DEB5A0)
#define CLASS_1_6584CC3BAC0F53F4_METHOD_1_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x8DF0290)
#define CLASS_1_6584CC3BAC0F53F4_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x8DF0220)
#define CLASS_1_6584CC3BAC0F53F4_METHOD_1_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0x8DEFDE0)
#define CLASS_1_6584CC3BAC0F53F4_METHOD_1_367A5F1ECD1BC1A2_OFFSET UNITYSDK_OFFSET(0x8DEC2A0)
#define CLASS_1_6584CC3BAC0F53F4_METHOD_1_890F5FC885825F9E_OFFSET UNITYSDK_OFFSET(0x8DECD20)
#define CLASS_1_6584CC3BAC0F53F4_METHOD_1_9B97A7966B23A4A7_OFFSET UNITYSDK_OFFSET(0x8DED2E0)
#define CLASS_1_6584CC3BAC0F53F4_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x8DEFD80)
#define CLASS_1_6584CC3BAC0F53F4_METHOD_1_D58849E1895DD394_OFFSET UNITYSDK_OFFSET(0x8DEB4B0)
#define CLASS_1_6584CC3BAC0F53F4_METHOD_1_DE08956F0E560E44_OFFSET UNITYSDK_OFFSET(0x8DEFF10)
#define CLASS_1_6584CC3BAC0F53F4_METHOD_1_E5340AA01F92592A_OFFSET UNITYSDK_OFFSET(0x8DED150)
#define CLASS_1_6584CC3BAC0F53F4_METHOD_1_F0D278B2857F2749_OFFSET UNITYSDK_OFFSET(0x8DED660)
#define CLASS_1_6584CC3BAC0F53F4_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x8DEBEB0)
#define CLASS_1_6584CC3BAC0F53F4__CTOR_OFFSET UNITYSDK_OFFSET(0x8DEB480)

inline static constexpr unsigned int Class_1_6584CC3BAC0F53F4_TypeDefinitionIndex = 62470;

class Class_1_6584CC3BAC0F53F4 : public ::System::Object
{
public:
	::Class_1_867B6CE75953535A_1* Field_1_8; // 0x10
	::Class_3_D6E9A038FA23103A* Field_1_9; // 0x18
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* Field_1_13; // 0x20
	::System::Single Field_1_5; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Boolean Field_1_10; // 0x30
	::System::Boolean Field_1_11; // 0x31
	::System::Boolean Field_1_0; // 0x32
	::System::Boolean Field_1_1; // 0x33
	::System::Single Field_1_7; // 0x34
	::System::Single Field_1_6; // 0x38
	::System::Single Field_1_3; // 0x3C
	::System::Single Field_1_2; // 0x40
	::UnityEngine::Vector3 Field_1_12; // 0x44

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D58849E1895DD394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4_METHOD_1_D58849E1895DD394_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_367A5F1ECD1BC1A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4_METHOD_1_367A5F1ECD1BC1A2_OFFSET))(this);
	}

	::System::Void Method_1_9B97A7966B23A4A7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4_METHOD_1_9B97A7966B23A4A7_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4_EXECUTE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F0D278B2857F2749()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4_METHOD_1_F0D278B2857F2749_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Single Method_1_E5340AA01F92592A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4_METHOD_1_E5340AA01F92592A_OFFSET))(this, a1);
	}

	::System::Void Method_1_890F5FC885825F9E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4_METHOD_1_890F5FC885825F9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2ADBA02EC0F7C432(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4_METHOD_1_2ADBA02EC0F7C432_OFFSET))(this, a1);
	}

	::System::Void Method_1_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4_METHOD_1_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE08956F0E560E44(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4_METHOD_1_DE08956F0E560E44_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6584CC3BAC0F53F4_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}
};
