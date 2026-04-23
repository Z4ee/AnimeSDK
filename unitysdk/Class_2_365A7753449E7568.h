#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffectPluginUITrack; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_365A7753449E7568_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9555F20)
#define CLASS_2_365A7753449E7568_METHOD_2_0A5DD54A2675889F_OFFSET UNITYSDK_OFFSET(0x9556550)
#define CLASS_2_365A7753449E7568_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9557150)
#define CLASS_2_365A7753449E7568_METHOD_2_3422201382CE593B_1_OFFSET UNITYSDK_OFFSET(0x9557F10)
#define CLASS_2_365A7753449E7568_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x9557E70)
#define CLASS_2_365A7753449E7568_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x9556B00)
#define CLASS_2_365A7753449E7568_METHOD_2_40082CAD46FBE80F_OFFSET UNITYSDK_OFFSET(0x9557FB0)
#define CLASS_2_365A7753449E7568_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x9556BB0)
#define CLASS_2_365A7753449E7568_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x9557530)
#define CLASS_2_365A7753449E7568_METHOD_2_59D3B9EE9A2BDE85_OFFSET UNITYSDK_OFFSET(0x9555FF0)
#define CLASS_2_365A7753449E7568_METHOD_2_5BF6A3C57C2FC762_OFFSET UNITYSDK_OFFSET(0x9556640)
#define CLASS_2_365A7753449E7568_METHOD_2_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x95578D0)
#define CLASS_2_365A7753449E7568_METHOD_2_79C171A8034611D5_OFFSET UNITYSDK_OFFSET(0x9557250)
#define CLASS_2_365A7753449E7568_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x9556E70)
#define CLASS_2_365A7753449E7568_METHOD_2_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0x95572C0)
#define CLASS_2_365A7753449E7568_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x95560D0)
#define CLASS_2_365A7753449E7568_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x95580E0)
#define CLASS_2_365A7753449E7568_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x9555EB0)
#define CLASS_2_365A7753449E7568_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x95563A0)
#define CLASS_2_365A7753449E7568_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x95566B0)
#define CLASS_2_365A7753449E7568_METHOD_2_D58849E1895DD394_OFFSET UNITYSDK_OFFSET(0x95573D0)
#define CLASS_2_365A7753449E7568_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x9556FE0)
#define CLASS_2_365A7753449E7568__CCTOR_OFFSET UNITYSDK_OFFSET(0x95580A0)
#define CLASS_2_365A7753449E7568__CTOR_OFFSET UNITYSDK_OFFSET(0x9558090)
#define CLASS_2_365A7753449E7568___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9558150)

inline static constexpr unsigned int Class_2_365A7753449E7568_TypeDefinitionIndex = 64438;

class Class_2_365A7753449E7568 : public ::RPG::Client::BehaviorBase
{
public:
	static ::UnityEngine::Vector2* StaticGet_Field_2_2()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_2_365A7753449E7568_TypeDefinitionIndex)->GetStaticField(0x101A0);
	}
	::UnityEngine::RectTransform* Field_2_4; // 0x18
	::UnityEngine::Camera* Field_2_3; // 0x20
	::UnityEngine::MeshRenderer* Field_2_0; // 0x28
	::System::Single Field_2_8; // 0x30
	::System::Boolean Field_2_9; // 0x34
	::System::Boolean Field_2_1; // 0x35
	::UnityEngine::Vector3 Field_2_6; // 0x38
	::UnityEngine::Vector3 Field_2_7; // 0x44
	::UnityEngine::Vector3 Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_59D3B9EE9A2BDE85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_59D3B9EE9A2BDE85_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A5DD54A2675889F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_0A5DD54A2675889F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_79C171A8034611D5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_79C171A8034611D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Boolean Method_2_8A2AC7CD7EA66CAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_8A2AC7CD7EA66CAC_OFFSET))(this);
	}

	::System::Boolean Method_2_D58849E1895DD394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_D58849E1895DD394_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_40082CAD46FBE80F(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_40082CAD46FBE80F_OFFSET))(this, a1);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Single Method_2_3422201382CE593B_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_3422201382CE593B_1_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginUITrack* Method_2_5BF6A3C57C2FC762()
	{
		return ((::RPG::Client::MonoEffectPluginUITrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_5BF6A3C57C2FC762_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A7753449E7568___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
