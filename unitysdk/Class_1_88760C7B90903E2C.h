#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_88760C7B90903E2C_Enum_3_CE6D5026823E2F52.h"
#include "unitysdk/Class_1_88760C7B90903E2C_Struct_2_FD8E1D4014EE315F_3.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/Struct_2_31FD36EFA5418B17.h"
#include "unitysdk/Struct_2_519740F826A15881.h"
#include "unitysdk/Struct_2_C006DA4A56FC21E6.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_C70E287E7C201553;
namespace System { class String; }
namespace UnityEngine { class Camera; }

#define CLASS_1_88760C7B90903E2C_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x13346310)
#define CLASS_1_88760C7B90903E2C_METHOD_1_086B0DAF9DECF154_OFFSET UNITYSDK_OFFSET(0x13345750)
#define CLASS_1_88760C7B90903E2C_METHOD_1_2B78163569F5B5E5_OFFSET UNITYSDK_OFFSET(0x13347660)
#define CLASS_1_88760C7B90903E2C_METHOD_1_2BA9209B055A70FA_OFFSET UNITYSDK_OFFSET(0x133439A0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_4449FA8DFEBBE20D_OFFSET UNITYSDK_OFFSET(0x13346F40)
#define CLASS_1_88760C7B90903E2C_METHOD_1_589FEF24798C3939_OFFSET UNITYSDK_OFFSET(0x13346350)
#define CLASS_1_88760C7B90903E2C_METHOD_1_5EE8D94CB6CD5855_OFFSET UNITYSDK_OFFSET(0x13344830)
#define CLASS_1_88760C7B90903E2C_METHOD_1_5F9ABFAB295E7AAA_OFFSET UNITYSDK_OFFSET(0x133466F0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_636A6F3390ADCB88_OFFSET UNITYSDK_OFFSET(0x13346BF0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_63BC99A12661589A_OFFSET UNITYSDK_OFFSET(0x133463B0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_64AE7AA99C437AFD_1_OFFSET UNITYSDK_OFFSET(0x13346EA0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_64AE7AA99C437AFD_OFFSET UNITYSDK_OFFSET(0x13346E10)
#define CLASS_1_88760C7B90903E2C_METHOD_1_655848934A326660_1_OFFSET UNITYSDK_OFFSET(0x13343AE0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_655848934A326660_OFFSET UNITYSDK_OFFSET(0x13344190)
#define CLASS_1_88760C7B90903E2C_METHOD_1_719A024F4E1C8C0E_OFFSET UNITYSDK_OFFSET(0x13345310)
#define CLASS_1_88760C7B90903E2C_METHOD_1_740442076A7E7264_1_OFFSET UNITYSDK_OFFSET(0x13345E10)
#define CLASS_1_88760C7B90903E2C_METHOD_1_740442076A7E7264_OFFSET UNITYSDK_OFFSET(0x13345910)
#define CLASS_1_88760C7B90903E2C_METHOD_1_7891671122F5C4CB_1_OFFSET UNITYSDK_OFFSET(0x13347400)
#define CLASS_1_88760C7B90903E2C_METHOD_1_7891671122F5C4CB_OFFSET UNITYSDK_OFFSET(0x13345860)
#define CLASS_1_88760C7B90903E2C_METHOD_1_7B8C9CA9FCE19A3D_OFFSET UNITYSDK_OFFSET(0x13344930)
#define CLASS_1_88760C7B90903E2C_METHOD_1_7F9031C363442324_OFFSET UNITYSDK_OFFSET(0x13346CD0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_7F982DDD5290A264_OFFSET UNITYSDK_OFFSET(0x133474A0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_8666A4DCA4CBDD7A_OFFSET UNITYSDK_OFFSET(0x13346B50)
#define CLASS_1_88760C7B90903E2C_METHOD_1_9119A1B8BC98C610_OFFSET UNITYSDK_OFFSET(0x13344CA0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_92B905D7CA272118_OFFSET UNITYSDK_OFFSET(0x133438F0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_1_OFFSET UNITYSDK_OFFSET(0x133448C0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_2_OFFSET UNITYSDK_OFFSET(0x13346680)
#define CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_3_OFFSET UNITYSDK_OFFSET(0x133473A0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_OFFSET UNITYSDK_OFFSET(0x13344340)
#define CLASS_1_88760C7B90903E2C_METHOD_1_A2E72786C1B842A9_OFFSET UNITYSDK_OFFSET(0x13343CF0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_B5F113B0524081BF_OFFSET UNITYSDK_OFFSET(0x13343BA0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_CDDC0B55E3FE6AD9_OFFSET UNITYSDK_OFFSET(0x13345730)
#define CLASS_1_88760C7B90903E2C_METHOD_1_D259C59EF1FF5C70_OFFSET UNITYSDK_OFFSET(0x133457E0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_D92556A835DB85D6_OFFSET UNITYSDK_OFFSET(0x13344250)
#define CLASS_1_88760C7B90903E2C_METHOD_1_E1B55979C5E1BF33_OFFSET UNITYSDK_OFFSET(0x133468E0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_FB8DE299FA9EA63E_OFFSET UNITYSDK_OFFSET(0x133443A0)

inline static constexpr unsigned int Class_1_88760C7B90903E2C_TypeDefinitionIndex = 49581;

class Class_1_88760C7B90903E2C : public ::System::Object
{
public:
	static ::System::Void Method_1_92B905D7CA272118(::System::String* a1, ::System::Nullable_1<::UnityEngine::Color> a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_92B905D7CA272118_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Rect Method_1_2BA9209B055A70FA(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::Class_1_88760C7B90903E2C_Enum_3_CE6D5026823E2F52 a3)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::Class_1_88760C7B90903E2C_Enum_3_CE6D5026823E2F52))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_2BA9209B055A70FA_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Rect Method_1_A2E72786C1B842A9(::System::String* a1)
	{
		return ((::UnityEngine::Rect(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_A2E72786C1B842A9_OFFSET))(a1);
	}

	static ::System::Single Method_1_94A63330E7076B29(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_FB8DE299FA9EA63E(::UnityEngine::Vector3 a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Matrix4x4 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_FB8DE299FA9EA63E_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Rect Method_1_5EE8D94CB6CD5855(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::Class_1_88760C7B90903E2C_Enum_3_CE6D5026823E2F52 a3)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::Class_1_88760C7B90903E2C_Enum_3_CE6D5026823E2F52))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_5EE8D94CB6CD5855_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Rect Method_1_655848934A326660()
	{
		return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_655848934A326660_OFFSET))();
	}

	static ::System::Single Method_1_94A63330E7076B29_1(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7B8C9CA9FCE19A3D(::System::String* a1, ::Struct_2_31FD36EFA5418B17 a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Struct_2_31FD36EFA5418B17))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_7B8C9CA9FCE19A3D_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_9119A1B8BC98C610(::Class_1_C70E287E7C201553* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector2 a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::UnityEngine::Vector2 a8)
	{
		return ((::UnityEngine::Vector3(*)(::Class_1_C70E287E7C201553*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_9119A1B8BC98C610_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Single Method_1_7891671122F5C4CB(::UnityEngine::Rect a1, ::UnityEngine::Rect a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_7891671122F5C4CB_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Rect Method_1_B5F113B0524081BF(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::Class_1_88760C7B90903E2C_Enum_3_CE6D5026823E2F52 a3)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::Class_1_88760C7B90903E2C_Enum_3_CE6D5026823E2F52))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_B5F113B0524081BF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_589FEF24798C3939(::System::String* a1)
	{
		return ((::UnityEngine::Vector2(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_589FEF24798C3939_OFFSET))(a1);
	}

	static ::System::Single Method_1_CDDC0B55E3FE6AD9(::UnityEngine::Vector2 a1, ::Class_1_88760C7B90903E2C_Struct_2_FD8E1D4014EE315F_3& a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2, ::Class_1_88760C7B90903E2C_Struct_2_FD8E1D4014EE315F_3&))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_CDDC0B55E3FE6AD9_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Quaternion Method_1_63BC99A12661589A(::Struct_2_519740F826A15881 a1, ::Struct_2_C006DA4A56FC21E6 a2)
	{
		return ((::UnityEngine::Quaternion(*)(::Struct_2_519740F826A15881, ::Struct_2_C006DA4A56FC21E6))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_63BC99A12661589A_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_94A63330E7076B29_2(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5F9ABFAB295E7AAA(::System::String* a1, ::System::Nullable_1<::UnityEngine::Color> a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_5F9ABFAB295E7AAA_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2 Method_1_E1B55979C5E1BF33(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_E1B55979C5E1BF33_OFFSET))(a1);
	}

	static ::UnityEngine::Rect Method_1_086B0DAF9DECF154(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_086B0DAF9DECF154_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8666A4DCA4CBDD7A(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_8666A4DCA4CBDD7A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_636A6F3390ADCB88(::UnityEngine::Rect a1, ::UnityEngine::Rect a2, ::UnityEngine::Rect& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_636A6F3390ADCB88_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7F9031C363442324(::System::String* a1, ::System::Nullable_1<::UnityEngine::Color> a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_7F9031C363442324_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Rect Method_1_740442076A7E7264(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_740442076A7E7264_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_D259C59EF1FF5C70(::UnityEngine::Vector3 a1, ::UnityEngine::Rect a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_D259C59EF1FF5C70_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Rect Method_1_4449FA8DFEBBE20D()
	{
		return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_4449FA8DFEBBE20D_OFFSET))();
	}

	static ::UnityEngine::Rect Method_1_655848934A326660_1()
	{
		return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_655848934A326660_1_OFFSET))();
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Bounds> Method_1_719A024F4E1C8C0E(::Class_1_C70E287E7C201553* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Bounds>(*)(::Class_1_C70E287E7C201553*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_719A024F4E1C8C0E_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_94A63330E7076B29_3(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_3_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_7891671122F5C4CB_1(::UnityEngine::Rect a1, ::UnityEngine::Rect a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_7891671122F5C4CB_1_OFFSET))(a1, a2, a3);
	}

	static ::System::ValueTuple_4<::System::Single, ::System::Single, ::System::Single, ::System::Single> Method_1_7F982DDD5290A264(::Il2CppArray<::UnityEngine::Vector3>* a1)
	{
		return ((::System::ValueTuple_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_7F982DDD5290A264_OFFSET))(a1);
	}

	static ::UnityEngine::Rect Method_1_740442076A7E7264_1(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_740442076A7E7264_1_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_2B78163569F5B5E5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2 a2, ::MoleMole::UICameraAtom a3, ::UnityEngine::Camera* a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2, ::MoleMole::UICameraAtom, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_2B78163569F5B5E5_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Rect Method_1_D92556A835DB85D6(::UnityEngine::Vector4 a1)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_D92556A835DB85D6_OFFSET))(a1);
	}

	static ::System::Single Method_1_64AE7AA99C437AFD(::UnityEngine::Rect a1, ::UnityEngine::Rect a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_64AE7AA99C437AFD_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_64AE7AA99C437AFD_1(::UnityEngine::Rect a1, ::UnityEngine::Rect a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_64AE7AA99C437AFD_1_OFFSET))(a1, a2, a3, a4);
	}
};
