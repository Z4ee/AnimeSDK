#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90DF5B862A50C369;
class Class_1_B7C41BE725AAED79;
class Class_1_B9D4D1F73BF62BE6;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3B0B98365F1A212F_METHOD_1_2D75C27D5E0DAD83_OFFSET UNITYSDK_OFFSET(0x12C70F70)
#define CLASS_1_3B0B98365F1A212F_METHOD_1_58E2EABB774960F0_OFFSET UNITYSDK_OFFSET(0x12C70E70)
#define CLASS_1_3B0B98365F1A212F_METHOD_1_6EBDEA28075A733E_OFFSET UNITYSDK_OFFSET(0x12C6FDC0)
#define CLASS_1_3B0B98365F1A212F_METHOD_1_858EE0E3CEF5E9F3_OFFSET UNITYSDK_OFFSET(0x12C700C0)
#define CLASS_1_3B0B98365F1A212F_METHOD_1_911139E620AF74A7_OFFSET UNITYSDK_OFFSET(0x12C70170)
#define CLASS_1_3B0B98365F1A212F_METHOD_1_A8EE4F706DE7DB8F_OFFSET UNITYSDK_OFFSET(0x12C70DF0)
#define CLASS_1_3B0B98365F1A212F_METHOD_1_EB85321738562488_OFFSET UNITYSDK_OFFSET(0x12C71060)
#define CLASS_1_3B0B98365F1A212F__CTOR_OFFSET UNITYSDK_OFFSET(0x12C6FDB0)

inline static constexpr unsigned int Class_1_3B0B98365F1A212F_TypeDefinitionIndex = 78490;

class Class_1_3B0B98365F1A212F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B0B98365F1A212F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6EBDEA28075A733E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3B0B98365F1A212F_METHOD_1_6EBDEA28075A733E_OFFSET))(this, a1);
	}

	::System::Void Method_1_911139E620AF74A7(::System::String* a1, ::Class_1_B9D4D1F73BF62BE6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_B9D4D1F73BF62BE6*))((::PBYTE)hIl2Cpp + CLASS_1_3B0B98365F1A212F_METHOD_1_911139E620AF74A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_58E2EABB774960F0(::System::String* a1, ::System::Collections::Generic::List_1<::Class_1_90DF5B862A50C369*>* a2, ::System::Collections::Generic::List_1<::Class_1_90DF5B862A50C369*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_90DF5B862A50C369*>*, ::System::Collections::Generic::List_1<::Class_1_90DF5B862A50C369*>*))((::PBYTE)hIl2Cpp + CLASS_1_3B0B98365F1A212F_METHOD_1_58E2EABB774960F0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A8EE4F706DE7DB8F(::Class_1_B7C41BE725AAED79* a1, ::Class_1_B7C41BE725AAED79* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7C41BE725AAED79*, ::Class_1_B7C41BE725AAED79*))((::PBYTE)hIl2Cpp + CLASS_1_3B0B98365F1A212F_METHOD_1_A8EE4F706DE7DB8F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_858EE0E3CEF5E9F3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3B0B98365F1A212F_METHOD_1_858EE0E3CEF5E9F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_EB85321738562488(::System::String* a1, ::Class_1_90DF5B862A50C369* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_90DF5B862A50C369*))((::PBYTE)hIl2Cpp + CLASS_1_3B0B98365F1A212F_METHOD_1_EB85321738562488_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2D75C27D5E0DAD83(::System::Collections::Generic::List_1<::Class_1_90DF5B862A50C369*>* a1, ::Class_1_90DF5B862A50C369* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_90DF5B862A50C369*>*, ::Class_1_90DF5B862A50C369*))((::PBYTE)hIl2Cpp + CLASS_1_3B0B98365F1A212F_METHOD_1_2D75C27D5E0DAD83_OFFSET))(this, a1, a2);
	}
};
