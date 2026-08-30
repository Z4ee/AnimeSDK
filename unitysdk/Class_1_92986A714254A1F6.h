#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class FieldInfo; }

#define CLASS_1_92986A714254A1F6_METHOD_1_338FFF9502375EF1_OFFSET UNITYSDK_OFFSET(0x17052330)
#define CLASS_1_92986A714254A1F6_METHOD_1_3EDC0E159498A2FC_OFFSET UNITYSDK_OFFSET(0x17051A60)
#define CLASS_1_92986A714254A1F6_METHOD_1_F1AB70C4405A3CB7_OFFSET UNITYSDK_OFFSET(0x17051970)

inline static constexpr unsigned int Class_1_92986A714254A1F6_TypeDefinitionIndex = 49576;

class Class_1_92986A714254A1F6 : public ::System::Object
{
public:
	static ::System::Void Method_1_F1AB70C4405A3CB7(::System::Reflection::FieldInfo* a1, ::System::Object* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_92986A714254A1F6_METHOD_1_F1AB70C4405A3CB7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3EDC0E159498A2FC(::System::Object* a1, ::System::Object* a2, ::System::Type* a3, ::System::Int32 a4, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Type*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_92986A714254A1F6_METHOD_1_3EDC0E159498A2FC_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_338FFF9502375EF1(::System::Object* a1, ::System::Object* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_92986A714254A1F6_METHOD_1_338FFF9502375EF1_OFFSET))(a1, a2, a3);
	}
};
