#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Terrain; }
namespace UnityEngine { class Texture; }

#define CLASS_1_3E43B8C90F449831_METHOD_1_644AA24637795EC3_OFFSET UNITYSDK_OFFSET(0xBEB0230)
#define CLASS_1_3E43B8C90F449831_METHOD_1_8FA86B540E6E57B6_OFFSET UNITYSDK_OFFSET(0xBEB0170)
#define CLASS_1_3E43B8C90F449831_METHOD_1_CAEDF2C3C4D2530A_OFFSET UNITYSDK_OFFSET(0xBEB01F0)
#define CLASS_1_3E43B8C90F449831_METHOD_1_DCE4F62DCA188C0B_OFFSET UNITYSDK_OFFSET(0xBEAFE00)
#define CLASS_1_3E43B8C90F449831_METHOD_1_EEC17F198B0F407C_OFFSET UNITYSDK_OFFSET(0xBEB0280)
#define CLASS_1_3E43B8C90F449831_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0xBEB00F0)

inline static constexpr unsigned int Class_1_3E43B8C90F449831_TypeDefinitionIndex = 51804;

class Class_1_3E43B8C90F449831 : public ::System::Object
{
public:
	static ::UnityEngine::RenderTexture** StaticGet_BOLHAAMHGIM()
	{
		return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E43B8C90F449831_TypeDefinitionIndex)->GetStaticField(0x5C370);
	}
	static ::System::Boolean* StaticGet_JAENOPLFFHA()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E43B8C90F449831_TypeDefinitionIndex)->GetStaticField(0x13FC0);
	}

	static ::UnityEngine::RenderTexture* Method_1_DCE4F62DCA188C0B()
	{
		return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E43B8C90F449831_METHOD_1_DCE4F62DCA188C0B_OFFSET))();
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E43B8C90F449831_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::System::UInt64 Method_1_8FA86B540E6E57B6(::UnityEngine::Texture* a1, ::UnityEngine::Bounds a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::UInt64(*)(::UnityEngine::Texture*, ::UnityEngine::Bounds, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3E43B8C90F449831_METHOD_1_8FA86B540E6E57B6_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_CAEDF2C3C4D2530A(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_3E43B8C90F449831_METHOD_1_CAEDF2C3C4D2530A_OFFSET))(a1);
	}

	static ::System::Void Method_1_644AA24637795EC3(::UnityEngine::Terrain* a1, ::UnityEngine::Mesh* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Terrain*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_1_3E43B8C90F449831_METHOD_1_644AA24637795EC3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EEC17F198B0F407C(::UnityEngine::Terrain* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + CLASS_1_3E43B8C90F449831_METHOD_1_EEC17F198B0F407C_OFFSET))(a1);
	}
};
