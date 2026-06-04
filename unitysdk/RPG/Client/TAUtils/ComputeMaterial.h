#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/RenderTextureSubElement.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client::TAUtils { class ComputeMaterial_FloatProperty; }
namespace RPG::Client::TAUtils { class ComputeMaterial_TextureProperty; }
namespace RPG::Client::TAUtils { class ComputeMaterial_VectorProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_055B57D0803DA902_OFFSET UNITYSDK_OFFSET(0xC9BC160)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_05903074FA8D7D0E_OFFSET UNITYSDK_OFFSET(0xC9BB6C0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_06AF7B1A8280FE42_OFFSET UNITYSDK_OFFSET(0xC9BBF00)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_12419F56E798761A_OFFSET UNITYSDK_OFFSET(0xC9BC250)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_1F62297D5DF54B30_OFFSET UNITYSDK_OFFSET(0xC9BC6F0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_215094CBF7E59C93_OFFSET UNITYSDK_OFFSET(0xC9BBD20)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_26607977B1AEDB16_OFFSET UNITYSDK_OFFSET(0xC9BC550)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_29F27E8C5DCE54E0_OFFSET UNITYSDK_OFFSET(0xC9BB740)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_35384A5071CCB96B_OFFSET UNITYSDK_OFFSET(0xC9BB800)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_419D6E7DF60B6F0B_OFFSET UNITYSDK_OFFSET(0xC9BC400)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_42988FE8E033FE1E_OFFSET UNITYSDK_OFFSET(0xC9BB510)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_5D9BA1D54A3CDB62_OFFSET UNITYSDK_OFFSET(0xC9BB4C0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_5E4EF3B56A795F4D_OFFSET UNITYSDK_OFFSET(0xC9BBDB0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_5FF1E2B8FCD9B46C_OFFSET UNITYSDK_OFFSET(0xC9BBC10)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_64629612F3646911_OFFSET UNITYSDK_OFFSET(0xC9BB5D0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_6CB5060D47BF8A1B_OFFSET UNITYSDK_OFFSET(0xC9BB650)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_6DACC73747E6207C_OFFSET UNITYSDK_OFFSET(0xC9BBCA0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_700FE3C732AA435C_OFFSET UNITYSDK_OFFSET(0xC9BC5E0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_72E21666A5A5FB58_OFFSET UNITYSDK_OFFSET(0xC9BC4A0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_791E87BBA5976F0D_OFFSET UNITYSDK_OFFSET(0xC9BB8E0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_7EB309CB8EB8090D_OFFSET UNITYSDK_OFFSET(0xC9BC670)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_803418CD50931138_OFFSET UNITYSDK_OFFSET(0xC9BC000)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_859F5F716A958C95_OFFSET UNITYSDK_OFFSET(0xC9BBB80)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_969EF16C38E0FD30_OFFSET UNITYSDK_OFFSET(0xC9BB970)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_A07C2061B55C1547_OFFSET UNITYSDK_OFFSET(0xC9BB1F0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_A2B3632F424D6B51_OFFSET UNITYSDK_OFFSET(0xC9BC0F0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_AEFAF1FAD171856E_OFFSET UNITYSDK_OFFSET(0xC9BBE80)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_B377DFA91C103BC2_OFFSET UNITYSDK_OFFSET(0xC9BC360)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_C24D72355EC8903A_OFFSET UNITYSDK_OFFSET(0xC9BC070)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_C4D9B4D8C0CE03AD_OFFSET UNITYSDK_OFFSET(0xC9BBAF0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_C5D43255E85826E1_OFFSET UNITYSDK_OFFSET(0xC9BC2D0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_C6E14CE377D03CE0_OFFSET UNITYSDK_OFFSET(0xC9BB570)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_C8F6DE35233C6A4C_OFFSET UNITYSDK_OFFSET(0xC9BBA70)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0xC9BC1E0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_E192DE9421E8351F_OFFSET UNITYSDK_OFFSET(0xC9BBF80)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_EB206643D64D33FB_OFFSET UNITYSDK_OFFSET(0xC9BB9F0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_F0553A46AEC8DA0F_OFFSET UNITYSDK_OFFSET(0xC9BB870)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0xC9BADA0)
#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0xC9BC760)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int ComputeMaterial_TypeDefinitionIndex = 68705;

	class ComputeMaterial : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::ComputeShader* ComputeShader; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::ComputeMaterial_FloatProperty*>* FloatProperties; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::ComputeMaterial_VectorProperty*>* VectorProperties; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::ComputeMaterial_TextureProperty*>* TextureProperties; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_FD3B916300F77FDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_FD3B916300F77FDA_OFFSET))(this);
		}

		::System::Void Method_3_A07C2061B55C1547()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_A07C2061B55C1547_OFFSET))(this);
		}

		::System::Void Method_3_5D9BA1D54A3CDB62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_5D9BA1D54A3CDB62_OFFSET))(this);
		}

		::System::Int32 Method_3_42988FE8E033FE1E(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_42988FE8E033FE1E_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_C6E14CE377D03CE0(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_C6E14CE377D03CE0_OFFSET))(this, a1);
		}

		::System::Void Method_3_64629612F3646911(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_64629612F3646911_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_6CB5060D47BF8A1B(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_6CB5060D47BF8A1B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_05903074FA8D7D0E(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_05903074FA8D7D0E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_29F27E8C5DCE54E0(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_29F27E8C5DCE54E0_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_35384A5071CCB96B(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_35384A5071CCB96B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_F0553A46AEC8DA0F(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_F0553A46AEC8DA0F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_791E87BBA5976F0D(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Texture* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_791E87BBA5976F0D_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_969EF16C38E0FD30(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_969EF16C38E0FD30_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_EB206643D64D33FB(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::ComputeBuffer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_EB206643D64D33FB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_C8F6DE35233C6A4C(::System::Int32 a1, ::System::Int32 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_C8F6DE35233C6A4C_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_C4D9B4D8C0CE03AD(::System::Int32 a1, ::System::UInt32& a2, ::System::UInt32& a3, ::System::UInt32& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_C4D9B4D8C0CE03AD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_859F5F716A958C95(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_859F5F716A958C95_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_5FF1E2B8FCD9B46C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_5FF1E2B8FCD9B46C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_6DACC73747E6207C(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_6DACC73747E6207C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_215094CBF7E59C93(::System::String* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_215094CBF7E59C93_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_5E4EF3B56A795F4D(::System::String* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_5E4EF3B56A795F4D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_AEFAF1FAD171856E(::System::String* a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_AEFAF1FAD171856E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_06AF7B1A8280FE42(::System::String* a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_06AF7B1A8280FE42_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_E192DE9421E8351F(::System::String* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_E192DE9421E8351F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_803418CD50931138(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_803418CD50931138_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_C24D72355EC8903A(::System::String* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_C24D72355EC8903A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_A2B3632F424D6B51(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_A2B3632F424D6B51_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_055B57D0803DA902(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_055B57D0803DA902_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_CEE72EAC18ECC163(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_CEE72EAC18ECC163_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_12419F56E798761A(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_12419F56E798761A_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_C5D43255E85826E1(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_C5D43255E85826E1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_B377DFA91C103BC2(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Texture* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_B377DFA91C103BC2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_419D6E7DF60B6F0B(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::RenderTexture* a3, ::System::Int32 a4, ::UnityEngine::Rendering::RenderTextureSubElement a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_419D6E7DF60B6F0B_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_72E21666A5A5FB58(::System::Int32 a1, ::System::String* a2, ::UnityEngine::RenderTexture* a3, ::System::Int32 a4, ::UnityEngine::Rendering::RenderTextureSubElement a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::RenderTexture*, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_72E21666A5A5FB58_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_26607977B1AEDB16(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_26607977B1AEDB16_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_700FE3C732AA435C(::System::Int32 a1, ::System::String* a2, ::UnityEngine::ComputeBuffer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_700FE3C732AA435C_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_7EB309CB8EB8090D(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_7EB309CB8EB8090D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_1F62297D5DF54B30(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_METHOD_3_1F62297D5DF54B30_OFFSET))(this, a1, a2);
		}
	};
}
