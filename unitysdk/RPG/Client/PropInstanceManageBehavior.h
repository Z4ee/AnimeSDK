#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_929E979D9ED7139E;
class Class_1_B044F82CBFAD3D4B;
namespace RPG::Client { class PropInstanceManageMonoPlugin; }
namespace RPG::Client { class PropInstanceTransform; }
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_GET_TRANSFORMVARIENTS_OFFSET UNITYSDK_OFFSET(0xDD6D800)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xDD6CDE0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xDD6D540)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xDD6D940)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_35DAF4D75B1606BC_OFFSET UNITYSDK_OFFSET(0xDD6E1B0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xDD6D900)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xDD6D2D0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xDD6D460)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xDD6D4D0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xDD6D270)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_557CBF1730FC2E87_OFFSET UNITYSDK_OFFSET(0xDD6CD10)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_62652CF13F1CE80E_OFFSET UNITYSDK_OFFSET(0xDD6D9F0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_67AC84F438ADD7E8_OFFSET UNITYSDK_OFFSET(0xDD6E590)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0xDD6C4B0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0xDD6CE20)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0xDD6C560)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_C83B2479936B63C3_OFFSET UNITYSDK_OFFSET(0xDD6DD00)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xDD6D340)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xDD6EEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PropInstanceManageBehavior_TypeDefinitionIndex = 70712;

	class PropInstanceManageBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean _IsVisiable; // 0x38
		::UnityEngine::MaterialPropertyBlock* _MaterialPropertyBlock; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _InstanceMatrices; // 0x48
		::Class_1_B044F82CBFAD3D4B* _ItemRenderer; // 0x50
		::RPG::Client::LiteInstancedItem::ItemPrototype* _ItemPrototype; // 0x58
		::System::Collections::Generic::List_1<::Class_1_929E979D9ED7139E*>* _ItemInstances; // 0x60
		::System::Boolean _IsInit; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_704FAC4600717444()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_704FAC4600717444_OFFSET))(this);
		}

		::System::Void Method_3_557CBF1730FC2E87()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_557CBF1730FC2E87_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_1290EA767C459179_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PropInstanceTransform*>* get_TransformVarients()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PropInstanceTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_GET_TRANSFORMVARIENTS_OFFSET))(this);
		}

		::System::Void Method_3_62652CF13F1CE80E(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_62652CF13F1CE80E_OFFSET))(this, a1);
		}

		::System::Void Method_3_35DAF4D75B1606BC(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_35DAF4D75B1606BC_OFFSET))(this, a1);
		}

		::System::Void Method_3_B76CD5CB3E297DF3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_B76CD5CB3E297DF3_OFFSET))(this);
		}

		::System::Void Method_3_C83B2479936B63C3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_C83B2479936B63C3_OFFSET))(this);
		}

		::System::Void Method_3_67AC84F438ADD7E8(::System::Collections::Generic::List_1<::RPG::Client::PropInstanceTransform*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PropInstanceTransform*>*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_67AC84F438ADD7E8_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_C706B1EC6D2E1C64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_C706B1EC6D2E1C64_OFFSET))(this);
		}

		::System::Void Method_3_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_METHOD_3_D7852DE078ACC1F1_OFFSET))(this);
		}

		::RPG::Client::PropInstanceManageMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::PropInstanceManageMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
