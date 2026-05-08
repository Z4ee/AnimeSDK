#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DynamicBoneConfigMap;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D91B74B210E9EE24_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x18ACE540)
#define CLASS_1_D91B74B210E9EE24_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x18ACE240)
#define CLASS_1_D91B74B210E9EE24_METHOD_1_7DE8A9006EFAF2D0_OFFSET UNITYSDK_OFFSET(0x18ACE6A0)
#define CLASS_1_D91B74B210E9EE24_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x18ACE450)

inline static constexpr unsigned int Class_1_D91B74B210E9EE24_TypeDefinitionIndex = 50061;

class Class_1_D91B74B210E9EE24 : public ::System::Object
{
public:
	static ::DynamicBoneConfigMap** StaticGet_Field_1_0()
	{
		return (::DynamicBoneConfigMap**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D91B74B210E9EE24_TypeDefinitionIndex)->GetStaticField(0x2FDC0);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D91B74B210E9EE24_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D91B74B210E9EE24_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D91B74B210E9EE24_METHOD_1_0B1EB5C9B94BAB66_OFFSET))();
	}

	static ::DynamicBoneConfigMap* Method_1_7DE8A9006EFAF2D0()
	{
		return ((::DynamicBoneConfigMap*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D91B74B210E9EE24_METHOD_1_7DE8A9006EFAF2D0_OFFSET))();
	}
};
