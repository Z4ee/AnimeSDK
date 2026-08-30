#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginPosm; }
namespace RPG::CustomRP { class CharacterModelShadowCmd; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_C1296BA18B05BF41_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B53310)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_01237CA99C79931A_OFFSET UNITYSDK_OFFSET(0x16B539F0)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_23C3681AC9E5D438_OFFSET UNITYSDK_OFFSET(0x16B53E50)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_2DB11D4CEB0AA32F_OFFSET UNITYSDK_OFFSET(0x16B536C0)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_3512445D60B9B481_OFFSET UNITYSDK_OFFSET(0x16B53670)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_5B94350BBAC6A35E_OFFSET UNITYSDK_OFFSET(0x16B53F80)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_AB0E32D900C7A89E_OFFSET UNITYSDK_OFFSET(0x16B53380)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x16B54120)
#define CLASS_2_C1296BA18B05BF41_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x16B532A0)
#define CLASS_2_C1296BA18B05BF41__CTOR_OFFSET UNITYSDK_OFFSET(0x16B54520)

inline static constexpr unsigned int Class_2_C1296BA18B05BF41_TypeDefinitionIndex = 69858;

class Class_2_C1296BA18B05BF41 : public ::RPG::Client::BehaviorBase
{
public:
	::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x18
	::RPG::CustomRP::CharacterModelShadowCmd* NOJGBEEGBDE; // 0x20
	::UnityEngine::GameObject* FECMPADIMEC; // 0x28

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
