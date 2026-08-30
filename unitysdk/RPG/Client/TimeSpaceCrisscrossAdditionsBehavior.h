#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/RPG/Client/TSCRendererType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5F96B92B05C740DB;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class TimeSpaceCrisscrossAdditionsMonoPlugin; }
namespace RPG::Client { class WorldSpaceTileParticlesMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x19793DD0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x19796A50)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_367A5F1ECD1BC1A2_OFFSET UNITYSDK_OFFSET(0x19795270)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x19796F10)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x19797060)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x19797000)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_4DF79CB98933D255_OFFSET UNITYSDK_OFFSET(0x19792E10)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_563FD36D519B168A_OFFSET UNITYSDK_OFFSET(0x19793E50)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x197964E0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_7DFA6217A9A4E501_OFFSET UNITYSDK_OFFSET(0x19793680)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x197970C0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_9C844AB9164FA35A_OFFSET UNITYSDK_OFFSET(0x19794560)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_A002848F130F70CA_OFFSET UNITYSDK_OFFSET(0x19793960)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_A09861D42EE0D9FD_OFFSET UNITYSDK_OFFSET(0x19795120)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_AD77E911045B3A4C_OFFSET UNITYSDK_OFFSET(0x19796480)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x19796860)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_D0BD1377F2594D33_1_OFFSET UNITYSDK_OFFSET(0x19796350)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x19796280)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x19796AC0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_DDBFE8E9D8449B5F_OFFSET UNITYSDK_OFFSET(0x197967A0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_EBB320E5E22F7D94_OFFSET UNITYSDK_OFFSET(0x19795B70)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_F3DF1839115449CE_OFFSET UNITYSDK_OFFSET(0x19796420)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_F74441856239DF08_OFFSET UNITYSDK_OFFSET(0x19796B10)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_F8DD998647B4A01A_OFFSET UNITYSDK_OFFSET(0x19796F50)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x19796910)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19797170)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossAdditionsBehavior_TypeDefinitionIndex = 70160;

	class TimeSpaceCrisscrossAdditionsBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::UnityEngine::Mesh** StaticGet__ConeMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossAdditionsBehavior_TypeDefinitionIndex)->GetStaticField(0x59390);
		}
		::System::Boolean _IsRegisted; // 0x38
		::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>* _TSCRendererA; // 0x40
		::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>* _TSCRendererB; // 0x48
		::System::Collections::Generic::List_1<::RPG::PoolList_1<::UnityEngine::Renderer*>*>* _CollectorAllRenderersA; // 0x50
		::System::Collections::Generic::List_1<::RPG::PoolList_1<::UnityEngine::Renderer*>*>* _CollectorAllRenderersB; // 0x58
		::RPG::Client::WorldSpaceTileParticlesMonoPlugin* _WorldParticleA; // 0x60
		::RPG::Client::WorldSpaceTileParticlesMonoPlugin* _WorldParticleB; // 0x68
		::UnityEngine::GameObject* _WaterFillGOA; // 0x70
		::UnityEngine::Material* _WaterFillerMatA; // 0x78
		::UnityEngine::GameObject* _WaterFillGOB; // 0x80
		::UnityEngine::Material* _WaterFillerMatB; // 0x88
		::UnityEngine::GameObject* _WaterFillGOC; // 0x90
		::UnityEngine::Material* _WaterFillerMatC; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Mesh* Method_3_4DF79CB98933D255(::System::Boolean a1)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_4DF79CB98933D255_OFFSET))(this, a1);
		}

		::System::Void Method_3_7DFA6217A9A4E501(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Transform* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_7DFA6217A9A4E501_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_A002848F130F70CA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_A002848F130F70CA_OFFSET))(this);
		}

		::System::Void Method_3_563FD36D519B168A(::UnityEngine::GameObject*& a1, ::UnityEngine::Material*& a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*&, ::UnityEngine::Material*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_563FD36D519B168A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Method_3_9C844AB9164FA35A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_9C844AB9164FA35A_OFFSET))(this);
		}

		::System::Void Method_3_A09861D42EE0D9FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_A09861D42EE0D9FD_OFFSET))(this);
		}

		::System::Void Method_3_367A5F1ECD1BC1A2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_367A5F1ECD1BC1A2_OFFSET))(this);
		}

		::System::Void Method_3_EBB320E5E22F7D94(::UnityEngine::Transform* a1, ::RPG::Client::TSCRendererType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::TSCRendererType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_EBB320E5E22F7D94_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Void Method_3_D0BD1377F2594D33_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_D0BD1377F2594D33_1_OFFSET))(this);
		}

		::System::Void Method_3_F3DF1839115449CE(::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>*& a1, ::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>*&, ::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_F3DF1839115449CE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_AD77E911045B3A4C(::System::Collections::Generic::List_1<::RPG::PoolList_1<::UnityEngine::Renderer*>*>*& a1, ::System::Collections::Generic::List_1<::RPG::PoolList_1<::UnityEngine::Renderer*>*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::PoolList_1<::UnityEngine::Renderer*>*>*&, ::System::Collections::Generic::List_1<::RPG::PoolList_1<::UnityEngine::Renderer*>*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_AD77E911045B3A4C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_6055A93732CC885D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_6055A93732CC885D_OFFSET))(this);
		}

		::System::Void Method_3_DDBFE8E9D8449B5F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_DDBFE8E9D8449B5F_OFFSET))(this);
		}

		::System::Void Method_3_BA1BB49741CFDFE1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_BA1BB49741CFDFE1_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Void Method_3_D3129FE8DF635B48()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_D3129FE8DF635B48_OFFSET))(this);
		}

		::System::Void Method_3_F74441856239DF08()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_F74441856239DF08_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_F8DD998647B4A01A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_F8DD998647B4A01A_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Boolean Method_3_83DA3EC57FF907F4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_METHOD_3_83DA3EC57FF907F4_OFFSET))(this);
		}

		::RPG::Client::TimeSpaceCrisscrossAdditionsMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::TimeSpaceCrisscrossAdditionsMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
