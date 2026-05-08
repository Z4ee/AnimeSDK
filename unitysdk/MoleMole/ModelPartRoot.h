#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MODELPARTROOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x16D51520)
#define MOLEMOLE_MODELPARTROOT_CHANGEPARTPATHS_OFFSET UNITYSDK_OFFSET(0x16D51AD0)
#define MOLEMOLE_MODELPARTROOT_GET_BONEDICT_OFFSET UNITYSDK_OFFSET(0x16D51500)
#define MOLEMOLE_MODELPARTROOT_GET_FINALPATHS_OFFSET UNITYSDK_OFFSET(0x16D51510)
#define MOLEMOLE_MODELPARTROOT_METHOD_5_01E1F9C70185D085_OFFSET UNITYSDK_OFFSET(0x16D51CA0)
#define MOLEMOLE_MODELPARTROOT_METHOD_5_061577877B22B100_OFFSET UNITYSDK_OFFSET(0x16D52450)
#define MOLEMOLE_MODELPARTROOT_METHOD_5_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x16D53160)
#define MOLEMOLE_MODELPARTROOT_METHOD_5_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x16D526E0)
#define MOLEMOLE_MODELPARTROOT_METHOD_5_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x16D53440)
#define MOLEMOLE_MODELPARTROOT_METHOD_5_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x16D52180)
#define MOLEMOLE_MODELPARTROOT_METHOD_5_873015B58F646938_OFFSET UNITYSDK_OFFSET(0x16D51D60)
#define MOLEMOLE_MODELPARTROOT_METHOD_5_8F88A97FE60CA67F_1_OFFSET UNITYSDK_OFFSET(0x16D52F00)
#define MOLEMOLE_MODELPARTROOT_METHOD_5_8F88A97FE60CA67F_OFFSET UNITYSDK_OFFSET(0x16D52030)
#define MOLEMOLE_MODELPARTROOT_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16D52110)
#define MOLEMOLE_MODELPARTROOT_METHOD_5_BF06CBE2F009E993_OFFSET UNITYSDK_OFFSET(0x16D52FE0)
#define MOLEMOLE_MODELPARTROOT_METHOD_5_D5E670EE3337D3EC_OFFSET UNITYSDK_OFFSET(0x16D53240)
#define MOLEMOLE_MODELPARTROOT_METHOD_5_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x16D52C60)
#define MOLEMOLE_MODELPARTROOT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16D51A70)
#define MOLEMOLE_MODELPARTROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x16D51FE0)

namespace MoleMole
{
	inline static constexpr unsigned int ModelPartRoot_TypeDefinitionIndex = 45738;

	class ModelPartRoot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* rootBone; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_5_1; // 0x20
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* Field_5_2; // 0x28
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Field_5_3; // 0x30
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Field_5_4; // 0x38
		::System::Boolean Field_5_5; // 0x40
		::System::Collections::Generic::List_1<::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>*>* Field_5_6; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* get_BoneDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_GET_BONEDICT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Foundation::AssetPath>* get_FinalPaths()
		{
			return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_GET_FINALPATHS_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_ONDESTROY_OFFSET))(this);
		}

		::System::Void ChangePartPaths(::System::Collections::Generic::List_1<::Foundation::AssetPath>* a1, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_CHANGEPARTPATHS_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Method_5_8F88A97FE60CA67F()
		{
			return ((::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_METHOD_5_8F88A97FE60CA67F_OFFSET))(this);
		}

		::System::Void Method_5_873015B58F646938(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_METHOD_5_873015B58F646938_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_DE52BD42C4B0B772()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_METHOD_5_DE52BD42C4B0B772_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Foundation::AssetPath>* Method_5_061577877B22B100()
		{
			return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_METHOD_5_061577877B22B100_OFFSET))(this);
		}

		::System::Void Method_5_BF06CBE2F009E993(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_METHOD_5_BF06CBE2F009E993_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Method_5_8F88A97FE60CA67F_1()
		{
			return ((::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_METHOD_5_8F88A97FE60CA67F_1_OFFSET))(this);
		}

		::System::Void Method_5_3BCF0226A6CDC13B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_METHOD_5_3BCF0226A6CDC13B_OFFSET))(this);
		}

		::System::Void Method_5_D5E670EE3337D3EC(::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_METHOD_5_D5E670EE3337D3EC_OFFSET))(this, a1);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>*>* Method_5_01E1F9C70185D085()
		{
			return ((::System::Collections::Generic::List_1<::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_METHOD_5_01E1F9C70185D085_OFFSET))(this);
		}

		::System::Void Method_5_5BCE9210F4ACDD0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_METHOD_5_5BCE9210F4ACDD0B_OFFSET))(this);
		}

		::System::Void Method_5_7A097E7EF929F289()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_METHOD_5_7A097E7EF929F289_OFFSET))(this);
		}

		::System::Void Method_5_51DEC44B986280C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_METHOD_5_51DEC44B986280C0_OFFSET))(this);
		}
	};
}
