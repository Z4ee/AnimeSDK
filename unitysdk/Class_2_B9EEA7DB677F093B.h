#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F8A58546C7F49B7F.h"
#include "unitysdk/Enum_3_CAEA556991ED2261.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_B9EEA7DB677F093B_METHOD_2_8D67C3D348A1A165_OFFSET UNITYSDK_OFFSET(0x130D3AC0)
#define CLASS_2_B9EEA7DB677F093B_METHOD_2_BFCFC9C0A9EF130E_OFFSET UNITYSDK_OFFSET(0x130D3970)
#define CLASS_2_B9EEA7DB677F093B_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x130D3C10)
#define CLASS_2_B9EEA7DB677F093B__CCTOR_OFFSET UNITYSDK_OFFSET(0x130D39F0)
#define CLASS_2_B9EEA7DB677F093B__CTOR_OFFSET UNITYSDK_OFFSET(0x130D38B0)

inline static constexpr unsigned int Class_2_B9EEA7DB677F093B_TypeDefinitionIndex = 61637;

class Class_2_B9EEA7DB677F093B : public ::Class_1_F8A58546C7F49B7F<::Enum_3_CAEA556991ED2261>
{
public:
	static ::Class_2_B9EEA7DB677F093B** StaticGet_Field_2_0()
	{
		return (::Class_2_B9EEA7DB677F093B**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B9EEA7DB677F093B_TypeDefinitionIndex)->GetStaticField(0x4B670);
	}
	::System::Func_2<::Class_2_B9EEA7DB677F093B*, ::System::Boolean>* Field_2_1; // 0x18

	::System::Void _ctor(::Enum_3_CAEA556991ED2261& a1, ::Enum_3_CAEA556991ED2261& a2, ::System::Func_2<::Class_2_B9EEA7DB677F093B*, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CAEA556991ED2261&, ::Enum_3_CAEA556991ED2261&, ::System::Func_2<::Class_2_B9EEA7DB677F093B*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_B9EEA7DB677F093B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B9EEA7DB677F093B__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_BFCFC9C0A9EF130E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9EEA7DB677F093B_METHOD_2_BFCFC9C0A9EF130E_OFFSET))(this);
	}

	static ::Class_2_B9EEA7DB677F093B* Method_2_8D67C3D348A1A165(::Enum_3_CAEA556991ED2261& a1, ::Enum_3_CAEA556991ED2261& a2, ::System::Func_2<::Class_2_B9EEA7DB677F093B*, ::System::Boolean>* a3)
	{
		return ((::Class_2_B9EEA7DB677F093B*(*)(::Enum_3_CAEA556991ED2261&, ::Enum_3_CAEA556991ED2261&, ::System::Func_2<::Class_2_B9EEA7DB677F093B*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_B9EEA7DB677F093B_METHOD_2_8D67C3D348A1A165_OFFSET))(a1, a2, a3);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9EEA7DB677F093B_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
