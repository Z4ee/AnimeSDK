#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2B8244AF3A3A9C13_Struct_2_A11E7C4595281F1B.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
#include "unitysdk/System/Object.h"

class Class_3_709BBC1863417E95;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2B8244AF3A3A9C13_CLASS_1_48B256799DB483B1_CLEAR_OFFSET UNITYSDK_OFFSET(0x96A4720)
#define CLASS_2_2B8244AF3A3A9C13_CLASS_1_48B256799DB483B1_METHOD_1_A3E3D9BC28345F77_OFFSET UNITYSDK_OFFSET(0x96A4090)
#define CLASS_2_2B8244AF3A3A9C13_CLASS_1_48B256799DB483B1__CTOR_OFFSET UNITYSDK_OFFSET(0x96A4790)

inline static constexpr unsigned int Class_2_2B8244AF3A3A9C13_Class_1_48B256799DB483B1_TypeDefinitionIndex = 49511;

class Class_2_2B8244AF3A3A9C13_Class_1_48B256799DB483B1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_2B8244AF3A3A9C13_Struct_2_A11E7C4595281F1B>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B8244AF3A3A9C13_CLASS_1_48B256799DB483B1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B8244AF3A3A9C13_CLASS_1_48B256799DB483B1_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_A3E3D9BC28345F77(::Class_3_709BBC1863417E95* a1, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_709BBC1863417E95*, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*))((::PBYTE)hIl2Cpp + CLASS_2_2B8244AF3A3A9C13_CLASS_1_48B256799DB483B1_METHOD_1_A3E3D9BC28345F77_OFFSET))(this, a1, a2);
	}
};
