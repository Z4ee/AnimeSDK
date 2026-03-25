#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/CRPCameraInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_0A24888DF04C995E_3;
namespace RPG::Client { class VirtualCameraFollowMonoPlugin; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn_PostUpdateVCCamera; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xA773E70)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xA773A70)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_1EA97511ABF2B3A7_OFFSET UNITYSDK_OFFSET(0xA773C70)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xA777BD0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA773930)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA773BD0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xA773AB0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xA773B10)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xA773B70)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0xA773C10)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA773830)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0xA7756A0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA777E70)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xA777ED0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xA777F30)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0xA777F90)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0xA778000)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0xA7780E0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA777E10)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_693C4912BF61F072_OFFSET UNITYSDK_OFFSET(0xA775760)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_7C2CABA4CB548A03_OFFSET UNITYSDK_OFFSET(0xA776A70)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA773890)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_A1ABB86FA403B48B_OFFSET UNITYSDK_OFFSET(0xA7765B0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_BED9888991D99A89_OFFSET UNITYSDK_OFFSET(0xA776B20)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_E34EC5C56715D759_OFFSET UNITYSDK_OFFSET(0xA777160)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_E80720BBCF7832DF_OFFSET UNITYSDK_OFFSET(0xA775E50)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xA778070)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xA777D20)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA777D10)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xA778140)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCameraFollowBehavior_TypeDefinitionIndex = 57585;

	class VirtualCameraFollowBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::Class_1_0A24888DF04C995E_3** StaticGet_VCRect2()
		{
			return (::Class_1_0A24888DF04C995E_3**)Il2CppClass::FromTypeDefinitionIndex(VirtualCameraFollowBehavior_TypeDefinitionIndex)->GetStaticField(0x37890);
		}
		static ::Class_1_0A24888DF04C995E_3** StaticGet_VCRect1()
		{
			return (::Class_1_0A24888DF04C995E_3**)Il2CppClass::FromTypeDefinitionIndex(VirtualCameraFollowBehavior_TypeDefinitionIndex)->GetStaticField(0x37898);
		}
		static ::Class_1_0A24888DF04C995E_3** StaticGet_VCRect0()
		{
			return (::Class_1_0A24888DF04C995E_3**)Il2CppClass::FromTypeDefinitionIndex(VirtualCameraFollowBehavior_TypeDefinitionIndex)->GetStaticField(0x378A0);
		}
		static ::Class_1_0A24888DF04C995E_3** StaticGet_VCRect3()
		{
			return (::Class_1_0A24888DF04C995E_3**)Il2CppClass::FromTypeDefinitionIndex(VirtualCameraFollowBehavior_TypeDefinitionIndex)->GetStaticField(0x378A8);
		}
		::System::Single originalDistance; // 0x38
		::RPG::CustomRP::CRPVirtualCameraVolumn_PostUpdateVCCamera* cbfun; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::System::Void Method_3_1EA97511ABF2B3A7(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_1EA97511ABF2B3A7_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Single Method_3_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_43E290A0B26B39F6_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_3_693C4912BF61F072(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Int32 a2, ::UnityEngine::Rendering::CRPCameraInfo& a3, ::UnityEngine::Camera* a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Int32, ::UnityEngine::Rendering::CRPCameraInfo&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_693C4912BF61F072_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Matrix4x4 Method_3_A1ABB86FA403B48B(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Single, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_A1ABB86FA403B48B_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Matrix4x4 Method_3_E80720BBCF7832DF(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6, ::UnityEngine::Vector2 a7, ::UnityEngine::Vector2 a8, ::UnityEngine::Vector2 a9, ::UnityEngine::Vector2 a10)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Single, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_E80720BBCF7832DF_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::UnityEngine::Vector2 Method_3_7C2CABA4CB548A03(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_7C2CABA4CB548A03_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Single>* Method_3_BED9888991D99A89(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6, ::UnityEngine::Vector2 a7, ::UnityEngine::Vector2 a8)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_BED9888991D99A89_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::Il2CppArray<::System::Single>* Method_3_E34EC5C56715D759(::Il2CppArray<::System::Single>* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_E34EC5C56715D759_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2450CFC043E97F54()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_2450CFC043E97F54_OFFSET))();
		}

		::RPG::Client::VirtualCameraFollowMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::VirtualCameraFollowMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, P0);
		}
	};
}
