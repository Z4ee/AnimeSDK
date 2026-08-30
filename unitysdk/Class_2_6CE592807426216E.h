#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_6CE592807426216E_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xC40D0D0)
#define CLASS_2_6CE592807426216E_METHOD_2_2382947EA134E963_OFFSET UNITYSDK_OFFSET(0xC40CBE0)
#define CLASS_2_6CE592807426216E_METHOD_2_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xC40D1E0)
#define CLASS_2_6CE592807426216E_METHOD_2_60BAB51FAB46DBD1_OFFSET UNITYSDK_OFFSET(0xC40D130)
#define CLASS_2_6CE592807426216E_METHOD_2_60DC879ACE99CF48_OFFSET UNITYSDK_OFFSET(0xC40D260)
#define CLASS_2_6CE592807426216E_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0xC40CD00)
#define CLASS_2_6CE592807426216E_METHOD_2_F70045D03F5767B0_OFFSET UNITYSDK_OFFSET(0xC40CAF0)
#define CLASS_2_6CE592807426216E__CTOR_OFFSET UNITYSDK_OFFSET(0xC40D2D0)
#define CLASS_2_6CE592807426216E__ONBIND_OFFSET UNITYSDK_OFFSET(0xC40CD70)

inline static constexpr unsigned int Class_2_6CE592807426216E_TypeDefinitionIndex = 71946;

class Class_2_6CE592807426216E : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Transform* PPCNBKDKEKA; // 0x60
	::UnityEngine::Transform* JEDDHPEJCMN; // 0x68
	::UnityEngine::Transform* BJGCAMLMHON; // 0x70
	::UnityEngine::Animation* KNGEOHAPLCF; // 0x78
	::UnityEngine::Transform* BEINMJOCHIL; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CE592807426216E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F70045D03F5767B0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CE592807426216E_METHOD_2_F70045D03F5767B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_2382947EA134E963(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CE592807426216E_METHOD_2_2382947EA134E963_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CE592807426216E_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CE592807426216E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CE592807426216E_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_60BAB51FAB46DBD1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6CE592807426216E_METHOD_2_60BAB51FAB46DBD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_60DC879ACE99CF48(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6CE592807426216E_METHOD_2_60DC879ACE99CF48_OFFSET))(this, a1);
	}

	::System::Void Method_2_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CE592807426216E_METHOD_2_460F8AE6EF9687FD_OFFSET))(this);
	}
};
