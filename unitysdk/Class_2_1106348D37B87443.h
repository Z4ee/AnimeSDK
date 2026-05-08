#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_953952658186A166.h"
#include "unitysdk/Struct_2_6E1B724B14572104_1.h"
#include "unitysdk/Struct_2_C006DA4A56FC21E6.h"
#include "unitysdk/Struct_2_D9E98FAEB7FF7336.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CC6544DCEA8E336D;
class Class_5_AF65C3A968E836D2;

#define CLASS_2_1106348D37B87443_METHOD_2_1AB3F428FF575E8E_OFFSET UNITYSDK_OFFSET(0x778BB70)
#define CLASS_2_1106348D37B87443_METHOD_2_2322335515A3FB37_OFFSET UNITYSDK_OFFSET(0x778BC50)
#define CLASS_2_1106348D37B87443_METHOD_2_363974771E572E89_OFFSET UNITYSDK_OFFSET(0x778BD40)
#define CLASS_2_1106348D37B87443_METHOD_2_41F5243000FF8559_OFFSET UNITYSDK_OFFSET(0x778AE50)
#define CLASS_2_1106348D37B87443_METHOD_2_474EC4FF00C9577C_OFFSET UNITYSDK_OFFSET(0x778C020)
#define CLASS_2_1106348D37B87443_METHOD_2_9EF665C07CB5B066_OFFSET UNITYSDK_OFFSET(0x778C0A0)
#define CLASS_2_1106348D37B87443__CTOR_OFFSET UNITYSDK_OFFSET(0x778C010)

inline static constexpr unsigned int Class_2_1106348D37B87443_TypeDefinitionIndex = 79739;

class Class_2_1106348D37B87443 : public ::Class_1_953952658186A166
{
public:
	::Class_5_AF65C3A968E836D2* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1106348D37B87443__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_41F5243000FF8559(::Class_1_CC6544DCEA8E336D* a1, ::Struct_2_6E1B724B14572104_1& a2, ::Struct_2_D9E98FAEB7FF7336& a3, ::Struct_2_C006DA4A56FC21E6& a4, ::Struct_2_F213AC3D3FBF57B9& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CC6544DCEA8E336D*, ::Struct_2_6E1B724B14572104_1&, ::Struct_2_D9E98FAEB7FF7336&, ::Struct_2_C006DA4A56FC21E6&, ::Struct_2_F213AC3D3FBF57B9&))((::PBYTE)hIl2Cpp + CLASS_2_1106348D37B87443_METHOD_2_41F5243000FF8559_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_2_1106348D37B87443* Method_2_474EC4FF00C9577C(::Class_5_AF65C3A968E836D2* a1)
	{
		return ((::Class_2_1106348D37B87443*(*)(::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_2_1106348D37B87443_METHOD_2_474EC4FF00C9577C_OFFSET))(a1);
	}

	::UnityEngine::Vector3 Method_2_363974771E572E89(::UnityEngine::Vector3& a1, ::System::Single& a2, ::System::Single& a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_1106348D37B87443_METHOD_2_363974771E572E89_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_1AB3F428FF575E8E(::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> a1, ::UnityEngine::Vector3& a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_1106348D37B87443_METHOD_2_1AB3F428FF575E8E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2322335515A3FB37(::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_1106348D37B87443_METHOD_2_2322335515A3FB37_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_9EF665C07CB5B066(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1106348D37B87443_METHOD_2_9EF665C07CB5B066_OFFSET))(this, a1, a2, a3, a4);
	}
};
