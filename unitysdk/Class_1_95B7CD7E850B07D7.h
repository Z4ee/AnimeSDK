#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A77148D52D516E55.h"
#include "unitysdk/System/Object.h"

class Class_1_414BCDCDAD47B487;
class Class_1_B5A9DA083406A268;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_95B7CD7E850B07D7_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17EC57B0)
#define CLASS_1_95B7CD7E850B07D7_METHOD_1_E326E610AE10C438_OFFSET UNITYSDK_OFFSET(0x17EC5560)
#define CLASS_1_95B7CD7E850B07D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EC58C0)
#define CLASS_1_95B7CD7E850B07D7__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC5840)

inline static constexpr unsigned int Class_1_95B7CD7E850B07D7_TypeDefinitionIndex = 73643;

class Class_1_95B7CD7E850B07D7 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_OEHLFICEHCO()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95B7CD7E850B07D7_TypeDefinitionIndex)->GetStaticField(0x6AF0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B5A9DA083406A268*>* BEHHICMOFIE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95B7CD7E850B07D7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_95B7CD7E850B07D7__CCTOR_OFFSET))();
	}

	::Class_1_B5A9DA083406A268* Method_1_E326E610AE10C438(::Struct_2_A77148D52D516E55 a1, ::Class_1_414BCDCDAD47B487* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::Class_1_B5A9DA083406A268*(*)(::PVOID, ::Struct_2_A77148D52D516E55, ::Class_1_414BCDCDAD47B487*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_95B7CD7E850B07D7_METHOD_1_E326E610AE10C438_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95B7CD7E850B07D7_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};
