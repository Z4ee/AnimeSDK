#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class MonoEffectPluginSDFText; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_A491B638C31D084F_METHOD_2_019433AA5F044915_OFFSET UNITYSDK_OFFSET(0x9679760)
#define CLASS_2_A491B638C31D084F_METHOD_2_50C7798D6364E105_OFFSET UNITYSDK_OFFSET(0x96795A0)
#define CLASS_2_A491B638C31D084F_METHOD_2_691C21AC1AEAA5F3_OFFSET UNITYSDK_OFFSET(0x9679610)
#define CLASS_2_A491B638C31D084F_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x9679930)
#define CLASS_2_A491B638C31D084F_METHOD_2_9831E62807E98936_OFFSET UNITYSDK_OFFSET(0x9679270)
#define CLASS_2_A491B638C31D084F__CCTOR_OFFSET UNITYSDK_OFFSET(0x96798F0)
#define CLASS_2_A491B638C31D084F__CTOR_OFFSET UNITYSDK_OFFSET(0x96798E0)

inline static constexpr unsigned int Class_2_A491B638C31D084F_TypeDefinitionIndex = 64431;

class Class_2_A491B638C31D084F : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A491B638C31D084F_TypeDefinitionIndex)->GetStaticField(0x69340);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A491B638C31D084F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A491B638C31D084F__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9831E62807E98936(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_A491B638C31D084F_METHOD_2_9831E62807E98936_OFFSET))(this, a1);
	}

	::System::Void Method_2_691C21AC1AEAA5F3(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_A491B638C31D084F_METHOD_2_691C21AC1AEAA5F3_OFFSET))(this, a1);
	}

	::System::String* Method_2_019433AA5F044915()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A491B638C31D084F_METHOD_2_019433AA5F044915_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginSDFText* Method_2_50C7798D6364E105()
	{
		return ((::RPG::Client::MonoEffectPluginSDFText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A491B638C31D084F_METHOD_2_50C7798D6364E105_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_A491B638C31D084F_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
