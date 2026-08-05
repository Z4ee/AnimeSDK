#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_88760C7B90903E2C_Enum_3_CE6D5026823E2F52.h"
#include "unitysdk/Class_1_88760C7B90903E2C_Struct_2_FD8E1D4014EE315F_15.h"
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

class Class_1_2DAF4D0B64681D6A;
namespace System { class String; }
namespace UnityEngine { class Camera; }

#define CLASS_1_88760C7B90903E2C_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x12DB2630)
#define CLASS_1_88760C7B90903E2C_METHOD_1_086B0DAF9DECF154_OFFSET UNITYSDK_OFFSET(0x12DB4C30)
#define CLASS_1_88760C7B90903E2C_METHOD_1_176C734BA8249D66_OFFSET UNITYSDK_OFFSET(0x12DB4D40)
#define CLASS_1_88760C7B90903E2C_METHOD_1_25555BDDD3245F22_OFFSET UNITYSDK_OFFSET(0x12DB5630)
#define CLASS_1_88760C7B90903E2C_METHOD_1_2B78163569F5B5E5_OFFSET UNITYSDK_OFFSET(0x12DB5CE0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_2BA9209B055A70FA_OFFSET UNITYSDK_OFFSET(0x12DB3160)
#define CLASS_1_88760C7B90903E2C_METHOD_1_589FEF24798C3939_OFFSET UNITYSDK_OFFSET(0x12DB6150)
#define CLASS_1_88760C7B90903E2C_METHOD_1_5EE8D94CB6CD5855_OFFSET UNITYSDK_OFFSET(0x12DB6520)
#define CLASS_1_88760C7B90903E2C_METHOD_1_5F9ABFAB295E7AAA_OFFSET UNITYSDK_OFFSET(0x12DB5440)
#define CLASS_1_88760C7B90903E2C_METHOD_1_636A6F3390ADCB88_OFFSET UNITYSDK_OFFSET(0x12DB5BE0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_64AE7AA99C437AFD_1_OFFSET UNITYSDK_OFFSET(0x12DB2E20)
#define CLASS_1_88760C7B90903E2C_METHOD_1_64AE7AA99C437AFD_OFFSET UNITYSDK_OFFSET(0x12DB25A0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_655848934A326660_1_OFFSET UNITYSDK_OFFSET(0x12DB2C60)
#define CLASS_1_88760C7B90903E2C_METHOD_1_655848934A326660_OFFSET UNITYSDK_OFFSET(0x12DB2D10)
#define CLASS_1_88760C7B90903E2C_METHOD_1_696B42B52760C111_1_OFFSET UNITYSDK_OFFSET(0x12DB3530)
#define CLASS_1_88760C7B90903E2C_METHOD_1_696B42B52760C111_OFFSET UNITYSDK_OFFSET(0x12DB2760)
#define CLASS_1_88760C7B90903E2C_METHOD_1_719A024F4E1C8C0E_OFFSET UNITYSDK_OFFSET(0x12DB4800)
#define CLASS_1_88760C7B90903E2C_METHOD_1_7891671122F5C4CB_1_OFFSET UNITYSDK_OFFSET(0x12DB3F90)
#define CLASS_1_88760C7B90903E2C_METHOD_1_7891671122F5C4CB_OFFSET UNITYSDK_OFFSET(0x12DB4090)
#define CLASS_1_88760C7B90903E2C_METHOD_1_7B8C9CA9FCE19A3D_OFFSET UNITYSDK_OFFSET(0x12DB61B0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_7F9031C363442324_OFFSET UNITYSDK_OFFSET(0x12DB5AA0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_7F982DDD5290A264_OFFSET UNITYSDK_OFFSET(0x12DB33F0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_8666A4DCA4CBDD7A_OFFSET UNITYSDK_OFFSET(0x12DB60B0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_9119A1B8BC98C610_OFFSET UNITYSDK_OFFSET(0x12DB41B0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_92B905D7CA272118_OFFSET UNITYSDK_OFFSET(0x12DB3EE0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_1_OFFSET UNITYSDK_OFFSET(0x12DB4140)
#define CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_2_OFFSET UNITYSDK_OFFSET(0x12DB2EC0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_3_OFFSET UNITYSDK_OFFSET(0x12DB4030)
#define CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_OFFSET UNITYSDK_OFFSET(0x12DB2DC0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_A2E72786C1B842A9_OFFSET UNITYSDK_OFFSET(0x12DB4FA0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_B5F113B0524081BF_OFFSET UNITYSDK_OFFSET(0x12DB32A0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_CDDC0B55E3FE6AD9_OFFSET UNITYSDK_OFFSET(0x12DB3EC0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_D259C59EF1FF5C70_OFFSET UNITYSDK_OFFSET(0x12DB4CC0)
#define CLASS_1_88760C7B90903E2C_METHOD_1_D92556A835DB85D6_OFFSET UNITYSDK_OFFSET(0x12DB2670)
#define CLASS_1_88760C7B90903E2C_METHOD_1_E1B55979C5E1BF33_OFFSET UNITYSDK_OFFSET(0x12DB2F30)
#define CLASS_1_88760C7B90903E2C_METHOD_1_FB8DE299FA9EA63E_OFFSET UNITYSDK_OFFSET(0x12DB3A30)

inline static constexpr unsigned int Class_1_88760C7B90903E2C_TypeDefinitionIndex = 88888;

class Class_1_88760C7B90903E2C : public ::System::Object
{
public:
	static ::System::Single Method_1_64AE7AA99C437AFD(::UnityEngine::Rect a1, ::UnityEngine::Rect a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_64AE7AA99C437AFD_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::UnityEngine::Rect Method_1_D92556A835DB85D6(::UnityEngine::Vector4 a1)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_D92556A835DB85D6_OFFSET))(a1);
	}

	static ::UnityEngine::Rect Method_1_696B42B52760C111(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_696B42B52760C111_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Rect Method_1_2BA9209B055A70FA(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::Class_1_88760C7B90903E2C_Enum_3_CE6D5026823E2F52 a3)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::Class_1_88760C7B90903E2C_Enum_3_CE6D5026823E2F52))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_2BA9209B055A70FA_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Rect Method_1_655848934A326660()
	{
		return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_655848934A326660_OFFSET))();
	}

	static ::System::ValueTuple_4<::System::Single, ::System::Single, ::System::Single, ::System::Single> Method_1_7F982DDD5290A264(::Il2CppArray<::UnityEngine::Vector3>* a1)
	{
		return ((::System::ValueTuple_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_7F982DDD5290A264_OFFSET))(a1);
	}

	static ::UnityEngine::Rect Method_1_B5F113B0524081BF(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::Class_1_88760C7B90903E2C_Enum_3_CE6D5026823E2F52 a3)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::Class_1_88760C7B90903E2C_Enum_3_CE6D5026823E2F52))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_B5F113B0524081BF_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_FB8DE299FA9EA63E(::UnityEngine::Vector3 a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Matrix4x4 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_FB8DE299FA9EA63E_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector2 Method_1_E1B55979C5E1BF33(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_E1B55979C5E1BF33_OFFSET))(a1);
	}

	static ::System::Single Method_1_CDDC0B55E3FE6AD9(::UnityEngine::Vector2 a1, ::Class_1_88760C7B90903E2C_Struct_2_FD8E1D4014EE315F_15& a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2, ::Class_1_88760C7B90903E2C_Struct_2_FD8E1D4014EE315F_15&))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_CDDC0B55E3FE6AD9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_92B905D7CA272118(::System::String* a1, ::System::Nullable_1<::UnityEngine::Color> a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_92B905D7CA272118_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Rect Method_1_696B42B52760C111_1(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_696B42B52760C111_1_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_9119A1B8BC98C610(::Class_1_2DAF4D0B64681D6A* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector2 a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::UnityEngine::Vector2 a8)
	{
		return ((::UnityEngine::Vector3(*)(::Class_1_2DAF4D0B64681D6A*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_9119A1B8BC98C610_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::UnityEngine::Quaternion Method_1_176C734BA8249D66(::Struct_2_519740F826A15881 a1, ::Struct_2_C006DA4A56FC21E6 a2)
	{
		return ((::UnityEngine::Quaternion(*)(::Struct_2_519740F826A15881, ::Struct_2_C006DA4A56FC21E6))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_176C734BA8249D66_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Rect Method_1_A2E72786C1B842A9(::System::String* a1)
	{
		return ((::UnityEngine::Rect(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_A2E72786C1B842A9_OFFSET))(a1);
	}

	static ::System::Void Method_1_5F9ABFAB295E7AAA(::System::String* a1, ::System::Nullable_1<::UnityEngine::Color> a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_5F9ABFAB295E7AAA_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_94A63330E7076B29(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_7891671122F5C4CB(::UnityEngine::Rect a1, ::UnityEngine::Rect a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_7891671122F5C4CB_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_94A63330E7076B29_1(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_1_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Rect Method_1_25555BDDD3245F22()
	{
		return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_25555BDDD3245F22_OFFSET))();
	}

	static ::System::Void Method_1_7F9031C363442324(::System::String* a1, ::System::Nullable_1<::UnityEngine::Color> a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_7F9031C363442324_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_636A6F3390ADCB88(::UnityEngine::Rect a1, ::UnityEngine::Rect a2, ::UnityEngine::Rect& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_636A6F3390ADCB88_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_2B78163569F5B5E5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2 a2, ::MoleMole::UICameraAtom a3, ::UnityEngine::Camera* a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2, ::MoleMole::UICameraAtom, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_2B78163569F5B5E5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8666A4DCA4CBDD7A(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_8666A4DCA4CBDD7A_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_D259C59EF1FF5C70(::UnityEngine::Vector3 a1, ::UnityEngine::Rect a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_D259C59EF1FF5C70_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2 Method_1_589FEF24798C3939(::System::String* a1)
	{
		return ((::UnityEngine::Vector2(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_589FEF24798C3939_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7B8C9CA9FCE19A3D(::System::String* a1, ::Struct_2_31FD36EFA5418B17 a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Struct_2_31FD36EFA5418B17))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_7B8C9CA9FCE19A3D_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Rect Method_1_655848934A326660_1()
	{
		return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_655848934A326660_1_OFFSET))();
	}

	static ::System::Single Method_1_64AE7AA99C437AFD_1(::UnityEngine::Rect a1, ::UnityEngine::Rect a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_64AE7AA99C437AFD_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_94A63330E7076B29_2(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_2_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Rect Method_1_086B0DAF9DECF154(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_086B0DAF9DECF154_OFFSET))(a1, a2, a3);
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Bounds> Method_1_719A024F4E1C8C0E(::Class_1_2DAF4D0B64681D6A* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Bounds>(*)(::Class_1_2DAF4D0B64681D6A*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_719A024F4E1C8C0E_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_94A63330E7076B29_3(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_94A63330E7076B29_3_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_7891671122F5C4CB_1(::UnityEngine::Rect a1, ::UnityEngine::Rect a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_7891671122F5C4CB_1_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Rect Method_1_5EE8D94CB6CD5855(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::Class_1_88760C7B90903E2C_Enum_3_CE6D5026823E2F52 a3)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::Class_1_88760C7B90903E2C_Enum_3_CE6D5026823E2F52))((::PBYTE)hIl2Cpp + CLASS_1_88760C7B90903E2C_METHOD_1_5EE8D94CB6CD5855_OFFSET))(a1, a2, a3);
	}
};
