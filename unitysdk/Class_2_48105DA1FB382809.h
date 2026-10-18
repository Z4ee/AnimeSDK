#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D_4.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_4AF717D30078CC7E_1;
class Class_1_D33B7D6901AE39E9;
class Class_2_6D25D6E36F5AF8D2;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ManikinPetConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_2_48105DA1FB382809_METHOD_2_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0xBF7FE50)
#define CLASS_2_48105DA1FB382809_METHOD_2_106A27B044BAA19B_OFFSET UNITYSDK_OFFSET(0xBF7FE90)
#define CLASS_2_48105DA1FB382809_METHOD_2_18B783781170954B_OFFSET UNITYSDK_OFFSET(0xBF80A70)
#define CLASS_2_48105DA1FB382809_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0xBF7FD00)
#define CLASS_2_48105DA1FB382809_METHOD_2_7EE99EE6AA394745_OFFSET UNITYSDK_OFFSET(0xBF810B0)
#define CLASS_2_48105DA1FB382809_METHOD_2_94A59DD3012D969C_OFFSET UNITYSDK_OFFSET(0xBF81210)
#define CLASS_2_48105DA1FB382809_METHOD_2_95FEFAF3A804654D_OFFSET UNITYSDK_OFFSET(0xBF806D0)
#define CLASS_2_48105DA1FB382809_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBF7FC90)
#define CLASS_2_48105DA1FB382809_METHOD_2_9A7C49ACFA4B0E6C_OFFSET UNITYSDK_OFFSET(0xBF80C10)
#define CLASS_2_48105DA1FB382809_METHOD_2_9DE7CC0BCCD551EA_OFFSET UNITYSDK_OFFSET(0xBF80E60)
#define CLASS_2_48105DA1FB382809__CTOR_OFFSET UNITYSDK_OFFSET(0xBF7FA50)

inline static constexpr unsigned int Class_2_48105DA1FB382809_TypeDefinitionIndex = 76549;

class Class_2_48105DA1FB382809 : public ::Class_1_FD893FD36F6A3A6D_4
{
public:
	::Class_1_D33B7D6901AE39E9* FKINCGODJEP; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* KPCHLAHHILG; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::String*, ::UnityEngine::Renderer*>, ::Il2CppArray<::UnityEngine::Material*>*>*>* HPJKCGGKPPO; // 0x28
	::UnityEngine::Transform* GKNBCPMJHMN; // 0x30
	::Class_1_47EE63CB5C4DC8FC_5* PDENFEFCAGN; // 0x38

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_1_47EE63CB5C4DC8FC_5*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_48105DA1FB382809__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48105DA1FB382809_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48105DA1FB382809_METHOD_2_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::System::Void Method_2_106A27B044BAA19B(::Class_2_6D25D6E36F5AF8D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6D25D6E36F5AF8D2*))((::PBYTE)hIl2Cpp + CLASS_2_48105DA1FB382809_METHOD_2_106A27B044BAA19B_OFFSET))(this, a1);
	}

	::System::Void Method_2_18B783781170954B(::Class_2_6D25D6E36F5AF8D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6D25D6E36F5AF8D2*))((::PBYTE)hIl2Cpp + CLASS_2_48105DA1FB382809_METHOD_2_18B783781170954B_OFFSET))(this, a1);
	}

	::System::Void Method_2_95FEFAF3A804654D(::UnityEngine::GameObject* a1, ::Class_2_6D25D6E36F5AF8D2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_2_6D25D6E36F5AF8D2*))((::PBYTE)hIl2Cpp + CLASS_2_48105DA1FB382809_METHOD_2_95FEFAF3A804654D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE7CC0BCCD551EA(::UnityEngine::GameObject* a1, ::Class_2_6D25D6E36F5AF8D2* a2, ::RPG::GameCore::ManikinPetConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_2_6D25D6E36F5AF8D2*, ::RPG::GameCore::ManikinPetConfig*))((::PBYTE)hIl2Cpp + CLASS_2_48105DA1FB382809_METHOD_2_9DE7CC0BCCD551EA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7EE99EE6AA394745(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_48105DA1FB382809_METHOD_2_7EE99EE6AA394745_OFFSET))(this, a1);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48105DA1FB382809_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	static ::RPG::GameCore::ManikinPetConfig* Method_2_9A7C49ACFA4B0E6C(::Class_2_6D25D6E36F5AF8D2* a1, ::Class_1_4AF717D30078CC7E_1* a2)
	{
		return ((::RPG::GameCore::ManikinPetConfig*(*)(::Class_2_6D25D6E36F5AF8D2*, ::Class_1_4AF717D30078CC7E_1*))((::PBYTE)hIl2Cpp + CLASS_2_48105DA1FB382809_METHOD_2_9A7C49ACFA4B0E6C_OFFSET))(a1, a2);
	}

	::System::Void Method_2_94A59DD3012D969C(::Class_2_6D25D6E36F5AF8D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6D25D6E36F5AF8D2*))((::PBYTE)hIl2Cpp + CLASS_2_48105DA1FB382809_METHOD_2_94A59DD3012D969C_OFFSET))(this, a1);
	}
};
