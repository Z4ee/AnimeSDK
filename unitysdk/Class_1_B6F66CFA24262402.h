#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_613F44428F25DF4F.h"
#include "unitysdk/System/Object.h"

class Class_1_FD97D7F2D0A87B2D_1;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_2_88F875192D85D0B1;

#define CLASS_1_B6F66CFA24262402_METHOD_1_5D5EF1D9BEA996D5_OFFSET UNITYSDK_OFFSET(0x1D133320)
#define CLASS_1_B6F66CFA24262402_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1D133420)
#define CLASS_1_B6F66CFA24262402_METHOD_1_DBFFC528FF09CFE5_OFFSET UNITYSDK_OFFSET(0x1D1331D0)
#define CLASS_1_B6F66CFA24262402__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D133130)

inline static constexpr unsigned int Class_1_B6F66CFA24262402_TypeDefinitionIndex = 92353;

class Class_1_B6F66CFA24262402 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_613F44428F25DF4F, ::System::Func_1<::Class_1_FD97D7F2D0A87B2D_1*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_613F44428F25DF4F, ::System::Func_1<::Class_1_FD97D7F2D0A87B2D_1*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6F66CFA24262402_TypeDefinitionIndex)->GetStaticField(0x51FC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6F66CFA24262402__CCTOR_OFFSET))();
	}

	static ::Class_1_FD97D7F2D0A87B2D_1* Method_1_DBFFC528FF09CFE5(::Enum_3_613F44428F25DF4F a1)
	{
		return ((::Class_1_FD97D7F2D0A87B2D_1*(*)(::Enum_3_613F44428F25DF4F))((::PBYTE)hIl2Cpp + CLASS_1_B6F66CFA24262402_METHOD_1_DBFFC528FF09CFE5_OFFSET))(a1);
	}

	static ::System::Void Method_1_5D5EF1D9BEA996D5(::Enum_3_613F44428F25DF4F a1, ::System::Func_1<::Class_1_FD97D7F2D0A87B2D_1*>* a2)
	{
		return ((::System::Void(*)(::Enum_3_613F44428F25DF4F, ::System::Func_1<::Class_1_FD97D7F2D0A87B2D_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_B6F66CFA24262402_METHOD_1_5D5EF1D9BEA996D5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6F66CFA24262402_METHOD_1_AA169839CB93802A_OFFSET))();
	}
};
