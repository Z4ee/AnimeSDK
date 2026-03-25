#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_3BBB9FCFAB8316EE_METHOD_1_1F3CF16FCA0EE777_OFFSET UNITYSDK_OFFSET(0x179E50C0)
#define CLASS_1_3BBB9FCFAB8316EE_METHOD_1_D1725145EA14B73F_OFFSET UNITYSDK_OFFSET(0x179E4CC0)
#define CLASS_1_3BBB9FCFAB8316EE_METHOD_1_F1CB09DE05971972_OFFSET UNITYSDK_OFFSET(0x179E4BC0)
#define CLASS_1_3BBB9FCFAB8316EE__CCTOR_OFFSET UNITYSDK_OFFSET(0x179E5560)

inline static constexpr unsigned int Class_1_3BBB9FCFAB8316EE_TypeDefinitionIndex = 8568;

class Class_1_3BBB9FCFAB8316EE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BBB9FCFAB8316EE_TypeDefinitionIndex)->GetStaticField(0x1A310);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BBB9FCFAB8316EE_TypeDefinitionIndex)->GetStaticField(0x1A318);
	}
	// static const ::System::Int32 Field_1_0 = 0x5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BBB9FCFAB8316EE__CCTOR_OFFSET))();
	}

	static ::System::Single Method_1_F1CB09DE05971972(::System::Func_2<::System::Single, ::System::Single>* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Single(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3BBB9FCFAB8316EE_METHOD_1_F1CB09DE05971972_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_D1725145EA14B73F(::System::Func_2<::System::Single, ::System::Single>* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Single(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3BBB9FCFAB8316EE_METHOD_1_D1725145EA14B73F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_1F3CF16FCA0EE777(::System::Func_2<::System::Single, ::System::Single>* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3BBB9FCFAB8316EE_METHOD_1_1F3CF16FCA0EE777_OFFSET))(a1, a2, a3);
	}
};
