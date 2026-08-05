#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class PerformConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_35AE87745AB78B30_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x142F59E0)
#define CLASS_1_35AE87745AB78B30_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x142F5810)
#define CLASS_1_35AE87745AB78B30_METHOD_1_B214CAFE2A9011AF_OFFSET UNITYSDK_OFFSET(0x142F5AD0)

inline static constexpr unsigned int Class_1_35AE87745AB78B30_TypeDefinitionIndex = 45121;

class Class_1_35AE87745AB78B30 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformConfig*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_35AE87745AB78B30_TypeDefinitionIndex)->GetStaticField(0x4B310);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_35AE87745AB78B30_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35AE87745AB78B30_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::PerformConfig* Method_1_B214CAFE2A9011AF(::System::Int32 a1)
	{
		return ((::MoleMole::PerformConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_35AE87745AB78B30_METHOD_1_B214CAFE2A9011AF_OFFSET))(a1);
	}
};
