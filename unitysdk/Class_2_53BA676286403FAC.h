#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3EE0A731EA0C8B63.h"
#include "unitysdk/Class_2_53BA676286403FAC_DIR.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoExUICamera; }
namespace System { class Object; }

#define CLASS_2_53BA676286403FAC_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16E43F90)
#define CLASS_2_53BA676286403FAC_METHOD_2_2A699E44CB165F0B_OFFSET UNITYSDK_OFFSET(0x16E44330)
#define CLASS_2_53BA676286403FAC_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16E441C0)
#define CLASS_2_53BA676286403FAC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16E44500)
#define CLASS_2_53BA676286403FAC_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x16E44550)
#define CLASS_2_53BA676286403FAC_METHOD_2_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x16E445A0)
#define CLASS_2_53BA676286403FAC__CTOR_OFFSET UNITYSDK_OFFSET(0x16E43F80)

inline static constexpr unsigned int Class_2_53BA676286403FAC_TypeDefinitionIndex = 69636;

class Class_2_53BA676286403FAC : public ::Class_1_3EE0A731EA0C8B63
{
public:
	::Class_2_53BA676286403FAC_DIR Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x1C
	::UnityEngine::Vector3 Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x2C
	::UnityEngine::Vector3 Field_2_4; // 0x30

	::System::Void _ctor(::RPG::Client::MonoExUICamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*))((::PBYTE)hIl2Cpp + CLASS_2_53BA676286403FAC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53BA676286403FAC_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_2A699E44CB165F0B(::Class_1_3EE0A731EA0C8B63* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3EE0A731EA0C8B63*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_53BA676286403FAC_METHOD_2_2A699E44CB165F0B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3EE0A731EA0C8B63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3EE0A731EA0C8B63*))((::PBYTE)hIl2Cpp + CLASS_2_53BA676286403FAC_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53BA676286403FAC_METHOD_2_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53BA676286403FAC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53BA676286403FAC_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
