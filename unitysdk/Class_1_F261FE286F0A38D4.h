#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F9A103F8A0EC492F.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F261FE286F0A38D4_METHOD_1_2266AC596FF04179_OFFSET UNITYSDK_OFFSET(0x12FBEE40)
#define CLASS_1_F261FE286F0A38D4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x12FBEA80)
#define CLASS_1_F261FE286F0A38D4_METHOD_1_358A893454459ADF_OFFSET UNITYSDK_OFFSET(0x12FBED20)
#define CLASS_1_F261FE286F0A38D4_METHOD_1_C04C10246EBC8F79_OFFSET UNITYSDK_OFFSET(0x12FBEC70)
#define CLASS_1_F261FE286F0A38D4_METHOD_1_C591D9CA103C5AA9_OFFSET UNITYSDK_OFFSET(0x12FBF000)
#define CLASS_1_F261FE286F0A38D4_METHOD_1_CFD86BE7C5419053_OFFSET UNITYSDK_OFFSET(0x12FBEB20)
#define CLASS_1_F261FE286F0A38D4__CTOR_OFFSET UNITYSDK_OFFSET(0x12FBE930)

inline static constexpr unsigned int Class_1_F261FE286F0A38D4_TypeDefinitionIndex = 74814;

class Class_1_F261FE286F0A38D4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::Struct_2_F9A103F8A0EC492F>*>* Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F261FE286F0A38D4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F261FE286F0A38D4_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Il2CppArray<::Struct_2_F9A103F8A0EC492F>* Method_1_CFD86BE7C5419053(::System::Int32 a1)
	{
		return ((::Il2CppArray<::Struct_2_F9A103F8A0EC492F>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F261FE286F0A38D4_METHOD_1_CFD86BE7C5419053_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_358A893454459ADF(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F261FE286F0A38D4_METHOD_1_358A893454459ADF_OFFSET))(this, a1);
	}

	::Struct_2_F9A103F8A0EC492F Method_1_2266AC596FF04179(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Struct_2_F9A103F8A0EC492F(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F261FE286F0A38D4_METHOD_1_2266AC596FF04179_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C591D9CA103C5AA9(::System::Int32 a1, ::Il2CppArray<::Struct_2_F9A103F8A0EC492F>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Struct_2_F9A103F8A0EC492F>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F261FE286F0A38D4_METHOD_1_C591D9CA103C5AA9_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_C04C10246EBC8F79(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F261FE286F0A38D4_METHOD_1_C04C10246EBC8F79_OFFSET))(this, a1);
	}
};
