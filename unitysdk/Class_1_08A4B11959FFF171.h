#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/MoleMole/Interaction/AxisSign.h"
#include "unitysdk/Struct_2_409E294815B4CE48.h"
#include "unitysdk/Struct_2_74C6EE564641CFF8.h"
#include "unitysdk/Struct_2_870A2C4023B05F0B.h"
#include "unitysdk/Struct_2_984AA94FB23486F9_2.h"
#include "unitysdk/Struct_2_A62B8C05FE608BC8.h"
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

#define CLASS_1_08A4B11959FFF171_METHOD_1_02FCF18DE027BCF7_OFFSET UNITYSDK_OFFSET(0x15479F70)
#define CLASS_1_08A4B11959FFF171_METHOD_1_0AB8FBFB00DD73CC_OFFSET UNITYSDK_OFFSET(0x1547BF30)
#define CLASS_1_08A4B11959FFF171_METHOD_1_11A6B8237FA8803B_OFFSET UNITYSDK_OFFSET(0x15479400)
#define CLASS_1_08A4B11959FFF171_METHOD_1_178EA063585DE2C4_OFFSET UNITYSDK_OFFSET(0x1547D340)
#define CLASS_1_08A4B11959FFF171_METHOD_1_19A2C4BE37CF3BA4_OFFSET UNITYSDK_OFFSET(0x1547E350)
#define CLASS_1_08A4B11959FFF171_METHOD_1_1A897E76DC0DA152_OFFSET UNITYSDK_OFFSET(0x1547D0C0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_1FFDC4D157648D07_1_OFFSET UNITYSDK_OFFSET(0x1547F4C0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_1FFDC4D157648D07_OFFSET UNITYSDK_OFFSET(0x1547BD80)
#define CLASS_1_08A4B11959FFF171_METHOD_1_38636B50BF1F86E3_OFFSET UNITYSDK_OFFSET(0x1547A310)
#define CLASS_1_08A4B11959FFF171_METHOD_1_39A78A6FD6ABCB16_OFFSET UNITYSDK_OFFSET(0x1547F5A0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_3BF6A0FB2F2294F3_OFFSET UNITYSDK_OFFSET(0x1547A900)
#define CLASS_1_08A4B11959FFF171_METHOD_1_3EBDCC70DBAC1F3F_OFFSET UNITYSDK_OFFSET(0x1547A830)
#define CLASS_1_08A4B11959FFF171_METHOD_1_44B40D569E15CA30_OFFSET UNITYSDK_OFFSET(0x1547E2E0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_45B2942CBD03F6D1_OFFSET UNITYSDK_OFFSET(0x15479B30)
#define CLASS_1_08A4B11959FFF171_METHOD_1_4886789AFB57E20F_OFFSET UNITYSDK_OFFSET(0x1547E640)
#define CLASS_1_08A4B11959FFF171_METHOD_1_502C0C74DDECD92A_OFFSET UNITYSDK_OFFSET(0x1547DF20)
#define CLASS_1_08A4B11959FFF171_METHOD_1_55BB2E07FF6C5031_1_OFFSET UNITYSDK_OFFSET(0x1547B470)
#define CLASS_1_08A4B11959FFF171_METHOD_1_55BB2E07FF6C5031_OFFSET UNITYSDK_OFFSET(0x15478E60)
#define CLASS_1_08A4B11959FFF171_METHOD_1_5FFF18BC9F7F7AE7_OFFSET UNITYSDK_OFFSET(0x1547F050)
#define CLASS_1_08A4B11959FFF171_METHOD_1_6113C07A530A956E_OFFSET UNITYSDK_OFFSET(0x1547F6D0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_63320E40C83A8B11_OFFSET UNITYSDK_OFFSET(0x15479340)
#define CLASS_1_08A4B11959FFF171_METHOD_1_677E513192C9B410_OFFSET UNITYSDK_OFFSET(0x1547EF60)
#define CLASS_1_08A4B11959FFF171_METHOD_1_6B49496DF4F3C6C2_OFFSET UNITYSDK_OFFSET(0x1547CD90)
#define CLASS_1_08A4B11959FFF171_METHOD_1_6CC052C5FFEBC070_OFFSET UNITYSDK_OFFSET(0x1547F380)
#define CLASS_1_08A4B11959FFF171_METHOD_1_6CDC053A78F51E6F_OFFSET UNITYSDK_OFFSET(0x15479520)
#define CLASS_1_08A4B11959FFF171_METHOD_1_6D2E06AB0DDA1D04_OFFSET UNITYSDK_OFFSET(0x15479D70)
#define CLASS_1_08A4B11959FFF171_METHOD_1_70C270E99F7B4980_OFFSET UNITYSDK_OFFSET(0x1547A290)
#define CLASS_1_08A4B11959FFF171_METHOD_1_70C9F1A63B38BA35_OFFSET UNITYSDK_OFFSET(0x15479100)
#define CLASS_1_08A4B11959FFF171_METHOD_1_72187D18BFDDC352_OFFSET UNITYSDK_OFFSET(0x1547A700)
#define CLASS_1_08A4B11959FFF171_METHOD_1_7582AA32FE190E3C_OFFSET UNITYSDK_OFFSET(0x1547D520)
#define CLASS_1_08A4B11959FFF171_METHOD_1_7C6F3FC75C836168_1_OFFSET UNITYSDK_OFFSET(0x1547DD00)
#define CLASS_1_08A4B11959FFF171_METHOD_1_7C6F3FC75C836168_2_OFFSET UNITYSDK_OFFSET(0x1547AB30)
#define CLASS_1_08A4B11959FFF171_METHOD_1_7C6F3FC75C836168_OFFSET UNITYSDK_OFFSET(0x1547A9D0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_8102D271F076C040_1_OFFSET UNITYSDK_OFFSET(0x1547DB30)
#define CLASS_1_08A4B11959FFF171_METHOD_1_8102D271F076C040_OFFSET UNITYSDK_OFFSET(0x1547B140)
#define CLASS_1_08A4B11959FFF171_METHOD_1_828279386C90EF75_1_OFFSET UNITYSDK_OFFSET(0x1547E070)
#define CLASS_1_08A4B11959FFF171_METHOD_1_828279386C90EF75_OFFSET UNITYSDK_OFFSET(0x1547C910)
#define CLASS_1_08A4B11959FFF171_METHOD_1_898CE25F2762823C_OFFSET UNITYSDK_OFFSET(0x1547E4F0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_8A757301294F4ADE_OFFSET UNITYSDK_OFFSET(0x1547BEA0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_8A9AB5771E61CBD0_OFFSET UNITYSDK_OFFSET(0x1547B650)
#define CLASS_1_08A4B11959FFF171_METHOD_1_8ADA8CCA1C39D71A_OFFSET UNITYSDK_OFFSET(0x1547E8B0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_8EBFED2211297C1E_OFFSET UNITYSDK_OFFSET(0x1547D930)
#define CLASS_1_08A4B11959FFF171_METHOD_1_9542BA9CB6BD149F_OFFSET UNITYSDK_OFFSET(0x1547EC90)
#define CLASS_1_08A4B11959FFF171_METHOD_1_9643FA636E355221_OFFSET UNITYSDK_OFFSET(0x1547DE00)
#define CLASS_1_08A4B11959FFF171_METHOD_1_96F004A8E8275758_OFFSET UNITYSDK_OFFSET(0x1547B3B0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_995B8AFE4E7FF188_OFFSET UNITYSDK_OFFSET(0x1547CB80)
#define CLASS_1_08A4B11959FFF171_METHOD_1_9B592D830D03A4A8_OFFSET UNITYSDK_OFFSET(0x1547C3B0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_9C978B8AFFEC450C_OFFSET UNITYSDK_OFFSET(0x1547EA20)
#define CLASS_1_08A4B11959FFF171_METHOD_1_A1FFFE2790E2A5E6_1_OFFSET UNITYSDK_OFFSET(0x1547EDF0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_A1FFFE2790E2A5E6_2_OFFSET UNITYSDK_OFFSET(0x1547F770)
#define CLASS_1_08A4B11959FFF171_METHOD_1_A1FFFE2790E2A5E6_OFFSET UNITYSDK_OFFSET(0x1547BC10)
#define CLASS_1_08A4B11959FFF171_METHOD_1_B898DD3FCD041996_OFFSET UNITYSDK_OFFSET(0x1547A480)
#define CLASS_1_08A4B11959FFF171_METHOD_1_D014E47BBB4D33DD_OFFSET UNITYSDK_OFFSET(0x1547E160)
#define CLASS_1_08A4B11959FFF171_METHOD_1_D1C764F5483EA157_OFFSET UNITYSDK_OFFSET(0x1547C600)
#define CLASS_1_08A4B11959FFF171_METHOD_1_D85FEE9E786100CA_OFFSET UNITYSDK_OFFSET(0x1547AF00)
#define CLASS_1_08A4B11959FFF171_METHOD_1_D8CD31ADAF529C0E_OFFSET UNITYSDK_OFFSET(0x1547ADC0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_D94B9E876395A53C_OFFSET UNITYSDK_OFFSET(0x1547CCB0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_DC205499273B53C3_OFFSET UNITYSDK_OFFSET(0x15479C70)
#define CLASS_1_08A4B11959FFF171_METHOD_1_DD95356DD548764D_OFFSET UNITYSDK_OFFSET(0x154791F0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_DD99048C5BF5A929_OFFSET UNITYSDK_OFFSET(0x1547B9B0)
#define CLASS_1_08A4B11959FFF171_METHOD_1_EC4466BDA66B3604_OFFSET UNITYSDK_OFFSET(0x1547F130)
#define CLASS_1_08A4B11959FFF171_METHOD_1_EE9EE6AA1320FEB8_OFFSET UNITYSDK_OFFSET(0x1547A640)
#define CLASS_1_08A4B11959FFF171_METHOD_1_F3B54DF8661E8761_OFFSET UNITYSDK_OFFSET(0x15479050)
#define CLASS_1_08A4B11959FFF171_METHOD_1_FD1FA6833E8A926F_OFFSET UNITYSDK_OFFSET(0x1547D200)

inline static constexpr unsigned int Class_1_08A4B11959FFF171_TypeDefinitionIndex = 81658;

class Class_1_08A4B11959FFF171 : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 Method_1_55BB2E07FF6C5031(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::System::Single& a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_55BB2E07FF6C5031_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_F3B54DF8661E8761(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_F3B54DF8661E8761_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_70C9F1A63B38BA35(::UnityEngine::Vector3 a1, ::Foundation::Unreal::FTransform& a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::Foundation::Unreal::FTransform&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_70C9F1A63B38BA35_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DD95356DD548764D(::Il2CppArray<::UnityEngine::Vector3>*& a1)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_DD95356DD548764D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_63320E40C83A8B11(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_63320E40C83A8B11_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_11A6B8237FA8803B(::MoleMole::Interaction::AxisSign a1)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Interaction::AxisSign))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_11A6B8237FA8803B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6CDC053A78F51E6F(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_6CDC053A78F51E6F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_1_DC205499273B53C3(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_DC205499273B53C3_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Matrix4x4 Method_1_6D2E06AB0DDA1D04(::Struct_2_D0732A9EE482521E a1)
	{
		return ((::UnityEngine::Matrix4x4(*)(::Struct_2_D0732A9EE482521E))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_6D2E06AB0DDA1D04_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_02FCF18DE027BCF7(::Struct_2_870A2C4023B05F0B& a1, ::Struct_2_409E294815B4CE48& a2)
	{
		return ((::System::Boolean(*)(::Struct_2_870A2C4023B05F0B&, ::Struct_2_409E294815B4CE48&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_02FCF18DE027BCF7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B898DD3FCD041996(::Foundation::Unreal::FTransform a1)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_B898DD3FCD041996_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_72187D18BFDDC352(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_72187D18BFDDC352_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_3EBDCC70DBAC1F3F(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_3EBDCC70DBAC1F3F_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_984AA94FB23486F9_2 Method_1_3BF6A0FB2F2294F3(::Struct_2_984AA94FB23486F9_2& a1, ::UnityEngine::Plane& a2)
	{
		return ((::Struct_2_984AA94FB23486F9_2(*)(::Struct_2_984AA94FB23486F9_2&, ::UnityEngine::Plane&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_3BF6A0FB2F2294F3_OFFSET))(a1, a2);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_7C6F3FC75C836168(::Struct_2_74C6EE564641CFF8 a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::Struct_2_74C6EE564641CFF8, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_7C6F3FC75C836168_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FTransform Method_1_D8CD31ADAF529C0E(::Struct_2_D0732A9EE482521E a1)
	{
		return ((::Foundation::Unreal::FTransform(*)(::Struct_2_D0732A9EE482521E))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_D8CD31ADAF529C0E_OFFSET))(a1);
	}

	static ::System::Single Method_1_D85FEE9E786100CA(::MoleMole::Interaction::AxisSign a1, ::UnityEngine::BoxCollider*& a2)
	{
		return ((::System::Single(*)(::MoleMole::Interaction::AxisSign, ::UnityEngine::BoxCollider*&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_D85FEE9E786100CA_OFFSET))(a1, a2);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_8102D271F076C040(::Struct_2_74C6EE564641CFF8 a1, ::Struct_2_D0732A9EE482521E& a2)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::Struct_2_74C6EE564641CFF8, ::Struct_2_D0732A9EE482521E&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_8102D271F076C040_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2 Method_1_96F004A8E8275758(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_96F004A8E8275758_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_55BB2E07FF6C5031_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::System::Single& a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_55BB2E07FF6C5031_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_8A9AB5771E61CBD0(::Struct_2_A62B8C05FE608BC8 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_A62B8C05FE608BC8))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_8A9AB5771E61CBD0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DD99048C5BF5A929(::Struct_2_870A2C4023B05F0B a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::Struct_2_870A2C4023B05F0B, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_DD99048C5BF5A929_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Plane Method_1_A1FFFE2790E2A5E6(::Struct_2_D0732A9EE482521E a1)
	{
		return ((::UnityEngine::Plane(*)(::Struct_2_D0732A9EE482521E))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_A1FFFE2790E2A5E6_OFFSET))(a1);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_1FFDC4D157648D07(::Struct_2_74C6EE564641CFF8 a1, ::Struct_2_D0732A9EE482521E& a2)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::Struct_2_74C6EE564641CFF8, ::Struct_2_D0732A9EE482521E&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_1FFDC4D157648D07_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8A757301294F4ADE(::Struct_2_409E294815B4CE48 a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::Struct_2_409E294815B4CE48, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_8A757301294F4ADE_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Bounds Method_1_0AB8FBFB00DD73CC(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_0AB8FBFB00DD73CC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_45B2942CBD03F6D1(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_45B2942CBD03F6D1_OFFSET))(a1, a2);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_D1C764F5483EA157(::Struct_2_74C6EE564641CFF8& a1, ::UnityEngine::Plane& a2)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::Struct_2_74C6EE564641CFF8&, ::UnityEngine::Plane&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_D1C764F5483EA157_OFFSET))(a1, a2);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_828279386C90EF75(::Struct_2_74C6EE564641CFF8 a1, ::UnityEngine::Quaternion& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::Struct_2_74C6EE564641CFF8, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_828279386C90EF75_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_EE9EE6AA1320FEB8(::UnityEngine::Quaternion a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_EE9EE6AA1320FEB8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_995B8AFE4E7FF188(::Foundation::Unreal::FTransform a1, ::Foundation::Unreal::FTransform& a2)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform, ::Foundation::Unreal::FTransform&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_995B8AFE4E7FF188_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D94B9E876395A53C(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_D94B9E876395A53C_OFFSET))(a1, a2, a3, a4);
	}

	static ::Struct_2_870A2C4023B05F0B Method_1_6B49496DF4F3C6C2(::Struct_2_74C6EE564641CFF8 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::Struct_2_870A2C4023B05F0B(*)(::Struct_2_74C6EE564641CFF8, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_6B49496DF4F3C6C2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_1A897E76DC0DA152(::Foundation::Unreal::FTransform a1)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_1A897E76DC0DA152_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_FD1FA6833E8A926F(::UnityEngine::Bounds a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_FD1FA6833E8A926F_OFFSET))(a1);
	}

	static ::Struct_2_A62B8C05FE608BC8 Method_1_178EA063585DE2C4(::Struct_2_A62B8C05FE608BC8 a1, ::System::Single& a2)
	{
		return ((::Struct_2_A62B8C05FE608BC8(*)(::Struct_2_A62B8C05FE608BC8, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_178EA063585DE2C4_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FTransform Method_1_7582AA32FE190E3C(::Struct_2_D0732A9EE482521E a1, ::Struct_2_D0732A9EE482521E a2)
	{
		return ((::Foundation::Unreal::FTransform(*)(::Struct_2_D0732A9EE482521E, ::Struct_2_D0732A9EE482521E))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_7582AA32FE190E3C_OFFSET))(a1, a2);
	}

	static ::Struct_2_984AA94FB23486F9_2 Method_1_8102D271F076C040_1(::Struct_2_984AA94FB23486F9_2 a1, ::Struct_2_D0732A9EE482521E& a2)
	{
		return ((::Struct_2_984AA94FB23486F9_2(*)(::Struct_2_984AA94FB23486F9_2, ::Struct_2_D0732A9EE482521E&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_8102D271F076C040_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_38636B50BF1F86E3(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::Struct_2_409E294815B4CE48& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::Struct_2_409E294815B4CE48&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_38636B50BF1F86E3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_502C0C74DDECD92A(::Struct_2_984AA94FB23486F9_2& a1, ::Struct_2_984AA94FB23486F9_2& a2)
	{
		return ((::System::Boolean(*)(::Struct_2_984AA94FB23486F9_2&, ::Struct_2_984AA94FB23486F9_2&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_502C0C74DDECD92A_OFFSET))(a1, a2);
	}

	static ::Struct_2_984AA94FB23486F9_2 Method_1_828279386C90EF75_1(::Struct_2_984AA94FB23486F9_2 a1, ::UnityEngine::Quaternion& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::Struct_2_984AA94FB23486F9_2(*)(::Struct_2_984AA94FB23486F9_2, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_828279386C90EF75_1_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::Unreal::FTransform Method_1_8EBFED2211297C1E(::Foundation::Unreal::FTransform& a1, ::Foundation::Unreal::FTransform& a2)
	{
		return ((::Foundation::Unreal::FTransform(*)(::Foundation::Unreal::FTransform&, ::Foundation::Unreal::FTransform&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_8EBFED2211297C1E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_44B40D569E15CA30(::UnityEngine::Vector2& a1, ::Struct_2_870A2C4023B05F0B& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::Struct_2_870A2C4023B05F0B&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_44B40D569E15CA30_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::UnityEngine::Vector3>* Method_1_9B592D830D03A4A8(::UnityEngine::Bounds a1)
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_9B592D830D03A4A8_OFFSET))(a1);
	}

	static ::UnityEngine::Quaternion Method_1_D014E47BBB4D33DD(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_D014E47BBB4D33DD_OFFSET))(a1, a2);
	}

	static ::Struct_2_984AA94FB23486F9_2 Method_1_7C6F3FC75C836168_1(::Struct_2_984AA94FB23486F9_2 a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::Struct_2_984AA94FB23486F9_2(*)(::Struct_2_984AA94FB23486F9_2, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_7C6F3FC75C836168_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_19A2C4BE37CF3BA4(::UnityEngine::Plane a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Plane))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_19A2C4BE37CF3BA4_OFFSET))(a1);
	}

	static ::Struct_2_409E294815B4CE48 Method_1_898CE25F2762823C(::Struct_2_984AA94FB23486F9_2 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::Struct_2_409E294815B4CE48(*)(::Struct_2_984AA94FB23486F9_2, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_898CE25F2762823C_OFFSET))(a1, a2, a3, a4);
	}

	static ::Struct_2_984AA94FB23486F9_2 Method_1_4886789AFB57E20F(::Struct_2_984AA94FB23486F9_2 a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::Struct_2_984AA94FB23486F9_2(*)(::Struct_2_984AA94FB23486F9_2, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_4886789AFB57E20F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8ADA8CCA1C39D71A(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_8ADA8CCA1C39D71A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9C978B8AFFEC450C(::Foundation::Unreal::FTransform3D a1)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform3D))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_9C978B8AFFEC450C_OFFSET))(a1);
	}

	static ::Foundation::Unreal::FTransform Method_1_9542BA9CB6BD149F(::UnityEngine::Transform* a1)
	{
		return ((::Foundation::Unreal::FTransform(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_9542BA9CB6BD149F_OFFSET))(a1);
	}

	static ::UnityEngine::Plane Method_1_A1FFFE2790E2A5E6_1(::Struct_2_D0732A9EE482521E a1)
	{
		return ((::UnityEngine::Plane(*)(::Struct_2_D0732A9EE482521E))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_A1FFFE2790E2A5E6_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_70C270E99F7B4980(::System::Single& a1, ::UnityEngine::Vector2& a2, ::System::Single& a3, ::UnityEngine::Vector2& a4)
	{
		return ((::System::Boolean(*)(::System::Single&, ::UnityEngine::Vector2&, ::System::Single&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_70C270E99F7B4980_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_677E513192C9B410(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_677E513192C9B410_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_5FFF18BC9F7F7AE7(::UnityEngine::Vector2& a1, ::Struct_2_409E294815B4CE48& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::Struct_2_409E294815B4CE48&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_5FFF18BC9F7F7AE7_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_EC4466BDA66B3604(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_EC4466BDA66B3604_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6CC052C5FFEBC070(::Struct_2_D0732A9EE482521E a1)
	{
		return ((::System::Boolean(*)(::Struct_2_D0732A9EE482521E))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_6CC052C5FFEBC070_OFFSET))(a1);
	}

	static ::Struct_2_984AA94FB23486F9_2 Method_1_1FFDC4D157648D07_1(::Struct_2_984AA94FB23486F9_2 a1, ::Struct_2_D0732A9EE482521E& a2)
	{
		return ((::Struct_2_984AA94FB23486F9_2(*)(::Struct_2_984AA94FB23486F9_2, ::Struct_2_D0732A9EE482521E&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_1FFDC4D157648D07_1_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_9643FA636E355221(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_9643FA636E355221_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_39A78A6FD6ABCB16(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::System::Single& a3, ::UnityEngine::Vector2& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_39A78A6FD6ABCB16_OFFSET))(a1, a2, a3, a4);
	}

	static ::Struct_2_74C6EE564641CFF8 Method_1_7C6F3FC75C836168_2(::Struct_2_74C6EE564641CFF8 a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::Struct_2_74C6EE564641CFF8(*)(::Struct_2_74C6EE564641CFF8, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_7C6F3FC75C836168_2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6113C07A530A956E(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_6113C07A530A956E_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Plane Method_1_A1FFFE2790E2A5E6_2(::Struct_2_D0732A9EE482521E a1)
	{
		return ((::UnityEngine::Plane(*)(::Struct_2_D0732A9EE482521E))((::PBYTE)hIl2Cpp + CLASS_1_08A4B11959FFF171_METHOD_1_A1FFFE2790E2A5E6_2_OFFSET))(a1);
	}
};
