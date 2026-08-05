#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EA9E20FC4353C624.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A40A691919A69159_METHOD_1_2391B162EA96430C_OFFSET UNITYSDK_OFFSET(0x1E399CE0)
#define CLASS_1_A40A691919A69159_METHOD_1_2D62E0468E2F26E5_OFFSET UNITYSDK_OFFSET(0x1E399980)
#define CLASS_1_A40A691919A69159__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3998E0)

inline static constexpr unsigned int Class_1_A40A691919A69159_TypeDefinitionIndex = 34519;

class Class_1_A40A691919A69159 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::System::Action_2<::Enum_3_EA9E20FC4353C624, ::System::Object*>*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::System::Action_2<::Enum_3_EA9E20FC4353C624, ::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A40A691919A69159_TypeDefinitionIndex)->GetStaticField(0x28E20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A40A691919A69159__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_2D62E0468E2F26E5(::System::Int64 a1, ::Enum_3_EA9E20FC4353C624 a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::System::Int64, ::Enum_3_EA9E20FC4353C624, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A40A691919A69159_METHOD_1_2D62E0468E2F26E5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2391B162EA96430C(::System::Int64 a1, ::System::Action_2<::Enum_3_EA9E20FC4353C624, ::System::Object*>* a2)
	{
		return ((::System::Void(*)(::System::Int64, ::System::Action_2<::Enum_3_EA9E20FC4353C624, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_A40A691919A69159_METHOD_1_2391B162EA96430C_OFFSET))(a1, a2);
	}
};
