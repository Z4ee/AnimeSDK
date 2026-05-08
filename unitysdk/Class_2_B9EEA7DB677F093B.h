#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F8A58546C7F49B7F.h"
#include "unitysdk/Enum_3_44E350D7DBECCCFF.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_B9EEA7DB677F093B_METHOD_2_8D67C3D348A1A165_OFFSET UNITYSDK_OFFSET(0x1208E1A0)
#define CLASS_2_B9EEA7DB677F093B_METHOD_2_BFCFC9C0A9EF130E_OFFSET UNITYSDK_OFFSET(0x1208E050)
#define CLASS_2_B9EEA7DB677F093B_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1208E2F0)
#define CLASS_2_B9EEA7DB677F093B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1208E0D0)
#define CLASS_2_B9EEA7DB677F093B__CTOR_OFFSET UNITYSDK_OFFSET(0x1208DF90)

inline static constexpr unsigned int Class_2_B9EEA7DB677F093B_TypeDefinitionIndex = 63774;

class Class_2_B9EEA7DB677F093B : public ::Class_1_F8A58546C7F49B7F<::Enum_3_44E350D7DBECCCFF>
{
public:
	static ::Class_2_B9EEA7DB677F093B** StaticGet_Field_2_0()
	{
		return (::Class_2_B9EEA7DB677F093B**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B9EEA7DB677F093B_TypeDefinitionIndex)->GetStaticField(0x46EF0);
	}
	::System::Func_2<::Class_2_B9EEA7DB677F093B*, ::System::Boolean>* Field_2_1; // 0x18

	::System::Void _ctor(::Enum_3_44E350D7DBECCCFF& a1, ::Enum_3_44E350D7DBECCCFF& a2, ::System::Func_2<::Class_2_B9EEA7DB677F093B*, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_44E350D7DBECCCFF&, ::Enum_3_44E350D7DBECCCFF&, ::System::Func_2<::Class_2_B9EEA7DB677F093B*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_B9EEA7DB677F093B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B9EEA7DB677F093B__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_BFCFC9C0A9EF130E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9EEA7DB677F093B_METHOD_2_BFCFC9C0A9EF130E_OFFSET))(this);
	}

	static ::Class_2_B9EEA7DB677F093B* Method_2_8D67C3D348A1A165(::Enum_3_44E350D7DBECCCFF& a1, ::Enum_3_44E350D7DBECCCFF& a2, ::System::Func_2<::Class_2_B9EEA7DB677F093B*, ::System::Boolean>* a3)
	{
		return ((::Class_2_B9EEA7DB677F093B*(*)(::Enum_3_44E350D7DBECCCFF&, ::Enum_3_44E350D7DBECCCFF&, ::System::Func_2<::Class_2_B9EEA7DB677F093B*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_B9EEA7DB677F093B_METHOD_2_8D67C3D348A1A165_OFFSET))(a1, a2, a3);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9EEA7DB677F093B_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
