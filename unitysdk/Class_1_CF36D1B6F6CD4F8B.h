#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CF36D1B6F6CD4F8B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167FD9B0)
#define CLASS_1_CF36D1B6F6CD4F8B_METHOD_1_18712DB3B1B723E8_OFFSET UNITYSDK_OFFSET(0x167FDD30)
#define CLASS_1_CF36D1B6F6CD4F8B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x167FDA70)
#define CLASS_1_CF36D1B6F6CD4F8B_METHOD_1_5D91A737D51D6719_OFFSET UNITYSDK_OFFSET(0x167FDE70)
#define CLASS_1_CF36D1B6F6CD4F8B_METHOD_1_62E3982F2C44BCD5_OFFSET UNITYSDK_OFFSET(0x167FDF40)
#define CLASS_1_CF36D1B6F6CD4F8B_METHOD_1_CC5D9D34E4BCC4D4_OFFSET UNITYSDK_OFFSET(0x167FDC50)
#define CLASS_1_CF36D1B6F6CD4F8B_METHOD_1_EF8AFE5C432294E2_OFFSET UNITYSDK_OFFSET(0x167FDBD0)
#define CLASS_1_CF36D1B6F6CD4F8B__CTOR_OFFSET UNITYSDK_OFFSET(0x167FDB10)

inline static constexpr unsigned int Class_1_CF36D1B6F6CD4F8B_TypeDefinitionIndex = 60104;

class Class_1_CF36D1B6F6CD4F8B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::UInt32>, ::Struct_2_F213AC3D3FBF57B9_2>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF36D1B6F6CD4F8B__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF36D1B6F6CD4F8B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_EF8AFE5C432294E2(::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::UInt32>& a1, ::Struct_2_F213AC3D3FBF57B9_2& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::UInt32>&, ::Struct_2_F213AC3D3FBF57B9_2&))((::PBYTE)hIl2Cpp + CLASS_1_CF36D1B6F6CD4F8B_METHOD_1_EF8AFE5C432294E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CC5D9D34E4BCC4D4(::System::Action_1<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_CF36D1B6F6CD4F8B_METHOD_1_CC5D9D34E4BCC4D4_OFFSET))(this, a1);
	}

	static ::Class_1_CF36D1B6F6CD4F8B* Method_1_18712DB3B1B723E8()
	{
		return ((::Class_1_CF36D1B6F6CD4F8B*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF36D1B6F6CD4F8B_METHOD_1_18712DB3B1B723E8_OFFSET))();
	}

	::System::Void Method_1_5D91A737D51D6719(::System::UInt32& a1, ::System::UInt32& a2, ::Struct_2_F213AC3D3FBF57B9_2& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::Struct_2_F213AC3D3FBF57B9_2&))((::PBYTE)hIl2Cpp + CLASS_1_CF36D1B6F6CD4F8B_METHOD_1_5D91A737D51D6719_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_62E3982F2C44BCD5(::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::UInt32>& a1, ::Struct_2_F213AC3D3FBF57B9_2& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::UInt32>&, ::Struct_2_F213AC3D3FBF57B9_2&))((::PBYTE)hIl2Cpp + CLASS_1_CF36D1B6F6CD4F8B_METHOD_1_62E3982F2C44BCD5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF36D1B6F6CD4F8B_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
