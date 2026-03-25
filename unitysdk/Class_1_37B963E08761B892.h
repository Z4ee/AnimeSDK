#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define CLASS_1_37B963E08761B892_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xD7C2990)
#define CLASS_1_37B963E08761B892_METHOD_1_1593136B0D5DA23B_OFFSET UNITYSDK_OFFSET(0xD7C27C0)
#define CLASS_1_37B963E08761B892_METHOD_1_1AA2EDBE833EF454_OFFSET UNITYSDK_OFFSET(0xD7C2730)
#define CLASS_1_37B963E08761B892_METHOD_1_3B01BE9C2045A2D8_OFFSET UNITYSDK_OFFSET(0xD7C2750)
#define CLASS_1_37B963E08761B892_METHOD_1_52B109DC87F83D64_OFFSET UNITYSDK_OFFSET(0xD7C28C0)
#define CLASS_1_37B963E08761B892_METHOD_1_531DCDFBF0D934A9_OFFSET UNITYSDK_OFFSET(0xD7C2CD0)
#define CLASS_1_37B963E08761B892_METHOD_1_584281CE08E39CB0_OFFSET UNITYSDK_OFFSET(0xD7C2E30)
#define CLASS_1_37B963E08761B892_METHOD_1_988BFD308A49965D_OFFSET UNITYSDK_OFFSET(0xD7C2E70)
#define CLASS_1_37B963E08761B892_METHOD_1_AE74B64D8D2FA497_OFFSET UNITYSDK_OFFSET(0xD7C2BD0)
#define CLASS_1_37B963E08761B892_METHOD_1_B0D6D5328BB5452A_OFFSET UNITYSDK_OFFSET(0xD7C2E80)
#define CLASS_1_37B963E08761B892_METHOD_1_B679E9E5B94C6DE8_OFFSET UNITYSDK_OFFSET(0xD7C2B40)
#define CLASS_1_37B963E08761B892_METHOD_1_C2048E2B00772345_OFFSET UNITYSDK_OFFSET(0xD7C2C50)
#define CLASS_1_37B963E08761B892_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD7C2950)
#define CLASS_1_37B963E08761B892_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xD7C29A0)
#define CLASS_1_37B963E08761B892_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xD7C29E0)
#define CLASS_1_37B963E08761B892_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0xD7C2A20)
#define CLASS_1_37B963E08761B892_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD7C2910)
#define CLASS_1_37B963E08761B892_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xD7C2A80)
#define CLASS_1_37B963E08761B892_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xD7C2A70)
#define CLASS_1_37B963E08761B892_METHOD_1_F08DF4AEFEA53D40_OFFSET UNITYSDK_OFFSET(0xD7C2D90)
#define CLASS_1_37B963E08761B892_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xD7C2E50)
#define CLASS_1_37B963E08761B892__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C26B0)

inline static constexpr unsigned int Class_1_37B963E08761B892_TypeDefinitionIndex = 60423;

class Class_1_37B963E08761B892 : public ::System::Object
{
public:
	::UnityEngine::Material* Field_1_1; // 0x10
	::RPG::Client::LiteInstancedItem::ItemPrototype* Field_1_0; // 0x18
	::UnityEngine::Vector4 Field_1_2; // 0x20
	::System::Boolean Field_1_5; // 0x30
	::System::UInt32 Field_1_4; // 0x34
	::System::UInt32 Field_1_3; // 0x38

	::System::Void _ctor(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_52B109DC87F83D64(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_52B109DC87F83D64_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_B679E9E5B94C6DE8(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_B679E9E5B94C6DE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AE74B64D8D2FA497(::System::Int32 a1, ::UnityEngine::Vector4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_AE74B64D8D2FA497_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C2048E2B00772345(::System::Int32 a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_C2048E2B00772345_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_531DCDFBF0D934A9(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_531DCDFBF0D934A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F08DF4AEFEA53D40(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_F08DF4AEFEA53D40_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Mesh* Method_1_584281CE08E39CB0()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_584281CE08E39CB0_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::UnityEngine::Material* Method_1_1AA2EDBE833EF454()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_1AA2EDBE833EF454_OFFSET))(this);
	}

	::UnityEngine::Material* Method_1_988BFD308A49965D()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_988BFD308A49965D_OFFSET))(this);
	}

	::UnityEngine::Vector4 Method_1_B0D6D5328BB5452A()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_B0D6D5328BB5452A_OFFSET))(this);
	}

	::System::Void Method_1_3B01BE9C2045A2D8(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_3B01BE9C2045A2D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_1593136B0D5DA23B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37B963E08761B892_METHOD_1_1593136B0D5DA23B_OFFSET))(this);
	}
};
