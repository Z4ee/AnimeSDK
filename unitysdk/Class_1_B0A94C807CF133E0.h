#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/MoleMole/Interaction/AxisSign.h"
#include "unitysdk/Struct_2_409E294815B4CE48.h"
#include "unitysdk/Struct_2_74C6EE564641CFF8.h"
#include "unitysdk/Struct_2_8500CCAF67F8FA7F.h"
#include "unitysdk/Struct_2_870A2C4023B05F0B.h"
#include "unitysdk/Struct_2_984AA94FB23486F9_2.h"
#include "unitysdk/Struct_2_D0732A9EE482521E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B0A94C807CF133E0_METHOD_1_02FCF18DE027BCF7_OFFSET UNITYSDK_OFFSET(0x15373D10)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_0E3489CAC7A08EFB_OFFSET UNITYSDK_OFFSET(0x15372320)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_11A6B8237FA8803B_OFFSET UNITYSDK_OFFSET(0x1536FC40)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_167E3C5406868259_OFFSET UNITYSDK_OFFSET(0x1536FA90)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_1733275423FF2734_OFFSET UNITYSDK_OFFSET(0x15372880)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_178EA063585DE2C4_OFFSET UNITYSDK_OFFSET(0x153726A0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_19A2C4BE37CF3BA4_OFFSET UNITYSDK_OFFSET(0x15339470)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_1A897E76DC0DA152_OFFSET UNITYSDK_OFFSET(0x15373690)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_1B2FA136E36687DD_OFFSET UNITYSDK_OFFSET(0x15370AC0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_1FFDC4D157648D07_1_OFFSET UNITYSDK_OFFSET(0x15370080)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_1FFDC4D157648D07_OFFSET UNITYSDK_OFFSET(0x1536E7F0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_38636B50BF1F86E3_OFFSET UNITYSDK_OFFSET(0x15374010)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_3BD4447E4B5CA6EC_OFFSET UNITYSDK_OFFSET(0x15371EC0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_3BF6A0FB2F2294F3_OFFSET UNITYSDK_OFFSET(0x15373910)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_3EBDCC70DBAC1F3F_OFFSET UNITYSDK_OFFSET(0x153717C0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_42EC4AA3307E5849_OFFSET UNITYSDK_OFFSET(0x153749E0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_44B40D569E15CA30_1_OFFSET UNITYSDK_OFFSET(0x1536F6B0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_44B40D569E15CA30_OFFSET UNITYSDK_OFFSET(0x1536FD40)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_4886789AFB57E20F_OFFSET UNITYSDK_OFFSET(0x15370160)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_502C0C74DDECD92A_OFFSET UNITYSDK_OFFSET(0x15371890)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_55BB2E07FF6C5031_1_OFFSET UNITYSDK_OFFSET(0x1536F240)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_55BB2E07FF6C5031_OFFSET UNITYSDK_OFFSET(0x1536F070)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_57234B1B0FA2F3D1_OFFSET UNITYSDK_OFFSET(0x153703E0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_6113C07A530A956E_OFFSET UNITYSDK_OFFSET(0x1536F8E0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_63320E40C83A8B11_OFFSET UNITYSDK_OFFSET(0x1536F400)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_63428E7B8BBD6077_OFFSET UNITYSDK_OFFSET(0x1536F5E0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_6CC052C5FFEBC070_OFFSET UNITYSDK_OFFSET(0x15372B90)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_6D2E06AB0DDA1D04_OFFSET UNITYSDK_OFFSET(0x1536E910)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_70C270E99F7B4980_OFFSET UNITYSDK_OFFSET(0x153715F0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_70C9F1A63B38BA35_OFFSET UNITYSDK_OFFSET(0x1536F730)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_72F1DC1CE69DDE36_OFFSET UNITYSDK_OFFSET(0x1536FDB0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_7582AA32FE190E3C_OFFSET UNITYSDK_OFFSET(0x15370EB0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_76DACD94B04B01CF_1_OFFSET UNITYSDK_OFFSET(0x15372E40)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_76DACD94B04B01CF_2_OFFSET UNITYSDK_OFFSET(0x15374170)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_76DACD94B04B01CF_OFFSET UNITYSDK_OFFSET(0x1536F4C0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_7C6F3FC75C836168_1_OFFSET UNITYSDK_OFFSET(0x15372F70)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_7C6F3FC75C836168_2_OFFSET UNITYSDK_OFFSET(0x15373BB0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_7C6F3FC75C836168_OFFSET UNITYSDK_OFFSET(0x1536EB10)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_8102D271F076C040_1_OFFSET UNITYSDK_OFFSET(0x15374C40)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_8102D271F076C040_OFFSET UNITYSDK_OFFSET(0x153739E0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_828279386C90EF75_1_OFFSET UNITYSDK_OFFSET(0x1536FB50)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_828279386C90EF75_OFFSET UNITYSDK_OFFSET(0x1536EDF0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_8458E443452F367A_OFFSET UNITYSDK_OFFSET(0x15374900)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_898CE25F2762823C_OFFSET UNITYSDK_OFFSET(0x15371670)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_8A9AB5771E61CBD0_OFFSET UNITYSDK_OFFSET(0x15371B60)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_8ADA8CCA1C39D71A_OFFSET UNITYSDK_OFFSET(0x15372CD0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_8EBFED2211297C1E_OFFSET UNITYSDK_OFFSET(0x15371400)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_9542BA9CB6BD149F_OFFSET UNITYSDK_OFFSET(0x15374AF0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_9643FA636E355221_OFFSET UNITYSDK_OFFSET(0x15372210)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_96F004A8E8275758_OFFSET UNITYSDK_OFFSET(0x15370DE0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_995B8AFE4E7FF188_OFFSET UNITYSDK_OFFSET(0x153737E0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_9B592D830D03A4A8_OFFSET UNITYSDK_OFFSET(0x15370870)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_9C978B8AFFEC450C_OFFSET UNITYSDK_OFFSET(0x15374690)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_AB3EF32A64F0AD85_OFFSET UNITYSDK_OFFSET(0x1536F980)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_B680F7A54D316DED_OFFSET UNITYSDK_OFFSET(0x15373070)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_B898DD3FCD041996_OFFSET UNITYSDK_OFFSET(0x15374290)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_CB19BA2837441722_OFFSET UNITYSDK_OFFSET(0x1536F820)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_D014E47BBB4D33DD_OFFSET UNITYSDK_OFFSET(0x153719E0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_D85FEE9E786100CA_OFFSET UNITYSDK_OFFSET(0x15374450)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_D8CD31ADAF529C0E_OFFSET UNITYSDK_OFFSET(0x153712C0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_DD95356DD548764D_OFFSET UNITYSDK_OFFSET(0x153720B0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_EE9EE6AA1320FEB8_OFFSET UNITYSDK_OFFSET(0x1536FFC0)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_F3B54DF8661E8761_OFFSET UNITYSDK_OFFSET(0x15372000)
#define CLASS_1_B0A94C807CF133E0_METHOD_1_FD1FA6833E8A926F_OFFSET UNITYSDK_OFFSET(0x15372560)

inline static constexpr unsigned int Class_1_B0A94C807CF133E0_TypeDefinitionIndex = 63511;

class Class_1_B0A94C807CF133E0 : public ::System::Object
{
public:
	static ::Struct_2_74C6EE564641CFF8 Method_1_1FFDC4D157648D07(::Struct_2_74C6EE564641CFF8 a1, ::Struct_2_D0732A9EE482521E& a2)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::Struct_2_74C6EE564641CFF8, ::Struct_2_D0732A9EE482521E&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_1FFDC4D157648D07_OFFSET))(a1, a2);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_828279386C90EF75(::Struct_2_74C6EE564641CFF8 a1, ::UnityEngine::Quaternion& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::Struct_2_74C6EE564641CFF8, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_828279386C90EF75_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_63320E40C83A8B11(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_63320E40C83A8B11_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Plane Method_1_76DACD94B04B01CF(::Struct_2_D0732A9EE482521E a1)
	{
		return ((::UnityEngine::Plane(*)(::Struct_2_D0732A9EE482521E))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_76DACD94B04B01CF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_63428E7B8BBD6077(::UnityEngine::Vector2& a1, ::Struct_2_409E294815B4CE48& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::Struct_2_409E294815B4CE48&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_63428E7B8BBD6077_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_70C9F1A63B38BA35(::UnityEngine::Vector3 a1, ::Foundation::Unreal::FTransform& a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::Foundation::Unreal::FTransform&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_70C9F1A63B38BA35_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CB19BA2837441722(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_CB19BA2837441722_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_6113C07A530A956E(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_6113C07A530A956E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_AB3EF32A64F0AD85(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::System::Single& a3, ::UnityEngine::Vector2& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_AB3EF32A64F0AD85_OFFSET))(a1, a2, a3, a4);
	}

	static ::Struct_2_984AA94FB23486F9_2 Method_1_828279386C90EF75_1(::Struct_2_984AA94FB23486F9_2 a1, ::UnityEngine::Quaternion& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::Struct_2_984AA94FB23486F9_2(*)(::Struct_2_984AA94FB23486F9_2, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_828279386C90EF75_1_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_11A6B8237FA8803B(::MoleMole::Interaction::AxisSign a1)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Interaction::AxisSign))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_11A6B8237FA8803B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_44B40D569E15CA30(::UnityEngine::Vector2& a1, ::Struct_2_870A2C4023B05F0B& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::Struct_2_870A2C4023B05F0B&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_44B40D569E15CA30_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_EE9EE6AA1320FEB8(::UnityEngine::Quaternion a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_EE9EE6AA1320FEB8_OFFSET))(a1);
	}

	static ::Struct_2_984AA94FB23486F9_2 Method_1_1FFDC4D157648D07_1(::Struct_2_984AA94FB23486F9_2 a1, ::Struct_2_D0732A9EE482521E& a2)
	{
		return ((::Struct_2_984AA94FB23486F9_2(*)(::Struct_2_984AA94FB23486F9_2, ::Struct_2_D0732A9EE482521E&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_1FFDC4D157648D07_1_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Bounds Method_1_57234B1B0FA2F3D1(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_57234B1B0FA2F3D1_OFFSET))(a1, a2);
	}

	static ::Struct_2_870A2C4023B05F0B Method_1_1B2FA136E36687DD(::Struct_2_74C6EE564641CFF8 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::Struct_2_870A2C4023B05F0B(*)(::Struct_2_74C6EE564641CFF8, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_1B2FA136E36687DD_OFFSET))(a1, a2, a3, a4);
	}

	static ::Foundation::Unreal::FTransform Method_1_7582AA32FE190E3C(::Struct_2_D0732A9EE482521E a1, ::Struct_2_D0732A9EE482521E a2)
	{
		return ((::Foundation::Unreal::FTransform(*)(::Struct_2_D0732A9EE482521E, ::Struct_2_D0732A9EE482521E))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_7582AA32FE190E3C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_70C270E99F7B4980(::System::Single& a1, ::UnityEngine::Vector2& a2, ::System::Single& a3, ::UnityEngine::Vector2& a4)
	{
		return ((::System::Boolean(*)(::System::Single&, ::UnityEngine::Vector2&, ::System::Single&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_70C270E99F7B4980_OFFSET))(a1, a2, a3, a4);
	}

	static ::Struct_2_409E294815B4CE48 Method_1_898CE25F2762823C(::Struct_2_984AA94FB23486F9_2 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::Struct_2_409E294815B4CE48(*)(::Struct_2_984AA94FB23486F9_2, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_898CE25F2762823C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_3EBDCC70DBAC1F3F(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_3EBDCC70DBAC1F3F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_72F1DC1CE69DDE36(::Struct_2_870A2C4023B05F0B a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::Struct_2_870A2C4023B05F0B, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_72F1DC1CE69DDE36_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_502C0C74DDECD92A(::Struct_2_984AA94FB23486F9_2& a1, ::Struct_2_984AA94FB23486F9_2& a2)
	{
		return ((::System::Boolean(*)(::Struct_2_984AA94FB23486F9_2&, ::Struct_2_984AA94FB23486F9_2&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_502C0C74DDECD92A_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Quaternion Method_1_D014E47BBB4D33DD(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_D014E47BBB4D33DD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8A9AB5771E61CBD0(::Struct_2_8500CCAF67F8FA7F a1)
	{
		return ((::System::Boolean(*)(::Struct_2_8500CCAF67F8FA7F))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_8A9AB5771E61CBD0_OFFSET))(a1);
	}

	static ::System::Single Method_1_9643FA636E355221(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_9643FA636E355221_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::Unreal::FTransform Method_1_8EBFED2211297C1E(::Foundation::Unreal::FTransform& a1, ::Foundation::Unreal::FTransform& a2)
	{
		return ((::Foundation::Unreal::FTransform(*)(::Foundation::Unreal::FTransform&, ::Foundation::Unreal::FTransform&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_8EBFED2211297C1E_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Matrix4x4 Method_1_6D2E06AB0DDA1D04(::Struct_2_D0732A9EE482521E a1)
	{
		return ((::UnityEngine::Matrix4x4(*)(::Struct_2_D0732A9EE482521E))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_6D2E06AB0DDA1D04_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_0E3489CAC7A08EFB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_0E3489CAC7A08EFB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_FD1FA6833E8A926F(::UnityEngine::Bounds a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_FD1FA6833E8A926F_OFFSET))(a1);
	}

	static ::Struct_2_8500CCAF67F8FA7F Method_1_178EA063585DE2C4(::Struct_2_8500CCAF67F8FA7F a1, ::System::Single& a2)
	{
		return ((::Struct_2_8500CCAF67F8FA7F(*)(::Struct_2_8500CCAF67F8FA7F, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_178EA063585DE2C4_OFFSET))(a1, a2);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_1733275423FF2734(::Struct_2_74C6EE564641CFF8& a1, ::UnityEngine::Plane& a2)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::Struct_2_74C6EE564641CFF8&, ::UnityEngine::Plane&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_1733275423FF2734_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_167E3C5406868259(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_167E3C5406868259_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_6CC052C5FFEBC070(::Struct_2_D0732A9EE482521E a1)
	{
		return ((::System::Boolean(*)(::Struct_2_D0732A9EE482521E))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_6CC052C5FFEBC070_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DD95356DD548764D(::Il2CppArray<::UnityEngine::Vector3>*& a1)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_DD95356DD548764D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3BD4447E4B5CA6EC(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_3BD4447E4B5CA6EC_OFFSET))(a1, a2);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_7C6F3FC75C836168(::Struct_2_74C6EE564641CFF8 a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::Struct_2_74C6EE564641CFF8, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_7C6F3FC75C836168_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Plane Method_1_76DACD94B04B01CF_1(::Struct_2_D0732A9EE482521E a1)
	{
		return ((::UnityEngine::Plane(*)(::Struct_2_D0732A9EE482521E))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_76DACD94B04B01CF_1_OFFSET))(a1);
	}

	static ::Struct_2_984AA94FB23486F9_2 Method_1_4886789AFB57E20F(::Struct_2_984AA94FB23486F9_2 a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::Struct_2_984AA94FB23486F9_2(*)(::Struct_2_984AA94FB23486F9_2, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_4886789AFB57E20F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_44B40D569E15CA30_1(::Struct_2_409E294815B4CE48 a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::Struct_2_409E294815B4CE48, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_44B40D569E15CA30_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F3B54DF8661E8761(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_F3B54DF8661E8761_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B680F7A54D316DED(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_B680F7A54D316DED_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_1_55BB2E07FF6C5031(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::System::Single& a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_55BB2E07FF6C5031_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_1A897E76DC0DA152(::Foundation::Unreal::FTransform a1)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_1A897E76DC0DA152_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_995B8AFE4E7FF188(::Foundation::Unreal::FTransform a1, ::Foundation::Unreal::FTransform& a2)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform, ::Foundation::Unreal::FTransform&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_995B8AFE4E7FF188_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_55BB2E07FF6C5031_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::System::Single& a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_55BB2E07FF6C5031_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_8ADA8CCA1C39D71A(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_8ADA8CCA1C39D71A_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FTransform Method_1_D8CD31ADAF529C0E(::Struct_2_D0732A9EE482521E a1)
	{
		return ((::Foundation::Unreal::FTransform(*)(::Struct_2_D0732A9EE482521E))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_D8CD31ADAF529C0E_OFFSET))(a1);
	}

	static ::Struct_2_984AA94FB23486F9_2 Method_1_3BF6A0FB2F2294F3(::Struct_2_984AA94FB23486F9_2& a1, ::UnityEngine::Plane& a2)
	{
		return ((::Struct_2_984AA94FB23486F9_2(*)(::Struct_2_984AA94FB23486F9_2&, ::UnityEngine::Plane&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_3BF6A0FB2F2294F3_OFFSET))(a1, a2);
	}

	static ::Struct_2_984AA94FB23486F9_2 Method_1_7C6F3FC75C836168_1(::Struct_2_984AA94FB23486F9_2 a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::Struct_2_984AA94FB23486F9_2(*)(::Struct_2_984AA94FB23486F9_2, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_7C6F3FC75C836168_1_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::UnityEngine::Vector3>* Method_1_9B592D830D03A4A8(::UnityEngine::Bounds a1)
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_9B592D830D03A4A8_OFFSET))(a1);
	}

	static ::Struct_2_984AA94FB23486F9_2 Method_1_8102D271F076C040(::Struct_2_984AA94FB23486F9_2 a1, ::Struct_2_D0732A9EE482521E& a2)
	{
		return ((::Struct_2_984AA94FB23486F9_2(*)(::Struct_2_984AA94FB23486F9_2, ::Struct_2_D0732A9EE482521E&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_8102D271F076C040_OFFSET))(a1, a2);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_7C6F3FC75C836168_2(::Struct_2_74C6EE564641CFF8 a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::Struct_2_74C6EE564641CFF8, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_7C6F3FC75C836168_2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_02FCF18DE027BCF7(::Struct_2_870A2C4023B05F0B& a1, ::Struct_2_409E294815B4CE48& a2)
	{
		return ((::System::Boolean(*)(::Struct_2_870A2C4023B05F0B&, ::Struct_2_409E294815B4CE48&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_02FCF18DE027BCF7_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2 Method_1_96F004A8E8275758(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_96F004A8E8275758_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Plane Method_1_76DACD94B04B01CF_2(::Struct_2_D0732A9EE482521E a1)
	{
		return ((::UnityEngine::Plane(*)(::Struct_2_D0732A9EE482521E))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_76DACD94B04B01CF_2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B898DD3FCD041996(::Foundation::Unreal::FTransform a1)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_B898DD3FCD041996_OFFSET))(a1);
	}

	static ::System::Single Method_1_D85FEE9E786100CA(::MoleMole::Interaction::AxisSign a1, ::UnityEngine::BoxCollider*& a2)
	{
		return ((::System::Single(*)(::MoleMole::Interaction::AxisSign, ::UnityEngine::BoxCollider*&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_D85FEE9E786100CA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9C978B8AFFEC450C(::Foundation::Unreal::FTransform3D a1)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform3D))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_9C978B8AFFEC450C_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_8458E443452F367A(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_8458E443452F367A_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_42EC4AA3307E5849(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_42EC4AA3307E5849_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::Unreal::FTransform Method_1_9542BA9CB6BD149F(::UnityEngine::Transform* a1)
	{
		return ((::Foundation::Unreal::FTransform(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_9542BA9CB6BD149F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_38636B50BF1F86E3(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::Struct_2_409E294815B4CE48& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::Struct_2_409E294815B4CE48&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_38636B50BF1F86E3_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_8102D271F076C040_1(::Struct_2_74C6EE564641CFF8 a1, ::Struct_2_D0732A9EE482521E& a2)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::Struct_2_74C6EE564641CFF8, ::Struct_2_D0732A9EE482521E&))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_8102D271F076C040_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_19A2C4BE37CF3BA4(::UnityEngine::Plane a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Plane))((::PBYTE)hIl2Cpp + CLASS_1_B0A94C807CF133E0_METHOD_1_19A2C4BE37CF3BA4_OFFSET))(a1);
	}
};
