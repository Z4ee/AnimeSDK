#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginChildNodeFollow; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_0FB6F5068D635FD7_2_METHOD_2_595C0F373E807AB9_OFFSET UNITYSDK_OFFSET(0x13CBB390)
#define CLASS_2_0FB6F5068D635FD7_2_METHOD_2_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x13CBADB0)
#define CLASS_2_0FB6F5068D635FD7_2_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x13CBACE0)
#define CLASS_2_0FB6F5068D635FD7_2_METHOD_2_D57193185B477E91_OFFSET UNITYSDK_OFFSET(0x13CBAD50)
#define CLASS_2_0FB6F5068D635FD7_2_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x13CBB410)
#define CLASS_2_0FB6F5068D635FD7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13CBB400)

inline static constexpr unsigned int Class_2_0FB6F5068D635FD7_2_TypeDefinitionIndex = 65325;

class Class_2_0FB6F5068D635FD7_2 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_2_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_D57193185B477E91(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_2_METHOD_2_D57193185B477E91_OFFSET))(this, a1);
	}

	::System::Void Method_2_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_2_METHOD_2_821BBDC04720A2EB_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginChildNodeFollow* Method_2_595C0F373E807AB9()
	{
		return ((::RPG::Client::MonoEffectPluginChildNodeFollow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_2_METHOD_2_595C0F373E807AB9_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_2_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}
};
