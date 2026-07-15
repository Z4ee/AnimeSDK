#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginPosm; }
namespace RPG::CustomRP { class CharacterModelShadowCmd; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_C1296BA18B05BF41_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19244AB0)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_01237CA99C79931A_OFFSET UNITYSDK_OFFSET(0x19245190)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_23C3681AC9E5D438_OFFSET UNITYSDK_OFFSET(0x192455F0)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_2DB11D4CEB0AA32F_OFFSET UNITYSDK_OFFSET(0x19244E60)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_3512445D60B9B481_OFFSET UNITYSDK_OFFSET(0x19244E10)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_5B94350BBAC6A35E_OFFSET UNITYSDK_OFFSET(0x19245720)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_AB0E32D900C7A89E_OFFSET UNITYSDK_OFFSET(0x19244B20)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x192458C0)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x19244A40)
#define CLASS_2_C1296BA18B05BF41__CTOR_OFFSET UNITYSDK_OFFSET(0x19245CC0)

inline static constexpr unsigned int Class_2_C1296BA18B05BF41_TypeDefinitionIndex = 66756;

class Class_2_C1296BA18B05BF41 : public ::RPG::Client::BehaviorBase
{
public:
	::Il2CppArray<::UnityEngine::Renderer*>* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_1; // 0x20
	::RPG::CustomRP::CharacterModelShadowCmd* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1296BA18B05BF41__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_C1296BA18B05BF41_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1296BA18B05BF41_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_AB0E32D900C7A89E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1296BA18B05BF41_METHOD_2_AB0E32D900C7A89E_OFFSET))(this);
	}

	::System::Void Method_2_23C3681AC9E5D438()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1296BA18B05BF41_METHOD_2_23C3681AC9E5D438_OFFSET))(this);
	}

	::System::Void Method_2_01237CA99C79931A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1296BA18B05BF41_METHOD_2_01237CA99C79931A_OFFSET))(this);
	}

	::System::Void Method_2_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1296BA18B05BF41_METHOD_2_B06F516E4459C742_OFFSET))(this);
	}

	::System::Void Method_2_2DB11D4CEB0AA32F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C1296BA18B05BF41_METHOD_2_2DB11D4CEB0AA32F_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B94350BBAC6A35E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C1296BA18B05BF41_METHOD_2_5B94350BBAC6A35E_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginPosm* Method_2_3512445D60B9B481()
	{
		return ((::RPG::Client::MonoEffectPluginPosm*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1296BA18B05BF41_METHOD_2_3512445D60B9B481_OFFSET))(this);
	}
};
