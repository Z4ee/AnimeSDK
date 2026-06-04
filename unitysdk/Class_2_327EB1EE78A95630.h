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

#define CLASS_2_327EB1EE78A95630_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCBCACB0)
#define CLASS_2_327EB1EE78A95630_METHOD_2_047D34745A4B98A3_OFFSET UNITYSDK_OFFSET(0xCBCC6F0)
#define CLASS_2_327EB1EE78A95630_METHOD_2_05A2973E25A926AB_OFFSET UNITYSDK_OFFSET(0xCBCB410)
#define CLASS_2_327EB1EE78A95630_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xCBCC320)
#define CLASS_2_327EB1EE78A95630_METHOD_2_2917BB48A903B3F0_OFFSET UNITYSDK_OFFSET(0xCBCB480)
#define CLASS_2_327EB1EE78A95630_METHOD_2_3422201382CE593B_1_OFFSET UNITYSDK_OFFSET(0xCBCCD30)
#define CLASS_2_327EB1EE78A95630_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0xCBCCC90)
#define CLASS_2_327EB1EE78A95630_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xCBCB8D0)
#define CLASS_2_327EB1EE78A95630_METHOD_2_40082CAD46FBE80F_OFFSET UNITYSDK_OFFSET(0xCBCCDD0)
#define CLASS_2_327EB1EE78A95630_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xCBCB980)
#define CLASS_2_327EB1EE78A95630_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xCBCBF20)
#define CLASS_2_327EB1EE78A95630_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xCBCBDB0)
#define CLASS_2_327EB1EE78A95630_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xCBCADB0)
#define CLASS_2_327EB1EE78A95630_METHOD_2_79C171A8034611D5_OFFSET UNITYSDK_OFFSET(0xCBCC030)
#define CLASS_2_327EB1EE78A95630_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xCBCBC40)
#define CLASS_2_327EB1EE78A95630_METHOD_2_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0xCBCC0A0)
#define CLASS_2_327EB1EE78A95630_METHOD_2_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0xCBCAEA0)
#define CLASS_2_327EB1EE78A95630_METHOD_2_A9F6594EA869CA9D_OFFSET UNITYSDK_OFFSET(0xCBCC1C0)
#define CLASS_2_327EB1EE78A95630_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xCBCAC40)
#define CLASS_2_327EB1EE78A95630_METHOD_2_BC0FA8C838B766A1_OFFSET UNITYSDK_OFFSET(0xCBCB320)
#define CLASS_2_327EB1EE78A95630_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xCBCB170)
#define CLASS_2_327EB1EE78A95630_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0xCBCCEE0)
#define CLASS_2_327EB1EE78A95630__CCTOR_OFFSET UNITYSDK_OFFSET(0xCBCCEC0)
#define CLASS_2_327EB1EE78A95630__CTOR_OFFSET UNITYSDK_OFFSET(0xCBCCEB0)
#define CLASS_2_327EB1EE78A95630___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCBCCF40)

inline static constexpr unsigned int Class_2_327EB1EE78A95630_TypeDefinitionIndex = 65359;

class Class_2_327EB1EE78A95630 : public ::RPG::Client::BehaviorBase
{
public:
	static ::UnityEngine::Vector2* StaticGet_Field_2_0()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_2_327EB1EE78A95630_TypeDefinitionIndex)->GetStaticField(0x141B0);
	}
	::UnityEngine::Camera* Field_2_1; // 0x18
	::UnityEngine::MeshRenderer* Field_2_2; // 0x20
	::UnityEngine::RectTransform* Field_2_3; // 0x28
	::UnityEngine::Vector3 Field_2_4; // 0x30
	::System::Boolean Field_2_5; // 0x3C
	::System::Boolean Field_2_6; // 0x3D
	::System::Single Field_2_7; // 0x40
	::UnityEngine::Vector3 Field_2_8; // 0x44
	::UnityEngine::Vector3 Field_2_9; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC0FA8C838B766A1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_BC0FA8C838B766A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2917BB48A903B3F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_2917BB48A903B3F0_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_79C171A8034611D5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_79C171A8034611D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_2_047D34745A4B98A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_047D34745A4B98A3_OFFSET))(this);
	}

	::System::Boolean Method_2_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_9CA35E5BF1A50E77_OFFSET))(this);
	}

	::System::Boolean Method_2_A9F6594EA869CA9D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_A9F6594EA869CA9D_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_40082CAD46FBE80F(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_40082CAD46FBE80F_OFFSET))(this, a1);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Single Method_2_3422201382CE593B_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_3422201382CE593B_1_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginUITrack* Method_2_05A2973E25A926AB()
	{
		return ((::RPG::Client::MonoEffectPluginUITrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_05A2973E25A926AB_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_327EB1EE78A95630___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
