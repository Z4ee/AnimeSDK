#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_223C6C8CA37B8D82_METHOD_1_1F3CF16FCA0EE777_OFFSET UNITYSDK_OFFSET(0x1D706B50)
#define CLASS_1_223C6C8CA37B8D82_METHOD_1_453CC46056EAF924_OFFSET UNITYSDK_OFFSET(0x1D7067C0)
#define CLASS_1_223C6C8CA37B8D82_METHOD_1_F1CB09DE05971972_OFFSET UNITYSDK_OFFSET(0x1D7066C0)
#define CLASS_1_223C6C8CA37B8D82__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D706FE0)

inline static constexpr unsigned int Class_1_223C6C8CA37B8D82_TypeDefinitionIndex = 6261;

class Class_1_223C6C8CA37B8D82 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Single>** StaticGet_EHJGKDIFINJ()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_223C6C8CA37B8D82_TypeDefinitionIndex)->GetStaticField(0x1AEB0);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_ACPMKNOOMHF()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_223C6C8CA37B8D82_TypeDefinitionIndex)->GetStaticField(0x1AEB8);
	}
	// static const ::System::Int32 IPLDFDAGKGK = 0x5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_223C6C8CA37B8D82__CCTOR_OFFSET))();
	}

	static ::System::Single Method_1_F1CB09DE05971972(::System::Func_2<::System::Single, ::System::Single>* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Single(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_223C6C8CA37B8D82_METHOD_1_F1CB09DE05971972_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_453CC46056EAF924(::System::Func_2<::System::Single, ::System::Single>* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Single(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_223C6C8CA37B8D82_METHOD_1_453CC46056EAF924_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_1F3CF16FCA0EE777(::System::Func_2<::System::Single, ::System::Single>* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_223C6C8CA37B8D82_METHOD_1_1F3CF16FCA0EE777_OFFSET))(a1, a2, a3);
	}
};
