#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_900;
class Class_0_16E4307DCC419505_901;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_09F1E5C0FD9FCAB7_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16A9BFE0)
#define CLASS_1_09F1E5C0FD9FCAB7_METHOD_1_1F5C9C60D1DE580B_OFFSET UNITYSDK_OFFSET(0x16A9C380)
#define CLASS_1_09F1E5C0FD9FCAB7_METHOD_1_38C4144493A5FA2A_OFFSET UNITYSDK_OFFSET(0x16A9BE20)
#define CLASS_1_09F1E5C0FD9FCAB7_METHOD_1_3E0C0431E8452973_OFFSET UNITYSDK_OFFSET(0x16A9BEC0)
#define CLASS_1_09F1E5C0FD9FCAB7_METHOD_1_575312C7CA2D3DFB_OFFSET UNITYSDK_OFFSET(0x16A9BC60)
#define CLASS_1_09F1E5C0FD9FCAB7_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x16A9BF50)
#define CLASS_1_09F1E5C0FD9FCAB7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16A9C1B0)
#define CLASS_1_09F1E5C0FD9FCAB7__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9C520)

inline static constexpr unsigned int Class_1_09F1E5C0FD9FCAB7_TypeDefinitionIndex = 64191;

class Class_1_09F1E5C0FD9FCAB7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F1E5C0FD9FCAB7__CTOR_OFFSET))(this);
	}

	::System::Double Method_1_575312C7CA2D3DFB(::System::String* a1)
	{
		return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_09F1E5C0FD9FCAB7_METHOD_1_575312C7CA2D3DFB_OFFSET))(this, a1);
	}

	::System::Void Method_1_38C4144493A5FA2A(::System::String* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_09F1E5C0FD9FCAB7_METHOD_1_38C4144493A5FA2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E0C0431E8452973(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_09F1E5C0FD9FCAB7_METHOD_1_3E0C0431E8452973_OFFSET))(this, a1);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F1E5C0FD9FCAB7_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Double>>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Double>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F1E5C0FD9FCAB7_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F1E5C0FD9FCAB7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_901* Method_1_1F5C9C60D1DE580B()
	{
		return ((::Class_0_16E4307DCC419505_901*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F1E5C0FD9FCAB7_METHOD_1_1F5C9C60D1DE580B_OFFSET))(this);
	}
};
