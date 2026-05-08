#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_D0684A571907F6BD___C_METHOD_1_B4E7EF124A268B17_OFFSET UNITYSDK_OFFSET(0x13F18230)
#define CLASS_1_D0684A571907F6BD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F181E0)
#define CLASS_1_D0684A571907F6BD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13F18220)

inline static constexpr unsigned int Class_1_D0684A571907F6BD___c_TypeDefinitionIndex = 47572;

class Class_1_D0684A571907F6BD___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0684A571907F6BD___c_TypeDefinitionIndex)->GetStaticField(0x3E450);
	}
	static ::Class_1_D0684A571907F6BD___c** StaticGet___9()
	{
		return (::Class_1_D0684A571907F6BD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0684A571907F6BD___c_TypeDefinitionIndex)->GetStaticField(0x3E458);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0684A571907F6BD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0684A571907F6BD___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Texture2D* Method_1_B4E7EF124A268B17(::System::String* a1)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D0684A571907F6BD___C_METHOD_1_B4E7EF124A268B17_OFFSET))(this, a1);
	}
};
