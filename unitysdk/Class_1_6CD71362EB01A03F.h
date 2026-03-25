#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CD71362EB01A03F_Class_1_02D2CB2DF89EB2EA;
namespace RPG::GameCore { class ShaderPropertySerialization; }
namespace RPG::GameCore { class StageSceneItemSharedSerializationData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_6CD71362EB01A03F_METHOD_1_074A2A0706574607_OFFSET UNITYSDK_OFFSET(0x1091CFB0)
#define CLASS_1_6CD71362EB01A03F_METHOD_1_0ADBBFD1FCBA0031_OFFSET UNITYSDK_OFFSET(0x1091E010)
#define CLASS_1_6CD71362EB01A03F_METHOD_1_1E8F941E478373A3_OFFSET UNITYSDK_OFFSET(0x1091D320)
#define CLASS_1_6CD71362EB01A03F_METHOD_1_3009613B7378EC99_OFFSET UNITYSDK_OFFSET(0x1091E350)
#define CLASS_1_6CD71362EB01A03F_METHOD_1_6420A11374A588BA_OFFSET UNITYSDK_OFFSET(0x1091DC40)
#define CLASS_1_6CD71362EB01A03F_METHOD_1_817C4B96A541BB5B_OFFSET UNITYSDK_OFFSET(0x1091C6B0)
#define CLASS_1_6CD71362EB01A03F_METHOD_1_9B0D758ABA935CE7_OFFSET UNITYSDK_OFFSET(0x1091D230)
#define CLASS_1_6CD71362EB01A03F_METHOD_1_A0CEEC748BE5C32D_OFFSET UNITYSDK_OFFSET(0x1091CB80)
#define CLASS_1_6CD71362EB01A03F_METHOD_1_C1A4BD36B07A6CCA_OFFSET UNITYSDK_OFFSET(0x1091D020)
#define CLASS_1_6CD71362EB01A03F_METHOD_1_E8B7EFA86DE84508_OFFSET UNITYSDK_OFFSET(0x1091D160)
#define CLASS_1_6CD71362EB01A03F_METHOD_1_FE40FF27010160CE_OFFSET UNITYSDK_OFFSET(0x1091CBF0)
#define CLASS_1_6CD71362EB01A03F_METHOD_1_FEBD6F83151092D5_OFFSET UNITYSDK_OFFSET(0x1091C8A0)
#define CLASS_1_6CD71362EB01A03F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1091E7C0)

inline static constexpr unsigned int Class_1_6CD71362EB01A03F_TypeDefinitionIndex = 58173;

class Class_1_6CD71362EB01A03F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CD71362EB01A03F_TypeDefinitionIndex)->GetStaticField(0x29780);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_6CD71362EB01A03F_Class_1_02D2CB2DF89EB2EA*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_6CD71362EB01A03F_Class_1_02D2CB2DF89EB2EA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CD71362EB01A03F_TypeDefinitionIndex)->GetStaticField(0x29788);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CD71362EB01A03F__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_817C4B96A541BB5B(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6CD71362EB01A03F_METHOD_1_817C4B96A541BB5B_OFFSET))(a1);
	}

	static ::Class_1_6CD71362EB01A03F_Class_1_02D2CB2DF89EB2EA* Method_1_FEBD6F83151092D5(::UnityEngine::GameObject* a1)
	{
		return ((::Class_1_6CD71362EB01A03F_Class_1_02D2CB2DF89EB2EA*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_6CD71362EB01A03F_METHOD_1_FEBD6F83151092D5_OFFSET))(a1);
	}

	static ::System::Void Method_1_A0CEEC748BE5C32D(::UnityEngine::GameObject* a1, ::Class_1_6CD71362EB01A03F_Class_1_02D2CB2DF89EB2EA* a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::Class_1_6CD71362EB01A03F_Class_1_02D2CB2DF89EB2EA*))((::PBYTE)hIl2Cpp + CLASS_1_6CD71362EB01A03F_METHOD_1_A0CEEC748BE5C32D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE40FF27010160CE(::UnityEngine::GameObject* a1, ::Class_1_6CD71362EB01A03F_Class_1_02D2CB2DF89EB2EA* a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::Class_1_6CD71362EB01A03F_Class_1_02D2CB2DF89EB2EA*))((::PBYTE)hIl2Cpp + CLASS_1_6CD71362EB01A03F_METHOD_1_FE40FF27010160CE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_074A2A0706574607(::RPG::GameCore::ShaderPropertySerialization* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ShaderPropertySerialization*))((::PBYTE)hIl2Cpp + CLASS_1_6CD71362EB01A03F_METHOD_1_074A2A0706574607_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C1A4BD36B07A6CCA(::UnityEngine::Renderer* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Renderer*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6CD71362EB01A03F_METHOD_1_C1A4BD36B07A6CCA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E8B7EFA86DE84508(::UnityEngine::Renderer* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6CD71362EB01A03F_METHOD_1_E8B7EFA86DE84508_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9B0D758ABA935CE7(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::RPG::GameCore::ShaderPropertySerialization* a3)
	{
		return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::RPG::GameCore::ShaderPropertySerialization*))((::PBYTE)hIl2Cpp + CLASS_1_6CD71362EB01A03F_METHOD_1_9B0D758ABA935CE7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1E8F941E478373A3(::UnityEngine::GameObject* a1, ::System::Collections::Generic::IList_1<::RPG::GameCore::ShaderPropertySerialization*>* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::IList_1<::RPG::GameCore::ShaderPropertySerialization*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6CD71362EB01A03F_METHOD_1_1E8F941E478373A3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0ADBBFD1FCBA0031(::UnityEngine::GameObject* a1, ::RPG::GameCore::StageSceneItemSharedSerializationData* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::GameCore::StageSceneItemSharedSerializationData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6CD71362EB01A03F_METHOD_1_0ADBBFD1FCBA0031_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_6420A11374A588BA(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_6CD71362EB01A03F_METHOD_1_6420A11374A588BA_OFFSET))(a1);
	}

	static ::System::Void Method_1_3009613B7378EC99(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_6CD71362EB01A03F_METHOD_1_3009613B7378EC99_OFFSET))(a1);
	}
};
