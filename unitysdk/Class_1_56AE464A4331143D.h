#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_56AE464A4331143D_ColliderConfigLoadState.h"
#include "unitysdk/Class_1_56AE464A4331143D_Struct_2_1CEEDA3D78689FA3.h"
#include "unitysdk/System/Object.h"

class Class_1_78426C782D76CABD;
class Class_2_4C1AAFE95CDED36F;
class Class_2_54F841945D52EDAE;
namespace RPG::GameCore { class FreeStyleAnimEventInfoConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_56AE464A4331143D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCD8980)
#define CLASS_1_56AE464A4331143D_METHOD_1_06D5C30246BE9B7C_OFFSET UNITYSDK_OFFSET(0xCCD8440)
#define CLASS_1_56AE464A4331143D_METHOD_1_32A0A364EED78E32_OFFSET UNITYSDK_OFFSET(0xCCD8360)
#define CLASS_1_56AE464A4331143D_METHOD_1_3440A3FC12CEA4D8_OFFSET UNITYSDK_OFFSET(0xCCD8910)
#define CLASS_1_56AE464A4331143D_METHOD_1_5D9591118D404F9A_OFFSET UNITYSDK_OFFSET(0xCCD8290)
#define CLASS_1_56AE464A4331143D_METHOD_1_7BD697A06510B9B6_OFFSET UNITYSDK_OFFSET(0xCCD7C90)
#define CLASS_1_56AE464A4331143D_METHOD_1_7E752187DD4365A0_OFFSET UNITYSDK_OFFSET(0xCCD7BB0)
#define CLASS_1_56AE464A4331143D_METHOD_1_8A96F90029FC5456_1_OFFSET UNITYSDK_OFFSET(0xCCD8090)
#define CLASS_1_56AE464A4331143D_METHOD_1_8A96F90029FC5456_OFFSET UNITYSDK_OFFSET(0xCCD7FF0)
#define CLASS_1_56AE464A4331143D_METHOD_1_8F70B57E6616430E_OFFSET UNITYSDK_OFFSET(0xCCD8760)
#define CLASS_1_56AE464A4331143D_METHOD_1_935DEB0B5FC22BF4_OFFSET UNITYSDK_OFFSET(0xCCD8AC0)
#define CLASS_1_56AE464A4331143D_METHOD_1_942A7C097C022ACE_OFFSET UNITYSDK_OFFSET(0xCCD7C20)
#define CLASS_1_56AE464A4331143D_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xCCD80F0)
#define CLASS_1_56AE464A4331143D__CTOR_OFFSET UNITYSDK_OFFSET(0xCCD92B0)

inline static constexpr unsigned int Class_1_56AE464A4331143D_TypeDefinitionIndex = 69239;

class Class_1_56AE464A4331143D : public ::System::Object
{
public:
	// static const ::System::String* MFABMKAPLFK; // 0x0
	// static const ::System::Single ELEANBDGOBF; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::Class_1_56AE464A4331143D_Struct_2_1CEEDA3D78689FA3>*>* INIBJIEEMGN; // 0x10
	::Class_1_56AE464A4331143D_ColliderConfigLoadState FMNJGFHAPEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7E752187DD4365A0(::Class_2_4C1AAFE95CDED36F* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C1AAFE95CDED36F*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_METHOD_1_7E752187DD4365A0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_942A7C097C022ACE(::Class_2_54F841945D52EDAE* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_54F841945D52EDAE*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_METHOD_1_942A7C097C022ACE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7BD697A06510B9B6(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Boolean a3, ::Class_1_78426C782D76CABD* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Boolean, ::Class_1_78426C782D76CABD*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_METHOD_1_7BD697A06510B9B6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_8F70B57E6616430E(::Class_1_78426C782D76CABD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_78426C782D76CABD*))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_METHOD_1_8F70B57E6616430E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_06D5C30246BE9B7C(::UnityEngine::GameObject* a1, ::Class_1_78426C782D76CABD* a2, ::System::String* a3, ::Il2CppArray<::Class_1_56AE464A4331143D_Struct_2_1CEEDA3D78689FA3>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_78426C782D76CABD*, ::System::String*, ::Il2CppArray<::Class_1_56AE464A4331143D_Struct_2_1CEEDA3D78689FA3>*))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_METHOD_1_06D5C30246BE9B7C_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8A96F90029FC5456(::Class_1_78426C782D76CABD* a1)
	{
		return ((::System::Void(*)(::Class_1_78426C782D76CABD*))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_METHOD_1_8A96F90029FC5456_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A96F90029FC5456_1(::Class_1_78426C782D76CABD* a1)
	{
		return ((::System::Void(*)(::Class_1_78426C782D76CABD*))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_METHOD_1_8A96F90029FC5456_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_32A0A364EED78E32(::Class_1_78426C782D76CABD* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_1_78426C782D76CABD*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_METHOD_1_32A0A364EED78E32_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5D9591118D404F9A(::Class_1_78426C782D76CABD* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_1_78426C782D76CABD*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_METHOD_1_5D9591118D404F9A_OFFSET))(a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_935DEB0B5FC22BF4(::RPG::GameCore::FreeStyleAnimEventInfoConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleAnimEventInfoConfig*))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_METHOD_1_935DEB0B5FC22BF4_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_3440A3FC12CEA4D8(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_METHOD_1_3440A3FC12CEA4D8_OFFSET))(a1);
	}
};
