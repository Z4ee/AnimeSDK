#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_953952658186A166.h"
#include "unitysdk/Struct_2_6E1B724B14572104_2.h"
#include "unitysdk/Struct_2_C006DA4A56FC21E6.h"
#include "unitysdk/Struct_2_D9E98FAEB7FF7336.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5A44BA76A33709FD;
class Class_5_DCFF91E03A93C03C;

#define CLASS_2_D91DEEA7747921A7_METHOD_2_1AB3F428FF575E8E_OFFSET UNITYSDK_OFFSET(0x194BE0F0)
#define CLASS_2_D91DEEA7747921A7_METHOD_2_2322335515A3FB37_OFFSET UNITYSDK_OFFSET(0x194BE1D0)
#define CLASS_2_D91DEEA7747921A7_METHOD_2_474EC4FF00C9577C_OFFSET UNITYSDK_OFFSET(0x194BE5A0)
#define CLASS_2_D91DEEA7747921A7_METHOD_2_92F5390D8D42B710_OFFSET UNITYSDK_OFFSET(0x194BD420)
#define CLASS_2_D91DEEA7747921A7_METHOD_2_9EF665C07CB5B066_OFFSET UNITYSDK_OFFSET(0x194BE620)
#define CLASS_2_D91DEEA7747921A7_METHOD_2_BAAEB398D9194232_OFFSET UNITYSDK_OFFSET(0x194BE2C0)
#define CLASS_2_D91DEEA7747921A7__CTOR_OFFSET UNITYSDK_OFFSET(0x194BE590)

inline static constexpr unsigned int Class_2_D91DEEA7747921A7_TypeDefinitionIndex = 88765;

class Class_2_D91DEEA7747921A7 : public ::Class_1_953952658186A166
{
public:
	::Class_5_DCFF91E03A93C03C* Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D91DEEA7747921A7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_92F5390D8D42B710(::Class_1_5A44BA76A33709FD* a1, ::Struct_2_6E1B724B14572104_2& a2, ::Struct_2_D9E98FAEB7FF7336& a3, ::Struct_2_C006DA4A56FC21E6& a4, ::Struct_2_F213AC3D3FBF57B9& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5A44BA76A33709FD*, ::Struct_2_6E1B724B14572104_2&, ::Struct_2_D9E98FAEB7FF7336&, ::Struct_2_C006DA4A56FC21E6&, ::Struct_2_F213AC3D3FBF57B9&))((::PBYTE)hIl2Cpp + CLASS_2_D91DEEA7747921A7_METHOD_2_92F5390D8D42B710_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_2_1AB3F428FF575E8E(::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> a1, ::UnityEngine::Vector3& a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_D91DEEA7747921A7_METHOD_2_1AB3F428FF575E8E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2322335515A3FB37(::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_D91DEEA7747921A7_METHOD_2_2322335515A3FB37_OFFSET))(this, a1, a2);
	}

	static ::Class_2_D91DEEA7747921A7* Method_2_474EC4FF00C9577C(::Class_5_DCFF91E03A93C03C* a1)
	{
		return ((::Class_2_D91DEEA7747921A7*(*)(::Class_5_DCFF91E03A93C03C*))((::PBYTE)hIl2Cpp + CLASS_2_D91DEEA7747921A7_METHOD_2_474EC4FF00C9577C_OFFSET))(a1);
	}

	::UnityEngine::Vector3 Method_2_BAAEB398D9194232(::UnityEngine::Vector3& a1, ::System::Single& a2, ::System::Single& a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_D91DEEA7747921A7_METHOD_2_BAAEB398D9194232_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_9EF665C07CB5B066(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D91DEEA7747921A7_METHOD_2_9EF665C07CB5B066_OFFSET))(this, a1, a2, a3, a4);
	}
};
